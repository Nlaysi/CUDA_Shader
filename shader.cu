#include <math.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <malloc.h>

struct Vector
{
	double x;
	double y;
	double z;
};

struct Object
{
	unsigned char Type;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char atr1;
	unsigned char atr2;
	unsigned char atr3;
	unsigned char atr4;
	struct Vector position;
	struct Vector size;
	double r;
};

union Data {
	struct Object obj;
	unsigned char bytes[64];
};

struct DistanceDate {
	double distanceValue;
	unsigned char r, g, b;
};

__shared__ double lightIntensity, lightSize;
__shared__ Data* objects;
__shared__ int n;

extern "C"
__device__ Vector mul(Vector a, double value) {
	Vector v = { a.x * value, a.y * value, a.z * value };
	return v;
}

extern "C"
__device__ Vector sum(Vector a, Vector b) {
	Vector v = { a.x + b.x, a.y + b.y, a.z + b.z };
	return v;
}

extern "C"
__device__ Vector sub(Vector a, Vector b) {
	Vector v = { a.x - b.x, a.y - b.y, a.z - b.z };
	return v;
}

extern "C"
__device__ double dot(Vector a, Vector b) {
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

extern "C"
__device__ double distance(Vector a, Vector b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z));
}

extern "C"
__device__ Vector normalize(Vector a) {
	Vector n = { 0, 0, 0 };
	double l = distance(a, n);
	Vector v = { a.x / l, a.y / l, a.z / l };
	return v;
}

extern "C"
__device__ double smin(double a, double b, double k)
{
	double m;
	if ((0.5 + 0.5 * (b - a) / k) > 1) 
		m = 1;
	else
		m = (0.5 + 0.5 * (b - a) / k);
	double h;
	if (m > 0)
		h = (0.5 + 0.5 * (b - a) / k);
	else
		h = 0;
	return a * h + b * (1 - h) - k * h * (1.0 - h);
}

extern "C"
__device__ double cylinder(Vector p, Object obj)
{
	Vector pa = sub(p, obj.position);
	Vector ba = sub(obj.size, obj.position);
	double baba = dot(ba, ba);
	double paba = dot(pa, ba);


	float x = distance(sub(mul(pa, baba), mul(ba, paba)), { 1,1,1 }) - obj.r * baba;

	float y = abs(paba - baba * 0.5) - baba * 0.5;
	float x2 = x * x;
	float y2 = y * y * baba;
	float d = (max(x, y) < 0.0) ? -min(x2, y2) : (((x > 0.0) ? x2 : 0.0) + ((y > 0.0) ? y2 : 0.0));

	float t = 0;
	if (d > 0)
	{
		t = 1;
	}
	if (d < 0)
	{
		t = -1;
	}

	return t * sqrt(abs(d)) / baba;
}

extern "C"
__device__ double cube(Object obj, Vector p) {

	Vector d = sub({ abs(p.x - obj.position.x), abs(p.y - obj.position.y), abs(p.z - obj.position.z) }, { obj.size.x, obj.size.y, obj.size.z});

	double insideDistance = min(max(d.x, max(d.y, d.z)), (double)0);

	if (d.x < 0.0)
		d.x = 0.0;
	if (d.y < 0.0)
		d.y = 0.0;
	if (d.z < 0.0)
		d.z = 0.0;

	double outsideDistance = sqrt(d.x * d.x + d.y * d.y + d.z * d.z);

	return insideDistance + outsideDistance;
}


__device__ double TriPrism(Vector p, Object obj)
{
	Vector q = { abs(p.x), abs(p.y), abs(p.z) };
	return max(q.z - obj.position.y, max(q.x * 0.866025 + p.y * 0.5, -p.y) - obj.position.x * 0.5);
}

extern "C"
__device__ double distanceByType(Object obj, Vector p) {
	switch (obj.Type) {
		case 1:
			return distance(p, obj.position) - obj.r;
			break;
		case 2:
			return distance(p, obj.position) - obj.r;
			break;
		case 3:
			return -(distance(p, obj.position) - obj.r);
			break;
		case 4:
			return cube(obj, p);
			break;
		case 5:
			return cube(obj, p);
			break;
		case 6:
			return -cube(obj, p);
			break;
		case 7:
			return cylinder(p, obj);
			break;
		case 8:
			return cylinder(p, obj);
			break;
		case 9:
			return -cylinder(p, obj);
			break;
		case 10:
			return TriPrism(p, obj);
			break;
		case 11:
			return TriPrism(p, obj);
			break;
		case 12:
			return -TriPrism(p, obj);
			break;
		default:
		break;
	}
}

extern "C"
__device__ DistanceDate getDist(Vector p) {
	union Data* data;
	data = objects;
	DistanceDate value;
	value.distanceValue = distanceByType(data->obj, p);
	value.r = data->obj.R;
	value.g = data->obj.G;
	value.b = data->obj.B;

	double dist = value.distanceValue;

	for (int i = 1; i < n; i++)
	{
		data = (Data*)((uintptr_t)data + sizeof(Data));
		dist = distanceByType(data->obj, p);
		if (value.distanceValue > dist && (data->obj.Type % 3 == 1 || data->obj.Type == 0)) {
			value.distanceValue = dist;
			value.r = data->obj.R;
			value.g = data->obj.G;
			value.b = data->obj.B;
		}
		if (value.distanceValue <= dist && data->obj.Type % 3 != 1) {
			value.distanceValue = dist;
			value.r = data->obj.R;
			value.g = data->obj.G;
			value.b = data->obj.B;
		}
	}
	
	return value;
}

extern "C"
__device__ Vector getNormal(Vector p)
{
	double d = getDist(p).distanceValue;
	double p1 = getDist(sub(p, { 0.001, 0, 0 })).distanceValue;
	double p2 = getDist(sub(p, { 0, 0.001, 0 })).distanceValue;
	double p3 = getDist(sub(p, { 0, 0, 0.001 })).distanceValue;
	Vector tri = { p1, p2, p3 };
	Vector di = { d, d, d };
	Vector n = sub(di, tri);
	return normalize(n);
}

extern "C"
__device__ double light(Vector p) {
	Vector lightPos = { -5, 5, -10 };
	Vector lightDir = normalize(sub(lightPos, p));
	Vector normal = getNormal(p);

	double lI = lightIntensity;
	double lS = lightSize;

	double dif = dot(normal, lightDir) * (1 - lS) * lI + lS * lI;
	return dif;
}

extern "C"
__device__ DistanceDate rayMarching(Vector ro, Vector rd) {
	Vector p = { ro.x, ro.y, ro.z };
	for (int i = 0; i < 300; i++) {
		DistanceDate d = getDist(p);
		if (d.distanceValue > 100)
			break;
		p = sum(p, mul(rd, d.distanceValue));
		if (d.distanceValue < 0.001) {
			return { light(p), d.r, d.g, d.b };
		}
	}
	return { 0, 0, 0, 0};
}

extern "C"
__global__ void draw(unsigned char* data, Data* input, int on, int widht, int height, double camX, double camY, double camZ, float vA, float hA, float lI, float lS, int pn, int pc) {
	int x = blockIdx.x * blockDim.x + threadIdx.x;
	int y = (height/pc) * pn + blockIdx.y * blockDim.y + threadIdx.y;
	if (x >= widht || y >= height)
		return;

	objects = input;
	n = on;

	double qx = ((double)x / widht) * 2 - 1;
	double qy = ((double)y / height) * 2 - 1;

	lightIntensity = lI;
	lightSize = lS;
	
	qx = qx * ((double)widht / (double)height);
	Vector rd = { 1, qx, qy };
	rd = normalize(rd);

	double s = sin(vA);
	double c = cos(vA);
	rd = { c * rd.x + (-s) * rd.z, rd.y, s * rd.x + c * rd.z };
	s = sin(hA);
	c = cos(hA);
	rd = { c * rd.x + (-s) * rd.y, s * rd.x + c * rd.y, rd.z };

	DistanceDate col = rayMarching({camX, camY, camZ}, rd);
	if (col.distanceValue != 0) {
		data[widht * 3 * y + 3 * x    ] = (unsigned char)((double)col.r * col.distanceValue);
		data[widht * 3 * y + 3 * x + 1] = (unsigned char)((double)col.g * col.distanceValue);
		data[widht * 3 * y + 3 * x + 2] = (unsigned char)((double)col.b * col.distanceValue);
	}
	else
	{
		data[widht * 3 * y + 3 * x] = (unsigned char)((double)117 * lI);
		data[widht * 3 * y + 3 * x + 1] = (unsigned char)((double)187 * lI);
		data[widht * 3 * y + 3 * x + 2] = (unsigned char)((double)253 * lI);
	}
    
}