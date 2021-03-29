#pragma section("__nv_managed_data__")
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
#line 1 "C:/Users/Иван/source/repos/Shaders/shader.cu"
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false

#line 1
#line 67 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_runtime.h"
#pragma warning(push)
#pragma warning(disable: 4820)
#line 708 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 2361 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\sal.h"
extern "C" {
#line 2967 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\sal.h"
}
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\concurrencysal.h"
extern "C" {
#line 391 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\concurrencysal.h"
}
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 47 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vadefs.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 51
extern "C" {
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vadefs.h"
typedef unsigned __int64 uintptr_t; 
#line 72 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vadefs.h"
typedef char *va_list; 
#line 145 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vadefs.h"
void __cdecl __va_start(va_list *, ...); 
#line 157 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vadefs.h"
}
#line 161 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vadefs.h"
extern "C++" {
#line 163
template< class _Ty> 
#line 164
struct __vcrt_va_list_is_reference { 
#line 166
enum: bool { __the_value}; 
#line 167
}; 
#line 169
template< class _Ty> 
#line 170
struct __vcrt_va_list_is_reference< _Ty &>  { 
#line 172
enum: bool { __the_value = '\001'}; 
#line 173
}; 
#line 175
template< class _Ty> 
#line 176
struct __vcrt_va_list_is_reference< _Ty &&>  { 
#line 178
enum: bool { __the_value = '\001'}; 
#line 179
}; 
#line 181
template< class _Ty> 
#line 182
struct __vcrt_assert_va_start_is_not_reference { 
#line 184
static_assert((!__vcrt_va_list_is_reference< _Ty> ::__the_value), "va_start argument must not have reference type and must not be parenthesized");
#line 186
}; 
#line 187
}
#line 197 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vadefs.h"
#pragma warning(pop)
#pragma pack ( pop )
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 96 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 193 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime.h"
typedef unsigned __int64 size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#line 194
typedef __int64 ptrdiff_t; 
#line 195
typedef __int64 intptr_t; 
#line 203 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime.h"
typedef bool __vcrt_bool; 
#line 246 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime.h"
extern "C++" {
#line 248
template< class _CountofType, size_t _SizeOfArray> char (*__countof_helper(__unaligned _CountofType (& _Array)[_SizeOfArray]))[_SizeOfArray]; 
#line 252
}
#line 338 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime.h"
void __cdecl __security_init_cookie(); 
#line 344
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
#line 345
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 
#line 349 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime.h"
extern uintptr_t __security_cookie; 
#line 357 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime.h"
}__pragma( pack ( pop )) 
#line 359
#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 136 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
extern "C++" {
#line 138
template< bool _Enable, class _Ty> struct _CrtEnableIf; 
#line 141
template< class _Ty> 
#line 142
struct _CrtEnableIf< true, _Ty>  { 
#line 144
typedef _Ty _Type; 
#line 145
}; 
#line 146
}
#line 150 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
typedef bool __crt_bool; 
#line 269 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
__declspec(dllimport) void __cdecl _invalid_parameter(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); 
#line 278 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
__declspec(dllimport) void __cdecl _invalid_parameter_noinfo(); 
#line 279
__declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(); 
#line 281
__declspec(noreturn) 
#line 282
__declspec(dllimport) void __cdecl _invoke_watson(const __wchar_t * _Expression, const __wchar_t * _FunctionName, const __wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 511 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
typedef int errno_t; 
#line 512
typedef unsigned short wint_t; 
#line 513
typedef unsigned short wctype_t; 
#line 514
typedef long __time32_t; 
#line 515
typedef __int64 __time64_t; 
#line 522
typedef 
#line 517
struct __crt_locale_data_public { 
#line 519
const unsigned short *_locale_pctype; 
#line 520
int _locale_mb_cur_max; 
#line 521
unsigned _locale_lc_codepage; 
#line 522
} __crt_locale_data_public; 
#line 528
typedef 
#line 524
struct __crt_locale_pointers { 
#line 526
struct __crt_locale_data *locinfo; 
#line 527
struct __crt_multibyte_data *mbcinfo; 
#line 528
} __crt_locale_pointers; 
#line 530
typedef __crt_locale_pointers *_locale_t; 
#line 536
typedef 
#line 532
struct _Mbstatet { 
#line 534
unsigned long _Wchar; 
#line 535
unsigned short _Byte, _State; 
#line 536
} _Mbstatet; 
#line 538
typedef _Mbstatet mbstate_t; 
#line 552 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
typedef __time64_t time_t; 
#line 562 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
typedef size_t rsize_t; 
#line 2011 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt.h"
}__pragma( pack ( pop )) 
#line 66 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_types.h"
#if 0
#line 66
enum cudaRoundMode { 
#line 68
cudaRoundNearest, 
#line 69
cudaRoundZero, 
#line 70
cudaRoundPosInf, 
#line 71
cudaRoundMinInf
#line 72
}; 
#endif
#line 98 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 98
struct char1 { 
#line 100
signed char x; 
#line 101
}; 
#endif
#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 103
struct uchar1 { 
#line 105
unsigned char x; 
#line 106
}; 
#endif
#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 109
struct __declspec(align(2)) char2 { 
#line 111
signed char x, y; 
#line 112
}; 
#endif
#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 114
struct __declspec(align(2)) uchar2 { 
#line 116
unsigned char x, y; 
#line 117
}; 
#endif
#line 119 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 119
struct char3 { 
#line 121
signed char x, y, z; 
#line 122
}; 
#endif
#line 124 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 124
struct uchar3 { 
#line 126
unsigned char x, y, z; 
#line 127
}; 
#endif
#line 129 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 129
struct __declspec(align(4)) char4 { 
#line 131
signed char x, y, z, w; 
#line 132
}; 
#endif
#line 134 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 134
struct __declspec(align(4)) uchar4 { 
#line 136
unsigned char x, y, z, w; 
#line 137
}; 
#endif
#line 139 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 139
struct short1 { 
#line 141
short x; 
#line 142
}; 
#endif
#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 144
struct ushort1 { 
#line 146
unsigned short x; 
#line 147
}; 
#endif
#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 149
struct __declspec(align(4)) short2 { 
#line 151
short x, y; 
#line 152
}; 
#endif
#line 154 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 154
struct __declspec(align(4)) ushort2 { 
#line 156
unsigned short x, y; 
#line 157
}; 
#endif
#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 159
struct short3 { 
#line 161
short x, y, z; 
#line 162
}; 
#endif
#line 164 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 164
struct ushort3 { 
#line 166
unsigned short x, y, z; 
#line 167
}; 
#endif
#line 169 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 169
struct __declspec(align(8)) short4 { short x; short y; short z; short w; }; 
#endif
#line 170 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 170
struct __declspec(align(8)) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
#line 172 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 172
struct int1 { 
#line 174
int x; 
#line 175
}; 
#endif
#line 177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 177
struct uint1 { 
#line 179
unsigned x; 
#line 180
}; 
#endif
#line 182 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 182
struct __declspec(align(8)) int2 { int x; int y; }; 
#endif
#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 183
struct __declspec(align(8)) uint2 { unsigned x; unsigned y; }; 
#endif
#line 185 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 185
struct int3 { 
#line 187
int x, y, z; 
#line 188
}; 
#endif
#line 190 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 190
struct uint3 { 
#line 192
unsigned x, y, z; 
#line 193
}; 
#endif
#line 195 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 195
struct __declspec(align(16)) int4 { 
#line 197
int x, y, z, w; 
#line 198
}; 
#endif
#line 200 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 200
struct __declspec(align(16)) uint4 { 
#line 202
unsigned x, y, z, w; 
#line 203
}; 
#endif
#line 205 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 205
struct long1 { 
#line 207
long x; 
#line 208
}; 
#endif
#line 210 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 210
struct ulong1 { 
#line 212
unsigned long x; 
#line 213
}; 
#endif
#line 216 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 216
struct __declspec(align(8)) long2 { long x; long y; }; 
#endif
#line 217 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 217
struct __declspec(align(8)) ulong2 { unsigned long x; unsigned long y; }; 
#endif
#line 232 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 232
struct long3 { 
#line 234
long x, y, z; 
#line 235
}; 
#endif
#line 237 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 237
struct ulong3 { 
#line 239
unsigned long x, y, z; 
#line 240
}; 
#endif
#line 242 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 242
struct __declspec(align(16)) long4 { 
#line 244
long x, y, z, w; 
#line 245
}; 
#endif
#line 247 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 247
struct __declspec(align(16)) ulong4 { 
#line 249
unsigned long x, y, z, w; 
#line 250
}; 
#endif
#line 252 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 252
struct float1 { 
#line 254
float x; 
#line 255
}; 
#endif
#line 274 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 274
struct __declspec(align(8)) float2 { float x; float y; }; 
#endif
#line 279 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 279
struct float3 { 
#line 281
float x, y, z; 
#line 282
}; 
#endif
#line 284 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 284
struct __declspec(align(16)) float4 { 
#line 286
float x, y, z, w; 
#line 287
}; 
#endif
#line 289 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 289
struct longlong1 { 
#line 291
__int64 x; 
#line 292
}; 
#endif
#line 294 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 294
struct ulonglong1 { 
#line 296
unsigned __int64 x; 
#line 297
}; 
#endif
#line 299 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 299
struct __declspec(align(16)) longlong2 { 
#line 301
__int64 x, y; 
#line 302
}; 
#endif
#line 304 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 304
struct __declspec(align(16)) ulonglong2 { 
#line 306
unsigned __int64 x, y; 
#line 307
}; 
#endif
#line 309 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 309
struct longlong3 { 
#line 311
__int64 x, y, z; 
#line 312
}; 
#endif
#line 314 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 314
struct ulonglong3 { 
#line 316
unsigned __int64 x, y, z; 
#line 317
}; 
#endif
#line 319 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 319
struct __declspec(align(16)) longlong4 { 
#line 321
__int64 x, y, z, w; 
#line 322
}; 
#endif
#line 324 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 324
struct __declspec(align(16)) ulonglong4 { 
#line 326
unsigned __int64 x, y, z, w; 
#line 327
}; 
#endif
#line 329 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 329
struct double1 { 
#line 331
double x; 
#line 332
}; 
#endif
#line 334 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 334
struct __declspec(align(16)) double2 { 
#line 336
double x, y; 
#line 337
}; 
#endif
#line 339 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 339
struct double3 { 
#line 341
double x, y, z; 
#line 342
}; 
#endif
#line 344 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 344
struct __declspec(align(16)) double4 { 
#line 346
double x, y, z, w; 
#line 347
}; 
#endif
#line 361 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef char1 
#line 361
char1; 
#endif
#line 362 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef uchar1 
#line 362
uchar1; 
#endif
#line 363 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef char2 
#line 363
char2; 
#endif
#line 364 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef uchar2 
#line 364
uchar2; 
#endif
#line 365 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef char3 
#line 365
char3; 
#endif
#line 366 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef uchar3 
#line 366
uchar3; 
#endif
#line 367 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef char4 
#line 367
char4; 
#endif
#line 368 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef uchar4 
#line 368
uchar4; 
#endif
#line 369 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef short1 
#line 369
short1; 
#endif
#line 370 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ushort1 
#line 370
ushort1; 
#endif
#line 371 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef short2 
#line 371
short2; 
#endif
#line 372 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ushort2 
#line 372
ushort2; 
#endif
#line 373 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef short3 
#line 373
short3; 
#endif
#line 374 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ushort3 
#line 374
ushort3; 
#endif
#line 375 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef short4 
#line 375
short4; 
#endif
#line 376 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ushort4 
#line 376
ushort4; 
#endif
#line 377 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef int1 
#line 377
int1; 
#endif
#line 378 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef uint1 
#line 378
uint1; 
#endif
#line 379 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef int2 
#line 379
int2; 
#endif
#line 380 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef uint2 
#line 380
uint2; 
#endif
#line 381 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef int3 
#line 381
int3; 
#endif
#line 382 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef uint3 
#line 382
uint3; 
#endif
#line 383 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef int4 
#line 383
int4; 
#endif
#line 384 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef uint4 
#line 384
uint4; 
#endif
#line 385 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef long1 
#line 385
long1; 
#endif
#line 386 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ulong1 
#line 386
ulong1; 
#endif
#line 387 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef long2 
#line 387
long2; 
#endif
#line 388 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ulong2 
#line 388
ulong2; 
#endif
#line 389 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef long3 
#line 389
long3; 
#endif
#line 390 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ulong3 
#line 390
ulong3; 
#endif
#line 391 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef long4 
#line 391
long4; 
#endif
#line 392 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ulong4 
#line 392
ulong4; 
#endif
#line 393 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef float1 
#line 393
float1; 
#endif
#line 394 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef float2 
#line 394
float2; 
#endif
#line 395 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef float3 
#line 395
float3; 
#endif
#line 396 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef float4 
#line 396
float4; 
#endif
#line 397 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef longlong1 
#line 397
longlong1; 
#endif
#line 398 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ulonglong1 
#line 398
ulonglong1; 
#endif
#line 399 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef longlong2 
#line 399
longlong2; 
#endif
#line 400 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ulonglong2 
#line 400
ulonglong2; 
#endif
#line 401 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef longlong3 
#line 401
longlong3; 
#endif
#line 402 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ulonglong3 
#line 402
ulonglong3; 
#endif
#line 403 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef longlong4 
#line 403
longlong4; 
#endif
#line 404 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef ulonglong4 
#line 404
ulonglong4; 
#endif
#line 405 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef double1 
#line 405
double1; 
#endif
#line 406 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef double2 
#line 406
double2; 
#endif
#line 407 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef double3 
#line 407
double3; 
#endif
#line 408 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef double4 
#line 408
double4; 
#endif
#line 416 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
#line 416
struct dim3 { 
#line 418
unsigned x, y, z; 
#line 430 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
}; 
#endif
#line 432 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_types.h"
#if 0
typedef dim3 
#line 432
dim3; 
#endif
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\limits.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 16
__pragma( pack ( push, 8 )) extern "C" {
#line 75 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\limits.h"
}__pragma( pack ( pop )) 
#line 77
#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stddef.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
namespace std { 
#line 21
typedef decltype((nullptr)) nullptr_t; 
#line 22
}
#line 24
using std::nullptr_t;
#line 31 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stddef.h"
__declspec(dllimport) int *__cdecl _errno(); 
#line 34
__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
#line 35
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 51 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stddef.h"
__declspec(dllimport) extern unsigned long __cdecl __threadid(); 
#line 53
__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(); 
#line 57
}__pragma( pack ( pop )) 
#line 189 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 189
enum cudaError { 
#line 196
cudaSuccess, 
#line 202
cudaErrorInvalidValue, 
#line 208
cudaErrorMemoryAllocation, 
#line 214
cudaErrorInitializationError, 
#line 221
cudaErrorCudartUnloading, 
#line 228
cudaErrorProfilerDisabled, 
#line 236
cudaErrorProfilerNotInitialized, 
#line 243
cudaErrorProfilerAlreadyStarted, 
#line 250
cudaErrorProfilerAlreadyStopped, 
#line 259
cudaErrorInvalidConfiguration, 
#line 265
cudaErrorInvalidPitchValue = 12, 
#line 271
cudaErrorInvalidSymbol, 
#line 279
cudaErrorInvalidHostPointer = 16, 
#line 287
cudaErrorInvalidDevicePointer, 
#line 293
cudaErrorInvalidTexture, 
#line 299
cudaErrorInvalidTextureBinding, 
#line 306
cudaErrorInvalidChannelDescriptor, 
#line 312
cudaErrorInvalidMemcpyDirection, 
#line 322
cudaErrorAddressOfConstant, 
#line 331
cudaErrorTextureFetchFailed, 
#line 340
cudaErrorTextureNotBound, 
#line 349
cudaErrorSynchronizationError, 
#line 355
cudaErrorInvalidFilterSetting, 
#line 361
cudaErrorInvalidNormSetting, 
#line 369
cudaErrorMixedDeviceExecution, 
#line 377
cudaErrorNotYetImplemented = 31, 
#line 386
cudaErrorMemoryValueTooLarge, 
#line 393
cudaErrorInsufficientDriver = 35, 
#line 399
cudaErrorInvalidSurface = 37, 
#line 405
cudaErrorDuplicateVariableName = 43, 
#line 411
cudaErrorDuplicateTextureName, 
#line 417
cudaErrorDuplicateSurfaceName, 
#line 427
cudaErrorDevicesUnavailable, 
#line 440
cudaErrorIncompatibleDriverContext = 49, 
#line 446
cudaErrorMissingConfiguration = 52, 
#line 455
cudaErrorPriorLaunchFailure, 
#line 462
cudaErrorLaunchMaxDepthExceeded = 65, 
#line 470
cudaErrorLaunchFileScopedTex, 
#line 478
cudaErrorLaunchFileScopedSurf, 
#line 493
cudaErrorSyncDepthExceeded, 
#line 505
cudaErrorLaunchPendingCountExceeded, 
#line 511
cudaErrorInvalidDeviceFunction = 98, 
#line 517
cudaErrorNoDevice = 100, 
#line 523
cudaErrorInvalidDevice, 
#line 528
cudaErrorStartupFailure = 127, 
#line 533
cudaErrorInvalidKernelImage = 200, 
#line 543
cudaErrorDeviceUninitialized, 
#line 548
cudaErrorMapBufferObjectFailed = 205, 
#line 553
cudaErrorUnmapBufferObjectFailed, 
#line 559
cudaErrorArrayIsMapped, 
#line 564
cudaErrorAlreadyMapped, 
#line 572
cudaErrorNoKernelImageForDevice, 
#line 577
cudaErrorAlreadyAcquired, 
#line 582
cudaErrorNotMapped, 
#line 588
cudaErrorNotMappedAsArray, 
#line 594
cudaErrorNotMappedAsPointer, 
#line 600
cudaErrorECCUncorrectable, 
#line 606
cudaErrorUnsupportedLimit, 
#line 612
cudaErrorDeviceAlreadyInUse, 
#line 618
cudaErrorPeerAccessUnsupported, 
#line 624
cudaErrorInvalidPtx, 
#line 629
cudaErrorInvalidGraphicsContext, 
#line 635
cudaErrorNvlinkUncorrectable, 
#line 642
cudaErrorJitCompilerNotFound, 
#line 647
cudaErrorInvalidSource = 300, 
#line 652
cudaErrorFileNotFound, 
#line 657
cudaErrorSharedObjectSymbolNotFound, 
#line 662
cudaErrorSharedObjectInitFailed, 
#line 667
cudaErrorOperatingSystem, 
#line 674
cudaErrorInvalidResourceHandle = 400, 
#line 680
cudaErrorIllegalState, 
#line 686
cudaErrorSymbolNotFound = 500, 
#line 694
cudaErrorNotReady = 600, 
#line 702
cudaErrorIllegalAddress = 700, 
#line 711
cudaErrorLaunchOutOfResources, 
#line 722
cudaErrorLaunchTimeout, 
#line 728
cudaErrorLaunchIncompatibleTexturing, 
#line 735
cudaErrorPeerAccessAlreadyEnabled, 
#line 742
cudaErrorPeerAccessNotEnabled, 
#line 755
cudaErrorSetOnActiveProcess = 708, 
#line 762
cudaErrorContextIsDestroyed, 
#line 769
cudaErrorAssert, 
#line 776
cudaErrorTooManyPeers, 
#line 782
cudaErrorHostMemoryAlreadyRegistered, 
#line 788
cudaErrorHostMemoryNotRegistered, 
#line 797
cudaErrorHardwareStackError, 
#line 805
cudaErrorIllegalInstruction, 
#line 814
cudaErrorMisalignedAddress, 
#line 825
cudaErrorInvalidAddressSpace, 
#line 833
cudaErrorInvalidPc, 
#line 844
cudaErrorLaunchFailure, 
#line 853
cudaErrorCooperativeLaunchTooLarge, 
#line 858
cudaErrorNotPermitted = 800, 
#line 864
cudaErrorNotSupported, 
#line 873
cudaErrorSystemNotReady, 
#line 880
cudaErrorSystemDriverMismatch, 
#line 889
cudaErrorCompatNotSupportedOnDevice, 
#line 894
cudaErrorStreamCaptureUnsupported = 900, 
#line 900
cudaErrorStreamCaptureInvalidated, 
#line 906
cudaErrorStreamCaptureMerge, 
#line 911
cudaErrorStreamCaptureUnmatched, 
#line 917
cudaErrorStreamCaptureUnjoined, 
#line 924
cudaErrorStreamCaptureIsolation, 
#line 930
cudaErrorStreamCaptureImplicit, 
#line 936
cudaErrorCapturedEvent, 
#line 943
cudaErrorStreamCaptureWrongThread, 
#line 948
cudaErrorTimeout, 
#line 954
cudaErrorGraphExecUpdateFailure, 
#line 959
cudaErrorUnknown = 999, 
#line 967
cudaErrorApiFailureBase = 10000
#line 968
}; 
#endif
#line 973 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 973
enum cudaChannelFormatKind { 
#line 975
cudaChannelFormatKindSigned, 
#line 976
cudaChannelFormatKindUnsigned, 
#line 977
cudaChannelFormatKindFloat, 
#line 978
cudaChannelFormatKindNone
#line 979
}; 
#endif
#line 984 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 984
struct cudaChannelFormatDesc { 
#line 986
int x; 
#line 987
int y; 
#line 988
int z; 
#line 989
int w; 
#line 990
cudaChannelFormatKind f; 
#line 991
}; 
#endif
#line 996 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
typedef struct cudaArray *cudaArray_t; 
#line 1001
typedef const cudaArray *cudaArray_const_t; 
#line 1003
struct cudaArray; 
#line 1008
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
#line 1013
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
#line 1015
struct cudaMipmappedArray; 
#line 1020
#if 0
#line 1020
enum cudaMemoryType { 
#line 1022
cudaMemoryTypeUnregistered, 
#line 1023
cudaMemoryTypeHost, 
#line 1024
cudaMemoryTypeDevice, 
#line 1025
cudaMemoryTypeManaged
#line 1026
}; 
#endif
#line 1031 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1031
enum cudaMemcpyKind { 
#line 1033
cudaMemcpyHostToHost, 
#line 1034
cudaMemcpyHostToDevice, 
#line 1035
cudaMemcpyDeviceToHost, 
#line 1036
cudaMemcpyDeviceToDevice, 
#line 1037
cudaMemcpyDefault
#line 1038
}; 
#endif
#line 1045 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1045
struct cudaPitchedPtr { 
#line 1047
void *ptr; 
#line 1048
size_t pitch; 
#line 1049
size_t xsize; 
#line 1050
size_t ysize; 
#line 1051
}; 
#endif
#line 1058 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1058
struct cudaExtent { 
#line 1060
size_t width; 
#line 1061
size_t height; 
#line 1062
size_t depth; 
#line 1063
}; 
#endif
#line 1070 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1070
struct cudaPos { 
#line 1072
size_t x; 
#line 1073
size_t y; 
#line 1074
size_t z; 
#line 1075
}; 
#endif
#line 1080 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1080
struct cudaMemcpy3DParms { 
#line 1082
cudaArray_t srcArray; 
#line 1083
cudaPos srcPos; 
#line 1084
cudaPitchedPtr srcPtr; 
#line 1086
cudaArray_t dstArray; 
#line 1087
cudaPos dstPos; 
#line 1088
cudaPitchedPtr dstPtr; 
#line 1090
cudaExtent extent; 
#line 1091
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1092
}; 
#endif
#line 1097 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1097
struct cudaMemcpy3DPeerParms { 
#line 1099
cudaArray_t srcArray; 
#line 1100
cudaPos srcPos; 
#line 1101
cudaPitchedPtr srcPtr; 
#line 1102
int srcDevice; 
#line 1104
cudaArray_t dstArray; 
#line 1105
cudaPos dstPos; 
#line 1106
cudaPitchedPtr dstPtr; 
#line 1107
int dstDevice; 
#line 1109
cudaExtent extent; 
#line 1110
}; 
#endif
#line 1115 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1115
struct cudaMemsetParams { 
#line 1116
void *dst; 
#line 1117
size_t pitch; 
#line 1118
unsigned value; 
#line 1119
unsigned elementSize; 
#line 1120
size_t width; 
#line 1121
size_t height; 
#line 1122
}; 
#endif
#line 1134 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
typedef void (__stdcall *cudaHostFn_t)(void * userData); 
#line 1139
#if 0
#line 1139
struct cudaHostNodeParams { 
#line 1140
cudaHostFn_t fn; 
#line 1141
void *userData; 
#line 1142
}; 
#endif
#line 1147 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1147
enum cudaStreamCaptureStatus { 
#line 1148
cudaStreamCaptureStatusNone, 
#line 1149
cudaStreamCaptureStatusActive, 
#line 1150
cudaStreamCaptureStatusInvalidated
#line 1152
}; 
#endif
#line 1158 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1158
enum cudaStreamCaptureMode { 
#line 1159
cudaStreamCaptureModeGlobal, 
#line 1160
cudaStreamCaptureModeThreadLocal, 
#line 1161
cudaStreamCaptureModeRelaxed
#line 1162
}; 
#endif
#line 1167 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
struct cudaGraphicsResource; 
#line 1172
#if 0
#line 1172
enum cudaGraphicsRegisterFlags { 
#line 1174
cudaGraphicsRegisterFlagsNone, 
#line 1175
cudaGraphicsRegisterFlagsReadOnly, 
#line 1176
cudaGraphicsRegisterFlagsWriteDiscard, 
#line 1177
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
#line 1178
cudaGraphicsRegisterFlagsTextureGather = 8
#line 1179
}; 
#endif
#line 1184 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1184
enum cudaGraphicsMapFlags { 
#line 1186
cudaGraphicsMapFlagsNone, 
#line 1187
cudaGraphicsMapFlagsReadOnly, 
#line 1188
cudaGraphicsMapFlagsWriteDiscard
#line 1189
}; 
#endif
#line 1194 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1194
enum cudaGraphicsCubeFace { 
#line 1196
cudaGraphicsCubeFacePositiveX, 
#line 1197
cudaGraphicsCubeFaceNegativeX, 
#line 1198
cudaGraphicsCubeFacePositiveY, 
#line 1199
cudaGraphicsCubeFaceNegativeY, 
#line 1200
cudaGraphicsCubeFacePositiveZ, 
#line 1201
cudaGraphicsCubeFaceNegativeZ
#line 1202
}; 
#endif
#line 1207 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1207
enum cudaResourceType { 
#line 1209
cudaResourceTypeArray, 
#line 1210
cudaResourceTypeMipmappedArray, 
#line 1211
cudaResourceTypeLinear, 
#line 1212
cudaResourceTypePitch2D
#line 1213
}; 
#endif
#line 1218 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1218
enum cudaResourceViewFormat { 
#line 1220
cudaResViewFormatNone, 
#line 1221
cudaResViewFormatUnsignedChar1, 
#line 1222
cudaResViewFormatUnsignedChar2, 
#line 1223
cudaResViewFormatUnsignedChar4, 
#line 1224
cudaResViewFormatSignedChar1, 
#line 1225
cudaResViewFormatSignedChar2, 
#line 1226
cudaResViewFormatSignedChar4, 
#line 1227
cudaResViewFormatUnsignedShort1, 
#line 1228
cudaResViewFormatUnsignedShort2, 
#line 1229
cudaResViewFormatUnsignedShort4, 
#line 1230
cudaResViewFormatSignedShort1, 
#line 1231
cudaResViewFormatSignedShort2, 
#line 1232
cudaResViewFormatSignedShort4, 
#line 1233
cudaResViewFormatUnsignedInt1, 
#line 1234
cudaResViewFormatUnsignedInt2, 
#line 1235
cudaResViewFormatUnsignedInt4, 
#line 1236
cudaResViewFormatSignedInt1, 
#line 1237
cudaResViewFormatSignedInt2, 
#line 1238
cudaResViewFormatSignedInt4, 
#line 1239
cudaResViewFormatHalf1, 
#line 1240
cudaResViewFormatHalf2, 
#line 1241
cudaResViewFormatHalf4, 
#line 1242
cudaResViewFormatFloat1, 
#line 1243
cudaResViewFormatFloat2, 
#line 1244
cudaResViewFormatFloat4, 
#line 1245
cudaResViewFormatUnsignedBlockCompressed1, 
#line 1246
cudaResViewFormatUnsignedBlockCompressed2, 
#line 1247
cudaResViewFormatUnsignedBlockCompressed3, 
#line 1248
cudaResViewFormatUnsignedBlockCompressed4, 
#line 1249
cudaResViewFormatSignedBlockCompressed4, 
#line 1250
cudaResViewFormatUnsignedBlockCompressed5, 
#line 1251
cudaResViewFormatSignedBlockCompressed5, 
#line 1252
cudaResViewFormatUnsignedBlockCompressed6H, 
#line 1253
cudaResViewFormatSignedBlockCompressed6H, 
#line 1254
cudaResViewFormatUnsignedBlockCompressed7
#line 1255
}; 
#endif
#line 1260 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1260
struct cudaResourceDesc { 
#line 1261
cudaResourceType resType; 
#line 1263
union { 
#line 1264
struct { 
#line 1265
cudaArray_t array; 
#line 1266
} array; 
#line 1267
struct { 
#line 1268
cudaMipmappedArray_t mipmap; 
#line 1269
} mipmap; 
#line 1270
struct { 
#line 1271
void *devPtr; 
#line 1272
cudaChannelFormatDesc desc; 
#line 1273
size_t sizeInBytes; 
#line 1274
} linear; 
#line 1275
struct { 
#line 1276
void *devPtr; 
#line 1277
cudaChannelFormatDesc desc; 
#line 1278
size_t width; 
#line 1279
size_t height; 
#line 1280
size_t pitchInBytes; 
#line 1281
} pitch2D; 
#line 1282
} res; 
#line 1283
}; 
#endif
#line 1288 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1288
struct cudaResourceViewDesc { 
#line 1290
cudaResourceViewFormat format; 
#line 1291
size_t width; 
#line 1292
size_t height; 
#line 1293
size_t depth; 
#line 1294
unsigned firstMipmapLevel; 
#line 1295
unsigned lastMipmapLevel; 
#line 1296
unsigned firstLayer; 
#line 1297
unsigned lastLayer; 
#line 1298
}; 
#endif
#line 1303 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1303
struct cudaPointerAttributes { 
#line 1313
__declspec(deprecated) cudaMemoryType memoryType; 
#line 1319
cudaMemoryType type; 
#line 1330
int device; 
#line 1336
void *devicePointer; 
#line 1345
void *hostPointer; 
#line 1352
__declspec(deprecated) int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1353
}; 
#endif
#line 1358 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1358
struct cudaFuncAttributes { 
#line 1365
size_t sharedSizeBytes; 
#line 1371
size_t constSizeBytes; 
#line 1376
size_t localSizeBytes; 
#line 1383
int maxThreadsPerBlock; 
#line 1388
int numRegs; 
#line 1395
int ptxVersion; 
#line 1402
int binaryVersion; 
#line 1408
int cacheModeCA; 
#line 1415
int maxDynamicSharedSizeBytes; 
#line 1424
int preferredShmemCarveout; 
#line 1425
}; 
#endif
#line 1430 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1430
enum cudaFuncAttribute { 
#line 1432
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
#line 1433
cudaFuncAttributePreferredSharedMemoryCarveout, 
#line 1434
cudaFuncAttributeMax
#line 1435
}; 
#endif
#line 1440 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1440
enum cudaFuncCache { 
#line 1442
cudaFuncCachePreferNone, 
#line 1443
cudaFuncCachePreferShared, 
#line 1444
cudaFuncCachePreferL1, 
#line 1445
cudaFuncCachePreferEqual
#line 1446
}; 
#endif
#line 1452 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1452
enum cudaSharedMemConfig { 
#line 1454
cudaSharedMemBankSizeDefault, 
#line 1455
cudaSharedMemBankSizeFourByte, 
#line 1456
cudaSharedMemBankSizeEightByte
#line 1457
}; 
#endif
#line 1462 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1462
enum cudaSharedCarveout { 
#line 1463
cudaSharedmemCarveoutDefault = (-1), 
#line 1464
cudaSharedmemCarveoutMaxShared = 100, 
#line 1465
cudaSharedmemCarveoutMaxL1 = 0
#line 1466
}; 
#endif
#line 1471 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1471
enum cudaComputeMode { 
#line 1473
cudaComputeModeDefault, 
#line 1474
cudaComputeModeExclusive, 
#line 1475
cudaComputeModeProhibited, 
#line 1476
cudaComputeModeExclusiveProcess
#line 1477
}; 
#endif
#line 1482 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1482
enum cudaLimit { 
#line 1484
cudaLimitStackSize, 
#line 1485
cudaLimitPrintfFifoSize, 
#line 1486
cudaLimitMallocHeapSize, 
#line 1487
cudaLimitDevRuntimeSyncDepth, 
#line 1488
cudaLimitDevRuntimePendingLaunchCount, 
#line 1489
cudaLimitMaxL2FetchGranularity
#line 1490
}; 
#endif
#line 1495 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1495
enum cudaMemoryAdvise { 
#line 1497
cudaMemAdviseSetReadMostly = 1, 
#line 1498
cudaMemAdviseUnsetReadMostly, 
#line 1499
cudaMemAdviseSetPreferredLocation, 
#line 1500
cudaMemAdviseUnsetPreferredLocation, 
#line 1501
cudaMemAdviseSetAccessedBy, 
#line 1502
cudaMemAdviseUnsetAccessedBy
#line 1503
}; 
#endif
#line 1508 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1508
enum cudaMemRangeAttribute { 
#line 1510
cudaMemRangeAttributeReadMostly = 1, 
#line 1511
cudaMemRangeAttributePreferredLocation, 
#line 1512
cudaMemRangeAttributeAccessedBy, 
#line 1513
cudaMemRangeAttributeLastPrefetchLocation
#line 1514
}; 
#endif
#line 1519 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1519
enum cudaOutputMode { 
#line 1521
cudaKeyValuePair, 
#line 1522
cudaCSV
#line 1523
}; 
#endif
#line 1528 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1528
enum cudaDeviceAttr { 
#line 1530
cudaDevAttrMaxThreadsPerBlock = 1, 
#line 1531
cudaDevAttrMaxBlockDimX, 
#line 1532
cudaDevAttrMaxBlockDimY, 
#line 1533
cudaDevAttrMaxBlockDimZ, 
#line 1534
cudaDevAttrMaxGridDimX, 
#line 1535
cudaDevAttrMaxGridDimY, 
#line 1536
cudaDevAttrMaxGridDimZ, 
#line 1537
cudaDevAttrMaxSharedMemoryPerBlock, 
#line 1538
cudaDevAttrTotalConstantMemory, 
#line 1539
cudaDevAttrWarpSize, 
#line 1540
cudaDevAttrMaxPitch, 
#line 1541
cudaDevAttrMaxRegistersPerBlock, 
#line 1542
cudaDevAttrClockRate, 
#line 1543
cudaDevAttrTextureAlignment, 
#line 1544
cudaDevAttrGpuOverlap, 
#line 1545
cudaDevAttrMultiProcessorCount, 
#line 1546
cudaDevAttrKernelExecTimeout, 
#line 1547
cudaDevAttrIntegrated, 
#line 1548
cudaDevAttrCanMapHostMemory, 
#line 1549
cudaDevAttrComputeMode, 
#line 1550
cudaDevAttrMaxTexture1DWidth, 
#line 1551
cudaDevAttrMaxTexture2DWidth, 
#line 1552
cudaDevAttrMaxTexture2DHeight, 
#line 1553
cudaDevAttrMaxTexture3DWidth, 
#line 1554
cudaDevAttrMaxTexture3DHeight, 
#line 1555
cudaDevAttrMaxTexture3DDepth, 
#line 1556
cudaDevAttrMaxTexture2DLayeredWidth, 
#line 1557
cudaDevAttrMaxTexture2DLayeredHeight, 
#line 1558
cudaDevAttrMaxTexture2DLayeredLayers, 
#line 1559
cudaDevAttrSurfaceAlignment, 
#line 1560
cudaDevAttrConcurrentKernels, 
#line 1561
cudaDevAttrEccEnabled, 
#line 1562
cudaDevAttrPciBusId, 
#line 1563
cudaDevAttrPciDeviceId, 
#line 1564
cudaDevAttrTccDriver, 
#line 1565
cudaDevAttrMemoryClockRate, 
#line 1566
cudaDevAttrGlobalMemoryBusWidth, 
#line 1567
cudaDevAttrL2CacheSize, 
#line 1568
cudaDevAttrMaxThreadsPerMultiProcessor, 
#line 1569
cudaDevAttrAsyncEngineCount, 
#line 1570
cudaDevAttrUnifiedAddressing, 
#line 1571
cudaDevAttrMaxTexture1DLayeredWidth, 
#line 1572
cudaDevAttrMaxTexture1DLayeredLayers, 
#line 1573
cudaDevAttrMaxTexture2DGatherWidth = 45, 
#line 1574
cudaDevAttrMaxTexture2DGatherHeight, 
#line 1575
cudaDevAttrMaxTexture3DWidthAlt, 
#line 1576
cudaDevAttrMaxTexture3DHeightAlt, 
#line 1577
cudaDevAttrMaxTexture3DDepthAlt, 
#line 1578
cudaDevAttrPciDomainId, 
#line 1579
cudaDevAttrTexturePitchAlignment, 
#line 1580
cudaDevAttrMaxTextureCubemapWidth, 
#line 1581
cudaDevAttrMaxTextureCubemapLayeredWidth, 
#line 1582
cudaDevAttrMaxTextureCubemapLayeredLayers, 
#line 1583
cudaDevAttrMaxSurface1DWidth, 
#line 1584
cudaDevAttrMaxSurface2DWidth, 
#line 1585
cudaDevAttrMaxSurface2DHeight, 
#line 1586
cudaDevAttrMaxSurface3DWidth, 
#line 1587
cudaDevAttrMaxSurface3DHeight, 
#line 1588
cudaDevAttrMaxSurface3DDepth, 
#line 1589
cudaDevAttrMaxSurface1DLayeredWidth, 
#line 1590
cudaDevAttrMaxSurface1DLayeredLayers, 
#line 1591
cudaDevAttrMaxSurface2DLayeredWidth, 
#line 1592
cudaDevAttrMaxSurface2DLayeredHeight, 
#line 1593
cudaDevAttrMaxSurface2DLayeredLayers, 
#line 1594
cudaDevAttrMaxSurfaceCubemapWidth, 
#line 1595
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
#line 1596
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
#line 1597
cudaDevAttrMaxTexture1DLinearWidth, 
#line 1598
cudaDevAttrMaxTexture2DLinearWidth, 
#line 1599
cudaDevAttrMaxTexture2DLinearHeight, 
#line 1600
cudaDevAttrMaxTexture2DLinearPitch, 
#line 1601
cudaDevAttrMaxTexture2DMipmappedWidth, 
#line 1602
cudaDevAttrMaxTexture2DMipmappedHeight, 
#line 1603
cudaDevAttrComputeCapabilityMajor, 
#line 1604
cudaDevAttrComputeCapabilityMinor, 
#line 1605
cudaDevAttrMaxTexture1DMipmappedWidth, 
#line 1606
cudaDevAttrStreamPrioritiesSupported, 
#line 1607
cudaDevAttrGlobalL1CacheSupported, 
#line 1608
cudaDevAttrLocalL1CacheSupported, 
#line 1609
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
#line 1610
cudaDevAttrMaxRegistersPerMultiprocessor, 
#line 1611
cudaDevAttrManagedMemory, 
#line 1612
cudaDevAttrIsMultiGpuBoard, 
#line 1613
cudaDevAttrMultiGpuBoardGroupID, 
#line 1614
cudaDevAttrHostNativeAtomicSupported, 
#line 1615
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
#line 1616
cudaDevAttrPageableMemoryAccess, 
#line 1617
cudaDevAttrConcurrentManagedAccess, 
#line 1618
cudaDevAttrComputePreemptionSupported, 
#line 1619
cudaDevAttrCanUseHostPointerForRegisteredMem, 
#line 1620
cudaDevAttrReserved92, 
#line 1621
cudaDevAttrReserved93, 
#line 1622
cudaDevAttrReserved94, 
#line 1623
cudaDevAttrCooperativeLaunch, 
#line 1624
cudaDevAttrCooperativeMultiDeviceLaunch, 
#line 1625
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
#line 1626
cudaDevAttrCanFlushRemoteWrites, 
#line 1627
cudaDevAttrHostRegisterSupported, 
#line 1628
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
#line 1629
cudaDevAttrDirectManagedMemAccessFromHost
#line 1630
}; 
#endif
#line 1636 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1636
enum cudaDeviceP2PAttr { 
#line 1637
cudaDevP2PAttrPerformanceRank = 1, 
#line 1638
cudaDevP2PAttrAccessSupported, 
#line 1639
cudaDevP2PAttrNativeAtomicSupported, 
#line 1640
cudaDevP2PAttrCudaArrayAccessSupported
#line 1641
}; 
#endif
#line 1648 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1648
struct CUuuid_st { 
#line 1649
char bytes[16]; 
#line 1650
}; 
#endif
#line 1651 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 1651
CUuuid; 
#endif
#line 1653 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 1653
cudaUUID_t; 
#endif
#line 1658 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1658
struct cudaDeviceProp { 
#line 1660
char name[256]; 
#line 1661
cudaUUID_t uuid; 
#line 1662
char luid[8]; 
#line 1663
unsigned luidDeviceNodeMask; 
#line 1664
size_t totalGlobalMem; 
#line 1665
size_t sharedMemPerBlock; 
#line 1666
int regsPerBlock; 
#line 1667
int warpSize; 
#line 1668
size_t memPitch; 
#line 1669
int maxThreadsPerBlock; 
#line 1670
int maxThreadsDim[3]; 
#line 1671
int maxGridSize[3]; 
#line 1672
int clockRate; 
#line 1673
size_t totalConstMem; 
#line 1674
int major; 
#line 1675
int minor; 
#line 1676
size_t textureAlignment; 
#line 1677
size_t texturePitchAlignment; 
#line 1678
int deviceOverlap; 
#line 1679
int multiProcessorCount; 
#line 1680
int kernelExecTimeoutEnabled; 
#line 1681
int integrated; 
#line 1682
int canMapHostMemory; 
#line 1683
int computeMode; 
#line 1684
int maxTexture1D; 
#line 1685
int maxTexture1DMipmap; 
#line 1686
int maxTexture1DLinear; 
#line 1687
int maxTexture2D[2]; 
#line 1688
int maxTexture2DMipmap[2]; 
#line 1689
int maxTexture2DLinear[3]; 
#line 1690
int maxTexture2DGather[2]; 
#line 1691
int maxTexture3D[3]; 
#line 1692
int maxTexture3DAlt[3]; 
#line 1693
int maxTextureCubemap; 
#line 1694
int maxTexture1DLayered[2]; 
#line 1695
int maxTexture2DLayered[3]; 
#line 1696
int maxTextureCubemapLayered[2]; 
#line 1697
int maxSurface1D; 
#line 1698
int maxSurface2D[2]; 
#line 1699
int maxSurface3D[3]; 
#line 1700
int maxSurface1DLayered[2]; 
#line 1701
int maxSurface2DLayered[3]; 
#line 1702
int maxSurfaceCubemap; 
#line 1703
int maxSurfaceCubemapLayered[2]; 
#line 1704
size_t surfaceAlignment; 
#line 1705
int concurrentKernels; 
#line 1706
int ECCEnabled; 
#line 1707
int pciBusID; 
#line 1708
int pciDeviceID; 
#line 1709
int pciDomainID; 
#line 1710
int tccDriver; 
#line 1711
int asyncEngineCount; 
#line 1712
int unifiedAddressing; 
#line 1713
int memoryClockRate; 
#line 1714
int memoryBusWidth; 
#line 1715
int l2CacheSize; 
#line 1716
int maxThreadsPerMultiProcessor; 
#line 1717
int streamPrioritiesSupported; 
#line 1718
int globalL1CacheSupported; 
#line 1719
int localL1CacheSupported; 
#line 1720
size_t sharedMemPerMultiprocessor; 
#line 1721
int regsPerMultiprocessor; 
#line 1722
int managedMemory; 
#line 1723
int isMultiGpuBoard; 
#line 1724
int multiGpuBoardGroupID; 
#line 1725
int hostNativeAtomicSupported; 
#line 1726
int singleToDoublePrecisionPerfRatio; 
#line 1727
int pageableMemoryAccess; 
#line 1728
int concurrentManagedAccess; 
#line 1729
int computePreemptionSupported; 
#line 1730
int canUseHostPointerForRegisteredMem; 
#line 1731
int cooperativeLaunch; 
#line 1732
int cooperativeMultiDeviceLaunch; 
#line 1733
size_t sharedMemPerBlockOptin; 
#line 1734
int pageableMemoryAccessUsesHostPageTables; 
#line 1735
int directManagedMemAccessFromHost; 
#line 1736
}; 
#endif
#line 1829 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef 
#line 1826
struct cudaIpcEventHandle_st { 
#line 1828
char reserved[64]; 
#line 1829
} cudaIpcEventHandle_t; 
#endif
#line 1837 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef 
#line 1834
struct cudaIpcMemHandle_st { 
#line 1836
char reserved[64]; 
#line 1837
} cudaIpcMemHandle_t; 
#endif
#line 1842 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1842
enum cudaExternalMemoryHandleType { 
#line 1846
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
#line 1850
cudaExternalMemoryHandleTypeOpaqueWin32, 
#line 1854
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
#line 1858
cudaExternalMemoryHandleTypeD3D12Heap, 
#line 1862
cudaExternalMemoryHandleTypeD3D12Resource, 
#line 1866
cudaExternalMemoryHandleTypeD3D11Resource, 
#line 1870
cudaExternalMemoryHandleTypeD3D11ResourceKmt, 
#line 1874
cudaExternalMemoryHandleTypeNvSciBuf
#line 1875
}; 
#endif
#line 1917 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1917
struct cudaExternalMemoryHandleDesc { 
#line 1921
cudaExternalMemoryHandleType type; 
#line 1922
union { 
#line 1928
int fd; 
#line 1944
struct { 
#line 1948
void *handle; 
#line 1953
const void *name; 
#line 1954
} win32; 
#line 1959
const void *nvSciBufObject; 
#line 1960
} handle; 
#line 1964
unsigned __int64 size; 
#line 1968
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1969
}; 
#endif
#line 1974 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1974
struct cudaExternalMemoryBufferDesc { 
#line 1978
unsigned __int64 offset; 
#line 1982
unsigned __int64 size; 
#line 1986
unsigned flags; 
#line 1987
}; 
#endif
#line 1992 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 1992
struct cudaExternalMemoryMipmappedArrayDesc { 
#line 1997
unsigned __int64 offset; 
#line 2001
cudaChannelFormatDesc formatDesc; 
#line 2005
cudaExtent extent; 
#line 2010
unsigned flags; 
#line 2014
unsigned numLevels; 
#line 2015
}; 
#endif
#line 2020 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 2020
enum cudaExternalSemaphoreHandleType { 
#line 2024
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
#line 2028
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
#line 2032
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
#line 2036
cudaExternalSemaphoreHandleTypeD3D12Fence, 
#line 2040
cudaExternalSemaphoreHandleTypeD3D11Fence, 
#line 2044
cudaExternalSemaphoreHandleTypeNvSciSync, 
#line 2048
cudaExternalSemaphoreHandleTypeKeyedMutex, 
#line 2052
cudaExternalSemaphoreHandleTypeKeyedMutexKmt
#line 2053
}; 
#endif
#line 2058 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 2058
struct cudaExternalSemaphoreHandleDesc { 
#line 2062
cudaExternalSemaphoreHandleType type; 
#line 2063
union { 
#line 2068
int fd; 
#line 2083
struct { 
#line 2087
void *handle; 
#line 2092
const void *name; 
#line 2093
} win32; 
#line 2097
const void *nvSciSyncObj; 
#line 2098
} handle; 
#line 2102
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 2103
}; 
#endif
#line 2108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 2108
struct cudaExternalSemaphoreSignalParams { 
#line 2109
struct { 
#line 2113
struct { 
#line 2117
unsigned __int64 value; 
#line 2118
} fence; 
#line 2119
union { 
#line 2124
void *fence; 
#line 2125
unsigned __int64 reserved; 
#line 2126
} nvSciSync; 
#line 2130
struct { 
#line 2134
unsigned __int64 key; 
#line 2135
} keyedMutex; 
#line 2136
} params; 
#line 2147
unsigned flags; 
#line 2148
}; 
#endif
#line 2153 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 2153
struct cudaExternalSemaphoreWaitParams { 
#line 2154
struct { 
#line 2158
struct { 
#line 2162
unsigned __int64 value; 
#line 2163
} fence; 
#line 2164
union { 
#line 2169
void *fence; 
#line 2170
unsigned __int64 reserved; 
#line 2171
} nvSciSync; 
#line 2175
struct { 
#line 2179
unsigned __int64 key; 
#line 2183
unsigned timeoutMs; 
#line 2184
} keyedMutex; 
#line 2185
} params; 
#line 2196
unsigned flags; 
#line 2197
}; 
#endif
#line 2209 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef cudaError 
#line 2209
cudaError_t; 
#endif
#line 2214 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef struct CUstream_st *
#line 2214
cudaStream_t; 
#endif
#line 2219 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef struct CUevent_st *
#line 2219
cudaEvent_t; 
#endif
#line 2224 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef cudaGraphicsResource *
#line 2224
cudaGraphicsResource_t; 
#endif
#line 2229 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef cudaOutputMode 
#line 2229
cudaOutputMode_t; 
#endif
#line 2234 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef struct CUexternalMemory_st *
#line 2234
cudaExternalMemory_t; 
#endif
#line 2239 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef struct CUexternalSemaphore_st *
#line 2239
cudaExternalSemaphore_t; 
#endif
#line 2244 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef struct CUgraph_st *
#line 2244
cudaGraph_t; 
#endif
#line 2249 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
typedef struct CUgraphNode_st *
#line 2249
cudaGraphNode_t; 
#endif
#line 2254 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 2254
enum cudaCGScope { 
#line 2255
cudaCGScopeInvalid, 
#line 2256
cudaCGScopeGrid, 
#line 2257
cudaCGScopeMultiGrid
#line 2258
}; 
#endif
#line 2263 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 2263
struct cudaLaunchParams { 
#line 2265
void *func; 
#line 2266
dim3 gridDim; 
#line 2267
dim3 blockDim; 
#line 2268
void **args; 
#line 2269
size_t sharedMem; 
#line 2270
cudaStream_t stream; 
#line 2271
}; 
#endif
#line 2276 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 2276
struct cudaKernelNodeParams { 
#line 2277
void *func; 
#line 2278
dim3 gridDim; 
#line 2279
dim3 blockDim; 
#line 2280
unsigned sharedMemBytes; 
#line 2281
void **kernelParams; 
#line 2282
void **extra; 
#line 2283
}; 
#endif
#line 2288 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
#if 0
#line 2288
enum cudaGraphNodeType { 
#line 2289
cudaGraphNodeTypeKernel, 
#line 2290
cudaGraphNodeTypeMemcpy, 
#line 2291
cudaGraphNodeTypeMemset, 
#line 2292
cudaGraphNodeTypeHost, 
#line 2293
cudaGraphNodeTypeGraph, 
#line 2294
cudaGraphNodeTypeEmpty, 
#line 2295
cudaGraphNodeTypeCount
#line 2296
}; 
#endif
#line 2301 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_types.h"
typedef struct CUgraphExec_st *cudaGraphExec_t; 
#line 2306
#if 0
#line 2306
enum cudaGraphExecUpdateResult { 
#line 2307
cudaGraphExecUpdateSuccess, 
#line 2308
cudaGraphExecUpdateError, 
#line 2309
cudaGraphExecUpdateErrorTopologyChanged, 
#line 2310
cudaGraphExecUpdateErrorNodeTypeChanged, 
#line 2311
cudaGraphExecUpdateErrorFunctionChanged, 
#line 2312
cudaGraphExecUpdateErrorParametersChanged, 
#line 2313
cudaGraphExecUpdateErrorNotSupported
#line 2314
}; 
#endif
#line 84 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_types.h"
#if 0
#line 84
enum cudaSurfaceBoundaryMode { 
#line 86
cudaBoundaryModeZero, 
#line 87
cudaBoundaryModeClamp, 
#line 88
cudaBoundaryModeTrap
#line 89
}; 
#endif
#line 94 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_types.h"
#if 0
#line 94
enum cudaSurfaceFormatMode { 
#line 96
cudaFormatModeForced, 
#line 97
cudaFormatModeAuto
#line 98
}; 
#endif
#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_types.h"
#if 0
#line 103
struct surfaceReference { 
#line 108
cudaChannelFormatDesc channelDesc; 
#line 109
}; 
#endif
#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_types.h"
#if 0
typedef unsigned __int64 
#line 114
cudaSurfaceObject_t; 
#endif
#line 84 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_types.h"
#if 0
#line 84
enum cudaTextureAddressMode { 
#line 86
cudaAddressModeWrap, 
#line 87
cudaAddressModeClamp, 
#line 88
cudaAddressModeMirror, 
#line 89
cudaAddressModeBorder
#line 90
}; 
#endif
#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_types.h"
#if 0
#line 95
enum cudaTextureFilterMode { 
#line 97
cudaFilterModePoint, 
#line 98
cudaFilterModeLinear
#line 99
}; 
#endif
#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_types.h"
#if 0
#line 104
enum cudaTextureReadMode { 
#line 106
cudaReadModeElementType, 
#line 107
cudaReadModeNormalizedFloat
#line 108
}; 
#endif
#line 113 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_types.h"
#if 0
#line 113
struct textureReference { 
#line 118
int normalized; 
#line 122
cudaTextureFilterMode filterMode; 
#line 126
cudaTextureAddressMode addressMode[3]; 
#line 130
cudaChannelFormatDesc channelDesc; 
#line 134
int sRGB; 
#line 138
unsigned maxAnisotropy; 
#line 142
cudaTextureFilterMode mipmapFilterMode; 
#line 146
float mipmapLevelBias; 
#line 150
float minMipmapLevelClamp; 
#line 154
float maxMipmapLevelClamp; 
#line 155
int __cudaReserved[15]; 
#line 156
}; 
#endif
#line 161 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_types.h"
#if 0
#line 161
struct cudaTextureDesc { 
#line 166
cudaTextureAddressMode addressMode[3]; 
#line 170
cudaTextureFilterMode filterMode; 
#line 174
cudaTextureReadMode readMode; 
#line 178
int sRGB; 
#line 182
float borderColor[4]; 
#line 186
int normalizedCoords; 
#line 190
unsigned maxAnisotropy; 
#line 194
cudaTextureFilterMode mipmapFilterMode; 
#line 198
float mipmapLevelBias; 
#line 202
float minMipmapLevelClamp; 
#line 206
float maxMipmapLevelClamp; 
#line 207
}; 
#endif
#line 212 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_types.h"
#if 0
typedef unsigned __int64 
#line 212
cudaTextureObject_t; 
#endif
#line 70 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\library_types.h"
typedef 
#line 54
enum cudaDataType_t { 
#line 56
CUDA_R_16F = 2, 
#line 57
CUDA_C_16F = 6, 
#line 58
CUDA_R_32F = 0, 
#line 59
CUDA_C_32F = 4, 
#line 60
CUDA_R_64F = 1, 
#line 61
CUDA_C_64F = 5, 
#line 62
CUDA_R_8I = 3, 
#line 63
CUDA_C_8I = 7, 
#line 64
CUDA_R_8U, 
#line 65
CUDA_C_8U, 
#line 66
CUDA_R_32I, 
#line 67
CUDA_C_32I, 
#line 68
CUDA_R_32U, 
#line 69
CUDA_C_32U
#line 70
} cudaDataType; 
#line 78
typedef 
#line 73
enum libraryPropertyType_t { 
#line 75
MAJOR_VERSION, 
#line 76
MINOR_VERSION, 
#line 77
PATCH_LEVEL
#line 78
} libraryPropertyType; 
#line 121 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_device_runtime_api.h"
extern "C" {
#line 123
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 124
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 125
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 126
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 127
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 128
extern cudaError_t __stdcall cudaGetLastError(); 
#line 129
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 130
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 131
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 132
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 133
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 134
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 135
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 136
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 137
extern cudaError_t __stdcall cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 138
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 139
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
#line 140
extern cudaError_t __stdcall cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
#line 141
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 142
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 143
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 144
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 145
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 146
extern cudaError_t __stdcall cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 147
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 148
extern cudaError_t __stdcall cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 149
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 150
extern cudaError_t __stdcall cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 151
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 152
extern cudaError_t __stdcall cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 153
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 154
extern cudaError_t __stdcall cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 155
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 156
extern cudaError_t __stdcall cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 157
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 178
extern void *__stdcall cudaGetParameterBuffer(size_t alignment, size_t size); 
#line 206
extern void *__stdcall cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
#line 207
extern cudaError_t __stdcall cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 208
extern cudaError_t __stdcall cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
#line 226 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 227
extern cudaError_t __stdcall cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
#line 230 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
#line 231
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 233
extern unsigned __int64 __stdcall cudaCGGetIntrinsicHandle(cudaCGScope scope); 
#line 234
extern cudaError_t __stdcall cudaCGSynchronize(unsigned __int64 handle, unsigned flags); 
#line 235
extern cudaError_t __stdcall cudaCGSynchronizeGrid(unsigned __int64 handle, unsigned flags); 
#line 236
extern cudaError_t __stdcall cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned __int64 handle); 
#line 237
extern cudaError_t __stdcall cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned __int64 handle); 
#line 238
}
#line 240
template< class T> static __inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
#line 241
template< class T> static __inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
#line 242
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
#line 243
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 245 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_runtime_api.h"
extern "C" {
#line 280 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceReset(); 
#line 301
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 386
extern cudaError_t __stdcall cudaDeviceSetLimit(cudaLimit limit, size_t value); 
#line 420
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 453
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 490
extern cudaError_t __stdcall cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
#line 534
extern cudaError_t __stdcall cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
#line 565
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 609
extern cudaError_t __stdcall cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
#line 636
extern cudaError_t __stdcall cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
#line 666
extern cudaError_t __stdcall cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
#line 713
extern cudaError_t __stdcall cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
#line 753
extern cudaError_t __stdcall cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
#line 796
extern cudaError_t __stdcall cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
#line 854
extern cudaError_t __stdcall cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
#line 889
extern cudaError_t __stdcall cudaIpcCloseMemHandle(void * devPtr); 
#line 931
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadExit(); 
#line 957
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSynchronize(); 
#line 1006
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetLimit(cudaLimit limit, size_t value); 
#line 1039
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
#line 1075
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 1122
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
#line 1181
extern cudaError_t __stdcall cudaGetLastError(); 
#line 1227
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 1243
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 1259
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 1288
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 1559
extern cudaError_t __stdcall cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
#line 1748
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 1797
extern cudaError_t __stdcall cudaDeviceGetNvSciSyncAttributes(void * nvSciSyncAttrList, int device, int flags); 
#line 1837
extern cudaError_t __stdcall cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
#line 1858
extern cudaError_t __stdcall cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
#line 1895
extern cudaError_t __stdcall cudaSetDevice(int device); 
#line 1916
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 1947
extern cudaError_t __stdcall cudaSetValidDevices(int * device_arr, int len); 
#line 2016
extern cudaError_t __stdcall cudaSetDeviceFlags(unsigned flags); 
#line 2062
extern cudaError_t __stdcall cudaGetDeviceFlags(unsigned * flags); 
#line 2102
extern cudaError_t __stdcall cudaStreamCreate(cudaStream_t * pStream); 
#line 2134
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 2180
extern cudaError_t __stdcall cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
#line 2207
extern cudaError_t __stdcall cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
#line 2232
extern cudaError_t __stdcall cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
#line 2263
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 2289
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 2297
typedef void (__stdcall *cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
#line 2364
extern cudaError_t __stdcall cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
#line 2388
extern cudaError_t __stdcall cudaStreamSynchronize(cudaStream_t stream); 
#line 2413
extern cudaError_t __stdcall cudaStreamQuery(cudaStream_t stream); 
#line 2496
extern cudaError_t __stdcall cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
#line 2532
extern cudaError_t __stdcall cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
#line 2583
extern cudaError_t __stdcall cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
#line 2611
extern cudaError_t __stdcall cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
#line 2649
extern cudaError_t __stdcall cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
#line 2677
extern cudaError_t __stdcall cudaStreamGetCaptureInfo(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus, unsigned __int64 * pId); 
#line 2714
extern cudaError_t __stdcall cudaEventCreate(cudaEvent_t * event); 
#line 2751
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 2790
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
#line 2821
extern cudaError_t __stdcall cudaEventQuery(cudaEvent_t event); 
#line 2851
extern cudaError_t __stdcall cudaEventSynchronize(cudaEvent_t event); 
#line 2878
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 2921
extern cudaError_t __stdcall cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
#line 3098
extern cudaError_t __stdcall cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
#line 3152
extern cudaError_t __stdcall cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
#line 3211
extern cudaError_t __stdcall cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
#line 3234
extern cudaError_t __stdcall cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
#line 3365
extern cudaError_t __stdcall cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
#line 3430
extern cudaError_t __stdcall cudaSignalExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 3504
extern cudaError_t __stdcall cudaWaitExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 3526
extern cudaError_t __stdcall cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
#line 3591
extern cudaError_t __stdcall cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 3648
extern cudaError_t __stdcall cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 3747
extern cudaError_t __stdcall cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
#line 3796
extern cudaError_t __stdcall cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
#line 3851
extern cudaError_t __stdcall cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
#line 3886
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 3925
extern cudaError_t __stdcall cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
#line 3949
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForDevice(double * d); 
#line 3973
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForHost(double * d); 
#line 4039
extern cudaError_t __stdcall cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
#line 4094
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
#line 4138
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
#line 4258
extern cudaError_t __stdcall cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
#line 4289
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 4322
extern cudaError_t __stdcall cudaMallocHost(void ** ptr, size_t size); 
#line 4365
extern cudaError_t __stdcall cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
#line 4411
extern cudaError_t __stdcall cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
#line 4440
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 4463
extern cudaError_t __stdcall cudaFreeHost(void * ptr); 
#line 4486
extern cudaError_t __stdcall cudaFreeArray(cudaArray_t array); 
#line 4509
extern cudaError_t __stdcall cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
#line 4575
extern cudaError_t __stdcall cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
#line 4659
extern cudaError_t __stdcall cudaHostRegister(void * ptr, size_t size, unsigned flags); 
#line 4682
extern cudaError_t __stdcall cudaHostUnregister(void * ptr); 
#line 4727
extern cudaError_t __stdcall cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
#line 4749
extern cudaError_t __stdcall cudaHostGetFlags(unsigned * pFlags, void * pHost); 
#line 4788
extern cudaError_t __stdcall cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
#line 4927
extern cudaError_t __stdcall cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
#line 5066
extern cudaError_t __stdcall cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
#line 5095
extern cudaError_t __stdcall cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
#line 5200
extern cudaError_t __stdcall cudaMemcpy3D(const cudaMemcpy3DParms * p); 
#line 5231
extern cudaError_t __stdcall cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
#line 5349
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
#line 5375
extern cudaError_t __stdcall cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
#line 5397
extern cudaError_t __stdcall cudaMemGetInfo(size_t * free, size_t * total); 
#line 5423
extern cudaError_t __stdcall cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
#line 5466
extern cudaError_t __stdcall cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 5501
extern cudaError_t __stdcall cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
#line 5549
extern cudaError_t __stdcall cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5598
extern cudaError_t __stdcall cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5647
extern cudaError_t __stdcall cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5694
extern cudaError_t __stdcall cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 5737
extern cudaError_t __stdcall cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
#line 5780
extern cudaError_t __stdcall cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
#line 5836
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5871
extern cudaError_t __stdcall cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
#line 5933
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5990
extern cudaError_t __stdcall cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6046
extern cudaError_t __stdcall cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6097
extern cudaError_t __stdcall cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6148
extern cudaError_t __stdcall cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6177
extern cudaError_t __stdcall cudaMemset(void * devPtr, int value, size_t count); 
#line 6211
extern cudaError_t __stdcall cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
#line 6255
extern cudaError_t __stdcall cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
#line 6291
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
#line 6332
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
#line 6383
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
#line 6411
extern cudaError_t __stdcall cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
#line 6438
extern cudaError_t __stdcall cudaGetSymbolSize(size_t * size, const void * symbol); 
#line 6508
extern cudaError_t __stdcall cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
#line 6624
extern cudaError_t __stdcall cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
#line 6683
extern cudaError_t __stdcall cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
#line 6722
extern cudaError_t __stdcall cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
#line 6782
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
#line 6824
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
#line 6867
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 6918
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6968
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 7134
extern cudaError_t __stdcall cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
#line 7175
extern cudaError_t __stdcall cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
#line 7217
extern cudaError_t __stdcall cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
#line 7239
extern cudaError_t __stdcall cudaDeviceDisablePeerAccess(int peerDevice); 
#line 7302
extern cudaError_t __stdcall cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
#line 7337
extern cudaError_t __stdcall cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
#line 7376
extern cudaError_t __stdcall cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 7411
extern cudaError_t __stdcall cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 7443
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
#line 7481
extern cudaError_t __stdcall cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
#line 7510
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
#line 7581
extern cudaError_t __stdcall cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = 4294967295U); 
#line 7640
extern cudaError_t __stdcall cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
#line 7678
extern cudaError_t __stdcall cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 7718
extern cudaError_t __stdcall cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
#line 7744
extern cudaError_t __stdcall cudaUnbindTexture(const textureReference * texref); 
#line 7773
extern cudaError_t __stdcall cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
#line 7803
extern cudaError_t __stdcall cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
#line 7848
extern cudaError_t __stdcall cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 7873
extern cudaError_t __stdcall cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
#line 7908
extern cudaError_t __stdcall cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
#line 7938
extern cudaChannelFormatDesc __stdcall cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
#line 8153
extern cudaError_t __stdcall cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
#line 8172
extern cudaError_t __stdcall cudaDestroyTextureObject(cudaTextureObject_t texObject); 
#line 8192
extern cudaError_t __stdcall cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
#line 8212
extern cudaError_t __stdcall cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
#line 8233
extern cudaError_t __stdcall cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
#line 8278
extern cudaError_t __stdcall cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
#line 8297
extern cudaError_t __stdcall cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
#line 8316
extern cudaError_t __stdcall cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
#line 8350
extern cudaError_t __stdcall cudaDriverGetVersion(int * driverVersion); 
#line 8375
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 8422
extern cudaError_t __stdcall cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
#line 8519
extern cudaError_t __stdcall cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
#line 8552
extern cudaError_t __stdcall cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
#line 8577
extern cudaError_t __stdcall cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 8621
extern cudaError_t __stdcall cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
#line 8644
extern cudaError_t __stdcall cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
#line 8667
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
#line 8709
extern cudaError_t __stdcall cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
#line 8732
extern cudaError_t __stdcall cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
#line 8755
extern cudaError_t __stdcall cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
#line 8796
extern cudaError_t __stdcall cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
#line 8819
extern cudaError_t __stdcall cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
#line 8842
extern cudaError_t __stdcall cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
#line 8880
extern cudaError_t __stdcall cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
#line 8904
extern cudaError_t __stdcall cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
#line 8941
extern cudaError_t __stdcall cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
#line 8968
extern cudaError_t __stdcall cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
#line 8996
extern cudaError_t __stdcall cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
#line 9027
extern cudaError_t __stdcall cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
#line 9058
extern cudaError_t __stdcall cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
#line 9089
extern cudaError_t __stdcall cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
#line 9123
extern cudaError_t __stdcall cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
#line 9154
extern cudaError_t __stdcall cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
#line 9186
extern cudaError_t __stdcall cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
#line 9217
extern cudaError_t __stdcall cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
#line 9248
extern cudaError_t __stdcall cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
#line 9274
extern cudaError_t __stdcall cudaGraphDestroyNode(cudaGraphNode_t node); 
#line 9310
extern cudaError_t __stdcall cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphNode_t * pErrorNode, char * pLogBuffer, size_t bufferSize); 
#line 9344
extern cudaError_t __stdcall cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 9385
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
#line 9426
extern cudaError_t __stdcall cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
#line 9459
extern cudaError_t __stdcall cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
#line 9534
extern cudaError_t __stdcall cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphNode_t * hErrorNode_out, cudaGraphExecUpdateResult * updateResult_out); 
#line 9559
extern cudaError_t __stdcall cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
#line 9580
extern cudaError_t __stdcall cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
#line 9600
extern cudaError_t __stdcall cudaGraphDestroy(cudaGraph_t graph); 
#line 9605
extern cudaError_t __stdcall cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
#line 9850 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_runtime_api.h"
}
#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\channel_descriptor.h"
template< class T> __inline ::cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 105
{ 
#line 106
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 107
} 
#line 109
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
#line 110
{ 
#line 111
int e = (((int)sizeof(unsigned short)) * 8); 
#line 113
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 114
} 
#line 116
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
#line 117
{ 
#line 118
int e = (((int)sizeof(unsigned short)) * 8); 
#line 120
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 121
} 
#line 123
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
#line 124
{ 
#line 125
int e = (((int)sizeof(unsigned short)) * 8); 
#line 127
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 128
} 
#line 130
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
#line 131
{ 
#line 132
int e = (((int)sizeof(unsigned short)) * 8); 
#line 134
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 135
} 
#line 137
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
#line 138
{ 
#line 139
int e = (((int)sizeof(char)) * 8); 
#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 146 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\channel_descriptor.h"
} 
#line 148
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
#line 149
{ 
#line 150
int e = (((int)sizeof(signed char)) * 8); 
#line 152
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 153
} 
#line 155
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
#line 156
{ 
#line 157
int e = (((int)sizeof(unsigned char)) * 8); 
#line 159
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 160
} 
#line 162
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
#line 163
{ 
#line 164
int e = (((int)sizeof(signed char)) * 8); 
#line 166
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 167
} 
#line 169
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
#line 170
{ 
#line 171
int e = (((int)sizeof(unsigned char)) * 8); 
#line 173
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 174
} 
#line 176
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
#line 177
{ 
#line 178
int e = (((int)sizeof(signed char)) * 8); 
#line 180
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 181
} 
#line 183
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
#line 184
{ 
#line 185
int e = (((int)sizeof(unsigned char)) * 8); 
#line 187
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 188
} 
#line 190
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
#line 191
{ 
#line 192
int e = (((int)sizeof(signed char)) * 8); 
#line 194
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 195
} 
#line 197
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
#line 198
{ 
#line 199
int e = (((int)sizeof(unsigned char)) * 8); 
#line 201
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 202
} 
#line 204
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
#line 205
{ 
#line 206
int e = (((int)sizeof(short)) * 8); 
#line 208
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 209
} 
#line 211
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
#line 212
{ 
#line 213
int e = (((int)sizeof(unsigned short)) * 8); 
#line 215
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 216
} 
#line 218
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
#line 219
{ 
#line 220
int e = (((int)sizeof(short)) * 8); 
#line 222
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 223
} 
#line 225
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
#line 226
{ 
#line 227
int e = (((int)sizeof(unsigned short)) * 8); 
#line 229
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 230
} 
#line 232
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
#line 233
{ 
#line 234
int e = (((int)sizeof(short)) * 8); 
#line 236
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 237
} 
#line 239
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
#line 240
{ 
#line 241
int e = (((int)sizeof(unsigned short)) * 8); 
#line 243
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 244
} 
#line 246
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
#line 247
{ 
#line 248
int e = (((int)sizeof(short)) * 8); 
#line 250
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 251
} 
#line 253
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
#line 254
{ 
#line 255
int e = (((int)sizeof(unsigned short)) * 8); 
#line 257
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 258
} 
#line 260
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
#line 261
{ 
#line 262
int e = (((int)sizeof(int)) * 8); 
#line 264
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 265
} 
#line 267
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
#line 268
{ 
#line 269
int e = (((int)sizeof(unsigned)) * 8); 
#line 271
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 272
} 
#line 274
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
#line 275
{ 
#line 276
int e = (((int)sizeof(int)) * 8); 
#line 278
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 279
} 
#line 281
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
#line 282
{ 
#line 283
int e = (((int)sizeof(unsigned)) * 8); 
#line 285
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 286
} 
#line 288
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
#line 289
{ 
#line 290
int e = (((int)sizeof(int)) * 8); 
#line 292
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 293
} 
#line 295
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
#line 296
{ 
#line 297
int e = (((int)sizeof(unsigned)) * 8); 
#line 299
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 300
} 
#line 302
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
#line 303
{ 
#line 304
int e = (((int)sizeof(int)) * 8); 
#line 306
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 307
} 
#line 309
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
#line 310
{ 
#line 311
int e = (((int)sizeof(unsigned)) * 8); 
#line 313
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 314
} 
#line 318
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
#line 319
{ 
#line 320
int e = (((int)sizeof(long)) * 8); 
#line 322
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 323
} 
#line 325
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
#line 326
{ 
#line 327
int e = (((int)sizeof(unsigned long)) * 8); 
#line 329
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 330
} 
#line 332
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
#line 333
{ 
#line 334
int e = (((int)sizeof(long)) * 8); 
#line 336
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 337
} 
#line 339
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
#line 340
{ 
#line 341
int e = (((int)sizeof(unsigned long)) * 8); 
#line 343
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 344
} 
#line 346
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
#line 347
{ 
#line 348
int e = (((int)sizeof(long)) * 8); 
#line 350
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 351
} 
#line 353
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
#line 354
{ 
#line 355
int e = (((int)sizeof(unsigned long)) * 8); 
#line 357
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 358
} 
#line 360
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
#line 361
{ 
#line 362
int e = (((int)sizeof(long)) * 8); 
#line 364
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 365
} 
#line 367
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
#line 368
{ 
#line 369
int e = (((int)sizeof(unsigned long)) * 8); 
#line 371
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 372
} 
#line 376 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
#line 377
{ 
#line 378
int e = (((int)sizeof(float)) * 8); 
#line 380
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 381
} 
#line 383
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
#line 384
{ 
#line 385
int e = (((int)sizeof(float)) * 8); 
#line 387
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 388
} 
#line 390
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
#line 391
{ 
#line 392
int e = (((int)sizeof(float)) * 8); 
#line 394
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 395
} 
#line 397
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
#line 398
{ 
#line 399
int e = (((int)sizeof(float)) * 8); 
#line 401
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 402
} 
#line 79 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\driver_functions.h"
static __inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
#line 80
{ 
#line 81
cudaPitchedPtr s; 
#line 83
(s.ptr) = d; 
#line 84
(s.pitch) = p; 
#line 85
(s.xsize) = xsz; 
#line 86
(s.ysize) = ysz; 
#line 88
return s; 
#line 89
} 
#line 106
static __inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
#line 107
{ 
#line 108
cudaPos p; 
#line 110
(p.x) = x; 
#line 111
(p.y) = y; 
#line 112
(p.z) = z; 
#line 114
return p; 
#line 115
} 
#line 132
static __inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
#line 133
{ 
#line 134
cudaExtent e; 
#line 136
(e.width) = w; 
#line 137
(e.height) = h; 
#line 138
(e.depth) = d; 
#line 140
return e; 
#line 141
} 
#line 73 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_functions.h"
static __inline char1 make_char1(signed char x); 
#line 75
static __inline uchar1 make_uchar1(unsigned char x); 
#line 77
static __inline char2 make_char2(signed char x, signed char y); 
#line 79
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
#line 81
static __inline char3 make_char3(signed char x, signed char y, signed char z); 
#line 83
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
#line 85
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
#line 87
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
#line 89
static __inline short1 make_short1(short x); 
#line 91
static __inline ushort1 make_ushort1(unsigned short x); 
#line 93
static __inline short2 make_short2(short x, short y); 
#line 95
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
#line 97
static __inline short3 make_short3(short x, short y, short z); 
#line 99
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
#line 101
static __inline short4 make_short4(short x, short y, short z, short w); 
#line 103
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
#line 105
static __inline int1 make_int1(int x); 
#line 107
static __inline uint1 make_uint1(unsigned x); 
#line 109
static __inline int2 make_int2(int x, int y); 
#line 111
static __inline uint2 make_uint2(unsigned x, unsigned y); 
#line 113
static __inline int3 make_int3(int x, int y, int z); 
#line 115
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
#line 117
static __inline int4 make_int4(int x, int y, int z, int w); 
#line 119
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
#line 121
static __inline long1 make_long1(long x); 
#line 123
static __inline ulong1 make_ulong1(unsigned long x); 
#line 125
static __inline long2 make_long2(long x, long y); 
#line 127
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
#line 129
static __inline long3 make_long3(long x, long y, long z); 
#line 131
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
#line 133
static __inline long4 make_long4(long x, long y, long z, long w); 
#line 135
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
#line 137
static __inline float1 make_float1(float x); 
#line 139
static __inline float2 make_float2(float x, float y); 
#line 141
static __inline float3 make_float3(float x, float y, float z); 
#line 143
static __inline float4 make_float4(float x, float y, float z, float w); 
#line 145
static __inline longlong1 make_longlong1(__int64 x); 
#line 147
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x); 
#line 149
static __inline longlong2 make_longlong2(__int64 x, __int64 y); 
#line 151
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y); 
#line 153
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z); 
#line 155
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z); 
#line 157
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w); 
#line 159
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w); 
#line 161
static __inline double1 make_double1(double x); 
#line 163
static __inline double2 make_double2(double x, double y); 
#line 165
static __inline double3 make_double3(double x, double y, double z); 
#line 167
static __inline double4 make_double4(double x, double y, double z, double w); 
#line 73 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\vector_functions.hpp"
static __inline char1 make_char1(signed char x) 
#line 74
{ 
#line 75
char1 t; (t.x) = x; return t; 
#line 76
} 
#line 78
static __inline uchar1 make_uchar1(unsigned char x) 
#line 79
{ 
#line 80
uchar1 t; (t.x) = x; return t; 
#line 81
} 
#line 83
static __inline char2 make_char2(signed char x, signed char y) 
#line 84
{ 
#line 85
char2 t; (t.x) = x; (t.y) = y; return t; 
#line 86
} 
#line 88
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
#line 89
{ 
#line 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
#line 91
} 
#line 93
static __inline char3 make_char3(signed char x, signed char y, signed char z) 
#line 94
{ 
#line 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 96
} 
#line 98
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
#line 99
{ 
#line 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 101
} 
#line 103
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
#line 104
{ 
#line 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 106
} 
#line 108
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
#line 109
{ 
#line 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 111
} 
#line 113
static __inline short1 make_short1(short x) 
#line 114
{ 
#line 115
short1 t; (t.x) = x; return t; 
#line 116
} 
#line 118
static __inline ushort1 make_ushort1(unsigned short x) 
#line 119
{ 
#line 120
ushort1 t; (t.x) = x; return t; 
#line 121
} 
#line 123
static __inline short2 make_short2(short x, short y) 
#line 124
{ 
#line 125
short2 t; (t.x) = x; (t.y) = y; return t; 
#line 126
} 
#line 128
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
#line 129
{ 
#line 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
#line 131
} 
#line 133
static __inline short3 make_short3(short x, short y, short z) 
#line 134
{ 
#line 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 136
} 
#line 138
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
#line 139
{ 
#line 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 141
} 
#line 143
static __inline short4 make_short4(short x, short y, short z, short w) 
#line 144
{ 
#line 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 146
} 
#line 148
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
#line 149
{ 
#line 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 151
} 
#line 153
static __inline int1 make_int1(int x) 
#line 154
{ 
#line 155
int1 t; (t.x) = x; return t; 
#line 156
} 
#line 158
static __inline uint1 make_uint1(unsigned x) 
#line 159
{ 
#line 160
uint1 t; (t.x) = x; return t; 
#line 161
} 
#line 163
static __inline int2 make_int2(int x, int y) 
#line 164
{ 
#line 165
int2 t; (t.x) = x; (t.y) = y; return t; 
#line 166
} 
#line 168
static __inline uint2 make_uint2(unsigned x, unsigned y) 
#line 169
{ 
#line 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
#line 171
} 
#line 173
static __inline int3 make_int3(int x, int y, int z) 
#line 174
{ 
#line 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 176
} 
#line 178
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
#line 179
{ 
#line 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 181
} 
#line 183
static __inline int4 make_int4(int x, int y, int z, int w) 
#line 184
{ 
#line 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 186
} 
#line 188
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
#line 189
{ 
#line 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 191
} 
#line 193
static __inline long1 make_long1(long x) 
#line 194
{ 
#line 195
long1 t; (t.x) = x; return t; 
#line 196
} 
#line 198
static __inline ulong1 make_ulong1(unsigned long x) 
#line 199
{ 
#line 200
ulong1 t; (t.x) = x; return t; 
#line 201
} 
#line 203
static __inline long2 make_long2(long x, long y) 
#line 204
{ 
#line 205
long2 t; (t.x) = x; (t.y) = y; return t; 
#line 206
} 
#line 208
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
#line 209
{ 
#line 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
#line 211
} 
#line 213
static __inline long3 make_long3(long x, long y, long z) 
#line 214
{ 
#line 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 216
} 
#line 218
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
#line 219
{ 
#line 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 221
} 
#line 223
static __inline long4 make_long4(long x, long y, long z, long w) 
#line 224
{ 
#line 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 226
} 
#line 228
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
#line 229
{ 
#line 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 231
} 
#line 233
static __inline float1 make_float1(float x) 
#line 234
{ 
#line 235
float1 t; (t.x) = x; return t; 
#line 236
} 
#line 238
static __inline float2 make_float2(float x, float y) 
#line 239
{ 
#line 240
float2 t; (t.x) = x; (t.y) = y; return t; 
#line 241
} 
#line 243
static __inline float3 make_float3(float x, float y, float z) 
#line 244
{ 
#line 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 246
} 
#line 248
static __inline float4 make_float4(float x, float y, float z, float w) 
#line 249
{ 
#line 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 251
} 
#line 253
static __inline longlong1 make_longlong1(__int64 x) 
#line 254
{ 
#line 255
longlong1 t; (t.x) = x; return t; 
#line 256
} 
#line 258
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x) 
#line 259
{ 
#line 260
ulonglong1 t; (t.x) = x; return t; 
#line 261
} 
#line 263
static __inline longlong2 make_longlong2(__int64 x, __int64 y) 
#line 264
{ 
#line 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
#line 266
} 
#line 268
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y) 
#line 269
{ 
#line 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
#line 271
} 
#line 273
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z) 
#line 274
{ 
#line 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 276
} 
#line 278
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z) 
#line 279
{ 
#line 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 281
} 
#line 283
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w) 
#line 284
{ 
#line 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 286
} 
#line 288
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w) 
#line 289
{ 
#line 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 291
} 
#line 293
static __inline double1 make_double1(double x) 
#line 294
{ 
#line 295
double1 t; (t.x) = x; return t; 
#line 296
} 
#line 298
static __inline double2 make_double2(double x, double y) 
#line 299
{ 
#line 300
double2 t; (t.x) = x; (t.y) = y; return t; 
#line 301
} 
#line 303
static __inline double3 make_double3(double x, double y, double z) 
#line 304
{ 
#line 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 306
} 
#line 308
static __inline double4 make_double4(double x, double y, double z, double w) 
#line 309
{ 
#line 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 311
} 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\errno.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
__declspec(dllimport) int *__cdecl _errno(); 
#line 22
__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
#line 23
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 25
__declspec(dllimport) unsigned long *__cdecl __doserrno(); 
#line 28
__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 29
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\errno.h"
}__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_string.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 17
__pragma( pack ( push, 8 )) extern "C" {
#line 21
[[nodiscard]] const void *__cdecl 
#line 22
memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 28
[[nodiscard]] int __cdecl 
#line 29
memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 44 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_string.h"
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 51
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 64 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_string.h"
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 70
[[nodiscard]] const char *__cdecl 
#line 71
strchr(const char * _Str, int _Val); 
#line 76
[[nodiscard]] const char *__cdecl 
#line 77
strrchr(const char * _Str, int _Ch); 
#line 82
[[nodiscard]] const char *__cdecl 
#line 83
strstr(const char * _Str, const char * _SubStr); 
#line 88
[[nodiscard]] const __wchar_t *__cdecl 
#line 90
wcschr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 95
[[nodiscard]] const __wchar_t *__cdecl 
#line 96
wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 101
[[nodiscard]] const __wchar_t *__cdecl 
#line 103
wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); 
#line 110
}__pragma( pack ( pop )) 
#line 113 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_string.h"
#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_memcpy_s.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 35 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_memcpy_s.h"
static __inline errno_t __cdecl memcpy_s(void *const 
#line 36
_Destination, const rsize_t 
#line 37
_DestinationSize, const void *const 
#line 38
_Source, const rsize_t 
#line 39
_SourceSize) 
#line 41
{ 
#line 42
if (_SourceSize == (0)) 
#line 43
{ 
#line 44
return 0; 
#line 45
}  
#line 47
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 48
if ((_Source == (0)) || (_DestinationSize < _SourceSize)) 
#line 49
{ 
#line 50
memset(_Destination, 0, _DestinationSize); 
#line 52
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 53
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 56
return 22; 
#line 57
}  
#pragma warning(suppress:4996)
memcpy(_Destination, _Source, _SourceSize); 
#line 60
return 0; 
#line 61
} 
#line 64
static __inline errno_t __cdecl memmove_s(void *const 
#line 65
_Destination, const rsize_t 
#line 66
_DestinationSize, const void *const 
#line 67
_Source, const rsize_t 
#line 68
_SourceSize) 
#line 70
{ 
#line 71
if (_SourceSize == (0)) 
#line 72
{ 
#line 73
return 0; 
#line 74
}  
#line 76
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 77
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 78
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 80
#pragma warning(suppress:4996)
memmove(_Destination, _Source, _SourceSize); 
#line 82
return 0; 
#line 83
} 
#line 89 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_memcpy_s.h"
}__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_memory.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
__declspec(dllimport) int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 31
__declspec(dllimport) int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_memory.h"
__declspec(dllimport) void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 87
__declspec(dllimport) int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_memory.h"
extern "C++" inline void *__cdecl memchr(void *
#line 101
_Pv, int 
#line 102
_C, size_t 
#line 103
_N) 
#line 105
{ 
#line 106
const void *const _Pvc = _Pv; 
#line 107
return const_cast< void *>(memchr(_Pvc, _C, _N)); 
#line 108
} 
#line 114 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_memory.h"
}__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
__declspec(dllimport) errno_t __cdecl wcscat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 35
__declspec(dllimport) errno_t __cdecl wcscpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 42
__declspec(dllimport) errno_t __cdecl wcsncat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 50
__declspec(dllimport) errno_t __cdecl wcsncpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 58
__declspec(dllimport) __wchar_t *__cdecl wcstok_s(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wcsdup(const __wchar_t * _String); 
#line 89 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscat_s ( _Destination, _Size, _Source ); }}
#line 98 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) __wchar_t *__cdecl wcscat(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 106 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl wcscmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 114
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscpy_s ( _Destination, _Size, _Source ); }}
#line 121 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) __wchar_t *__cdecl wcscpy(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 129 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 132
__declspec(dllimport) size_t __cdecl wcscspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 138
__declspec(dllimport) size_t __cdecl wcslen(const __wchar_t * _String); 
#line 151 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) size_t __cdecl wcsnlen(const __wchar_t * _Source, size_t _MaxCount); 
#line 167 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
static __inline size_t __cdecl wcsnlen_s(const __wchar_t *
#line 168
_Source, size_t 
#line 169
_MaxCount) 
#line 171
{ 
#line 172
return (_Source == (0)) ? 0 : wcsnlen(_Source, _MaxCount); 
#line 173
} 
#line 176 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 184 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl wcsncat(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 193 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl wcsncmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 199
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 206 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl wcsncpy(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 215 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) const __wchar_t *__cdecl wcspbrk(const __wchar_t * _String, const __wchar_t * _Control); 
#line 221
__declspec(dllimport) size_t __cdecl wcsspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 227
__declspec(dllimport) __wchar_t *__cdecl wcstok(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 243 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4141 4996)
#pragma warning(disable: 28719 28726 28727)
#line 247
static __inline __wchar_t *__cdecl _wcstok(__wchar_t *const 
#line 248
_String, const __wchar_t *const 
#line 249
_Delimiter) 
#line 251
{ 
#line 252
return wcstok(_String, _Delimiter, 0); 
#line 253
} 
#line 261 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
extern "C++" 
#line 260
__declspec(deprecated("wcstok has been changed to conform with the ISO C standard, adding an extra context parameter. To use the legacy Microsoft wcsto" "k, define _CRT_NON_CONFORMING_WCSTOK.")) inline __wchar_t *__cdecl 
#line 261
wcstok(__wchar_t *
#line 262
_String, const __wchar_t *
#line 263
_Delimiter) throw() 
#line 265
{ 
#line 266
return wcstok(_String, _Delimiter, 0); 
#line 267
} 
#line 270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 278 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcserror(int _ErrorNumber); 
#line 283
__declspec(dllimport) errno_t __cdecl _wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 289
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) throw ( ) { return _wcserror_s ( _Buffer, _Size, _Error ); }}
#line 299 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl __wcserror(const __wchar_t * _String); 
#line 303
__declspec(dllimport) errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrorMessage); 
#line 309
extern "C++" {template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _ErrorMessage ) throw ( ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 315 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl _wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 320
__declspec(dllimport) int __cdecl _wcsicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 326
__declspec(dllimport) int __cdecl _wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 332
__declspec(dllimport) int __cdecl _wcsnicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 339
__declspec(dllimport) errno_t __cdecl _wcsnset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value, size_t _MaxCount); 
#line 346
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t _Value, size_t _MaxCount ) throw ( ) { return _wcsnset_s ( _Destination, _Size, _Value, _MaxCount ); }}
#line 353 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 361 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsrev(__wchar_t * _String); 
#line 365
__declspec(dllimport) errno_t __cdecl _wcsset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value); 
#line 371
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _String ) [ _Size ], wchar_t _Value ) throw ( ) { return _wcsset_s ( _String, _Size, _Value ); }}
#line 377 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 384 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcslwr_s(__wchar_t * _String, size_t _SizeInWords); 
#line 389
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcslwr_s ( _String, _Size ); }}
#line 394 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcslwr(__wchar_t * _String); 
#line 400 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcslwr_s_l(__wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 406
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }}
#line 412 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); 
#line 420 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcsupr_s(__wchar_t * _String, size_t _Size); 
#line 425
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcsupr_s ( _String, _Size ); }}
#line 430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsupr(__wchar_t * _String); 
#line 436 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcsupr_s_l(__wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 442
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }}
#line 448 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); 
#line 457 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) size_t __cdecl wcsxfrm(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount); 
#line 465
__declspec(dllimport) size_t __cdecl _wcsxfrm_l(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 473
__declspec(dllimport) int __cdecl wcscoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 479
__declspec(dllimport) int __cdecl _wcscoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 486
__declspec(dllimport) int __cdecl _wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 492
__declspec(dllimport) int __cdecl _wcsicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 499
__declspec(dllimport) int __cdecl _wcsncoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 506
__declspec(dllimport) int __cdecl _wcsncoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 514
__declspec(dllimport) int __cdecl _wcsnicoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 521
__declspec(dllimport) int __cdecl _wcsnicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 536
extern "C++" {
#line 540
inline __wchar_t *__cdecl wcschr(__wchar_t *_String, __wchar_t _C) 
#line 541
{ 
#line 542
return const_cast< __wchar_t *>(wcschr(static_cast< const __wchar_t *>(_String), _C)); 
#line 543
} 
#line 546
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_String, const __wchar_t *_Control) 
#line 547
{ 
#line 548
return const_cast< __wchar_t *>(wcspbrk(static_cast< const __wchar_t *>(_String), _Control)); 
#line 549
} 
#line 552
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_String, __wchar_t _C) 
#line 553
{ 
#line 554
return const_cast< __wchar_t *>(wcsrchr(static_cast< const __wchar_t *>(_String), _C)); 
#line 555
} 
#line 559
inline __wchar_t *__cdecl wcsstr(__wchar_t *_String, const __wchar_t *_SubStr) 
#line 560
{ 
#line 561
return const_cast< __wchar_t *>(wcsstr(static_cast< const __wchar_t *>(_String), _SubStr)); 
#line 562
} 
#line 564
}
#line 580 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __wchar_t *__cdecl wcsdup(const __wchar_t * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 598
__declspec(dllimport) int __cdecl wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 606
__declspec(dllimport) __wchar_t *__cdecl wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 614
__declspec(dllimport) __wchar_t *__cdecl wcsrev(__wchar_t * _String); 
#line 620
__declspec(dllimport) __wchar_t *__cdecl wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 627
__declspec(dllimport) __wchar_t *__cdecl wcslwr(__wchar_t * _String); 
#line 633
__declspec(dllimport) __wchar_t *__cdecl wcsupr(__wchar_t * _String); 
#line 638
__declspec(dllimport) int __cdecl wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 647 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstring.h"
}__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
__declspec(dllimport) errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 35
__declspec(dllimport) errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 42
__declspec(dllimport) errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 48
__declspec(dllimport) errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 56
__declspec(dllimport) errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 64
__declspec(dllimport) char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 72 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 79
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcat_s ( _Destination, _Size, _Source ); }}
#line 88 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 96 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
#pragma warning(pop)
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
__declspec(dllimport) int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
__declspec(dllimport) int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
__declspec(dllimport) int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 124
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcpy_s ( _Destination, _Size, _Source ); }}
#line 131 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 139 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
#pragma warning(pop)
#line 142
__declspec(dllimport) size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 152 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) __declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 163 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strerror(const char * _ErrorMessage); 
#line 168
__declspec(dllimport) errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 174
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], char const * _ErrorMessage ) throw ( ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 183 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strerror(int _ErrorMessage); 
#line 187
extern "C++" {template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) throw ( ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 194 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 200
__declspec(dllimport) int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 206
__declspec(dllimport) int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 213
__declspec(dllimport) int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 220
size_t __cdecl strlen(const char * _Str); 
#line 225
__declspec(dllimport) errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 230
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strlwr_s ( _String, _Size ); }}
#line 235 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strlwr(char * _String); 
#line 241 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 247
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strlwr_s_l ( _String, _Size, _Locale ); }}
#line 253 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 260 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 267 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 276 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 283
__declspec(dllimport) int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 290
__declspec(dllimport) int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 298
__declspec(dllimport) int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 305
__declspec(dllimport) int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 313
__declspec(dllimport) int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 320
__declspec(dllimport) int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 327
__declspec(dllimport) size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 332
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 339 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 356 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 372 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
static __inline size_t __cdecl strnlen_s(const char *
#line 373
_String, size_t 
#line 374
_MaxCount) 
#line 376
{ 
#line 377
return (_String == (0)) ? 0 : strnlen(_String, _MaxCount); 
#line 378
} 
#line 382 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 389
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Destination ) [ _Size ], int _Value, size_t _Count ) throw ( ) { return _strnset_s ( _Destination, _Size, _Value, _Count ); }}
#line 397 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 406 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) const char *__cdecl strpbrk(const char * _Str, const char * _Control); 
#line 411
__declspec(dllimport) char *__cdecl _strrev(char * _Str); 
#line 416
__declspec(dllimport) errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 422
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Destination ) [ _Size ], int _Value ) throw ( ) { return _strset_s ( _Destination, _Size, _Value ); }}
#line 428 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
char *__cdecl _strset(char * _Destination, int _Value); 
#line 435 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 441
__declspec(dllimport) char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 447
__declspec(dllimport) errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 452
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strupr_s ( _String, _Size ); }}
#line 457 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strupr(char * _String); 
#line 463 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 469
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strupr_s_l ( _String, _Size, _Locale ); }}
#line 475 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 484 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 492
__declspec(dllimport) size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 502
extern "C++" {
#line 505
inline char *__cdecl strchr(char *const _String, const int _Ch) 
#line 506
{ 
#line 507
return const_cast< char *>(strchr(static_cast< const char *>(_String), _Ch)); 
#line 508
} 
#line 511
inline char *__cdecl strpbrk(char *const _String, const char *const _Control) 
#line 512
{ 
#line 513
return const_cast< char *>(strpbrk(static_cast< const char *>(_String), _Control)); 
#line 514
} 
#line 517
inline char *__cdecl strrchr(char *const _String, const int _Ch) 
#line 518
{ 
#line 519
return const_cast< char *>(strrchr(static_cast< const char *>(_String), _Ch)); 
#line 520
} 
#line 523
inline char *__cdecl strstr(char *const _String, const char *const _SubString) 
#line 524
{ 
#line 525
return const_cast< char *>(strstr(static_cast< const char *>(_String), _SubString)); 
#line 526
} 
#line 527
}
#line 536 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strdup(const char * _String); 
#line 543
__declspec(dllimport) int __cdecl strcmpi(const char * _String1, const char * _String2); 
#line 549
__declspec(dllimport) int __cdecl stricmp(const char * _String1, const char * _String2); 
#line 555
__declspec(dllimport) char *__cdecl strlwr(char * _String); 
#line 560
__declspec(dllimport) int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 567
__declspec(dllimport) char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 574
__declspec(dllimport) char *__cdecl strrev(char * _String); 
#line 579
char *__cdecl strset(char * _String, int _Value); 
#line 584
__declspec(dllimport) char *__cdecl strupr(char * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\string.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 22
struct tm { 
#line 24
int tm_sec; 
#line 25
int tm_min; 
#line 26
int tm_hour; 
#line 27
int tm_mday; 
#line 28
int tm_mon; 
#line 29
int tm_year; 
#line 30
int tm_wday; 
#line 31
int tm_yday; 
#line 32
int tm_isdst; 
#line 33
}; 
#line 44
__declspec(dllimport) __wchar_t *__cdecl _wasctime(const tm * _Tm); 
#line 50
__declspec(dllimport) errno_t __cdecl _wasctime_s(__wchar_t * _Buffer, size_t _SizeInWords, const tm * _Tm); 
#line 56
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wasctime_s ( wchar_t ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return _wasctime_s ( _Buffer, _Size, _Time ); }}
#line 66 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) size_t __cdecl wcsftime(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm); 
#line 75
__declspec(dllimport) size_t __cdecl _wcsftime_l(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm, _locale_t _Locale); 
#line 85
__declspec(dllimport) __wchar_t *__cdecl _wctime32(const __time32_t * _Time); 
#line 90
__declspec(dllimport) errno_t __cdecl _wctime32_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time32_t * _Time); 
#line 96
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime32_s ( wchar_t ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _wctime32_s ( _Buffer, _Size, _Time ); }}
#line 105 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) __wchar_t *__cdecl _wctime64(const __time64_t * _Time); 
#line 110
__declspec(dllimport) errno_t __cdecl _wctime64_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time64_t * _Time); 
#line 115
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime64_s ( wchar_t ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _wctime64_s ( _Buffer, _Size, _Time ); }}
#line 122 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) errno_t __cdecl _wstrdate_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 127
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrdate_s ( _Buffer, _Size ); }}
#line 132 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) __wchar_t *__cdecl _wstrdate(__wchar_t * _Buffer); 
#line 138 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) errno_t __cdecl _wstrtime_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 143
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrtime_s ( _Buffer, _Size ); }}
#line 148 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
__declspec(dllimport) __wchar_t *__cdecl _wstrtime(__wchar_t * _Buffer); 
#line 161 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#line 186
static __inline __wchar_t *__cdecl _wctime(const time_t *const 
#line 187
_Time) 
#line 188
{ 
#line 189
return _wctime64(_Time); 
#line 190
} 
#line 193
static __inline errno_t __cdecl _wctime_s(__wchar_t *const 
#line 194
_Buffer, const size_t 
#line 195
_SizeInWords, const time_t *const 
#line 196
_Time) 
#line 198
{ 
#line 199
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
#line 200
} 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
}
#line 203 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
#pragma warning(pop)
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
typedef long clock_t; 
#line 26
struct _timespec32 { 
#line 28
__time32_t tv_sec; 
#line 29
long tv_nsec; 
#line 30
}; 
#line 32
struct _timespec64 { 
#line 34
__time64_t tv_sec; 
#line 35
long tv_nsec; 
#line 36
}; 
#line 39
struct timespec { 
#line 41
time_t tv_sec; 
#line 42
long tv_nsec; 
#line 43
}; 
#line 62 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) int *__cdecl __daylight(); 
#line 68
__declspec(dllimport) long *__cdecl __dstbias(); 
#line 74
__declspec(dllimport) long *__cdecl __timezone(); 
#line 80
__declspec(dllimport) char **__cdecl __tzname(); 
#line 85
__declspec(dllimport) errno_t __cdecl _get_daylight(int * _Daylight); 
#line 90
__declspec(dllimport) errno_t __cdecl _get_dstbias(long * _DaylightSavingsBias); 
#line 95
__declspec(dllimport) errno_t __cdecl _get_timezone(long * _TimeZone); 
#line 100
__declspec(dllimport) errno_t __cdecl _get_tzname(size_t * _ReturnValue, char * _Buffer, size_t _SizeInBytes, int _Index); 
#line 117
__declspec(dllimport) char *__cdecl asctime(const tm * _Tm); 
#line 124
__declspec(dllimport) errno_t __cdecl asctime_s(char * _Buffer, size_t _SizeInBytes, const tm * _Tm); 
#line 131 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl asctime_s ( char ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return asctime_s ( _Buffer, _Size, _Time ); }}
#line 139 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) clock_t __cdecl clock(); 
#line 144
__declspec(dllimport) char *__cdecl _ctime32(const __time32_t * _Time); 
#line 149
__declspec(dllimport) errno_t __cdecl _ctime32_s(char * _Buffer, size_t _SizeInBytes, const __time32_t * _Time); 
#line 155
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime32_s ( char ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _ctime32_s ( _Buffer, _Size, _Time ); }}
#line 164 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) char *__cdecl _ctime64(const __time64_t * _Time); 
#line 169
__declspec(dllimport) errno_t __cdecl _ctime64_s(char * _Buffer, size_t _SizeInBytes, const __time64_t * _Time); 
#line 175
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime64_s ( char ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _ctime64_s ( _Buffer, _Size, _Time ); }}
#line 182 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) double __cdecl _difftime32(__time32_t _Time1, __time32_t _Time2); 
#line 188
__declspec(dllimport) double __cdecl _difftime64(__time64_t _Time1, __time64_t _Time2); 
#line 195
__declspec(dllimport) tm *__cdecl _gmtime32(const __time32_t * _Time); 
#line 200
__declspec(dllimport) errno_t __cdecl _gmtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 207
__declspec(dllimport) tm *__cdecl _gmtime64(const __time64_t * _Time); 
#line 212
__declspec(dllimport) errno_t __cdecl _gmtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 219
__declspec(dllimport) tm *__cdecl _localtime32(const __time32_t * _Time); 
#line 224
__declspec(dllimport) errno_t __cdecl _localtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 231
__declspec(dllimport) tm *__cdecl _localtime64(const __time64_t * _Time); 
#line 236
__declspec(dllimport) errno_t __cdecl _localtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 242
__declspec(dllimport) __time32_t __cdecl _mkgmtime32(tm * _Tm); 
#line 247
__declspec(dllimport) __time64_t __cdecl _mkgmtime64(tm * _Tm); 
#line 252
__declspec(dllimport) __time32_t __cdecl _mktime32(tm * _Tm); 
#line 257
__declspec(dllimport) __time64_t __cdecl _mktime64(tm * _Tm); 
#line 263
__declspec(dllimport) size_t __cdecl strftime(char * _Buffer, size_t _SizeInBytes, const char * _Format, const tm * _Tm); 
#line 272
__declspec(dllimport) size_t __cdecl _strftime_l(char * _Buffer, size_t _MaxSize, const char * _Format, const tm * _Tm, _locale_t _Locale); 
#line 281
__declspec(dllimport) errno_t __cdecl _strdate_s(char * _Buffer, size_t _SizeInBytes); 
#line 286
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strdate_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strdate_s ( _Buffer, _Size ); }}
#line 291 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) char *__cdecl _strdate(char * _Buffer); 
#line 297 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) errno_t __cdecl _strtime_s(char * _Buffer, size_t _SizeInBytes); 
#line 302
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strtime_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strtime_s ( _Buffer, _Size ); }}
#line 307 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) char *__cdecl _strtime(char * _Buffer); 
#line 312 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) __time32_t __cdecl _time32(__time32_t * _Time); 
#line 316
__declspec(dllimport) __time64_t __cdecl _time64(__time64_t * _Time); 
#line 322
__declspec(dllimport) int __cdecl _timespec32_get(_timespec32 * _Ts, int _Base); 
#line 329
__declspec(dllimport) int __cdecl _timespec64_get(_timespec64 * _Ts, int _Base); 
#line 343
__declspec(dllimport) void __cdecl _tzset(); 
#line 346
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetLocalTime in" "stead. See online help for details.")) 
#line 347
__declspec(dllimport) unsigned __cdecl _getsystime(tm * _Tm); 
#line 351
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetLocalTime in" "stead. See online help for details.")) 
#line 352
__declspec(dllimport) unsigned __cdecl _setsystime(tm * _Tm, unsigned _Milliseconds); 
#line 476 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
static __inline char *__cdecl ctime(const time_t *const 
#line 477
_Time) 
#line 479
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _ctime64(_Time); 
#pragma warning(pop)
} 
#line 487
static __inline double __cdecl difftime(const time_t 
#line 488
_Time1, const time_t 
#line 489
_Time2) 
#line 491
{ 
#line 492
return _difftime64(_Time1, _Time2); 
#line 493
} 
#line 496
static __inline tm *__cdecl gmtime(const time_t *const 
#line 497
_Time) 
#line 498
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _gmtime64(_Time); 
#pragma warning(pop)
} 
#line 506
static __inline tm *__cdecl localtime(const time_t *const 
#line 507
_Time) 
#line 509
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _localtime64(_Time); 
#pragma warning(pop)
} 
#line 517
static __inline time_t __cdecl _mkgmtime(tm *const 
#line 518
_Tm) 
#line 520
{ 
#line 521
return _mkgmtime64(_Tm); 
#line 522
} 
#line 525
static __inline time_t __cdecl mktime(tm *const 
#line 526
_Tm) 
#line 528
{ 
#line 529
return _mktime64(_Tm); 
#line 530
} 
#line 532
static __inline time_t __cdecl time(time_t *const 
#line 533
_Time) 
#line 535
{ 
#line 536
return _time64(_Time); 
#line 537
} 
#line 540
static __inline int __cdecl timespec_get(timespec *const 
#line 541
_Ts, const int 
#line 542
_Base) 
#line 544
{ 
#line 545
return _timespec64_get((_timespec64 *)_Ts, _Base); 
#line 546
} 
#line 550
static __inline errno_t __cdecl ctime_s(char *const 
#line 551
_Buffer, const size_t 
#line 552
_SizeInBytes, const time_t *const 
#line 553
_Time) 
#line 555
{ 
#line 556
return _ctime64_s(_Buffer, _SizeInBytes, _Time); 
#line 557
} 
#line 560
static __inline errno_t __cdecl gmtime_s(tm *const 
#line 561
_Tm, const time_t *const 
#line 562
_Time) 
#line 564
{ 
#line 565
return _gmtime64_s(_Tm, _Time); 
#line 566
} 
#line 569
static __inline errno_t __cdecl localtime_s(tm *const 
#line 570
_Tm, const time_t *const 
#line 571
_Time) 
#line 573
{ 
#line 574
return _localtime64_s(_Tm, _Time); 
#line 575
} 
#line 594 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
__declspec(dllimport) void __cdecl tzset(); 
#line 601 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\time.h"
}__pragma( pack ( pop )) 
#line 80 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt/common_functions.h"
extern "C" {
#line 83 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt/common_functions.h"
__declspec(dllimport) extern clock_t __cdecl clock(); 
#line 88 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt/common_functions.h"
extern void *__cdecl memset(void *, int, size_t); 
#line 89
extern void *__cdecl memcpy(void *, const void *, size_t); 
#line 91
}
#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern "C" {
#line 192 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern int __cdecl abs(int); 
#line 193
extern long __cdecl labs(long); 
#line 194
extern __int64 llabs(__int64); 
#line 244 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double __cdecl fabs(double x); 
#line 285
extern __inline float fabsf(float x); 
#line 289 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline int min(int, int); 
#line 291
extern inline unsigned umin(unsigned, unsigned); 
#line 292
extern inline __int64 llmin(__int64, __int64); 
#line 293
extern inline unsigned __int64 ullmin(unsigned __int64, unsigned __int64); 
#line 316 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl fminf(float x, float y); 
#line 336 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl fmin(double x, double y); 
#line 341 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline int max(int, int); 
#line 343
extern inline unsigned umax(unsigned, unsigned); 
#line 344
extern inline __int64 llmax(__int64, __int64); 
#line 345
extern inline unsigned __int64 ullmax(unsigned __int64, unsigned __int64); 
#line 368 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl fmaxf(float x, float y); 
#line 388 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl fmax(double, double); 
#line 430 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double __cdecl sin(double x); 
#line 463
extern double __cdecl cos(double x); 
#line 482 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern void sincos(double x, double * sptr, double * cptr); 
#line 498
extern void sincosf(float x, float * sptr, float * cptr); 
#line 543 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double __cdecl tan(double x); 
#line 612
extern double __cdecl sqrt(double x); 
#line 684 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double rsqrt(double x); 
#line 754
extern float rsqrtf(float x); 
#line 812 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl log2(double x); 
#line 837 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl exp2(double x); 
#line 862 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl exp2f(float x); 
#line 887 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double exp10(double x); 
#line 910
extern float exp10f(float x); 
#line 958 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl expm1(double x); 
#line 1003 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl expm1f(float x); 
#line 1058 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl log2f(float x); 
#line 1110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double __cdecl log10(double x); 
#line 1181
extern double __cdecl log(double x); 
#line 1277 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl log1p(double x); 
#line 1374 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl log1pf(float x); 
#line 1436 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl floor(double x); 
#line 1475
extern double __cdecl exp(double x); 
#line 1506
extern double __cdecl cosh(double x); 
#line 1536
extern double __cdecl sinh(double x); 
#line 1566
extern double __cdecl tanh(double x); 
#line 1603 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl acosh(double x); 
#line 1641 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl acoshf(float x); 
#line 1657 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl asinh(double x); 
#line 1673 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl asinhf(float x); 
#line 1727 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl atanh(double x); 
#line 1781 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl atanhf(float x); 
#line 1838 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl ldexp(double x, int exp); 
#line 1894
extern __inline float ldexpf(float x, int exp); 
#line 1948 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl logb(double x); 
#line 2003 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl logbf(float x); 
#line 2033 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern int __cdecl ilogb(double x); 
#line 2063 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern int __cdecl ilogbf(float x); 
#line 2139 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl scalbn(double x, int n); 
#line 2215 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl scalbnf(float x, int n); 
#line 2291 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl scalbln(double x, long n); 
#line 2367 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl scalblnf(float x, long n); 
#line 2443 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl frexp(double x, int * nptr); 
#line 2518
extern __inline float frexpf(float x, int * nptr); 
#line 2534 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl round(double x); 
#line 2551 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl roundf(float x); 
#line 2569 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern long __cdecl lround(double x); 
#line 2587 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern long __cdecl lroundf(float x); 
#line 2605 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern __int64 __cdecl llround(double x); 
#line 2623 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern __int64 __cdecl llroundf(float x); 
#line 2675 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl rintf(float x); 
#line 2692 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern long __cdecl lrint(double x); 
#line 2709 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern long __cdecl lrintf(float x); 
#line 2726 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern __int64 __cdecl llrint(double x); 
#line 2743 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern __int64 __cdecl llrintf(float x); 
#line 2796 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl nearbyint(double x); 
#line 2849 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl nearbyintf(float x); 
#line 2909 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl ceil(double x); 
#line 2923 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl trunc(double x); 
#line 2938 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl truncf(float x); 
#line 2964 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl fdim(double x, double y); 
#line 2990 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl fdimf(float x, float y); 
#line 3024 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double __cdecl atan2(double y, double x); 
#line 3055
extern double __cdecl atan(double x); 
#line 3078
extern double __cdecl acos(double x); 
#line 3110
extern double __cdecl asin(double x); 
#line 3153 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl hypot(double x, double y); 
#line 3208 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double rhypot(double x, double y); 
#line 3252 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline float __cdecl hypotf(float x, float y); 
#line 3306 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern float rhypotf(float x, float y); 
#line 3350
__declspec(dllimport) extern double __cdecl norm3d(double a, double b, double c); 
#line 3401
extern double rnorm3d(double a, double b, double c); 
#line 3450
__declspec(dllimport) extern double __cdecl norm4d(double a, double b, double c, double d); 
#line 3506
extern double rnorm4d(double a, double b, double c, double d); 
#line 3551
extern double norm(int dim, const double * t); 
#line 3602
extern double rnorm(int dim, const double * t); 
#line 3654
extern float rnormf(int dim, const float * a); 
#line 3698
extern float normf(int dim, const float * a); 
#line 3743
extern float norm3df(float a, float b, float c); 
#line 3794
extern float rnorm3df(float a, float b, float c); 
#line 3843
extern float norm4df(float a, float b, float c, float d); 
#line 3899
extern float rnorm4df(float a, float b, float c, float d); 
#line 3988 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl cbrt(double x); 
#line 4074 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl cbrtf(float x); 
#line 4127 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double rcbrt(double x); 
#line 4177
extern float rcbrtf(float x); 
#line 4237
extern double sinpi(double x); 
#line 4297
extern float sinpif(float x); 
#line 4349
extern double cospi(double x); 
#line 4401
extern float cospif(float x); 
#line 4431
extern void sincospi(double x, double * sptr, double * cptr); 
#line 4461
extern void sincospif(float x, float * sptr, float * cptr); 
#line 4773 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double __cdecl pow(double x, double y); 
#line 4829
__declspec(dllimport) extern double __cdecl modf(double x, double * iptr); 
#line 4888
extern double __cdecl fmod(double x, double y); 
#line 4976 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl remainder(double x, double y); 
#line 5066 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl remainderf(float x, float y); 
#line 5120 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl remquo(double x, double y, int * quo); 
#line 5174 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl remquof(float x, float y, int * quo); 
#line 5213 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl j0(double x); 
#line 5255 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern float j0f(float x); 
#line 5316 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl j1(double x); 
#line 5377 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern float j1f(float x); 
#line 5420 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl jn(int n, double x); 
#line 5463 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern float jnf(int n, float x); 
#line 5515 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl y0(double x); 
#line 5567 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern float y0f(float x); 
#line 5619 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl y1(double x); 
#line 5671 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern float y1f(float x); 
#line 5724 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl yn(int n, double x); 
#line 5777 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern float ynf(int n, float x); 
#line 5804
__declspec(dllimport) extern double __cdecl cyl_bessel_i0(double x); 
#line 5830
extern float cyl_bessel_i0f(float x); 
#line 5857
__declspec(dllimport) extern double __cdecl cyl_bessel_i1(double x); 
#line 5883
extern float cyl_bessel_i1f(float x); 
#line 5968 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl erf(double x); 
#line 6050 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl erff(float x); 
#line 6112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double erfinv(double y); 
#line 6169
extern float erfinvf(float y); 
#line 6210 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl erfc(double x); 
#line 6248 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl erfcf(float x); 
#line 6376 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl lgamma(double x); 
#line 6437 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern double erfcinv(double y); 
#line 6493
extern float erfcinvf(float y); 
#line 6551
extern double normcdfinv(double y); 
#line 6609
extern float normcdfinvf(float y); 
#line 6652
extern double normcdf(double y); 
#line 6695
extern float normcdff(float y); 
#line 6770
extern double erfcx(double x); 
#line 6845
extern float erfcxf(float x); 
#line 6981 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl lgammaf(float x); 
#line 7090 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl tgamma(double x); 
#line 7199 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl tgammaf(float x); 
#line 7212 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl copysign(double x, double y); 
#line 7225 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl copysignf(float x, float y); 
#line 7262 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl nextafter(double x, double y); 
#line 7299 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl nextafterf(float x, float y); 
#line 7315 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl nan(const char * tagp); 
#line 7331 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl nanf(const char * tagp); 
#line 7336 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern int __isinff(float); 
#line 7337
extern int __isnanf(float); 
#line 7347 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern int __finite(double); 
#line 7348
extern int __finitef(float); 
#line 7349
extern int __signbit(double); 
#line 7350
extern int __isnan(double); 
#line 7351
extern int __isinf(double); 
#line 7354 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern int __signbitf(float); 
#line 7515 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern double __cdecl fma(double x, double y, double z); 
#line 7673 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl fmaf(float x, float y, float z); 
#line 7682 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern int __signbitl(long double); 
#line 7688 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern int __finitel(long double); 
#line 7689
extern int __isinfl(long double); 
#line 7690
extern int __isnanl(long double); 
#line 7694 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
__declspec(dllimport) extern float __cdecl acosf(float); 
#line 7695
__declspec(dllimport) extern float __cdecl asinf(float); 
#line 7696
__declspec(dllimport) extern float __cdecl atanf(float); 
#line 7697
__declspec(dllimport) extern float __cdecl atan2f(float, float); 
#line 7698
__declspec(dllimport) extern float __cdecl cosf(float); 
#line 7699
__declspec(dllimport) extern float __cdecl sinf(float); 
#line 7700
__declspec(dllimport) extern float __cdecl tanf(float); 
#line 7701
__declspec(dllimport) extern float __cdecl coshf(float); 
#line 7702
__declspec(dllimport) extern float __cdecl sinhf(float); 
#line 7703
__declspec(dllimport) extern float __cdecl tanhf(float); 
#line 7704
__declspec(dllimport) extern float __cdecl expf(float); 
#line 7705
__declspec(dllimport) extern float __cdecl logf(float); 
#line 7706
__declspec(dllimport) extern float __cdecl log10f(float); 
#line 7707
__declspec(dllimport) extern float __cdecl modff(float, float *); 
#line 7708
__declspec(dllimport) extern float __cdecl powf(float, float); 
#line 7709
__declspec(dllimport) extern float __cdecl sqrtf(float); 
#line 7710
__declspec(dllimport) extern float __cdecl ceilf(float); 
#line 7711
__declspec(dllimport) extern float __cdecl floorf(float); 
#line 7712
__declspec(dllimport) extern float __cdecl fmodf(float, float); 
#line 8834 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
}
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 16
#pragma warning(push)
#pragma warning(disable:4738)
#pragma warning(disable:4820)
#line 25
struct _exception { 
#line 27
int type; 
#line 28
char *name; 
#line 29
double arg1; 
#line 30
double arg2; 
#line 31
double retval; 
#line 32
}; 
#line 39
struct _complex { 
#line 41
double x, y; 
#line 42
}; 
#line 61 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
typedef float float_t; 
#line 62
typedef double double_t; 
#line 80 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
extern const double _HUGE; 
#line 171 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
void __cdecl _fperrraise(int _Except); 
#line 173
__declspec(dllimport) short __cdecl _dclass(double _X); 
#line 174
__declspec(dllimport) short __cdecl _ldclass(long double _X); 
#line 175
__declspec(dllimport) short __cdecl _fdclass(float _X); 
#line 177
__declspec(dllimport) int __cdecl _dsign(double _X); 
#line 178
__declspec(dllimport) int __cdecl _ldsign(long double _X); 
#line 179
__declspec(dllimport) int __cdecl _fdsign(float _X); 
#line 181
__declspec(dllimport) int __cdecl _dpcomp(double _X, double _Y); 
#line 182
__declspec(dllimport) int __cdecl _ldpcomp(long double _X, long double _Y); 
#line 183
__declspec(dllimport) int __cdecl _fdpcomp(float _X, float _Y); 
#line 185
__declspec(dllimport) short __cdecl _dtest(double * _Px); 
#line 186
__declspec(dllimport) short __cdecl _ldtest(long double * _Px); 
#line 187
__declspec(dllimport) short __cdecl _fdtest(float * _Px); 
#line 189
__declspec(dllimport) short __cdecl _d_int(double * _Px, short _Xexp); 
#line 190
__declspec(dllimport) short __cdecl _ld_int(long double * _Px, short _Xexp); 
#line 191
__declspec(dllimport) short __cdecl _fd_int(float * _Px, short _Xexp); 
#line 193
__declspec(dllimport) short __cdecl _dscale(double * _Px, long _Lexp); 
#line 194
__declspec(dllimport) short __cdecl _ldscale(long double * _Px, long _Lexp); 
#line 195
__declspec(dllimport) short __cdecl _fdscale(float * _Px, long _Lexp); 
#line 197
__declspec(dllimport) short __cdecl _dunscale(short * _Pex, double * _Px); 
#line 198
__declspec(dllimport) short __cdecl _ldunscale(short * _Pex, long double * _Px); 
#line 199
__declspec(dllimport) short __cdecl _fdunscale(short * _Pex, float * _Px); 
#line 201
__declspec(dllimport) short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
#line 202
__declspec(dllimport) short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
#line 203
__declspec(dllimport) short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 
#line 205
__declspec(dllimport) short __cdecl _dnorm(unsigned short * _Ps); 
#line 206
__declspec(dllimport) short __cdecl _fdnorm(unsigned short * _Ps); 
#line 208
__declspec(dllimport) double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
#line 209
__declspec(dllimport) long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
#line 210
__declspec(dllimport) float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 
#line 212
__declspec(dllimport) double __cdecl _dlog(double _X, int _Baseflag); 
#line 213
__declspec(dllimport) long double __cdecl _ldlog(long double _X, int _Baseflag); 
#line 214
__declspec(dllimport) float __cdecl _fdlog(float _X, int _Baseflag); 
#line 216
__declspec(dllimport) double __cdecl _dsin(double _X, unsigned _Qoff); 
#line 217
__declspec(dllimport) long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
#line 218
__declspec(dllimport) float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 225
typedef 
#line 222
union { 
#line 223
unsigned short _Sh[4]; 
#line 224
double _Val; 
#line 225
} _double_val; 
#line 232
typedef 
#line 229
union { 
#line 230
unsigned short _Sh[2]; 
#line 231
float _Val; 
#line 232
} _float_val; 
#line 239
typedef 
#line 236
union { 
#line 237
unsigned short _Sh[4]; 
#line 238
long double _Val; 
#line 239
} _ldouble_val; 
#line 247
typedef 
#line 242
union { 
#line 243
unsigned short _Word[4]; 
#line 244
float _Float; 
#line 245
double _Double; 
#line 246
long double _Long_double; 
#line 247
} _float_const; 
#line 249
extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
#line 250
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
#line 251
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 
#line 253
extern const _float_const _Eps_C, _Rteps_C; 
#line 254
extern const _float_const _FEps_C, _FRteps_C; 
#line 255
extern const _float_const _LEps_C, _LRteps_C; 
#line 257
extern const double _Zero_C, _Xbig_C; 
#line 258
extern const float _FZero_C, _FXbig_C; 
#line 259
extern const long double _LZero_C, _LXbig_C; 
#line 288
extern "C++" {
#line 290
inline int fpclassify(float _X) throw() 
#line 291
{ 
#line 292
return _fdtest(&_X); 
#line 293
} 
#line 295
inline int fpclassify(double _X) throw() 
#line 296
{ 
#line 297
return _dtest(&_X); 
#line 298
} 
#line 300
inline int fpclassify(long double _X) throw() 
#line 301
{ 
#line 302
return _ldtest(&_X); 
#line 303
} 
#line 305
inline bool signbit(float _X) throw() 
#line 306
{ 
#line 307
return _fdsign(_X) != 0; 
#line 308
} 
#line 310
inline bool signbit(double _X) throw() 
#line 311
{ 
#line 312
return _dsign(_X) != 0; 
#line 313
} 
#line 315
inline bool signbit(long double _X) throw() 
#line 316
{ 
#line 317
return _ldsign(_X) != 0; 
#line 318
} 
#line 320
inline int _fpcomp(float _X, float _Y) throw() 
#line 321
{ 
#line 322
return _fdpcomp(_X, _Y); 
#line 323
} 
#line 325
inline int _fpcomp(double _X, double _Y) throw() 
#line 326
{ 
#line 327
return _dpcomp(_X, _Y); 
#line 328
} 
#line 330
inline int _fpcomp(long double _X, long double _Y) throw() 
#line 331
{ 
#line 332
return _ldpcomp(_X, _Y); 
#line 333
} 
#line 335
template< class _Trc, class _Tre> struct _Combined_type { 
#line 337
typedef float _Type; 
#line 338
}; 
#line 340
template<> struct _Combined_type< float, double>  { 
#line 342
typedef double _Type; 
#line 343
}; 
#line 345
template<> struct _Combined_type< float, long double>  { 
#line 347
typedef long double _Type; 
#line 348
}; 
#line 350
template< class _Ty, class _T2> struct _Real_widened { 
#line 352
typedef long double _Type; 
#line 353
}; 
#line 355
template<> struct _Real_widened< float, float>  { 
#line 357
typedef float _Type; 
#line 358
}; 
#line 360
template<> struct _Real_widened< float, double>  { 
#line 362
typedef double _Type; 
#line 363
}; 
#line 365
template<> struct _Real_widened< double, float>  { 
#line 367
typedef double _Type; 
#line 368
}; 
#line 370
template<> struct _Real_widened< double, double>  { 
#line 372
typedef double _Type; 
#line 373
}; 
#line 375
template< class _Ty> struct _Real_type { 
#line 377
typedef double _Type; 
#line 378
}; 
#line 380
template<> struct _Real_type< float>  { 
#line 382
typedef float _Type; 
#line 383
}; 
#line 385
template<> struct _Real_type< long double>  { 
#line 387
typedef long double _Type; 
#line 388
}; 
#line 390
template < class _T1, class _T2 >
      inline int _fpcomp ( _T1 _X, _T2 _Y ) throw ( )
    {
        typedef typename _Combined_type < float,
            typename _Real_widened <
            typename _Real_type < _T1 > :: _Type,
            typename _Real_type < _T2 > :: _Type > :: _Type > :: _Type _Tw;
        return _fpcomp ( ( _Tw ) _X, ( _Tw ) _Y );
    }
#line 400
template < class _Ty >
      inline bool isfinite ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) <= 0;
    }
#line 406
template < class _Ty >
      inline bool isinf ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 1;
    }
#line 412
template < class _Ty >
      inline bool isnan ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 2;
    }
#line 418
template < class _Ty >
      inline bool isnormal ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == ( - 1 );
    }
#line 424
template < class _Ty1, class _Ty2 >
      inline bool isgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 4 ) != 0;
    }
#line 430
template < class _Ty1, class _Ty2 >
      inline bool isgreaterequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 2 | 4 ) ) != 0;
    }
#line 436
template < class _Ty1, class _Ty2 >
      inline bool isless ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 1 ) != 0;
    }
#line 442
template < class _Ty1, class _Ty2 >
      inline bool islessequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 2 ) ) != 0;
    }
#line 448
template < class _Ty1, class _Ty2 >
      inline bool islessgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 4 ) ) != 0;
    }
#line 454
template < class _Ty1, class _Ty2 >
      inline bool isunordered ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return _fpcomp ( _X, _Y ) == 0;
    }
#line 459
}
#line 466 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
int __cdecl abs(int _X); 
#line 467
long __cdecl labs(long _X); 
#line 468
__int64 __cdecl llabs(__int64 _X); 
#line 470
double __cdecl acos(double _X); 
#line 471
double __cdecl asin(double _X); 
#line 472
double __cdecl atan(double _X); 
#line 473
double __cdecl atan2(double _Y, double _X); 
#line 475
double __cdecl cos(double _X); 
#line 476
double __cdecl cosh(double _X); 
#line 477
double __cdecl exp(double _X); 
#line 478
double __cdecl fabs(double _X); 
#line 479
double __cdecl fmod(double _X, double _Y); 
#line 480
double __cdecl log(double _X); 
#line 481
double __cdecl log10(double _X); 
#line 482
double __cdecl pow(double _X, double _Y); 
#line 483
double __cdecl sin(double _X); 
#line 484
double __cdecl sinh(double _X); 
#line 485
double __cdecl sqrt(double _X); 
#line 486
double __cdecl tan(double _X); 
#line 487
double __cdecl tanh(double _X); 
#line 489
__declspec(dllimport) double __cdecl acosh(double _X); 
#line 490
__declspec(dllimport) double __cdecl asinh(double _X); 
#line 491
__declspec(dllimport) double __cdecl atanh(double _X); 
#line 492
__declspec(dllimport) double __cdecl atof(const char * _String); 
#line 493
__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 494
__declspec(dllimport) double __cdecl _cabs(_complex _Complex_value); 
#line 495
__declspec(dllimport) double __cdecl cbrt(double _X); 
#line 496
__declspec(dllimport) double __cdecl ceil(double _X); 
#line 497
__declspec(dllimport) double __cdecl _chgsign(double _X); 
#line 498
__declspec(dllimport) double __cdecl copysign(double _Number, double _Sign); 
#line 499
__declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); 
#line 500
__declspec(dllimport) double __cdecl erf(double _X); 
#line 501
__declspec(dllimport) double __cdecl erfc(double _X); 
#line 502
__declspec(dllimport) double __cdecl exp2(double _X); 
#line 503
__declspec(dllimport) double __cdecl expm1(double _X); 
#line 504
__declspec(dllimport) double __cdecl fdim(double _X, double _Y); 
#line 505
__declspec(dllimport) double __cdecl floor(double _X); 
#line 506
__declspec(dllimport) double __cdecl fma(double _X, double _Y, double _Z); 
#line 507
__declspec(dllimport) double __cdecl fmax(double _X, double _Y); 
#line 508
__declspec(dllimport) double __cdecl fmin(double _X, double _Y); 
#line 509
__declspec(dllimport) double __cdecl frexp(double _X, int * _Y); 
#line 510
__declspec(dllimport) double __cdecl hypot(double _X, double _Y); 
#line 511
__declspec(dllimport) double __cdecl _hypot(double _X, double _Y); 
#line 512
__declspec(dllimport) int __cdecl ilogb(double _X); 
#line 513
__declspec(dllimport) double __cdecl ldexp(double _X, int _Y); 
#line 514
__declspec(dllimport) double __cdecl lgamma(double _X); 
#line 515
__declspec(dllimport) __int64 __cdecl llrint(double _X); 
#line 516
__declspec(dllimport) __int64 __cdecl llround(double _X); 
#line 517
__declspec(dllimport) double __cdecl log1p(double _X); 
#line 518
__declspec(dllimport) double __cdecl log2(double _X); 
#line 519
__declspec(dllimport) double __cdecl logb(double _X); 
#line 520
__declspec(dllimport) long __cdecl lrint(double _X); 
#line 521
__declspec(dllimport) long __cdecl lround(double _X); 
#line 523
int __cdecl _matherr(_exception * _Except); 
#line 525
__declspec(dllimport) double __cdecl modf(double _X, double * _Y); 
#line 526
__declspec(dllimport) double __cdecl nan(const char * _X); 
#line 527
__declspec(dllimport) double __cdecl nearbyint(double _X); 
#line 528
__declspec(dllimport) double __cdecl nextafter(double _X, double _Y); 
#line 529
__declspec(dllimport) double __cdecl nexttoward(double _X, long double _Y); 
#line 530
__declspec(dllimport) double __cdecl remainder(double _X, double _Y); 
#line 531
__declspec(dllimport) double __cdecl remquo(double _X, double _Y, int * _Z); 
#line 532
__declspec(dllimport) double __cdecl rint(double _X); 
#line 533
__declspec(dllimport) double __cdecl round(double _X); 
#line 534
__declspec(dllimport) double __cdecl scalbln(double _X, long _Y); 
#line 535
__declspec(dllimport) double __cdecl scalbn(double _X, int _Y); 
#line 536
__declspec(dllimport) double __cdecl tgamma(double _X); 
#line 537
__declspec(dllimport) double __cdecl trunc(double _X); 
#line 538
__declspec(dllimport) double __cdecl _j0(double _X); 
#line 539
__declspec(dllimport) double __cdecl _j1(double _X); 
#line 540
__declspec(dllimport) double __cdecl _jn(int _X, double _Y); 
#line 541
__declspec(dllimport) double __cdecl _y0(double _X); 
#line 542
__declspec(dllimport) double __cdecl _y1(double _X); 
#line 543
__declspec(dllimport) double __cdecl _yn(int _X, double _Y); 
#line 545
__declspec(dllimport) float __cdecl acoshf(float _X); 
#line 546
__declspec(dllimport) float __cdecl asinhf(float _X); 
#line 547
__declspec(dllimport) float __cdecl atanhf(float _X); 
#line 548
__declspec(dllimport) float __cdecl cbrtf(float _X); 
#line 549
__declspec(dllimport) float __cdecl _chgsignf(float _X); 
#line 550
__declspec(dllimport) float __cdecl copysignf(float _Number, float _Sign); 
#line 551
__declspec(dllimport) float __cdecl _copysignf(float _Number, float _Sign); 
#line 552
__declspec(dllimport) float __cdecl erff(float _X); 
#line 553
__declspec(dllimport) float __cdecl erfcf(float _X); 
#line 554
__declspec(dllimport) float __cdecl expm1f(float _X); 
#line 555
__declspec(dllimport) float __cdecl exp2f(float _X); 
#line 556
__declspec(dllimport) float __cdecl fdimf(float _X, float _Y); 
#line 557
__declspec(dllimport) float __cdecl fmaf(float _X, float _Y, float _Z); 
#line 558
__declspec(dllimport) float __cdecl fmaxf(float _X, float _Y); 
#line 559
__declspec(dllimport) float __cdecl fminf(float _X, float _Y); 
#line 560
__declspec(dllimport) float __cdecl _hypotf(float _X, float _Y); 
#line 561
__declspec(dllimport) int __cdecl ilogbf(float _X); 
#line 562
__declspec(dllimport) float __cdecl lgammaf(float _X); 
#line 563
__declspec(dllimport) __int64 __cdecl llrintf(float _X); 
#line 564
__declspec(dllimport) __int64 __cdecl llroundf(float _X); 
#line 565
__declspec(dllimport) float __cdecl log1pf(float _X); 
#line 566
__declspec(dllimport) float __cdecl log2f(float _X); 
#line 567
__declspec(dllimport) float __cdecl logbf(float _X); 
#line 568
__declspec(dllimport) long __cdecl lrintf(float _X); 
#line 569
__declspec(dllimport) long __cdecl lroundf(float _X); 
#line 570
__declspec(dllimport) float __cdecl nanf(const char * _X); 
#line 571
__declspec(dllimport) float __cdecl nearbyintf(float _X); 
#line 572
__declspec(dllimport) float __cdecl nextafterf(float _X, float _Y); 
#line 573
__declspec(dllimport) float __cdecl nexttowardf(float _X, long double _Y); 
#line 574
__declspec(dllimport) float __cdecl remainderf(float _X, float _Y); 
#line 575
__declspec(dllimport) float __cdecl remquof(float _X, float _Y, int * _Z); 
#line 576
__declspec(dllimport) float __cdecl rintf(float _X); 
#line 577
__declspec(dllimport) float __cdecl roundf(float _X); 
#line 578
__declspec(dllimport) float __cdecl scalblnf(float _X, long _Y); 
#line 579
__declspec(dllimport) float __cdecl scalbnf(float _X, int _Y); 
#line 580
__declspec(dllimport) float __cdecl tgammaf(float _X); 
#line 581
__declspec(dllimport) float __cdecl truncf(float _X); 
#line 591 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) float __cdecl _logbf(float _X); 
#line 592
__declspec(dllimport) float __cdecl _nextafterf(float _X, float _Y); 
#line 593
__declspec(dllimport) int __cdecl _finitef(float _X); 
#line 594
__declspec(dllimport) int __cdecl _isnanf(float _X); 
#line 595
__declspec(dllimport) int __cdecl _fpclassf(float _X); 
#line 597
__declspec(dllimport) int __cdecl _set_FMA3_enable(int _Flag); 
#line 598
__declspec(dllimport) int __cdecl _get_FMA3_enable(); 
#line 611 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) float __cdecl acosf(float _X); 
#line 612
__declspec(dllimport) float __cdecl asinf(float _X); 
#line 613
__declspec(dllimport) float __cdecl atan2f(float _Y, float _X); 
#line 614
__declspec(dllimport) float __cdecl atanf(float _X); 
#line 615
__declspec(dllimport) float __cdecl ceilf(float _X); 
#line 616
__declspec(dllimport) float __cdecl cosf(float _X); 
#line 617
__declspec(dllimport) float __cdecl coshf(float _X); 
#line 618
__declspec(dllimport) float __cdecl expf(float _X); 
#line 670 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
__inline float __cdecl fabsf(float _X) 
#line 671
{ 
#line 672
return (float)fabs(_X); 
#line 673
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) float __cdecl floorf(float _X); 
#line 680
__declspec(dllimport) float __cdecl fmodf(float _X, float _Y); 
#line 696 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
__inline float __cdecl frexpf(float _X, int *_Y) 
#line 697
{ 
#line 698
return (float)frexp(_X, _Y); 
#line 699
} 
#line 701
__inline float __cdecl hypotf(float _X, float _Y) 
#line 702
{ 
#line 703
return _hypotf(_X, _Y); 
#line 704
} 
#line 706
__inline float __cdecl ldexpf(float _X, int _Y) 
#line 707
{ 
#line 708
return (float)ldexp(_X, _Y); 
#line 709
} 
#line 713
__declspec(dllimport) float __cdecl log10f(float _X); 
#line 714
__declspec(dllimport) float __cdecl logf(float _X); 
#line 715
__declspec(dllimport) float __cdecl modff(float _X, float * _Y); 
#line 716
__declspec(dllimport) float __cdecl powf(float _X, float _Y); 
#line 717
__declspec(dllimport) float __cdecl sinf(float _X); 
#line 718
__declspec(dllimport) float __cdecl sinhf(float _X); 
#line 719
__declspec(dllimport) float __cdecl sqrtf(float _X); 
#line 720
__declspec(dllimport) float __cdecl tanf(float _X); 
#line 721
__declspec(dllimport) float __cdecl tanhf(float _X); 
#line 775 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) long double __cdecl acoshl(long double _X); 
#line 777
__inline long double __cdecl acosl(long double _X) 
#line 778
{ 
#line 779
return acos((double)_X); 
#line 780
} 
#line 782
__declspec(dllimport) long double __cdecl asinhl(long double _X); 
#line 784
__inline long double __cdecl asinl(long double _X) 
#line 785
{ 
#line 786
return asin((double)_X); 
#line 787
} 
#line 789
__inline long double __cdecl atan2l(long double _Y, long double _X) 
#line 790
{ 
#line 791
return atan2((double)_Y, (double)_X); 
#line 792
} 
#line 794
__declspec(dllimport) long double __cdecl atanhl(long double _X); 
#line 796
__inline long double __cdecl atanl(long double _X) 
#line 797
{ 
#line 798
return atan((double)_X); 
#line 799
} 
#line 801
__declspec(dllimport) long double __cdecl cbrtl(long double _X); 
#line 803
__inline long double __cdecl ceill(long double _X) 
#line 804
{ 
#line 805
return ceil((double)_X); 
#line 806
} 
#line 808
__inline long double __cdecl _chgsignl(long double _X) 
#line 809
{ 
#line 810
return _chgsign((double)_X); 
#line 811
} 
#line 813
__declspec(dllimport) long double __cdecl copysignl(long double _Number, long double _Sign); 
#line 815
__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
#line 816
{ 
#line 817
return _copysign((double)_Number, (double)_Sign); 
#line 818
} 
#line 820
__inline long double __cdecl coshl(long double _X) 
#line 821
{ 
#line 822
return cosh((double)_X); 
#line 823
} 
#line 825
__inline long double __cdecl cosl(long double _X) 
#line 826
{ 
#line 827
return cos((double)_X); 
#line 828
} 
#line 830
__declspec(dllimport) long double __cdecl erfl(long double _X); 
#line 831
__declspec(dllimport) long double __cdecl erfcl(long double _X); 
#line 833
__inline long double __cdecl expl(long double _X) 
#line 834
{ 
#line 835
return exp((double)_X); 
#line 836
} 
#line 838
__declspec(dllimport) long double __cdecl exp2l(long double _X); 
#line 839
__declspec(dllimport) long double __cdecl expm1l(long double _X); 
#line 841
__inline long double __cdecl fabsl(long double _X) 
#line 842
{ 
#line 843
return fabs((double)_X); 
#line 844
} 
#line 846
__declspec(dllimport) long double __cdecl fdiml(long double _X, long double _Y); 
#line 848
__inline long double __cdecl floorl(long double _X) 
#line 849
{ 
#line 850
return floor((double)_X); 
#line 851
} 
#line 853
__declspec(dllimport) long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
#line 854
__declspec(dllimport) long double __cdecl fmaxl(long double _X, long double _Y); 
#line 855
__declspec(dllimport) long double __cdecl fminl(long double _X, long double _Y); 
#line 857
__inline long double __cdecl fmodl(long double _X, long double _Y) 
#line 858
{ 
#line 859
return fmod((double)_X, (double)_Y); 
#line 860
} 
#line 862
__inline long double __cdecl frexpl(long double _X, int *_Y) 
#line 863
{ 
#line 864
return frexp((double)_X, _Y); 
#line 865
} 
#line 867
__declspec(dllimport) int __cdecl ilogbl(long double _X); 
#line 869
__inline long double __cdecl _hypotl(long double _X, long double _Y) 
#line 870
{ 
#line 871
return _hypot((double)_X, (double)_Y); 
#line 872
} 
#line 874
__inline long double __cdecl hypotl(long double _X, long double _Y) 
#line 875
{ 
#line 876
return _hypot((double)_X, (double)_Y); 
#line 877
} 
#line 879
__inline long double __cdecl ldexpl(long double _X, int _Y) 
#line 880
{ 
#line 881
return ldexp((double)_X, _Y); 
#line 882
} 
#line 884
__declspec(dllimport) long double __cdecl lgammal(long double _X); 
#line 885
__declspec(dllimport) __int64 __cdecl llrintl(long double _X); 
#line 886
__declspec(dllimport) __int64 __cdecl llroundl(long double _X); 
#line 888
__inline long double __cdecl logl(long double _X) 
#line 889
{ 
#line 890
return log((double)_X); 
#line 891
} 
#line 893
__inline long double __cdecl log10l(long double _X) 
#line 894
{ 
#line 895
return log10((double)_X); 
#line 896
} 
#line 898
__declspec(dllimport) long double __cdecl log1pl(long double _X); 
#line 899
__declspec(dllimport) long double __cdecl log2l(long double _X); 
#line 900
__declspec(dllimport) long double __cdecl logbl(long double _X); 
#line 901
__declspec(dllimport) long __cdecl lrintl(long double _X); 
#line 902
__declspec(dllimport) long __cdecl lroundl(long double _X); 
#line 904
__inline long double __cdecl modfl(long double _X, long double *_Y) 
#line 905
{ 
#line 906
double _F, _I; 
#line 907
_F = modf((double)_X, &_I); 
#line 908
(*_Y) = _I; 
#line 909
return _F; 
#line 910
} 
#line 912
__declspec(dllimport) long double __cdecl nanl(const char * _X); 
#line 913
__declspec(dllimport) long double __cdecl nearbyintl(long double _X); 
#line 914
__declspec(dllimport) long double __cdecl nextafterl(long double _X, long double _Y); 
#line 915
__declspec(dllimport) long double __cdecl nexttowardl(long double _X, long double _Y); 
#line 917
__inline long double __cdecl powl(long double _X, long double _Y) 
#line 918
{ 
#line 919
return pow((double)_X, (double)_Y); 
#line 920
} 
#line 922
__declspec(dllimport) long double __cdecl remainderl(long double _X, long double _Y); 
#line 923
__declspec(dllimport) long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
#line 924
__declspec(dllimport) long double __cdecl rintl(long double _X); 
#line 925
__declspec(dllimport) long double __cdecl roundl(long double _X); 
#line 926
__declspec(dllimport) long double __cdecl scalblnl(long double _X, long _Y); 
#line 927
__declspec(dllimport) long double __cdecl scalbnl(long double _X, int _Y); 
#line 929
__inline long double __cdecl sinhl(long double _X) 
#line 930
{ 
#line 931
return sinh((double)_X); 
#line 932
} 
#line 934
__inline long double __cdecl sinl(long double _X) 
#line 935
{ 
#line 936
return sin((double)_X); 
#line 937
} 
#line 939
__inline long double __cdecl sqrtl(long double _X) 
#line 940
{ 
#line 941
return sqrt((double)_X); 
#line 942
} 
#line 944
__inline long double __cdecl tanhl(long double _X) 
#line 945
{ 
#line 946
return tanh((double)_X); 
#line 947
} 
#line 949
__inline long double __cdecl tanl(long double _X) 
#line 950
{ 
#line 951
return tan((double)_X); 
#line 952
} 
#line 954
__declspec(dllimport) long double __cdecl tgammal(long double _X); 
#line 955
__declspec(dllimport) long double __cdecl truncl(long double _X); 
#line 976 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
extern double HUGE; 
#line 981 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) double __cdecl j0(double _X); 
#line 982
__declspec(dllimport) double __cdecl j1(double _X); 
#line 983
__declspec(dllimport) double __cdecl jn(int _X, double _Y); 
#line 984
__declspec(dllimport) double __cdecl y0(double _X); 
#line 985
__declspec(dllimport) double __cdecl y1(double _X); 
#line 986
__declspec(dllimport) double __cdecl yn(int _X, double _Y); 
#line 994 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_math.h"
}
#line 992
#pragma warning(pop)
#line 994
__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 54 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_malloc.h"
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 55
_calloc_base(size_t _Count, size_t _Size); 
#line 61
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 62
calloc(size_t _Count, size_t _Size); 
#line 68
__declspec(dllimport) int __cdecl _callnewh(size_t _Size); 
#line 73
__declspec(dllimport) __declspec(allocator) void *__cdecl 
#line 74
_expand(void * _Block, size_t _Size); 
#line 79
__declspec(dllimport) void __cdecl 
#line 80
_free_base(void * _Block); 
#line 84
__declspec(dllimport) void __cdecl 
#line 85
free(void * _Block); 
#line 90
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 91
_malloc_base(size_t _Size); 
#line 96
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 97
malloc(size_t _Size); 
#line 102
__declspec(dllimport) size_t __cdecl 
#line 103
_msize_base(void * _Block); 
#line 108
__declspec(dllimport) size_t __cdecl 
#line 109
_msize(void * _Block); 
#line 114
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 115
_realloc_base(void * _Block, size_t _Size); 
#line 121
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 122
realloc(void * _Block, size_t _Size); 
#line 128
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 129
_recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 136
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 137
_recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 143
__declspec(dllimport) void __cdecl 
#line 144
_aligned_free(void * _Block); 
#line 149
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 150
_aligned_malloc(size_t _Size, size_t _Alignment); 
#line 156
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 157
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 164
__declspec(dllimport) size_t __cdecl 
#line 165
_aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 172
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 173
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 181
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 182
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 191
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 192
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 199
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
#line 200
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 228 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_malloc.h"
}__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_search.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
#line 20
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 26
__declspec(dllimport) void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 35
__declspec(dllimport) void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 48 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_search.h"
__declspec(dllimport) void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 56
__declspec(dllimport) void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 64
__declspec(dllimport) void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 74
__declspec(dllimport) void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 83
__declspec(dllimport) void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 93
__declspec(dllimport) void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_search.h"
__declspec(dllimport) void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 200
__declspec(dllimport) void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 212 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_search.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 50
__declspec(dllimport) errno_t __cdecl _itow_s(int _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 57
extern "C++" {template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 65 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) __wchar_t *__cdecl _itow(int _Value, __wchar_t * _Buffer, int _Radix); 
#line 74 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _ltow_s(long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 81
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 88 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) __wchar_t *__cdecl _ltow(long _Value, __wchar_t * _Buffer, int _Radix); 
#line 96 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _ultow_s(unsigned long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 103
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 110 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) __wchar_t *__cdecl _ultow(unsigned long _Value, __wchar_t * _Buffer, int _Radix); 
#line 118 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) double __cdecl wcstod(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 124
__declspec(dllimport) double __cdecl _wcstod_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 131
__declspec(dllimport) long __cdecl wcstol(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 138
__declspec(dllimport) long __cdecl _wcstol_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 146
__declspec(dllimport) __int64 __cdecl wcstoll(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 153
__declspec(dllimport) __int64 __cdecl _wcstoll_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 161
__declspec(dllimport) unsigned long __cdecl wcstoul(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 168
__declspec(dllimport) unsigned long __cdecl _wcstoul_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 176
__declspec(dllimport) unsigned __int64 __cdecl wcstoull(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 183
__declspec(dllimport) unsigned __int64 __cdecl _wcstoull_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 191
__declspec(dllimport) long double __cdecl wcstold(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 197
__declspec(dllimport) long double __cdecl _wcstold_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 204
__declspec(dllimport) float __cdecl wcstof(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 210
__declspec(dllimport) float __cdecl _wcstof_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 217
__declspec(dllimport) double __cdecl _wtof(const __wchar_t * _String); 
#line 222
__declspec(dllimport) double __cdecl _wtof_l(const __wchar_t * _String, _locale_t _Locale); 
#line 228
__declspec(dllimport) int __cdecl _wtoi(const __wchar_t * _String); 
#line 233
__declspec(dllimport) int __cdecl _wtoi_l(const __wchar_t * _String, _locale_t _Locale); 
#line 239
__declspec(dllimport) long __cdecl _wtol(const __wchar_t * _String); 
#line 244
__declspec(dllimport) long __cdecl _wtol_l(const __wchar_t * _String, _locale_t _Locale); 
#line 250
__declspec(dllimport) __int64 __cdecl _wtoll(const __wchar_t * _String); 
#line 255
__declspec(dllimport) __int64 __cdecl _wtoll_l(const __wchar_t * _String, _locale_t _Locale); 
#line 261
__declspec(dllimport) errno_t __cdecl _i64tow_s(__int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 269
__declspec(dllimport) __wchar_t *__cdecl _i64tow(__int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 276
__declspec(dllimport) errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 284
__declspec(dllimport) __wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 291
__declspec(dllimport) __int64 __cdecl _wtoi64(const __wchar_t * _String); 
#line 296
__declspec(dllimport) __int64 __cdecl _wtoi64_l(const __wchar_t * _String, _locale_t _Locale); 
#line 302
__declspec(dllimport) __int64 __cdecl _wcstoi64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 309
__declspec(dllimport) __int64 __cdecl _wcstoi64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 317
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 324
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 336
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wfullpath(__wchar_t * _Buffer, const __wchar_t * _Path, size_t _BufferCount); 
#line 345
__declspec(dllimport) errno_t __cdecl _wmakepath_s(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 354
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Drive, wchar_t const * _Dir, wchar_t const * _Filename, wchar_t const * _Ext ) throw ( ) { return _wmakepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }}
#line 363 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) void __cdecl _wmakepath(__wchar_t * _Buffer, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 374 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(pop)
#line 376
__declspec(dllimport) void __cdecl _wperror(const __wchar_t * _ErrorMessage); 
#line 381
__declspec(dllimport) void __cdecl _wsplitpath(const __wchar_t * _FullPath, __wchar_t * _Drive, __wchar_t * _Dir, __wchar_t * _Filename, __wchar_t * _Ext); 
#line 389
__declspec(dllimport) errno_t __cdecl _wsplitpath_s(const __wchar_t * _FullPath, __wchar_t * _Drive, size_t _DriveCount, __wchar_t * _Dir, size_t _DirCount, __wchar_t * _Filename, size_t _FilenameCount, __wchar_t * _Ext, size_t _ExtCount); 
#line 401
extern "C++" {template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( wchar_t const * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }}
#line 410 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _wdupenv_s(__wchar_t ** _Buffer, size_t * _BufferCount, const __wchar_t * _VarName); 
#line 419
__declspec(dllimport) __wchar_t *__cdecl _wgetenv(const __wchar_t * _VarName); 
#line 425
__declspec(dllimport) errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _VarName); 
#line 432
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _RequiredCount, wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _VarName ) throw ( ) { return _wgetenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }}
#line 441 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) int __cdecl _wputenv(const __wchar_t * _EnvString); 
#line 446
__declspec(dllimport) errno_t __cdecl _wputenv_s(const __wchar_t * _Name, const __wchar_t * _Value); 
#line 451
__declspec(dllimport) errno_t __cdecl _wsearchenv_s(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _Buffer, size_t _BufferCount); 
#line 458
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( wchar_t const * _Filename, wchar_t const * _VarName, wchar_t ( & _ResultPath ) [ _Size ] ) throw ( ) { return _wsearchenv_s ( _Filename, _VarName, _ResultPath, _Size ); }}
#line 465 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) void __cdecl _wsearchenv(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _ResultPath); 
#line 472 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) int __cdecl _wsystem(const __wchar_t * _Command); 
#line 479 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdlib.h"
}__pragma( pack ( pop )) 
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 34 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 52
__declspec(dllimport) __declspec(noreturn) void __cdecl exit(int _Code); 
#line 53
__declspec(dllimport) __declspec(noreturn) void __cdecl _exit(int _Code); 
#line 54
__declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(int _Code); 
#line 55
__declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(int _Code); 
#line 56
__declspec(dllimport) __declspec(noreturn) void __cdecl abort(); 
#line 63 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 73
typedef int (__cdecl *_onexit_t)(void); 
#line 140 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
int __cdecl atexit(void (__cdecl *)(void)); 
#line 141
_onexit_t __cdecl _onexit(_onexit_t _Func); 
#line 144 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 155
typedef void (__cdecl *_purecall_handler)(void); 
#line 158
typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); 
#line 167
_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 
#line 171
_purecall_handler __cdecl _get_purecall_handler(); 
#line 174
__declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 178
__declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); 
#line 180
__declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 184
__declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(); 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl _set_error_mode(int _Mode); 
#line 213
__declspec(dllimport) int *__cdecl _errno(); 
#line 216
__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
#line 217
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 219
__declspec(dllimport) unsigned long *__cdecl __doserrno(); 
#line 222
__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 223
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 226
__declspec(dllimport) char **__cdecl __sys_errlist(); 
#line 229
__declspec(dllimport) int *__cdecl __sys_nerr(); 
#line 232
__declspec(dllimport) void __cdecl perror(const char * _ErrMsg); 
#line 238 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) char **__cdecl __p__pgmptr(); 
#line 239
__declspec(dllimport) __wchar_t **__cdecl __p__wpgmptr(); 
#line 240
__declspec(dllimport) int *__cdecl __p__fmode(); 
#line 255 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _get_pgmptr(char ** _Value); 
#line 258
__declspec(dllimport) errno_t __cdecl _get_wpgmptr(__wchar_t ** _Value); 
#line 260
__declspec(dllimport) errno_t __cdecl _set_fmode(int _Mode); 
#line 262
__declspec(dllimport) errno_t __cdecl _get_fmode(int * _PMode); 
#line 275
typedef 
#line 271
struct _div_t { 
#line 273
int quot; 
#line 274
int rem; 
#line 275
} div_t; 
#line 281
typedef 
#line 277
struct _ldiv_t { 
#line 279
long quot; 
#line 280
long rem; 
#line 281
} ldiv_t; 
#line 287
typedef 
#line 283
struct _lldiv_t { 
#line 285
__int64 quot; 
#line 286
__int64 rem; 
#line 287
} lldiv_t; 
#line 289
int __cdecl abs(int _Number); 
#line 290
long __cdecl labs(long _Number); 
#line 291
__int64 __cdecl llabs(__int64 _Number); 
#line 292
__int64 __cdecl _abs64(__int64 _Number); 
#line 294
unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
#line 295
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
#line 296
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 
#line 298
__declspec(dllimport) div_t __cdecl div(int _Numerator, int _Denominator); 
#line 299
__declspec(dllimport) ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
#line 300
__declspec(dllimport) lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 
#line 304
#pragma warning (push)
#pragma warning (disable:6540)
#line 307
unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 313
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 
#line 318
unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 
#line 323
unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 329
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 
#line 334
unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 
#line 339
#pragma warning (pop)
#line 346
__declspec(dllimport) void __cdecl srand(unsigned _Seed); 
#line 348
__declspec(dllimport) int __cdecl rand(); 
#line 357 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
extern "C++" {
#line 359
inline long abs(const long _X) throw() 
#line 360
{ 
#line 361
return labs(_X); 
#line 362
} 
#line 364
inline __int64 abs(const __int64 _X) throw() 
#line 365
{ 
#line 366
return llabs(_X); 
#line 367
} 
#line 369
inline ldiv_t div(const long _A1, const long _A2) throw() 
#line 370
{ 
#line 371
return ldiv(_A1, _A2); 
#line 372
} 
#line 374
inline lldiv_t div(const __int64 _A1, const __int64 _A2) throw() 
#line 375
{ 
#line 376
return lldiv(_A1, _A2); 
#line 377
} 
#line 378
}
#line 390 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
#pragma pack ( push, 4 )
#line 394
typedef 
#line 392
struct { 
#line 393
unsigned char ld[10]; 
#line 394
} _LDOUBLE; 
#pragma pack ( pop )
#line 414 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
typedef 
#line 412
struct { 
#line 413
double x; 
#line 414
} _CRT_DOUBLE; 
#line 419
typedef 
#line 417
struct { 
#line 418
float f; 
#line 419
} _CRT_FLOAT; 
#line 428
typedef 
#line 426
struct { 
#line 427
long double x; 
#line 428
} _LONGDOUBLE; 
#line 432
#pragma pack ( push, 4 )
#line 436
typedef 
#line 434
struct { 
#line 435
unsigned char ld12[12]; 
#line 436
} _LDBL12; 
#pragma pack ( pop )
#line 446
__declspec(dllimport) double __cdecl atof(const char * _String); 
#line 447
__declspec(dllimport) int __cdecl atoi(const char * _String); 
#line 448
__declspec(dllimport) long __cdecl atol(const char * _String); 
#line 449
__declspec(dllimport) __int64 __cdecl atoll(const char * _String); 
#line 450
__declspec(dllimport) __int64 __cdecl _atoi64(const char * _String); 
#line 452
__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 453
__declspec(dllimport) int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
#line 454
__declspec(dllimport) long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
#line 455
__declspec(dllimport) __int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
#line 456
__declspec(dllimport) __int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 
#line 458
__declspec(dllimport) int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
#line 459
__declspec(dllimport) int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
#line 460
__declspec(dllimport) int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 
#line 463
__declspec(dllimport) int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 470
__declspec(dllimport) int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 478
__declspec(dllimport) int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 485
__declspec(dllimport) float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 491
__declspec(dllimport) float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 498
__declspec(dllimport) double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 504
__declspec(dllimport) double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 511
__declspec(dllimport) long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 517
__declspec(dllimport) long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 524
__declspec(dllimport) long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 531
__declspec(dllimport) long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 539
__declspec(dllimport) __int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 546
__declspec(dllimport) __int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 554
__declspec(dllimport) unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 561
__declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 569
__declspec(dllimport) unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 576
__declspec(dllimport) unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 584
__declspec(dllimport) __int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 591
__declspec(dllimport) __int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 599
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 606
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 622
__declspec(dllimport) errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 629
extern "C++" {template < size_t _Size > inline errno_t __cdecl _itoa_s ( int _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 638 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 
#line 647 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 651
__declspec(dllimport) errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 658
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ltoa_s ( long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 665 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 674 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 681
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ultoa_s ( unsigned long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 688 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28726)
__declspec(dllimport) char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 696 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 700
__declspec(dllimport) errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 709
__declspec(dllimport) char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 717
__declspec(dllimport) errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 725
__declspec(dllimport) char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 745
__declspec(dllimport) errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 754
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _ecvt_s ( _Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign ); }}
#line 764 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 773
__declspec(dllimport) errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 782
extern "C++" {template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _fcvt_s ( _Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign ); }}
#line 794 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 802
__declspec(dllimport) errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 809
extern "C++" {template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount ) throw ( ) { return _gcvt_s ( _Buffer, _Size, _Value, _DigitCount ); }}
#line 818 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 846 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl ___mb_cur_max_func(); 
#line 849
__declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 855 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 861
__declspec(dllimport) int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 869
__declspec(dllimport) size_t __cdecl _mbstrlen(const char * _String); 
#line 875
__declspec(dllimport) size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 882
__declspec(dllimport) size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 889
__declspec(dllimport) size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 896
__declspec(dllimport) int __cdecl mbtowc(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 903
__declspec(dllimport) int __cdecl _mbtowc_l(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 911
__declspec(dllimport) errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 919
extern "C++" {template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount ) throw ( ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }}
#line 928 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) size_t __cdecl mbstowcs(__wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 936 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 945
extern "C++" {template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }}
#line 954 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) size_t __cdecl _mbstowcs_l(__wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 967 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl wctomb(char * _MbCh, __wchar_t _WCh); 
#line 973
__declspec(dllimport) int __cdecl _wctomb_l(char * _MbCh, __wchar_t _WCh, _locale_t _Locale); 
#line 982
__declspec(dllimport) errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, __wchar_t _WCh); 
#line 991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, __wchar_t _WCh, _locale_t _Locale); 
#line 999
__declspec(dllimport) errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1007
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcstombs_s ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount ) throw ( ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }}
#line 1016 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) size_t __cdecl wcstombs(char * _Dest, const __wchar_t * _Source, size_t _MaxCount); 
#line 1024 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1033
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }}
#line 1042 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) size_t __cdecl _wcstombs_l(char * _Dest, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1072 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) __declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1081
__declspec(dllimport) errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1090
extern "C++" {template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Buffer ) [ _Size ], char const * _Drive, char const * _Dir, char const * _Filename, char const * _Ext ) throw ( ) { return _makepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }}
#line 1099 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1110 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 1113
__declspec(dllimport) void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1122
__declspec(dllimport) errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1134
extern "C++" {template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( char const * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }}
#line 1140
__declspec(dllimport) errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1151 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) int *__cdecl __p___argc(); 
#line 1152
__declspec(dllimport) char ***__cdecl __p___argv(); 
#line 1153
__declspec(dllimport) __wchar_t ***__cdecl __p___wargv(); 
#line 1165 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) char ***__cdecl __p__environ(); 
#line 1166
__declspec(dllimport) __wchar_t ***__cdecl __p__wenviron(); 
#line 1191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) char *__cdecl getenv(const char * _VarName); 
#line 1195
extern "C++" {template < size_t _Size > inline errno_t __cdecl getenv_s ( size_t * _RequiredCount, char ( & _Buffer ) [ _Size ], char const * _VarName ) throw ( ) { return getenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }}
#line 1208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1218 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl system(const char * _Command); 
#line 1224
#pragma warning (push)
#pragma warning (disable:6540)
#line 1228
__declspec(dllimport) int __cdecl _putenv(const char * _EnvString); 
#line 1233
__declspec(dllimport) errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 
#line 1238
#pragma warning (pop)
#line 1240
__declspec(dllimport) errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1247
extern "C++" {template < size_t _Size > inline errno_t __cdecl _searchenv_s ( char const * _Filename, char const * _VarName, char ( & _Buffer ) [ _Size ] ) throw ( ) { return _searchenv_s ( _Filename, _VarName, _Buffer, _Size ); }}
#line 1255 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(dllimport) void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1263 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) 
#line 1264
__declspec(dllimport) void __cdecl _seterrormode(int _Mode); 
#line 1268
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) 
#line 1269
__declspec(dllimport) void __cdecl _beep(unsigned _Frequency, unsigned _Duration); 
#line 1274
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) 
#line 1275
__declspec(dllimport) void __cdecl _sleep(unsigned long _Duration); 
#line 1296 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4141)
#line 1300
__declspec(dllimport) char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1308
__declspec(dllimport) char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1316
__declspec(dllimport) char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1323
__declspec(dllimport) char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); 
#line 1330
__declspec(dllimport) char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1338
__declspec(dllimport) void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1345
__declspec(dllimport) char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1354
__declspec(dllimport) int __cdecl putenv(const char * _EnvString); 
#line 1358
#pragma warning(pop)
#line 1360
_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1366 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdlib.h"
}__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#pragma warning(disable: 4985)
#line 17
extern "C++" {
#line 19
#pragma pack ( push, 8 )
#line 33
namespace std { 
#line 35
struct nothrow_t { 
#line 37
explicit nothrow_t() = default;
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new.h"
}; 
#line 44
extern const nothrow_t nothrow; 
#line 46 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new.h"
}
#line 49 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new.h"
[[nodiscard]] __declspec(allocator) void *__cdecl 
#line 50
operator new(size_t _Size); 
#line 54
[[nodiscard]] __declspec(allocator) void *__cdecl 
#line 55
operator new(size_t _Size, const std::nothrow_t &) noexcept; 
#line 60
[[nodiscard]] __declspec(allocator) void *__cdecl 
#line 61
operator new[](size_t _Size); 
#line 65
[[nodiscard]] __declspec(allocator) void *__cdecl 
#line 66
operator new[](size_t _Size, const std::nothrow_t &) noexcept; 
#line 71
void __cdecl operator delete(void * _Block) noexcept; 
#line 75
void __cdecl operator delete(void * _Block, const std::nothrow_t &) noexcept; 
#line 80
void __cdecl operator delete[](void * _Block) noexcept; 
#line 84
void __cdecl operator delete[](void * _Block, const std::nothrow_t &) noexcept; 
#line 89
void __cdecl operator delete(void * _Block, size_t _Size) noexcept; 
#line 94
void __cdecl operator delete[](void * _Block, size_t _Size) noexcept; 
#line 162
#pragma warning(push)
#pragma warning(disable: 4577)
#pragma warning(disable: 4514)
#line 167
[[nodiscard]] inline void *__cdecl 
#line 168
operator new(size_t _Size, void *_Where) noexcept 
#line 169
{ 
#line 170
(void)_Size; 
#line 171
return _Where; 
#line 172
} 
#line 174
inline void __cdecl operator delete(void *, void *) noexcept 
#line 175
{ 
#line 177
} 
#line 182 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new.h"
[[nodiscard]] inline void *__cdecl 
#line 183
operator new[](size_t _Size, void *
#line 184
_Where) noexcept 
#line 185
{ 
#line 186
(void)_Size; 
#line 187
return _Where; 
#line 188
} 
#line 190
inline void __cdecl operator delete[](void *, void *) noexcept 
#line 191
{ 
#line 192
} 
#line 200 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new.h"
}
#line 194
#pragma warning(pop)
#line 198
#pragma pack ( pop )
#line 203 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new.h"
#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new_debug.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 16
extern "C++" {
#line 18
#pragma pack ( push, 8 )
#line 25
[[nodiscard]] 
#line 26
__declspec(allocator) void *__cdecl operator new(size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 33
[[nodiscard]] 
#line 34
__declspec(allocator) void *__cdecl operator new[](size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 41
void __cdecl operator delete(void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 48
void __cdecl operator delete[](void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new_debug.h"
}
#line 59
#pragma pack ( pop )
#line 64 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\vcruntime_new_debug.h"
#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\crtdbg.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
typedef void *_HFILE; 
#line 45
typedef int (__cdecl *_CRT_REPORT_HOOK)(int, char *, int *); 
#line 46
typedef int (__cdecl *_CRT_REPORT_HOOKW)(int, __wchar_t *, int *); 
#line 52
typedef int (__cdecl *_CRT_ALLOC_HOOK)(int, void *, size_t, int, long, const unsigned char *, int); 
#line 108
typedef void (__cdecl *_CRT_DUMP_CLIENT)(void *, size_t); 
#line 114
struct _CrtMemBlockHeader; 
#line 123
typedef 
#line 116
struct _CrtMemState { 
#line 118
_CrtMemBlockHeader *pBlockHeader; 
#line 119
size_t lCounts[5]; 
#line 120
size_t lSizes[5]; 
#line 121
size_t lHighWaterCount; 
#line 122
size_t lTotalCount; 
#line 123
} _CrtMemState; 
#line 152
__declspec(dllimport) int *__cdecl __p__crtDbgFlag(); 
#line 153
__declspec(dllimport) long *__cdecl __p__crtBreakAlloc(); 
#line 158
__declspec(dllimport) _CRT_ALLOC_HOOK __cdecl _CrtGetAllocHook(); 
#line 160
__declspec(dllimport) _CRT_ALLOC_HOOK __cdecl _CrtSetAllocHook(_CRT_ALLOC_HOOK _PfnNewHook); 
#line 164
__declspec(dllimport) _CRT_DUMP_CLIENT __cdecl _CrtGetDumpClient(); 
#line 166
__declspec(dllimport) _CRT_DUMP_CLIENT __cdecl _CrtSetDumpClient(_CRT_DUMP_CLIENT _PFnNewDump); 
#line 172 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\crtdbg.h"
__declspec(dllimport) int __cdecl _CrtCheckMemory(); 
#line 174
typedef void (__cdecl *_CrtDoForAllClientObjectsCallback)(void *, void *); 
#line 176
__declspec(dllimport) void __cdecl _CrtDoForAllClientObjects(_CrtDoForAllClientObjectsCallback _Callback, void * _Context); 
#line 181
__declspec(dllimport) int __cdecl _CrtDumpMemoryLeaks(); 
#line 183
__declspec(dllimport) int __cdecl _CrtIsMemoryBlock(const void * _Block, unsigned _Size, long * _RequestNumber, char ** _FileName, int * _LineNumber); 
#line 192
__declspec(dllimport) int __cdecl _CrtIsValidHeapPointer(const void * _Pointer); 
#line 197
__declspec(dllimport) int __cdecl _CrtIsValidPointer(const void * _Pointer, unsigned _Size, int _ReadWrite); 
#line 203
__declspec(dllimport) void __cdecl _CrtMemCheckpoint(_CrtMemState * _State); 
#line 207
__declspec(dllimport) int __cdecl _CrtMemDifference(_CrtMemState * _State, const _CrtMemState * _OldState, const _CrtMemState * _NewState); 
#line 213
__declspec(dllimport) void __cdecl _CrtMemDumpAllObjectsSince(const _CrtMemState * _State); 
#line 217
__declspec(dllimport) void __cdecl _CrtMemDumpStatistics(const _CrtMemState * _State); 
#line 222
__declspec(dllimport) int __cdecl _CrtReportBlockType(const void * _Block); 
#line 226
__declspec(dllimport) long __cdecl _CrtSetBreakAlloc(long _NewValue); 
#line 230
__declspec(dllimport) int __cdecl _CrtSetDbgFlag(int _NewFlag); 
#line 328 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\crtdbg.h"
__declspec(dllimport) void __cdecl _aligned_free_dbg(void * _Block); 
#line 333
__declspec(dllimport) __declspec(allocator) void *__cdecl _aligned_malloc_dbg(size_t _Size, size_t _Alignment, const char * _FileName, int _LineNumber); 
#line 340
__declspec(dllimport) size_t __cdecl _aligned_msize_dbg(void * _Block, size_t _Alignment, size_t _Offset); 
#line 347
__declspec(dllimport) __declspec(allocator) void *__cdecl _aligned_offset_malloc_dbg(size_t _Size, size_t _Alignment, size_t _Offset, const char * _FileName, int _LineNumber); 
#line 356
__declspec(dllimport) __declspec(allocator) void *__cdecl _aligned_offset_realloc_dbg(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset, const char * _FileName, int _LineNumber); 
#line 366
__declspec(dllimport) __declspec(allocator) void *__cdecl _aligned_offset_recalloc_dbg(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset, const char * _FileName, int _LineNumber); 
#line 377
__declspec(dllimport) __declspec(allocator) void *__cdecl _aligned_realloc_dbg(void * _Block, size_t _Size, size_t _Alignment, const char * _FileName, int _LineNumber); 
#line 386
__declspec(dllimport) __declspec(allocator) void *__cdecl _aligned_recalloc_dbg(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, const char * _FileName, int _LineNumber); 
#line 396
__declspec(dllimport) __declspec(allocator) void *__cdecl _calloc_dbg(size_t _Count, size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 405
__declspec(dllimport) __declspec(allocator) void *__cdecl _expand_dbg(void * _Block, size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 413
__declspec(dllimport) void __cdecl _free_dbg(void * _Block, int _BlockUse); 
#line 419
__declspec(dllimport) __declspec(allocator) void *__cdecl _malloc_dbg(size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 426
__declspec(dllimport) size_t __cdecl _msize_dbg(void * _Block, int _BlockUse); 
#line 432
__declspec(dllimport) __declspec(allocator) void *__cdecl _realloc_dbg(void * _Block, size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 441
__declspec(dllimport) __declspec(allocator) void *__cdecl _recalloc_dbg(void * _Block, size_t _Count, size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 452
__declspec(dllimport) errno_t __cdecl _dupenv_s_dbg(char ** _PBuffer, size_t * _PBufferSizeInBytes, const char * _VarName, int _BlockType, const char * _FileName, int _LineNumber); 
#line 463
__declspec(dllimport) __declspec(allocator) char *__cdecl _fullpath_dbg(char * _FullPath, const char * _Path, size_t _SizeInBytes, int _BlockType, const char * _FileName, int _LineNumber); 
#line 474
__declspec(dllimport) __declspec(allocator) char *__cdecl _getcwd_dbg(char * _DstBuf, int _SizeInBytes, int _BlockType, const char * _FileName, int _LineNumber); 
#line 485
__declspec(dllimport) __declspec(allocator) char *__cdecl _getdcwd_dbg(int _Drive, char * _DstBuf, int _SizeInBytes, int _BlockType, const char * _FileName, int _LineNumber); 
#line 495
__declspec(dllimport) __declspec(allocator) char *__cdecl _strdup_dbg(const char * _String, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 503
__declspec(dllimport) __declspec(allocator) char *__cdecl _tempnam_dbg(const char * _DirName, const char * _FilePrefix, int _BlockType, const char * _FileName, int _LineNumber); 
#line 513
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wcsdup_dbg(const __wchar_t * _String, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 522
__declspec(dllimport) errno_t __cdecl _wdupenv_s_dbg(__wchar_t ** _PBuffer, size_t * _PBufferSizeInWords, const __wchar_t * _VarName, int _BlockType, const char * _FileName, int _LineNumber); 
#line 533
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wfullpath_dbg(__wchar_t * _FullPath, const __wchar_t * _Path, size_t _SizeInWords, int _BlockType, const char * _FileName, int _LineNumber); 
#line 544
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wgetcwd_dbg(__wchar_t * _DstBuf, int _SizeInWords, int _BlockType, const char * _FileName, int _LineNumber); 
#line 554
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wgetdcwd_dbg(int _Drive, __wchar_t * _DstBuf, int _SizeInWords, int _BlockType, const char * _FileName, int _LineNumber); 
#line 564
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wtempnam_dbg(const __wchar_t * _DirName, const __wchar_t * _FilePrefix, int _BlockType, const char * _FileName, int _LineNumber); 
#line 607 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\crtdbg.h"
__declspec(dllimport) int __cdecl _CrtDbgReport(int _ReportType, const char * _FileName, int _Linenumber, const char * _ModuleName, const char * _Format, ...); 
#line 615
__declspec(dllimport) int __cdecl _CrtDbgReportW(int _ReportType, const __wchar_t * _FileName, int _LineNumber, const __wchar_t * _ModuleName, const __wchar_t * _Format, ...); 
#line 624
__declspec(dllimport) int __cdecl _VCrtDbgReportA(int _ReportType, void * _ReturnAddress, const char * _FileName, int _LineNumber, const char * _ModuleName, const char * _Format, va_list _ArgList); 
#line 634
__declspec(dllimport) int __cdecl _VCrtDbgReportW(int _ReportType, void * _ReturnAddress, const __wchar_t * _FileName, int _LineNumber, const __wchar_t * _ModuleName, const __wchar_t * _Format, va_list _ArgList); 
#line 644
__declspec(dllimport) size_t __cdecl _CrtSetDebugFillThreshold(size_t _NewDebugFillThreshold); 
#line 648
__declspec(dllimport) size_t __cdecl _CrtGetDebugFillThreshold(); 
#line 650
__declspec(dllimport) _HFILE __cdecl _CrtSetReportFile(int _ReportType, _HFILE _ReportFile); 
#line 655
__declspec(dllimport) int __cdecl _CrtSetReportMode(int _ReportType, int _ReportMode); 
#line 662
extern long _crtAssertBusy; 
#line 664
__declspec(dllimport) _CRT_REPORT_HOOK __cdecl _CrtGetReportHook(); 
#line 669
__declspec(dllimport) _CRT_REPORT_HOOK __cdecl _CrtSetReportHook(_CRT_REPORT_HOOK _PFnNewHook); 
#line 673
__declspec(dllimport) int __cdecl _CrtSetReportHook2(int _Mode, _CRT_REPORT_HOOK _PFnNewHook); 
#line 678
__declspec(dllimport) int __cdecl _CrtSetReportHookW2(int _Mode, _CRT_REPORT_HOOKW _PFnNewHook); 
#line 809 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\crtdbg.h"
}__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4472 4494 4514 4571 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4702 4793 4820 4988 5026 5027 5045 )
#line 135 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
#pragma detect_mismatch("_MSC_VER", "1900")
#line 139 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "2")
#line 150 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
#pragma detect_mismatch("RuntimeLibrary", "MDd_DynamicDebug")
#line 49 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\use_ansi.h"
#pragma comment(lib, "msvcprtd")
#line 308 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
namespace std { 
#line 309
enum _Uninitialized { 
#line 310
_Noinit
#line 311
}; 
#line 314
class __declspec(dllimport) _Lockit { 
#line 330
public: __thiscall _Lockit() noexcept; 
#line 331
explicit __thiscall _Lockit(int) noexcept; 
#line 332
__thiscall ~_Lockit() noexcept; 
#line 335 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
static void __cdecl _Lockit_ctor(int) noexcept; 
#line 336
static void __cdecl _Lockit_dtor(int) noexcept; 
#line 339
private: static void __cdecl _Lockit_ctor(_Lockit *) noexcept; 
#line 340
static void __cdecl _Lockit_ctor(_Lockit *, int) noexcept; 
#line 341
static void __cdecl _Lockit_dtor(_Lockit *) noexcept; 
#line 344
public: _Lockit(const _Lockit &) = delete;
#line 345
_Lockit &operator=(const _Lockit &) = delete;
#line 348
private: int _Locktype; 
#line 349
}; 
#line 424 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
class __declspec(dllimport) _Init_locks { 
#line 436
public: __thiscall _Init_locks() noexcept; 
#line 437
__thiscall ~_Init_locks() noexcept; 
#line 441 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
private: static void __cdecl _Init_locks_ctor(_Init_locks *) noexcept; 
#line 442
static void __cdecl _Init_locks_dtor(_Init_locks *) noexcept; 
#line 443
}; 
#line 483 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
}
#line 492 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\yvals.h"
#pragma warning(pop)
#pragma pack ( pop )
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\cstdlib"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4472 4494 4514 4571 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4702 4793 4820 4988 5026 5027 5045 )
#line 23
[[nodiscard]] inline double abs(double _Xx) noexcept { 
#line 24
return ::fabs(_Xx); 
#line 25
} 
#line 27
[[nodiscard]] inline float abs(float _Xx) noexcept { 
#line 28
return ::fabsf(_Xx); 
#line 29
} 
#line 31
[[nodiscard]] inline long double abs(long double _Xx) noexcept { 
#line 32
return ::fabsl(_Xx); 
#line 33
} 
#line 35
namespace std { 
#line 36
using ::size_t;
#line 37
using ::div_t;
#line 38
using ::ldiv_t;
#line 39
using ::abort;
#line 40
using ::abs;
#line 41
using ::atexit;
#line 42
using ::atof;
#line 43
using ::atoi;
#line 44
using ::atol;
#line 45
using ::bsearch;
#line 46
using ::calloc;
#line 47
using ::div;
#line 48
using ::exit;
#line 49
using ::free;
#line 50
using ::labs;
#line 51
using ::ldiv;
#line 52
using ::malloc;
#line 53
using ::mblen;
#line 54
using ::mbstowcs;
#line 55
using ::mbtowc;
#line 56
using ::qsort;
#line 57
using ::rand;
#line 58
using ::realloc;
#line 59
using ::srand;
#line 60
using ::strtod;
#line 61
using ::strtol;
#line 62
using ::strtoul;
#line 63
using ::wcstombs;
#line 64
using ::wctomb;
#line 66
using ::lldiv_t;
#line 69
using ::getenv;
#line 70
using ::system;
#line 73 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\cstdlib"
using ::atoll;
#line 74
using ::llabs;
#line 75
using ::lldiv;
#line 76
using ::strtof;
#line 77
using ::strtold;
#line 78
using ::strtoll;
#line 79
using ::strtoull;
#line 81
using ::_Exit;
#line 82
using ::at_quick_exit;
#line 83
using ::quick_exit;
#line 84
}
#line 88
#pragma warning(pop)
#pragma pack ( pop )
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\xtr1common"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4472 4494 4514 4571 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4702 4793 4820 4988 5026 5027 5045 )
#line 19
namespace std { 
#line 21
template < class _Ty, _Ty _Val >
struct integral_constant {
    static constexpr _Ty value = _Val;

    using value_type = _Ty;
    using type = integral_constant;

    constexpr operator value_type ( ) const noexcept {
        return value;
    }

    [ [ nodiscard ] ] constexpr value_type operator ( ) ( ) const noexcept {
        return value;
    }
};
#line 38
template< bool _Val> using bool_constant = integral_constant< bool, _Val> ; 
#line 41
using true_type = bool_constant< true> ; 
#line 42
using false_type = bool_constant< false> ; 
#line 45
template< bool _Test, class _Ty = void> 
#line 46
struct enable_if { }; 
#line 48
template< class _Ty> 
#line 49
struct enable_if< true, _Ty>  { 
#line 50
using type = _Ty; 
#line 51
}; 
#line 53
template< bool _Test, class _Ty = void> using enable_if_t = typename enable_if< _Test, _Ty> ::type; 
#line 57
template< bool _Test, class _Ty1, class _Ty2> 
#line 58
struct conditional { 
#line 59
using type = _Ty1; 
#line 60
}; 
#line 62
template< class _Ty1, class _Ty2> 
#line 63
struct conditional< false, _Ty1, _Ty2>  { 
#line 64
using type = _Ty2; 
#line 65
}; 
#line 67
template< bool _Test, class _Ty1, class _Ty2> using conditional_t = typename conditional< _Test, _Ty1, _Ty2> ::type; 
#line 78
template< class , class > constexpr bool 
#line 79
is_same_v = false; 
#line 80
template< class _Ty> constexpr bool 
#line 81
is_same_v< _Ty, _Ty>  = true; 
#line 83
template< class _Ty1, class _Ty2> 
#line 84
struct is_same : public bool_constant< is_same_v< _Ty1, _Ty2> >  { }; 
#line 88 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\xtr1common"
template< class _Ty> 
#line 89
struct remove_const { 
#line 90
using type = _Ty; 
#line 91
}; 
#line 93
template< class _Ty> 
#line 94
struct remove_const< const _Ty>  { 
#line 95
using type = _Ty; 
#line 96
}; 
#line 98
template< class _Ty> using remove_const_t = typename remove_const< _Ty> ::type; 
#line 102
template< class _Ty> 
#line 103
struct remove_volatile { 
#line 104
using type = _Ty; 
#line 105
}; 
#line 107
template< class _Ty> 
#line 108
struct remove_volatile< volatile _Ty>  { 
#line 109
using type = _Ty; 
#line 110
}; 
#line 112
template< class _Ty> using remove_volatile_t = typename remove_volatile< _Ty> ::type; 
#line 116
template< class _Ty> 
#line 117
struct remove_cv { 
#line 118
using type = _Ty; 
#line 120
template< template< class >  class _Fn> using _Apply = _Fn< _Ty> ; 
#line 122
}; 
#line 124
template< class _Ty> 
#line 125
struct remove_cv< const _Ty>  { 
#line 126
using type = _Ty; 
#line 128
template< template< class >  class _Fn> using _Apply = const _Fn< _Ty> ; 
#line 130
}; 
#line 132
template< class _Ty> 
#line 133
struct remove_cv< volatile _Ty>  { 
#line 134
using type = _Ty; 
#line 136
template< template< class >  class _Fn> using _Apply = volatile _Fn< _Ty> ; 
#line 138
}; 
#line 140
template< class _Ty> 
#line 141
struct remove_cv< const volatile _Ty>  { 
#line 142
using type = _Ty; 
#line 144
template< template< class >  class _Fn> using _Apply = const volatile _Fn< _Ty> ; 
#line 146
}; 
#line 148
template< class _Ty> using remove_cv_t = typename remove_cv< _Ty> ::type; 
#line 152
template< bool _First_value, class _First, class ..._Rest> 
#line 153
struct _Disjunction { 
#line 154
using type = _First; 
#line 155
}; 
#line 157
template< class _False, class _Next, class ..._Rest> 
#line 158
struct _Disjunction< false, _False, _Next, _Rest...>  { 
#line 159
using type = typename std::_Disjunction< _Next::value, _Next, _Rest...> ::type; 
#line 160
}; 
#line 162
template< class ..._Traits> 
#line 163
struct disjunction : public false_type { }; 
#line 165
template< class _First, class ..._Rest> 
#line 166
struct disjunction< _First, _Rest...>  : public _Disjunction< _First::value, _First, _Rest...> ::type { 
#line 168
}; 
#line 170
template< class ..._Traits> constexpr bool 
#line 171
disjunction_v = (disjunction< _Traits...> ::value); 
#line 174
template< class _Ty, class ..._Types> constexpr bool 
#line 175
_Is_any_of_v = disjunction_v< is_same< _Ty, _Types> ...> ; 
#line 179
template< class _Ty> constexpr bool 
#line 180
is_integral_v = _Is_any_of_v< remove_cv_t< _Ty> , bool, char, signed char, unsigned char, __wchar_t, char16_t, char32_t, short, unsigned short, int, unsigned, long, unsigned long, __int64, unsigned __int64> ; 
#line 187
template< class _Ty> 
#line 188
struct is_integral : public bool_constant< is_integral_v< _Ty> >  { }; 
#line 191
template< class _Ty> constexpr bool 
#line 192
is_floating_point_v = _Is_any_of_v< remove_cv_t< _Ty> , float, double, long double> ; 
#line 194
template< class _Ty> 
#line 195
struct is_floating_point : public bool_constant< is_floating_point_v< _Ty> >  { }; 
#line 198
template< class _Ty> constexpr bool 
#line 199
is_arithmetic_v = is_integral_v< _Ty>  || is_floating_point_v< _Ty> ; 
#line 202
template< class _Ty> 
#line 203
struct is_arithmetic : public bool_constant< is_arithmetic_v< _Ty> >  { }; 
#line 206
template< class _Ty> 
#line 207
struct remove_reference { 
#line 208
using type = _Ty; 
#line 209
using _Const_thru_ref_type = const _Ty; 
#line 210
}; 
#line 212
template< class _Ty> 
#line 213
struct remove_reference< _Ty &>  { 
#line 214
using type = _Ty; 
#line 215
using _Const_thru_ref_type = const _Ty &; 
#line 216
}; 
#line 218
template< class _Ty> 
#line 219
struct remove_reference< _Ty &&>  { 
#line 220
using type = _Ty; 
#line 221
using _Const_thru_ref_type = const _Ty &&; 
#line 222
}; 
#line 224
template< class _Ty> using remove_reference_t = typename remove_reference< _Ty> ::type; 
#line 228
template< class _Ty> using _Const_thru_ref = typename remove_reference< _Ty> ::_Const_thru_ref_type; 
#line 231
template< class _Ty> using _Remove_cvref_t = remove_cv_t< remove_reference_t< _Ty> > ; 
#line 244 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\xtr1common"
}
#line 247
#pragma warning(pop)
#pragma pack ( pop )
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\cmath"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4472 4494 4514 4571 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4702 4793 4820 4988 5026 5027 5045 )
#line 22
[[nodiscard]] inline double pow(double _Xx, int _Yx) noexcept { 
#line 23
if (_Yx == 2) { 
#line 24
return _Xx * _Xx; 
#line 25
}  
#line 27
return ::pow(_Xx, static_cast< double>(_Yx)); 
#line 28
} 
#line 30
[[nodiscard]] inline float acos(float _Xx) noexcept { 
#line 31
return ::acosf(_Xx); 
#line 32
} 
#line 34
[[nodiscard]] inline float acosh(float _Xx) noexcept { 
#line 35
return ::acoshf(_Xx); 
#line 36
} 
#line 38
[[nodiscard]] inline float asin(float _Xx) noexcept { 
#line 39
return ::asinf(_Xx); 
#line 40
} 
#line 42
[[nodiscard]] inline float asinh(float _Xx) noexcept { 
#line 43
return ::asinhf(_Xx); 
#line 44
} 
#line 46
[[nodiscard]] inline float atan(float _Xx) noexcept { 
#line 47
return ::atanf(_Xx); 
#line 48
} 
#line 50
[[nodiscard]] inline float atanh(float _Xx) noexcept { 
#line 51
return ::atanhf(_Xx); 
#line 52
} 
#line 54
[[nodiscard]] inline float atan2(float _Yx, float _Xx) noexcept { 
#line 55
return ::atan2f(_Yx, _Xx); 
#line 56
} 
#line 58
[[nodiscard]] inline float cbrt(float _Xx) noexcept { 
#line 59
return ::cbrtf(_Xx); 
#line 60
} 
#line 62
[[nodiscard]] inline float ceil(float _Xx) noexcept { 
#line 63
return ::ceilf(_Xx); 
#line 64
} 
#line 66
[[nodiscard]] inline float copysign(float _Number, float _Sign) noexcept { 
#line 67
return ::copysignf(_Number, _Sign); 
#line 68
} 
#line 70
[[nodiscard]] inline float cos(float _Xx) noexcept { 
#line 71
return ::cosf(_Xx); 
#line 72
} 
#line 74
[[nodiscard]] inline float cosh(float _Xx) noexcept { 
#line 75
return ::coshf(_Xx); 
#line 76
} 
#line 78
[[nodiscard]] inline float erf(float _Xx) noexcept { 
#line 79
return ::erff(_Xx); 
#line 80
} 
#line 82
[[nodiscard]] inline float erfc(float _Xx) noexcept { 
#line 83
return ::erfcf(_Xx); 
#line 84
} 
#line 86
[[nodiscard]] inline float exp(float _Xx) noexcept { 
#line 87
return ::expf(_Xx); 
#line 88
} 
#line 90
[[nodiscard]] inline float exp2(float _Xx) noexcept { 
#line 91
return ::exp2f(_Xx); 
#line 92
} 
#line 94
[[nodiscard]] inline float expm1(float _Xx) noexcept { 
#line 95
return ::expm1f(_Xx); 
#line 96
} 
#line 98
[[nodiscard]] inline float fabs(float _Xx) noexcept { 
#line 99
return ::fabsf(_Xx); 
#line 100
} 
#line 102
[[nodiscard]] inline float fdim(float _Xx, float _Yx) noexcept { 
#line 103
return ::fdimf(_Xx, _Yx); 
#line 104
} 
#line 106
[[nodiscard]] inline float floor(float _Xx) noexcept { 
#line 107
return ::floorf(_Xx); 
#line 108
} 
#line 110
[[nodiscard]] inline float fma(float _Xx, float _Yx, float _Zx) noexcept { 
#line 111
return ::fmaf(_Xx, _Yx, _Zx); 
#line 112
} 
#line 114
[[nodiscard]] inline float fmax(float _Xx, float _Yx) noexcept { 
#line 115
return ::fmaxf(_Xx, _Yx); 
#line 116
} 
#line 118
[[nodiscard]] inline float fmin(float _Xx, float _Yx) noexcept { 
#line 119
return ::fminf(_Xx, _Yx); 
#line 120
} 
#line 122
[[nodiscard]] inline float fmod(float _Xx, float _Yx) noexcept { 
#line 123
return ::fmodf(_Xx, _Yx); 
#line 124
} 
#line 126
inline float frexp(float _Xx, int *_Yx) noexcept { 
#line 127
return ::frexpf(_Xx, _Yx); 
#line 128
} 
#line 130
[[nodiscard]] inline float hypot(float _Xx, float _Yx) noexcept { 
#line 131
return ::hypotf(_Xx, _Yx); 
#line 132
} 
#line 134
[[nodiscard]] inline int ilogb(float _Xx) noexcept { 
#line 135
return ::ilogbf(_Xx); 
#line 136
} 
#line 138
[[nodiscard]] inline float ldexp(float _Xx, int _Yx) noexcept { 
#line 139
return ::ldexpf(_Xx, _Yx); 
#line 140
} 
#line 142
[[nodiscard]] inline float lgamma(float _Xx) noexcept { 
#line 143
return ::lgammaf(_Xx); 
#line 144
} 
#line 146
[[nodiscard]] inline __int64 llrint(float _Xx) noexcept { 
#line 147
return ::llrintf(_Xx); 
#line 148
} 
#line 150
[[nodiscard]] inline __int64 llround(float _Xx) noexcept { 
#line 151
return ::llroundf(_Xx); 
#line 152
} 
#line 154
[[nodiscard]] inline float log(float _Xx) noexcept { 
#line 155
return ::logf(_Xx); 
#line 156
} 
#line 158
[[nodiscard]] inline float log10(float _Xx) noexcept { 
#line 159
return ::log10f(_Xx); 
#line 160
} 
#line 162
[[nodiscard]] inline float log1p(float _Xx) noexcept { 
#line 163
return ::log1pf(_Xx); 
#line 164
} 
#line 166
[[nodiscard]] inline float log2(float _Xx) noexcept { 
#line 167
return ::log2f(_Xx); 
#line 168
} 
#line 170
[[nodiscard]] inline float logb(float _Xx) noexcept { 
#line 171
return ::logbf(_Xx); 
#line 172
} 
#line 174
[[nodiscard]] inline long lrint(float _Xx) noexcept { 
#line 175
return ::lrintf(_Xx); 
#line 176
} 
#line 178
[[nodiscard]] inline long lround(float _Xx) noexcept { 
#line 179
return ::lroundf(_Xx); 
#line 180
} 
#line 182
inline float modf(float _Xx, float *_Yx) noexcept { 
#line 183
return ::modff(_Xx, _Yx); 
#line 184
} 
#line 186
[[nodiscard]] inline float nearbyint(float _Xx) noexcept { 
#line 187
return ::nearbyintf(_Xx); 
#line 188
} 
#line 190
[[nodiscard]] inline float nextafter(float _Xx, float _Yx) noexcept { 
#line 191
return ::nextafterf(_Xx, _Yx); 
#line 192
} 
#line 194
[[nodiscard]] inline float nexttoward(float _Xx, long double _Yx) noexcept { 
#line 195
return ::nexttowardf(_Xx, _Yx); 
#line 196
} 
#line 198
[[nodiscard]] inline float pow(float _Xx, float _Yx) noexcept { 
#line 199
return ::powf(_Xx, _Yx); 
#line 200
} 
#line 202
[[nodiscard]] inline float pow(float _Xx, int _Yx) noexcept { 
#line 203
if (_Yx == 2) { 
#line 204
return _Xx * _Xx; 
#line 205
}  
#line 207
return ::powf(_Xx, static_cast< float>(_Yx)); 
#line 208
} 
#line 210
[[nodiscard]] inline float remainder(float _Xx, float _Yx) noexcept { 
#line 211
return ::remainderf(_Xx, _Yx); 
#line 212
} 
#line 214
inline float remquo(float _Xx, float _Yx, int *_Zx) noexcept { 
#line 215
return ::remquof(_Xx, _Yx, _Zx); 
#line 216
} 
#line 218
[[nodiscard]] inline float rint(float _Xx) noexcept { 
#line 219
return ::rintf(_Xx); 
#line 220
} 
#line 222
[[nodiscard]] inline float round(float _Xx) noexcept { 
#line 223
return ::roundf(_Xx); 
#line 224
} 
#line 226
[[nodiscard]] inline float scalbln(float _Xx, long _Yx) noexcept { 
#line 227
return ::scalblnf(_Xx, _Yx); 
#line 228
} 
#line 230
[[nodiscard]] inline float scalbn(float _Xx, int _Yx) noexcept { 
#line 231
return ::scalbnf(_Xx, _Yx); 
#line 232
} 
#line 234
[[nodiscard]] inline float sin(float _Xx) noexcept { 
#line 235
return ::sinf(_Xx); 
#line 236
} 
#line 238
[[nodiscard]] inline float sinh(float _Xx) noexcept { 
#line 239
return ::sinhf(_Xx); 
#line 240
} 
#line 242
[[nodiscard]] inline float sqrt(float _Xx) noexcept { 
#line 243
return ::sqrtf(_Xx); 
#line 244
} 
#line 246
[[nodiscard]] inline float tan(float _Xx) noexcept { 
#line 247
return ::tanf(_Xx); 
#line 248
} 
#line 250
[[nodiscard]] inline float tanh(float _Xx) noexcept { 
#line 251
return ::tanhf(_Xx); 
#line 252
} 
#line 254
[[nodiscard]] inline float tgamma(float _Xx) noexcept { 
#line 255
return ::tgammaf(_Xx); 
#line 256
} 
#line 258
[[nodiscard]] inline float trunc(float _Xx) noexcept { 
#line 259
return ::truncf(_Xx); 
#line 260
} 
#line 262
[[nodiscard]] inline long double acos(long double _Xx) noexcept { 
#line 263
return ::acosl(_Xx); 
#line 264
} 
#line 266
[[nodiscard]] inline long double acosh(long double _Xx) noexcept { 
#line 267
return ::acoshl(_Xx); 
#line 268
} 
#line 270
[[nodiscard]] inline long double asin(long double _Xx) noexcept { 
#line 271
return ::asinl(_Xx); 
#line 272
} 
#line 274
[[nodiscard]] inline long double asinh(long double _Xx) noexcept { 
#line 275
return ::asinhl(_Xx); 
#line 276
} 
#line 278
[[nodiscard]] inline long double atan(long double _Xx) noexcept { 
#line 279
return ::atanl(_Xx); 
#line 280
} 
#line 282
[[nodiscard]] inline long double atanh(long double _Xx) noexcept { 
#line 283
return ::atanhl(_Xx); 
#line 284
} 
#line 286
[[nodiscard]] inline long double atan2(long double 
#line 287
_Yx, long double _Xx) noexcept { 
#line 288
return ::atan2l(_Yx, _Xx); 
#line 289
} 
#line 291
[[nodiscard]] inline long double cbrt(long double _Xx) noexcept { 
#line 292
return ::cbrtl(_Xx); 
#line 293
} 
#line 295
[[nodiscard]] inline long double ceil(long double _Xx) noexcept { 
#line 296
return ::ceill(_Xx); 
#line 297
} 
#line 299
[[nodiscard]] inline long double copysign(long double 
#line 300
_Number, long double _Sign) noexcept { 
#line 301
return ::copysignl(_Number, _Sign); 
#line 302
} 
#line 304
[[nodiscard]] inline long double cos(long double _Xx) noexcept { 
#line 305
return ::cosl(_Xx); 
#line 306
} 
#line 308
[[nodiscard]] inline long double cosh(long double _Xx) noexcept { 
#line 309
return ::coshl(_Xx); 
#line 310
} 
#line 312
[[nodiscard]] inline long double erf(long double _Xx) noexcept { 
#line 313
return ::erfl(_Xx); 
#line 314
} 
#line 316
[[nodiscard]] inline long double erfc(long double _Xx) noexcept { 
#line 317
return ::erfcl(_Xx); 
#line 318
} 
#line 320
[[nodiscard]] inline long double exp(long double _Xx) noexcept { 
#line 321
return ::expl(_Xx); 
#line 322
} 
#line 324
[[nodiscard]] inline long double exp2(long double _Xx) noexcept { 
#line 325
return ::exp2l(_Xx); 
#line 326
} 
#line 328
[[nodiscard]] inline long double expm1(long double _Xx) noexcept { 
#line 329
return ::expm1l(_Xx); 
#line 330
} 
#line 332
[[nodiscard]] inline long double fabs(long double _Xx) noexcept { 
#line 333
return ::fabsl(_Xx); 
#line 334
} 
#line 336
[[nodiscard]] inline long double fdim(long double 
#line 337
_Xx, long double _Yx) noexcept { 
#line 338
return ::fdiml(_Xx, _Yx); 
#line 339
} 
#line 341
[[nodiscard]] inline long double floor(long double _Xx) noexcept { 
#line 342
return ::floorl(_Xx); 
#line 343
} 
#line 345
[[nodiscard]] inline long double fma(long double 
#line 346
_Xx, long double _Yx, long double _Zx) noexcept { 
#line 347
return ::fmal(_Xx, _Yx, _Zx); 
#line 348
} 
#line 350
[[nodiscard]] inline long double fmax(long double 
#line 351
_Xx, long double _Yx) noexcept { 
#line 352
return ::fmaxl(_Xx, _Yx); 
#line 353
} 
#line 355
[[nodiscard]] inline long double fmin(long double 
#line 356
_Xx, long double _Yx) noexcept { 
#line 357
return ::fminl(_Xx, _Yx); 
#line 358
} 
#line 360
[[nodiscard]] inline long double fmod(long double 
#line 361
_Xx, long double _Yx) noexcept { 
#line 362
return ::fmodl(_Xx, _Yx); 
#line 363
} 
#line 365
inline long double frexp(long double _Xx, int *_Yx) noexcept { 
#line 366
return ::frexpl(_Xx, _Yx); 
#line 367
} 
#line 369
[[nodiscard]] inline long double hypot(long double 
#line 370
_Xx, long double _Yx) noexcept { 
#line 371
return ::hypotl(_Xx, _Yx); 
#line 372
} 
#line 374
[[nodiscard]] inline int ilogb(long double _Xx) noexcept { 
#line 375
return ::ilogbl(_Xx); 
#line 376
} 
#line 378
[[nodiscard]] inline long double ldexp(long double _Xx, int _Yx) noexcept { 
#line 379
return ::ldexpl(_Xx, _Yx); 
#line 380
} 
#line 382
[[nodiscard]] inline long double lgamma(long double _Xx) noexcept { 
#line 383
return ::lgammal(_Xx); 
#line 384
} 
#line 386
[[nodiscard]] inline __int64 llrint(long double _Xx) noexcept { 
#line 387
return ::llrintl(_Xx); 
#line 388
} 
#line 390
[[nodiscard]] inline __int64 llround(long double _Xx) noexcept { 
#line 391
return ::llroundl(_Xx); 
#line 392
} 
#line 394
[[nodiscard]] inline long double log(long double _Xx) noexcept { 
#line 395
return ::logl(_Xx); 
#line 396
} 
#line 398
[[nodiscard]] inline long double log10(long double _Xx) noexcept { 
#line 399
return ::log10l(_Xx); 
#line 400
} 
#line 402
[[nodiscard]] inline long double log1p(long double _Xx) noexcept { 
#line 403
return ::log1pl(_Xx); 
#line 404
} 
#line 406
[[nodiscard]] inline long double log2(long double _Xx) noexcept { 
#line 407
return ::log2l(_Xx); 
#line 408
} 
#line 410
[[nodiscard]] inline long double logb(long double _Xx) noexcept { 
#line 411
return ::logbl(_Xx); 
#line 412
} 
#line 414
[[nodiscard]] inline long lrint(long double _Xx) noexcept { 
#line 415
return ::lrintl(_Xx); 
#line 416
} 
#line 418
[[nodiscard]] inline long lround(long double _Xx) noexcept { 
#line 419
return ::lroundl(_Xx); 
#line 420
} 
#line 422
inline long double modf(long double _Xx, long double *_Yx) noexcept { 
#line 423
return ::modfl(_Xx, _Yx); 
#line 424
} 
#line 426
[[nodiscard]] inline long double nearbyint(long double _Xx) noexcept { 
#line 427
return ::nearbyintl(_Xx); 
#line 428
} 
#line 430
[[nodiscard]] inline long double nextafter(long double 
#line 431
_Xx, long double _Yx) noexcept { 
#line 432
return ::nextafterl(_Xx, _Yx); 
#line 433
} 
#line 435
[[nodiscard]] inline long double nexttoward(long double 
#line 436
_Xx, long double _Yx) noexcept { 
#line 437
return ::nexttowardl(_Xx, _Yx); 
#line 438
} 
#line 440
[[nodiscard]] inline long double pow(long double 
#line 441
_Xx, long double _Yx) noexcept { 
#line 442
return ::powl(_Xx, _Yx); 
#line 443
} 
#line 445
[[nodiscard]] inline long double pow(long double _Xx, int _Yx) noexcept { 
#line 446
if (_Yx == 2) { 
#line 447
return _Xx * _Xx; 
#line 448
}  
#line 450
return ::powl(_Xx, static_cast< long double>(_Yx)); 
#line 451
} 
#line 453
[[nodiscard]] inline long double remainder(long double 
#line 454
_Xx, long double _Yx) noexcept { 
#line 455
return ::remainderl(_Xx, _Yx); 
#line 456
} 
#line 458
inline long double remquo(long double _Xx, long double _Yx, int *_Zx) noexcept { 
#line 459
return ::remquol(_Xx, _Yx, _Zx); 
#line 460
} 
#line 462
[[nodiscard]] inline long double rint(long double _Xx) noexcept { 
#line 463
return ::rintl(_Xx); 
#line 464
} 
#line 466
[[nodiscard]] inline long double round(long double _Xx) noexcept { 
#line 467
return ::roundl(_Xx); 
#line 468
} 
#line 470
[[nodiscard]] inline long double scalbln(long double _Xx, long _Yx) noexcept { 
#line 471
return ::scalblnl(_Xx, _Yx); 
#line 472
} 
#line 474
[[nodiscard]] inline long double scalbn(long double _Xx, int _Yx) noexcept { 
#line 475
return ::scalbnl(_Xx, _Yx); 
#line 476
} 
#line 478
[[nodiscard]] inline long double sin(long double _Xx) noexcept { 
#line 479
return ::sinl(_Xx); 
#line 480
} 
#line 482
[[nodiscard]] inline long double sinh(long double _Xx) noexcept { 
#line 483
return ::sinhl(_Xx); 
#line 484
} 
#line 486
[[nodiscard]] inline long double sqrt(long double _Xx) noexcept { 
#line 487
return ::sqrtl(_Xx); 
#line 488
} 
#line 490
[[nodiscard]] inline long double tan(long double _Xx) noexcept { 
#line 491
return ::tanl(_Xx); 
#line 492
} 
#line 494
[[nodiscard]] inline long double tanh(long double _Xx) noexcept { 
#line 495
return ::tanhl(_Xx); 
#line 496
} 
#line 498
[[nodiscard]] inline long double tgamma(long double _Xx) noexcept { 
#line 499
return ::tgammal(_Xx); 
#line 500
} 
#line 502
[[nodiscard]] inline long double trunc(long double _Xx) noexcept { 
#line 503
return ::truncl(_Xx); 
#line 504
} 
#line 507
namespace std { 
#line 508
template< class _Ty1, class _Ty2> using _Common_float_type_t = conditional_t< is_same_v< _Ty1, long double>  || is_same_v< _Ty2, long double> , long double, conditional_t< is_same_v< _Ty1, float>  && is_same_v< _Ty2, float> , float, double> > ; 
#line 512
}
#line 515
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 >
double frexp ( _Ty _Value, int * const _Exp ) noexcept {
    return :: frexp ( static_cast < double > ( _Value ), _Exp );
}
#line 521
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 >
[ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > pow ( const _Ty1 _Left, const _Ty2 _Right ) noexcept {
    using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >;
    return :: pow ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) );
}
#line 529
inline float _Fma(float _Left, float _Middle, float _Right) noexcept { 
#line 530
return ::fmaf(_Left, _Middle, _Right); 
#line 531
} 
#line 533
inline double _Fma(double _Left, double _Middle, double _Right) noexcept { 
#line 534
return ::fma(_Left, _Middle, _Right); 
#line 535
} 
#line 537
inline long double _Fma(long double _Left, long double _Middle, long double _Right) noexcept { 
#line 538
return ::fmal(_Left, _Middle, _Right); 
#line 539
} 
#line 542 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\cmath"
template < class _Ty1, class _Ty2, class _Ty3,
    :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > && :: std :: is_arithmetic_v < _Ty3 >, int > = 0 >
[ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 > > fma (
    _Ty1 _Left, _Ty2 _Middle, _Ty3 _Right ) noexcept {
    using _Common = :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 >>;









    return _Fma ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) );

}
#line 562 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\cmath"
inline float _Remquo(float _Left, float _Right, int *_Pquo) noexcept { 
#line 563
return ::remquof(_Left, _Right, _Pquo); 
#line 564
} 
#line 566
inline double _Remquo(double _Left, double _Right, int *_Pquo) noexcept { 
#line 567
return ::remquo(_Left, _Right, _Pquo); 
#line 568
} 
#line 570
inline long double _Remquo(long double _Left, long double _Right, int *_Pquo) noexcept { 
#line 571
return ::remquol(_Left, _Right, _Pquo); 
#line 572
} 
#line 575 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\cmath"
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 >
:: std :: _Common_float_type_t < _Ty1, _Ty2 > remquo ( _Ty1 _Left, _Ty2 _Right, int * _Pquo ) noexcept {
    using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >;









    return _Remquo ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo );

}
#line 614 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\cmath"
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double acos ( _Ty _Left ) noexcept { return :: acos ( static_cast < double > ( _Left ) ); }
#line 615
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double asin ( _Ty _Left ) noexcept { return :: asin ( static_cast < double > ( _Left ) ); }
#line 616
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double atan ( _Ty _Left ) noexcept { return :: atan ( static_cast < double > ( _Left ) ); }
#line 617
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > atan2 ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: atan2 ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 618
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cos ( _Ty _Left ) noexcept { return :: cos ( static_cast < double > ( _Left ) ); }
#line 619
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sin ( _Ty _Left ) noexcept { return :: sin ( static_cast < double > ( _Left ) ); }
#line 620
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tan ( _Ty _Left ) noexcept { return :: tan ( static_cast < double > ( _Left ) ); }
#line 621
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double acosh ( _Ty _Left ) noexcept { return :: acosh ( static_cast < double > ( _Left ) ); }
#line 622
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double asinh ( _Ty _Left ) noexcept { return :: asinh ( static_cast < double > ( _Left ) ); }
#line 623
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double atanh ( _Ty _Left ) noexcept { return :: atanh ( static_cast < double > ( _Left ) ); }
#line 624
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cosh ( _Ty _Left ) noexcept { return :: cosh ( static_cast < double > ( _Left ) ); }
#line 625
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sinh ( _Ty _Left ) noexcept { return :: sinh ( static_cast < double > ( _Left ) ); }
#line 626
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tanh ( _Ty _Left ) noexcept { return :: tanh ( static_cast < double > ( _Left ) ); }
#line 627
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double exp ( _Ty _Left ) noexcept { return :: exp ( static_cast < double > ( _Left ) ); }
#line 628
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double exp2 ( _Ty _Left ) noexcept { return :: exp2 ( static_cast < double > ( _Left ) ); }
#line 629
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double expm1 ( _Ty _Left ) noexcept { return :: expm1 ( static_cast < double > ( _Left ) ); }
#line 631
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] int ilogb ( _Ty _Left ) noexcept { return :: ilogb ( static_cast < double > ( _Left ) ); }
#line 632
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double ldexp ( _Ty _Left, int _Arg2 ) noexcept { return :: ldexp ( static_cast < double > ( _Left ), _Arg2 ); }
#line 633
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log ( _Ty _Left ) noexcept { return :: log ( static_cast < double > ( _Left ) ); }
#line 634
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log10 ( _Ty _Left ) noexcept { return :: log10 ( static_cast < double > ( _Left ) ); }
#line 635
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log1p ( _Ty _Left ) noexcept { return :: log1p ( static_cast < double > ( _Left ) ); }
#line 636
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log2 ( _Ty _Left ) noexcept { return :: log2 ( static_cast < double > ( _Left ) ); }
#line 637
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double logb ( _Ty _Left ) noexcept { return :: logb ( static_cast < double > ( _Left ) ); }
#line 639
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double scalbn ( _Ty _Left, int _Arg2 ) noexcept { return :: scalbn ( static_cast < double > ( _Left ), _Arg2 ); }
#line 640
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double scalbln ( _Ty _Left, long _Arg2 ) noexcept { return :: scalbln ( static_cast < double > ( _Left ), _Arg2 ); }
#line 641
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cbrt ( _Ty _Left ) noexcept { return :: cbrt ( static_cast < double > ( _Left ) ); }
#line 643
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double fabs ( _Ty _Left ) noexcept { return :: fabs ( static_cast < double > ( _Left ) ); }
#line 644
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > hypot ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: hypot ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 647
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sqrt ( _Ty _Left ) noexcept { return :: sqrt ( static_cast < double > ( _Left ) ); }
#line 648
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double erf ( _Ty _Left ) noexcept { return :: erf ( static_cast < double > ( _Left ) ); }
#line 649
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double erfc ( _Ty _Left ) noexcept { return :: erfc ( static_cast < double > ( _Left ) ); }
#line 650
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double lgamma ( _Ty _Left ) noexcept { return :: lgamma ( static_cast < double > ( _Left ) ); }
#line 651
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tgamma ( _Ty _Left ) noexcept { return :: tgamma ( static_cast < double > ( _Left ) ); }
#line 652
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double ceil ( _Ty _Left ) noexcept { return :: ceil ( static_cast < double > ( _Left ) ); }
#line 653
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double floor ( _Ty _Left ) noexcept { return :: floor ( static_cast < double > ( _Left ) ); }
#line 654
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double nearbyint ( _Ty _Left ) noexcept { return :: nearbyint ( static_cast < double > ( _Left ) ); }
#line 655
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double rint ( _Ty _Left ) noexcept { return :: rint ( static_cast < double > ( _Left ) ); }
#line 656
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long lrint ( _Ty _Left ) noexcept { return :: lrint ( static_cast < double > ( _Left ) ); }
#line 657
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long long llrint ( _Ty _Left ) noexcept { return :: llrint ( static_cast < double > ( _Left ) ); }
#line 658
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double round ( _Ty _Left ) noexcept { return :: round ( static_cast < double > ( _Left ) ); }
#line 659
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long lround ( _Ty _Left ) noexcept { return :: lround ( static_cast < double > ( _Left ) ); }
#line 660
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long long llround ( _Ty _Left ) noexcept { return :: llround ( static_cast < double > ( _Left ) ); }
#line 661
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double trunc ( _Ty _Left ) noexcept { return :: trunc ( static_cast < double > ( _Left ) ); }
#line 662
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmod ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmod ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 663
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > remainder ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: remainder ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 665
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > copysign ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: copysign ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 667
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > nextafter ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: nextafter ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 668
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double nexttoward ( _Ty _Left, long double _Arg2 ) noexcept { return :: nexttoward ( static_cast < double > ( _Left ), _Arg2 ); }
#line 669
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fdim ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fdim ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 670
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmax ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmax ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 671
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmin ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmin ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 683
namespace std { 
#line 684
using ::abs;
#line 685
using ::acos;
#line 686
using ::asin;
#line 687
using ::atan;
#line 688
using ::atan2;
#line 689
using ::ceil;
#line 690
using ::cos;
#line 691
using ::cosh;
#line 692
using ::exp;
#line 693
using ::fabs;
#line 694
using ::floor;
#line 695
using ::fmod;
#line 696
using ::frexp;
#line 697
using ::ldexp;
#line 698
using ::log;
#line 699
using ::log10;
#line 700
using ::modf;
#line 701
using ::pow;
#line 702
using ::sin;
#line 703
using ::sinh;
#line 704
using ::sqrt;
#line 705
using ::tan;
#line 706
using ::tanh;
#line 708
using ::acosf;
#line 709
using ::asinf;
#line 710
using ::atanf;
#line 711
using ::atan2f;
#line 712
using ::ceilf;
#line 713
using ::cosf;
#line 714
using ::coshf;
#line 715
using ::expf;
#line 716
using ::fabsf;
#line 717
using ::floorf;
#line 718
using ::fmodf;
#line 719
using ::frexpf;
#line 720
using ::ldexpf;
#line 721
using ::logf;
#line 722
using ::log10f;
#line 723
using ::modff;
#line 724
using ::powf;
#line 725
using ::sinf;
#line 726
using ::sinhf;
#line 727
using ::sqrtf;
#line 728
using ::tanf;
#line 729
using ::tanhf;
#line 731
using ::acosl;
#line 732
using ::asinl;
#line 733
using ::atanl;
#line 734
using ::atan2l;
#line 735
using ::ceill;
#line 736
using ::cosl;
#line 737
using ::coshl;
#line 738
using ::expl;
#line 739
using ::fabsl;
#line 740
using ::floorl;
#line 741
using ::fmodl;
#line 742
using ::frexpl;
#line 743
using ::ldexpl;
#line 744
using ::logl;
#line 745
using ::log10l;
#line 746
using ::modfl;
#line 747
using ::powl;
#line 748
using ::sinl;
#line 749
using ::sinhl;
#line 750
using ::sqrtl;
#line 751
using ::tanl;
#line 752
using ::tanhl;
#line 754
using ::float_t;
#line 755
using ::double_t;
#line 757
using ::acosh;
#line 758
using ::asinh;
#line 759
using ::atanh;
#line 760
using ::cbrt;
#line 761
using ::erf;
#line 762
using ::erfc;
#line 763
using ::expm1;
#line 764
using ::exp2;
#line 765
using ::hypot;
#line 766
using ::ilogb;
#line 767
using ::lgamma;
#line 768
using ::log1p;
#line 769
using ::log2;
#line 770
using ::logb;
#line 771
using ::llrint;
#line 772
using ::lrint;
#line 773
using ::nearbyint;
#line 774
using ::rint;
#line 775
using ::llround;
#line 776
using ::lround;
#line 777
using ::fdim;
#line 778
using ::fma;
#line 779
using ::fmax;
#line 780
using ::fmin;
#line 781
using ::round;
#line 782
using ::trunc;
#line 783
using ::remainder;
#line 784
using ::remquo;
#line 785
using ::copysign;
#line 786
using ::nan;
#line 787
using ::nextafter;
#line 788
using ::scalbn;
#line 789
using ::scalbln;
#line 790
using ::nexttoward;
#line 791
using ::tgamma;
#line 793
using ::acoshf;
#line 794
using ::asinhf;
#line 795
using ::atanhf;
#line 796
using ::cbrtf;
#line 797
using ::erff;
#line 798
using ::erfcf;
#line 799
using ::expm1f;
#line 800
using ::exp2f;
#line 801
using ::hypotf;
#line 802
using ::ilogbf;
#line 803
using ::lgammaf;
#line 804
using ::log1pf;
#line 805
using ::log2f;
#line 806
using ::logbf;
#line 807
using ::llrintf;
#line 808
using ::lrintf;
#line 809
using ::nearbyintf;
#line 810
using ::rintf;
#line 811
using ::llroundf;
#line 812
using ::lroundf;
#line 813
using ::fdimf;
#line 814
using ::fmaf;
#line 815
using ::fmaxf;
#line 816
using ::fminf;
#line 817
using ::roundf;
#line 818
using ::truncf;
#line 819
using ::remainderf;
#line 820
using ::remquof;
#line 821
using ::copysignf;
#line 822
using ::nanf;
#line 823
using ::nextafterf;
#line 824
using ::scalbnf;
#line 825
using ::scalblnf;
#line 826
using ::nexttowardf;
#line 827
using ::tgammaf;
#line 829
using ::acoshl;
#line 830
using ::asinhl;
#line 831
using ::atanhl;
#line 832
using ::cbrtl;
#line 833
using ::erfl;
#line 834
using ::erfcl;
#line 835
using ::expm1l;
#line 836
using ::exp2l;
#line 837
using ::hypotl;
#line 838
using ::ilogbl;
#line 839
using ::lgammal;
#line 840
using ::log1pl;
#line 841
using ::log2l;
#line 842
using ::logbl;
#line 843
using ::llrintl;
#line 844
using ::lrintl;
#line 845
using ::nearbyintl;
#line 846
using ::rintl;
#line 847
using ::llroundl;
#line 848
using ::lroundl;
#line 849
using ::fdiml;
#line 850
using ::fmal;
#line 851
using ::fmaxl;
#line 852
using ::fminl;
#line 853
using ::roundl;
#line 854
using ::truncl;
#line 855
using ::remainderl;
#line 856
using ::remquol;
#line 857
using ::copysignl;
#line 858
using ::nanl;
#line 859
using ::nextafterl;
#line 860
using ::scalbnl;
#line 861
using ::scalblnl;
#line 862
using ::nexttowardl;
#line 863
using ::tgammal;
#line 865
using ::fpclassify;
#line 866
using ::signbit;
#line 867
using ::isfinite;
#line 868
using ::isinf;
#line 869
using ::isnan;
#line 870
using ::isnormal;
#line 871
using ::isgreater;
#line 872
using ::isgreaterequal;
#line 873
using ::isless;
#line 874
using ::islessequal;
#line 875
using ::islessgreater;
#line 876
using ::isunordered;
#line 877
}
#line 1407 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.25.28610\\include\\cmath"
#pragma warning(pop)
#pragma pack ( pop )
#line 9110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern "C" __declspec(dllimport) double __cdecl _hypot(double x, double y); 
#line 9111
extern "C" __declspec(dllimport) float __cdecl _hypotf(float x, float y); 
#line 9121 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline bool signbit(long double) throw(); 
#line 9122
extern "C" __declspec(dllimport) int _ldsign(long double); 
#line 9165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline bool signbit(double) throw(); 
#line 9166
extern "C" __declspec(dllimport) int _dsign(double); 
#line 9210 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline bool signbit(float) throw(); 
#line 9211
extern "C" __declspec(dllimport) int _fdsign(float); 
#line 9219 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isinf(long double a); 
#line 9254 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isinf(double a); 
#line 9292 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isinf(float a); 
#line 9299 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isnan(long double a); 
#line 9332 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isnan(double a); 
#line 9368 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isnan(float a); 
#line 9375 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isfinite(long double a); 
#line 9412 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isfinite(double a); 
#line 9448 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static __inline bool isfinite(float a); 
#line 9456 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
template< class T> extern T _Pow_int(T, int) throw(); 
#line 9457
extern inline __int64 abs(__int64) throw(); 
#line 9532 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline long __cdecl abs(long) throw(); 
#line 9536 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline float __cdecl abs(float) throw(); 
#line 9537
extern inline double __cdecl abs(double) throw(); 
#line 9538
extern inline float __cdecl fabs(float) throw(); 
#line 9539
extern inline float __cdecl ceil(float) throw(); 
#line 9540
extern inline float __cdecl floor(float) throw(); 
#line 9541
extern inline float __cdecl sqrt(float) throw(); 
#line 9542
extern inline float __cdecl pow(float, float) throw(); 
#line 9567 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline float __cdecl pow(float, int) throw(); 
#line 9568
extern inline double __cdecl pow(double, int) throw(); 
#line 9571 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline float __cdecl log(float) throw(); 
#line 9572
extern inline float __cdecl log10(float) throw(); 
#line 9573
extern inline float __cdecl fmod(float, float) throw(); 
#line 9574
extern inline float __cdecl modf(float, float *) throw(); 
#line 9575
extern inline float __cdecl exp(float) throw(); 
#line 9576
extern inline float __cdecl frexp(float, int *) throw(); 
#line 9577
extern inline float __cdecl ldexp(float, int) throw(); 
#line 9578
extern inline float __cdecl asin(float) throw(); 
#line 9579
extern inline float __cdecl sin(float) throw(); 
#line 9580
extern inline float __cdecl sinh(float) throw(); 
#line 9581
extern inline float __cdecl acos(float) throw(); 
#line 9582
extern inline float __cdecl cos(float) throw(); 
#line 9583
extern inline float __cdecl cosh(float) throw(); 
#line 9584
extern inline float __cdecl atan(float) throw(); 
#line 9585
extern inline float __cdecl atan2(float, float) throw(); 
#line 9586
extern inline float __cdecl tan(float) throw(); 
#line 9587
extern inline float __cdecl tanh(float) throw(); 
#line 9807 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
extern inline float __cdecl logb(float) throw(); 
#line 9808
extern inline int __cdecl ilogb(float) throw(); 
#line 9809
extern float __cdecl scalbn(float, float) throw(); 
#line 9810
extern inline float __cdecl scalbln(float, long) throw(); 
#line 9811
extern inline float __cdecl exp2(float) throw(); 
#line 9812
extern inline float __cdecl expm1(float) throw(); 
#line 9813
extern inline float __cdecl log2(float) throw(); 
#line 9814
extern inline float __cdecl log1p(float) throw(); 
#line 9815
extern inline float __cdecl acosh(float) throw(); 
#line 9816
extern inline float __cdecl asinh(float) throw(); 
#line 9817
extern inline float __cdecl atanh(float) throw(); 
#line 9818
extern inline float __cdecl hypot(float, float) throw(); 
#line 9819
extern inline float __cdecl cbrt(float) throw(); 
#line 9820
extern inline float __cdecl erf(float) throw(); 
#line 9821
extern inline float __cdecl erfc(float) throw(); 
#line 9822
extern inline float __cdecl lgamma(float) throw(); 
#line 9823
extern inline float __cdecl tgamma(float) throw(); 
#line 9824
extern inline float __cdecl copysign(float, float) throw(); 
#line 9825
extern inline float __cdecl nextafter(float, float) throw(); 
#line 9826
extern inline float __cdecl remainder(float, float) throw(); 
#line 9827
extern inline float __cdecl remquo(float, float, int *) throw(); 
#line 9828
extern inline float __cdecl round(float) throw(); 
#line 9829
extern inline long __cdecl lround(float) throw(); 
#line 9830
extern inline __int64 __cdecl llround(float) throw(); 
#line 9831
extern inline float __cdecl trunc(float) throw(); 
#line 9832
extern inline float __cdecl rint(float) throw(); 
#line 9833
extern inline long __cdecl lrint(float) throw(); 
#line 9834
extern inline __int64 __cdecl llrint(float) throw(); 
#line 9835
extern inline float __cdecl nearbyint(float) throw(); 
#line 9836
extern inline float __cdecl fdim(float, float) throw(); 
#line 9837
extern inline float __cdecl fma(float, float, float) throw(); 
#line 9838
extern inline float __cdecl fmax(float, float) throw(); 
#line 9839
extern inline float __cdecl fmin(float, float) throw(); 
#line 9842 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.h"
static inline float exp10(float a); 
#line 9844
static inline float rsqrt(float a); 
#line 9846
static inline float rcbrt(float a); 
#line 9848
static inline float sinpi(float a); 
#line 9850
static inline float cospi(float a); 
#line 9852
static inline void sincospi(float a, float * sptr, float * cptr); 
#line 9854
static inline void sincos(float a, float * sptr, float * cptr); 
#line 9856
static inline float j0(float a); 
#line 9858
static inline float j1(float a); 
#line 9860
static inline float jn(int n, float a); 
#line 9862
static inline float y0(float a); 
#line 9864
static inline float y1(float a); 
#line 9866
static inline float yn(int n, float a); 
#line 9868
static inline float cyl_bessel_i0(float a); 
#line 9870
static inline float cyl_bessel_i1(float a); 
#line 9872
static inline float erfinv(float a); 
#line 9874
static inline float erfcinv(float a); 
#line 9876
static inline float normcdfinv(float a); 
#line 9878
static inline float normcdf(float a); 
#line 9880
static inline float erfcx(float a); 
#line 9882
static inline double copysign(double a, float b); 
#line 9884
static inline double copysign(float a, double b); 
#line 9886
static inline unsigned min(unsigned a, unsigned b); 
#line 9888
static inline unsigned min(int a, unsigned b); 
#line 9890
static inline unsigned min(unsigned a, int b); 
#line 9892
static inline long min(long a, long b); 
#line 9894
static inline unsigned long min(unsigned long a, unsigned long b); 
#line 9896
static inline unsigned long min(long a, unsigned long b); 
#line 9898
static inline unsigned long min(unsigned long a, long b); 
#line 9900
static inline __int64 min(__int64 a, __int64 b); 
#line 9902
static inline unsigned __int64 min(unsigned __int64 a, unsigned __int64 b); 
#line 9904
static inline unsigned __int64 min(__int64 a, unsigned __int64 b); 
#line 9906
static inline unsigned __int64 min(unsigned __int64 a, __int64 b); 
#line 9908
static inline float min(float a, float b); 
#line 9910
static inline double min(double a, double b); 
#line 9912
static inline double min(float a, double b); 
#line 9914
static inline double min(double a, float b); 
#line 9916
static inline unsigned max(unsigned a, unsigned b); 
#line 9918
static inline unsigned max(int a, unsigned b); 
#line 9920
static inline unsigned max(unsigned a, int b); 
#line 9922
static inline long max(long a, long b); 
#line 9924
static inline unsigned long max(unsigned long a, unsigned long b); 
#line 9926
static inline unsigned long max(long a, unsigned long b); 
#line 9928
static inline unsigned long max(unsigned long a, long b); 
#line 9930
static inline __int64 max(__int64 a, __int64 b); 
#line 9932
static inline unsigned __int64 max(unsigned __int64 a, unsigned __int64 b); 
#line 9934
static inline unsigned __int64 max(__int64 a, unsigned __int64 b); 
#line 9936
static inline unsigned __int64 max(unsigned __int64 a, __int64 b); 
#line 9938
static inline float max(float a, float b); 
#line 9940
static inline double max(double a, double b); 
#line 9942
static inline double max(float a, double b); 
#line 9944
static inline double max(double a, float b); 
#line 433 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isinf(long double a) 
#line 434
{ 
#line 438 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isinf< long double> (a); 
#line 440 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 449 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isinf(double a) 
#line 450
{ 
#line 454 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isinf< double> (a); 
#line 456 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 465 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isinf(float a) 
#line 466
{ 
#line 470 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isinf< float> (a); 
#line 472 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 481 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isnan(long double a) 
#line 482
{ 
#line 486 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isnan< long double> (a); 
#line 488 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 497 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isnan(double a) 
#line 498
{ 
#line 502 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isnan< double> (a); 
#line 504 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 513 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isnan(float a) 
#line 514
{ 
#line 518 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isnan< float> (a); 
#line 520 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 529 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(long double a) 
#line 530
{ 
#line 534 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isfinite< long double> (a); 
#line 536 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 545 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(double a) 
#line 546
{ 
#line 550 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isfinite< double> (a); 
#line 552 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 561 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(float a) 
#line 562
{ 
#line 566 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return isfinite< float> (a); 
#line 568 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
} 
#line 756 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static inline float exp10(float a) 
#line 757
{ 
#line 758
return exp10f(a); 
#line 759
} 
#line 761
static inline float rsqrt(float a) 
#line 762
{ 
#line 763
return rsqrtf(a); 
#line 764
} 
#line 766
static inline float rcbrt(float a) 
#line 767
{ 
#line 768
return rcbrtf(a); 
#line 769
} 
#line 771
static inline float sinpi(float a) 
#line 772
{ 
#line 773
return sinpif(a); 
#line 774
} 
#line 776
static inline float cospi(float a) 
#line 777
{ 
#line 778
return cospif(a); 
#line 779
} 
#line 781
static inline void sincospi(float a, float *sptr, float *cptr) 
#line 782
{ 
#line 783
sincospif(a, sptr, cptr); 
#line 784
} 
#line 786
static inline void sincos(float a, float *sptr, float *cptr) 
#line 787
{ 
#line 788
sincosf(a, sptr, cptr); 
#line 789
} 
#line 791
static inline float j0(float a) 
#line 792
{ 
#line 793
return j0f(a); 
#line 794
} 
#line 796
static inline float j1(float a) 
#line 797
{ 
#line 798
return j1f(a); 
#line 799
} 
#line 801
static inline float jn(int n, float a) 
#line 802
{ 
#line 803
return jnf(n, a); 
#line 804
} 
#line 806
static inline float y0(float a) 
#line 807
{ 
#line 808
return y0f(a); 
#line 809
} 
#line 811
static inline float y1(float a) 
#line 812
{ 
#line 813
return y1f(a); 
#line 814
} 
#line 816
static inline float yn(int n, float a) 
#line 817
{ 
#line 818
return ynf(n, a); 
#line 819
} 
#line 821
static inline float cyl_bessel_i0(float a) 
#line 822
{ 
#line 823
return cyl_bessel_i0f(a); 
#line 824
} 
#line 826
static inline float cyl_bessel_i1(float a) 
#line 827
{ 
#line 828
return cyl_bessel_i1f(a); 
#line 829
} 
#line 831
static inline float erfinv(float a) 
#line 832
{ 
#line 833
return erfinvf(a); 
#line 834
} 
#line 836
static inline float erfcinv(float a) 
#line 837
{ 
#line 838
return erfcinvf(a); 
#line 839
} 
#line 841
static inline float normcdfinv(float a) 
#line 842
{ 
#line 843
return normcdfinvf(a); 
#line 844
} 
#line 846
static inline float normcdf(float a) 
#line 847
{ 
#line 848
return normcdff(a); 
#line 849
} 
#line 851
static inline float erfcx(float a) 
#line 852
{ 
#line 853
return erfcxf(a); 
#line 854
} 
#line 856
static inline double copysign(double a, float b) 
#line 857
{ 
#line 858
return copysign(a, (double)b); 
#line 859
} 
#line 861
static inline double copysign(float a, double b) 
#line 862
{ 
#line 863
return copysign((double)a, b); 
#line 864
} 
#line 866
static inline unsigned min(unsigned a, unsigned b) 
#line 867
{ 
#line 868
return umin(a, b); 
#line 869
} 
#line 871
static inline unsigned min(int a, unsigned b) 
#line 872
{ 
#line 873
return umin((unsigned)a, b); 
#line 874
} 
#line 876
static inline unsigned min(unsigned a, int b) 
#line 877
{ 
#line 878
return umin(a, (unsigned)b); 
#line 879
} 
#line 881
static inline long min(long a, long b) 
#line 882
{ 
#line 885
#pragma warning (disable: 4127)
#line 888 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 890
#pragma warning (default: 4127)
#line 892 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return (long)min((int)a, (int)b); 
#line 893
} else { 
#line 894
return (long)llmin((__int64)a, (__int64)b); 
#line 895
}  
#line 896
} 
#line 898
static inline unsigned long min(unsigned long a, unsigned long b) 
#line 899
{ 
#line 901
#pragma warning (disable: 4127)
#line 903 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 905
#pragma warning (default: 4127)
#line 907 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 908
} else { 
#line 909
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 910
}  
#line 911
} 
#line 913
static inline unsigned long min(long a, unsigned long b) 
#line 914
{ 
#line 916
#pragma warning (disable: 4127)
#line 918 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 920
#pragma warning (default: 4127)
#line 922 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 923
} else { 
#line 924
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 925
}  
#line 926
} 
#line 928
static inline unsigned long min(unsigned long a, long b) 
#line 929
{ 
#line 931
#pragma warning (disable: 4127)
#line 933 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 935
#pragma warning (default: 4127)
#line 937 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 938
} else { 
#line 939
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 940
}  
#line 941
} 
#line 943
static inline __int64 min(__int64 a, __int64 b) 
#line 944
{ 
#line 945
return llmin(a, b); 
#line 946
} 
#line 948
static inline unsigned __int64 min(unsigned __int64 a, unsigned __int64 b) 
#line 949
{ 
#line 950
return ullmin(a, b); 
#line 951
} 
#line 953
static inline unsigned __int64 min(__int64 a, unsigned __int64 b) 
#line 954
{ 
#line 955
return ullmin((unsigned __int64)a, b); 
#line 956
} 
#line 958
static inline unsigned __int64 min(unsigned __int64 a, __int64 b) 
#line 959
{ 
#line 960
return ullmin(a, (unsigned __int64)b); 
#line 961
} 
#line 963
static inline float min(float a, float b) 
#line 964
{ 
#line 965
return fminf(a, b); 
#line 966
} 
#line 968
static inline double min(double a, double b) 
#line 969
{ 
#line 970
return fmin(a, b); 
#line 971
} 
#line 973
static inline double min(float a, double b) 
#line 974
{ 
#line 975
return fmin((double)a, b); 
#line 976
} 
#line 978
static inline double min(double a, float b) 
#line 979
{ 
#line 980
return fmin(a, (double)b); 
#line 981
} 
#line 983
static inline unsigned max(unsigned a, unsigned b) 
#line 984
{ 
#line 985
return umax(a, b); 
#line 986
} 
#line 988
static inline unsigned max(int a, unsigned b) 
#line 989
{ 
#line 990
return umax((unsigned)a, b); 
#line 991
} 
#line 993
static inline unsigned max(unsigned a, int b) 
#line 994
{ 
#line 995
return umax(a, (unsigned)b); 
#line 996
} 
#line 998
static inline long max(long a, long b) 
#line 999
{ 
#line 1002
#pragma warning (disable: 4127)
#line 1004 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 1006
#pragma warning (default: 4127)
#line 1008 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return (long)max((int)a, (int)b); 
#line 1009
} else { 
#line 1010
return (long)llmax((__int64)a, (__int64)b); 
#line 1011
}  
#line 1012
} 
#line 1014
static inline unsigned long max(unsigned long a, unsigned long b) 
#line 1015
{ 
#line 1017
#pragma warning (disable: 4127)
#line 1019 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1021
#pragma warning (default: 4127)
#line 1023 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 1024
} else { 
#line 1025
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1026
}  
#line 1027
} 
#line 1029
static inline unsigned long max(long a, unsigned long b) 
#line 1030
{ 
#line 1032
#pragma warning (disable: 4127)
#line 1034 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1036
#pragma warning (default: 4127)
#line 1038 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 1039
} else { 
#line 1040
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1041
}  
#line 1042
} 
#line 1044
static inline unsigned long max(unsigned long a, long b) 
#line 1045
{ 
#line 1047
#pragma warning (disable: 4127)
#line 1049 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1051
#pragma warning (default: 4127)
#line 1053 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 1054
} else { 
#line 1055
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1056
}  
#line 1057
} 
#line 1059
static inline __int64 max(__int64 a, __int64 b) 
#line 1060
{ 
#line 1061
return llmax(a, b); 
#line 1062
} 
#line 1064
static inline unsigned __int64 max(unsigned __int64 a, unsigned __int64 b) 
#line 1065
{ 
#line 1066
return ullmax(a, b); 
#line 1067
} 
#line 1069
static inline unsigned __int64 max(__int64 a, unsigned __int64 b) 
#line 1070
{ 
#line 1071
return ullmax((unsigned __int64)a, b); 
#line 1072
} 
#line 1074
static inline unsigned __int64 max(unsigned __int64 a, __int64 b) 
#line 1075
{ 
#line 1076
return ullmax(a, (unsigned __int64)b); 
#line 1077
} 
#line 1079
static inline float max(float a, float b) 
#line 1080
{ 
#line 1081
return fmaxf(a, b); 
#line 1082
} 
#line 1084
static inline double max(double a, double b) 
#line 1085
{ 
#line 1086
return fmax(a, b); 
#line 1087
} 
#line 1089
static inline double max(float a, double b) 
#line 1090
{ 
#line 1091
return fmax((double)a, b); 
#line 1092
} 
#line 1094
static inline double max(double a, float b) 
#line 1095
{ 
#line 1096
return fmax(a, (double)b); 
#line 1097
} 
#line 1103
#pragma warning(disable : 4211)
#line 1108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\math_functions.hpp"
static inline int min(int a, int b) 
#line 1109
{ 
#line 1110
return (a < b) ? a : b; 
#line 1111
} 
#line 1113
static inline unsigned umin(unsigned a, unsigned b) 
#line 1114
{ 
#line 1115
return (a < b) ? a : b; 
#line 1116
} 
#line 1118
static inline __int64 llmin(__int64 a, __int64 b) 
#line 1119
{ 
#line 1120
return (a < b) ? a : b; 
#line 1121
} 
#line 1123
static inline unsigned __int64 ullmin(unsigned __int64 a, unsigned __int64 
#line 1124
b) 
#line 1125
{ 
#line 1126
return (a < b) ? a : b; 
#line 1127
} 
#line 1129
static inline int max(int a, int b) 
#line 1130
{ 
#line 1131
return (a > b) ? a : b; 
#line 1132
} 
#line 1134
static inline unsigned umax(unsigned a, unsigned b) 
#line 1135
{ 
#line 1136
return (a > b) ? a : b; 
#line 1137
} 
#line 1139
static inline __int64 llmax(__int64 a, __int64 b) 
#line 1140
{ 
#line 1141
return (a > b) ? a : b; 
#line 1142
} 
#line 1144
static inline unsigned __int64 ullmax(unsigned __int64 a, unsigned __int64 
#line 1145
b) 
#line 1146
{ 
#line 1147
return (a > b) ? a : b; 
#line 1148
} 
#line 1151
#pragma warning(default: 4211)
#line 74 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_surface_types.h"
template< class T, int dim = 1> 
#line 75
struct surface : public surfaceReference { 
#line 78
surface() 
#line 79
{ 
#line 80
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 81
} 
#line 83
surface(::cudaChannelFormatDesc desc) 
#line 84
{ 
#line 85
(channelDesc) = desc; 
#line 86
} 
#line 88 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_surface_types.h"
}; 
#line 90
template< int dim> 
#line 91
struct surface< void, dim>  : public surfaceReference { 
#line 94
surface() 
#line 95
{ 
#line 96
(channelDesc) = cudaCreateChannelDesc< void> (); 
#line 97
} 
#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_surface_types.h"
}; 
#line 74 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
#line 75
struct texture : public textureReference { 
#line 78
texture(int norm = 0, ::cudaTextureFilterMode 
#line 79
fMode = cudaFilterModePoint, ::cudaTextureAddressMode 
#line 80
aMode = cudaAddressModeClamp) 
#line 81
{ 
#line 82
(normalized) = norm; 
#line 83
(filterMode) = fMode; 
#line 84
((addressMode)[0]) = aMode; 
#line 85
((addressMode)[1]) = aMode; 
#line 86
((addressMode)[2]) = aMode; 
#line 87
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 88
(sRGB) = 0; 
#line 89
} 
#line 91
texture(int norm, ::cudaTextureFilterMode 
#line 92
fMode, ::cudaTextureAddressMode 
#line 93
aMode, ::cudaChannelFormatDesc 
#line 94
desc) 
#line 95
{ 
#line 96
(normalized) = norm; 
#line 97
(filterMode) = fMode; 
#line 98
((addressMode)[0]) = aMode; 
#line 99
((addressMode)[1]) = aMode; 
#line 100
((addressMode)[2]) = aMode; 
#line 101
(channelDesc) = desc; 
#line 102
(sRGB) = 0; 
#line 103
} 
#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_texture_types.h"
}; 
#line 89 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt/device_functions.h"
extern "C" {
#line 3217 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt/device_functions.h"
}
#line 3225
static __inline int mulhi(int a, int b); 
#line 3227
static __inline unsigned mulhi(unsigned a, unsigned b); 
#line 3229
static __inline unsigned mulhi(int a, unsigned b); 
#line 3231
static __inline unsigned mulhi(unsigned a, int b); 
#line 3233
static __inline __int64 mul64hi(__int64 a, __int64 b); 
#line 3235
static __inline unsigned __int64 mul64hi(unsigned __int64 a, unsigned __int64 b); 
#line 3237
static __inline unsigned __int64 mul64hi(__int64 a, unsigned __int64 b); 
#line 3239
static __inline unsigned __int64 mul64hi(unsigned __int64 a, __int64 b); 
#line 3241
static __inline int float_as_int(float a); 
#line 3243
static __inline float int_as_float(int a); 
#line 3245
static __inline unsigned float_as_uint(float a); 
#line 3247
static __inline float uint_as_float(unsigned a); 
#line 3249
static __inline float saturate(float a); 
#line 3251
static __inline int mul24(int a, int b); 
#line 3253
static __inline unsigned umul24(unsigned a, unsigned b); 
#line 3255
static __inline int float2int(float a, cudaRoundMode mode = cudaRoundZero); 
#line 3257
static __inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero); 
#line 3259
static __inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest); 
#line 3261
static __inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
#line 90 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline int mulhi(int a, int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 91
{ 
#line 92
return __mulhi(a, b); 
#line 93
} 
#endif
#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(unsigned a, unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 96
{ 
#line 97
return __umulhi(a, b); 
#line 98
} 
#endif
#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(int a, unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 101
{ 
#line 102
return __umulhi((unsigned)a, b); 
#line 103
} 
#endif
#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(unsigned a, int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 106
{ 
#line 107
return __umulhi(a, (unsigned)b); 
#line 108
} 
#endif
#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline __int64 mul64hi(__int64 a, __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 111
{ 
#line 112
return __mul64hi(a, b); 
#line 113
} 
#endif
#line 115 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, unsigned __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 116
{ 
#line 117
return __umul64hi(a, b); 
#line 118
} 
#endif
#line 120 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(__int64 a, unsigned __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 121
{ 
#line 122
return __umul64hi((unsigned __int64)a, b); 
#line 123
} 
#endif
#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 126
{ 
#line 127
return __umul64hi(a, (unsigned __int64)b); 
#line 128
} 
#endif
#line 130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline int float_as_int(float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 131
{ 
#line 132
return __float_as_int(a); 
#line 133
} 
#endif
#line 135 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline float int_as_float(int a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 136
{ 
#line 137
return __int_as_float(a); 
#line 138
} 
#endif
#line 140 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned float_as_uint(float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 141
{ 
#line 142
return __float_as_uint(a); 
#line 143
} 
#endif
#line 145 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline float uint_as_float(unsigned a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 146
{ 
#line 147
return __uint_as_float(a); 
#line 148
} 
#endif
#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline float saturate(float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 150
{ 
#line 151
return __saturatef(a); 
#line 152
} 
#endif
#line 154 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline int mul24(int a, int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 155
{ 
#line 156
return __mul24(a, b); 
#line 157
} 
#endif
#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned umul24(unsigned a, unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 160
{ 
#line 161
return __umul24(a, b); 
#line 162
} 
#endif
#line 164 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline int float2int(float a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 165
{ 
#line 166
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
#line 170
} 
#endif
#line 172 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline unsigned float2uint(float a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 173
{ 
#line 174
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
#line 178
} 
#endif
#line 180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline float int2float(int a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 181
{ 
#line 182
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
#line 186
} 
#endif
#line 188 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_functions.hpp"
static __inline float uint2float(unsigned a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 189
{ 
#line 190
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
#line 194
} 
#endif
#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 116 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 118 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 120 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 120
{ } 
#endif
#line 122 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 122
{ } 
#endif
#line 124 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 126 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 128 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 132 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 132
{ } 
#endif
#line 134 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 136 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 138 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 138
{ } 
#endif
#line 140 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 142 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 146 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 146
{ } 
#endif
#line 171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
extern "C" {
#line 180
}
#line 189
static __inline unsigned __int64 atomicAdd(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 191 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicExch(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 193 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicCAS(unsigned __int64 *address, unsigned __int64 compare, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 193
{ } 
#endif
#line 195 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
__declspec(deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 195
{ } 
#endif
#line 197 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_atomic_functions.h"
__declspec(deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 197
{ } 
#endif
#line 87 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.h"
extern "C" {
#line 1139
}
#line 1147
static __inline double fma(double a, double b, double c, cudaRoundMode mode); 
#line 1149
static __inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1151
static __inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1153
static __inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1155
static __inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1157
static __inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1159
static __inline __int64 double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1161
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1163
static __inline double ll2double(__int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1165
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1167
static __inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
#line 1169
static __inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
#line 1171
static __inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
#line 93 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double fma(double a, double b, double c, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;::exit(___);}
#if 0
#line 94
{ 
#line 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
#line 99
} 
#endif
#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double dmul(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 102
{ 
#line 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
#line 107
} 
#endif
#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double dadd(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 110
{ 
#line 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
#line 115
} 
#endif
#line 117 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double dsub(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 118
{ 
#line 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
#line 123
} 
#endif
#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline int double2int(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 126
{ 
#line 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
#line 131
} 
#endif
#line 133 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline unsigned double2uint(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 134
{ 
#line 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
#line 139
} 
#endif
#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline __int64 double2ll(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 142
{ 
#line 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
#line 147
} 
#endif
#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 150
{ 
#line 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
#line 155
} 
#endif
#line 157 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double ll2double(__int64 a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 158
{ 
#line 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
#line 163
} 
#endif
#line 165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 166
{ 
#line 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
#line 171
} 
#endif
#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double int2double(int a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 174
{ 
#line 175
return (double)a; 
#line 176
} 
#endif
#line 178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double uint2double(unsigned a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 179
{ 
#line 180
return (double)a; 
#line 181
} 
#endif
#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\device_double_functions.hpp"
static __inline double float2double(float a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 184
{ 
#line 185
return (double)a; 
#line 186
} 
#endif
#line 89 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_atomic_functions.h"
static __inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 89
{ } 
#endif
#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMin(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMax(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicAnd(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicOr(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicXor(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMin(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMax(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicAnd(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 116 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicOr(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 118 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicXor(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 303 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 303
{ } 
#endif
#line 306 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 306
{ } 
#endif
#line 309 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 309
{ } 
#endif
#line 312 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 312
{ } 
#endif
#line 315 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 315
{ } 
#endif
#line 318 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 318
{ } 
#endif
#line 321 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 321
{ } 
#endif
#line 324 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 324
{ } 
#endif
#line 327 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 327
{ } 
#endif
#line 330 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 330
{ } 
#endif
#line 333 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 333
{ } 
#endif
#line 336 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 336
{ } 
#endif
#line 339 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 339
{ } 
#endif
#line 342 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 342
{ } 
#endif
#line 345 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 345
{ } 
#endif
#line 348 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 348
{ } 
#endif
#line 351 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 351
{ } 
#endif
#line 354 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 354
{ } 
#endif
#line 357 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 357
{ } 
#endif
#line 360 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 360
{ } 
#endif
#line 363 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 363
{ } 
#endif
#line 366 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 366
{ } 
#endif
#line 369 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 369
{ } 
#endif
#line 372 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 372
{ } 
#endif
#line 375 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 375
{ } 
#endif
#line 378 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 378
{ } 
#endif
#line 381 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 381
{ } 
#endif
#line 384 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 384
{ } 
#endif
#line 387 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 387
{ } 
#endif
#line 390 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 390
{ } 
#endif
#line 393 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 393
{ } 
#endif
#line 396 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 396
{ } 
#endif
#line 399 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 399
{ } 
#endif
#line 402 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 402
{ } 
#endif
#line 405 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 405
{ } 
#endif
#line 408 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 408
{ } 
#endif
#line 411 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 411
{ } 
#endif
#line 414 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 414
{ } 
#endif
#line 417 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 417
{ } 
#endif
#line 420 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 420
{ } 
#endif
#line 423 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 423
{ } 
#endif
#line 426 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 426
{ } 
#endif
#line 429 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 429
{ } 
#endif
#line 432 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 432
{ } 
#endif
#line 435 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 435
{ } 
#endif
#line 438 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
#line 439
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 439
{ } 
#endif
#line 442 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
#line 443
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 443
{ } 
#endif
#line 446 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_block(unsigned __int64 *address, unsigned __int64 
#line 447
compare, unsigned __int64 
#line 448
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 448
{ } 
#endif
#line 451 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_system(unsigned __int64 *address, unsigned __int64 
#line 452
compare, unsigned __int64 
#line 453
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 453
{ } 
#endif
#line 456 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 456
{ } 
#endif
#line 459 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 459
{ } 
#endif
#line 462 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 462
{ } 
#endif
#line 465 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 465
{ } 
#endif
#line 468 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 468
{ } 
#endif
#line 471 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 471
{ } 
#endif
#line 474 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 474
{ } 
#endif
#line 477 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 477
{ } 
#endif
#line 480 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 480
{ } 
#endif
#line 483 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 483
{ } 
#endif
#line 486 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 486
{ } 
#endif
#line 489 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 489
{ } 
#endif
#line 492 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 492
{ } 
#endif
#line 495 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 495
{ } 
#endif
#line 498 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 498
{ } 
#endif
#line 501 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 501
{ } 
#endif
#line 504 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 504
{ } 
#endif
#line 507 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 507
{ } 
#endif
#line 510 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 510
{ } 
#endif
#line 513 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 513
{ } 
#endif
#line 516 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 516
{ } 
#endif
#line 519 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 519
{ } 
#endif
#line 522 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 522
{ } 
#endif
#line 525 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 525
{ } 
#endif
#line 90 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_intrinsics.h"
extern "C" {
#line 1475
}
#line 1482
__declspec(deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning).")) static __inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1482
{ } 
#endif
#line 1484 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_intrinsics.h"
static __inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1484
{ } 
#endif
#line 1486 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1486
{ } 
#endif
#line 1488 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1488
{ } 
#endif
#line 1493 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_intrinsics.h"
static __inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1493
{ } 
#endif
#line 1494 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_intrinsics.h"
static __inline unsigned __isShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1494
{ } 
#endif
#line 1495 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_intrinsics.h"
static __inline unsigned __isConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1495
{ } 
#endif
#line 1496 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_20_intrinsics.h"
static __inline unsigned __isLocal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1496
{ } 
#endif
#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 119 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 119
{ } 
#endif
#line 120 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 120
{ } 
#endif
#line 121 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 121
{ } 
#endif
#line 122 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 122
{ } 
#endif
#line 123 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 123
{ } 
#endif
#line 124 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 125
{ } 
#endif
#line 126 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 127 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 127
{ } 
#endif
#line 128 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 129 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 133 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 134 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 135 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 135
{ } 
#endif
#line 136 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 137 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 137
{ } 
#endif
#line 138 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 138
{ } 
#endif
#line 139 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 140 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 141
{ } 
#endif
#line 142 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 143 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 143
{ } 
#endif
#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 148 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __int64 __shfl(unsigned __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 148
{ } 
#endif
#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline __int64 __shfl(__int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 149
{ } 
#endif
#line 150 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline __int64 __shfl_up(__int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 150
{ } 
#endif
#line 151 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __int64 __shfl_up(unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 151
{ } 
#endif
#line 152 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline __int64 __shfl_down(__int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 152
{ } 
#endif
#line 153 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __int64 __shfl_down(unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 153
{ } 
#endif
#line 154 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline __int64 __shfl_xor(__int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 154
{ } 
#endif
#line 155 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __int64 __shfl_xor(unsigned __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 155
{ } 
#endif
#line 156 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 156
{ } 
#endif
#line 157 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 157
{ } 
#endif
#line 158 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 158
{ } 
#endif
#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 159
{ } 
#endif
#line 162 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_sync(unsigned mask, __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 162
{ } 
#endif
#line 163 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_sync(unsigned mask, unsigned __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 163
{ } 
#endif
#line 164 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_up_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 164
{ } 
#endif
#line 165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_up_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 165
{ } 
#endif
#line 166 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_down_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 166
{ } 
#endif
#line 167 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_down_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 167
{ } 
#endif
#line 168 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_xor_sync(unsigned mask, __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 168
{ } 
#endif
#line 169 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_xor_sync(unsigned mask, unsigned __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 169
{ } 
#endif
#line 170 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 170
{ } 
#endif
#line 171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 171
{ } 
#endif
#line 172 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 172
{ } 
#endif
#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 173
{ } 
#endif
#line 177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 177
{ } 
#endif
#line 178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 178
{ } 
#endif
#line 179 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 179
{ } 
#endif
#line 180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 180
{ } 
#endif
#line 181 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 181
{ } 
#endif
#line 182 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 182
{ } 
#endif
#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 183
{ } 
#endif
#line 184 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 184
{ } 
#endif
#line 187 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 187
{ } 
#endif
#line 188 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 188
{ } 
#endif
#line 189 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 190 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 190
{ } 
#endif
#line 191 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 192 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 192
{ } 
#endif
#line 193 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 193
{ } 
#endif
#line 194 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 194
{ } 
#endif
#line 87 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 87
{ } 
#endif
#line 88 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 88
{ } 
#endif
#line 90 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 91 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 91
{ } 
#endif
#line 92 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 93 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldg(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 97 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 101
{ } 
#endif
#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldg(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 111 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 113 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 115 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 115
{ } 
#endif
#line 116 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 117 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 117
{ } 
#endif
#line 118 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 119 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 119
{ } 
#endif
#line 123 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 123
{ } 
#endif
#line 124 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 126 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 127 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 127
{ } 
#endif
#line 128 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 129 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcg(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 131 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 131
{ } 
#endif
#line 132 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 132
{ } 
#endif
#line 133 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 134 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 135 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 135
{ } 
#endif
#line 136 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 137 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 137
{ } 
#endif
#line 139 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 140 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 141
{ } 
#endif
#line 142 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcg(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 143 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 143
{ } 
#endif
#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 145 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 145
{ } 
#endif
#line 146 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 146
{ } 
#endif
#line 147 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 147
{ } 
#endif
#line 148 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 148
{ } 
#endif
#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 149
{ } 
#endif
#line 151 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 151
{ } 
#endif
#line 152 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 152
{ } 
#endif
#line 153 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 153
{ } 
#endif
#line 154 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 154
{ } 
#endif
#line 155 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 155
{ } 
#endif
#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 159
{ } 
#endif
#line 160 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 160
{ } 
#endif
#line 162 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 162
{ } 
#endif
#line 163 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 163
{ } 
#endif
#line 164 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 164
{ } 
#endif
#line 165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 165
{ } 
#endif
#line 166 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldca(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 166
{ } 
#endif
#line 167 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 167
{ } 
#endif
#line 168 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 168
{ } 
#endif
#line 169 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 169
{ } 
#endif
#line 170 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 170
{ } 
#endif
#line 171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 171
{ } 
#endif
#line 172 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 172
{ } 
#endif
#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 173
{ } 
#endif
#line 175 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 175
{ } 
#endif
#line 176 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 176
{ } 
#endif
#line 177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 177
{ } 
#endif
#line 178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldca(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 178
{ } 
#endif
#line 179 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 179
{ } 
#endif
#line 180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 180
{ } 
#endif
#line 181 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 181
{ } 
#endif
#line 182 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 182
{ } 
#endif
#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 183
{ } 
#endif
#line 184 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 184
{ } 
#endif
#line 185 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 185
{ } 
#endif
#line 187 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 187
{ } 
#endif
#line 188 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 188
{ } 
#endif
#line 189 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 190 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 190
{ } 
#endif
#line 191 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 195 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 195
{ } 
#endif
#line 196 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 196
{ } 
#endif
#line 198 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 198
{ } 
#endif
#line 199 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 199
{ } 
#endif
#line 200 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 200
{ } 
#endif
#line 201 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 201
{ } 
#endif
#line 202 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcs(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 202
{ } 
#endif
#line 203 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 203
{ } 
#endif
#line 204 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 204
{ } 
#endif
#line 205 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 205
{ } 
#endif
#line 206 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 206
{ } 
#endif
#line 207 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 207
{ } 
#endif
#line 208 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 208
{ } 
#endif
#line 209 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 209
{ } 
#endif
#line 211 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 211
{ } 
#endif
#line 212 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 212
{ } 
#endif
#line 213 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 213
{ } 
#endif
#line 214 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcs(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 214
{ } 
#endif
#line 215 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 215
{ } 
#endif
#line 216 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 216
{ } 
#endif
#line 217 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 217
{ } 
#endif
#line 218 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 218
{ } 
#endif
#line 219 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 219
{ } 
#endif
#line 220 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 220
{ } 
#endif
#line 221 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 221
{ } 
#endif
#line 223 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 223
{ } 
#endif
#line 224 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 224
{ } 
#endif
#line 225 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 225
{ } 
#endif
#line 226 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 226
{ } 
#endif
#line 227 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 227
{ } 
#endif
#line 244 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 244
{ } 
#endif
#line 256 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 256
{ } 
#endif
#line 269 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 269
{ } 
#endif
#line 281 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 281
{ } 
#endif
#line 89 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 89
{ } 
#endif
#line 90 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 92 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 93 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 98 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 93 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 97 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned __int64 value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, __int64 value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned __int64 value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, __int64 value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 111 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 113 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt\\sm_70_rt.h"
static __inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 115
surf1Dread(T *res, ::surface< void, 1>  surf, int x, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;::exit(___);}
#if 0
#line 116
{ 
#line 120
} 
#endif
#line 122 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 123
surf1Dread(::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 124
{ 
#line 130
} 
#endif
#line 132 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 133
surf1Dread(T *res, ::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 134
{ 
#line 138
} 
#endif
#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 142
surf2Dread(T *res, ::surface< void, 2>  surf, int x, int y, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;::exit(___);}
#if 0
#line 143
{ 
#line 147
} 
#endif
#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 150
surf2Dread(::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 151
{ 
#line 157
} 
#endif
#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 160
surf2Dread(T *res, ::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 161
{ 
#line 165
} 
#endif
#line 168 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 169
surf3Dread(T *res, ::surface< void, 3>  surf, int x, int y, int z, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;::exit(___);}
#if 0
#line 170
{ 
#line 174
} 
#endif
#line 176 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 177
surf3Dread(::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 178
{ 
#line 184
} 
#endif
#line 186 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 187
surf3Dread(T *res, ::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 188
{ 
#line 192
} 
#endif
#line 196 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 197
surf1DLayeredread(T *res, ::surface< void, 241>  surf, int x, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 198
{ 
#line 202
} 
#endif
#line 204 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 205
surf1DLayeredread(::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 206
{ 
#line 212
} 
#endif
#line 215 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 216
surf1DLayeredread(T *res, ::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 217
{ 
#line 221
} 
#endif
#line 224 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 225
surf2DLayeredread(T *res, ::surface< void, 242>  surf, int x, int y, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 226
{ 
#line 230
} 
#endif
#line 232 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 233
surf2DLayeredread(::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 234
{ 
#line 240
} 
#endif
#line 243 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 244
surf2DLayeredread(T *res, ::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 245
{ 
#line 249
} 
#endif
#line 252 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 253
surfCubemapread(T *res, ::surface< void, 12>  surf, int x, int y, int face, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;::exit(___);}
#if 0
#line 254
{ 
#line 258
} 
#endif
#line 260 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 261
surfCubemapread(::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 262
{ 
#line 269
} 
#endif
#line 271 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 272
surfCubemapread(T *res, ::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 273
{ 
#line 277
} 
#endif
#line 280 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 281
surfCubemapLayeredread(T *res, ::surface< void, 252>  surf, int x, int y, int layerFace, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;::exit(___);}
#if 0
#line 282
{ 
#line 286
} 
#endif
#line 288 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 289
surfCubemapLayeredread(::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 290
{ 
#line 296
} 
#endif
#line 298 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 299
surfCubemapLayeredread(T *res, ::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 300
{ 
#line 304
} 
#endif
#line 307 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 308
surf1Dwrite(T val, ::surface< void, 1>  surf, int x, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;::exit(___);}
#if 0
#line 309
{ 
#line 313
} 
#endif
#line 315 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 316
surf1Dwrite(T val, ::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 317
{ 
#line 321
} 
#endif
#line 325 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 326
surf2Dwrite(T val, ::surface< void, 2>  surf, int x, int y, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;::exit(___);}
#if 0
#line 327
{ 
#line 331
} 
#endif
#line 333 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 334
surf2Dwrite(T val, ::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 335
{ 
#line 339
} 
#endif
#line 342 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 343
surf3Dwrite(T val, ::surface< void, 3>  surf, int x, int y, int z, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;::exit(___);}
#if 0
#line 344
{ 
#line 348
} 
#endif
#line 350 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 351
surf3Dwrite(T val, ::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 352
{ 
#line 356
} 
#endif
#line 359 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 360
surf1DLayeredwrite(T val, ::surface< void, 241>  surf, int x, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 361
{ 
#line 365
} 
#endif
#line 367 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 368
surf1DLayeredwrite(T val, ::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 369
{ 
#line 373
} 
#endif
#line 376 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 377
surf2DLayeredwrite(T val, ::surface< void, 242>  surf, int x, int y, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 378
{ 
#line 382
} 
#endif
#line 384 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 385
surf2DLayeredwrite(T val, ::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 386
{ 
#line 390
} 
#endif
#line 393 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 394
surfCubemapwrite(T val, ::surface< void, 12>  surf, int x, int y, int face, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;::exit(___);}
#if 0
#line 395
{ 
#line 399
} 
#endif
#line 401 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 402
surfCubemapwrite(T val, ::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 403
{ 
#line 407
} 
#endif
#line 411 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 412
surfCubemapLayeredwrite(T val, ::surface< void, 252>  surf, int x, int y, int layerFace, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;::exit(___);}
#if 0
#line 413
{ 
#line 417
} 
#endif
#line 419 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 420
surfCubemapLayeredwrite(T val, ::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 421
{ 
#line 425
} 
#endif
#line 66 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> 
#line 67
struct __nv_tex_rmet_ret { }; 
#line 69
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
#line 70
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
#line 71
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
#line 72
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
#line 73
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
#line 74
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
#line 75
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
#line 76
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
#line 77
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
#line 79
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
#line 80
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
#line 81
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
#line 82
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
#line 83
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
#line 84
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
#line 85
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
#line 86
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
#line 88
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
#line 89
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
#line 90
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
#line 91
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
#line 92
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
#line 93
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
#line 94
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
#line 95
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
#line 98
template<> struct __nv_tex_rmet_ret< long>  { typedef long type; }; 
#line 99
template<> struct __nv_tex_rmet_ret< unsigned long>  { typedef unsigned long type; }; 
#line 100
template<> struct __nv_tex_rmet_ret< long1>  { typedef long1 type; }; 
#line 101
template<> struct __nv_tex_rmet_ret< ulong1>  { typedef ulong1 type; }; 
#line 102
template<> struct __nv_tex_rmet_ret< long2>  { typedef long2 type; }; 
#line 103
template<> struct __nv_tex_rmet_ret< ulong2>  { typedef ulong2 type; }; 
#line 104
template<> struct __nv_tex_rmet_ret< long4>  { typedef long4 type; }; 
#line 105
template<> struct __nv_tex_rmet_ret< ulong4>  { typedef ulong4 type; }; 
#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
#line 108
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
#line 109
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
#line 110
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
#line 113
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
#line 115
template<> struct __nv_tex_rmet_cast< long>  { typedef int *type; }; 
#line 116
template<> struct __nv_tex_rmet_cast< unsigned long>  { typedef unsigned *type; }; 
#line 117
template<> struct __nv_tex_rmet_cast< long1>  { typedef int1 *type; }; 
#line 118
template<> struct __nv_tex_rmet_cast< ulong1>  { typedef uint1 *type; }; 
#line 119
template<> struct __nv_tex_rmet_cast< long2>  { typedef int2 *type; }; 
#line 120
template<> struct __nv_tex_rmet_cast< ulong2>  { typedef uint2 *type; }; 
#line 121
template<> struct __nv_tex_rmet_cast< long4>  { typedef int4 *type; }; 
#line 122
template<> struct __nv_tex_rmet_cast< ulong4>  { typedef uint4 *type; }; 
#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 126
tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 127
{ 
#line 133
} 
#endif
#line 135 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> 
#line 136
struct __nv_tex_rmnf_ret { }; 
#line 138
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
#line 139
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
#line 140
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
#line 141
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
#line 142
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
#line 143
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
#line 144
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
#line 145
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
#line 146
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
#line 147
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
#line 148
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
#line 149
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
#line 150
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
#line 151
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
#line 152
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
#line 153
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
#line 154
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
#line 156
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 157
tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 158
{ 
#line 165
} 
#endif
#line 168 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 169
tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 170
{ 
#line 176
} 
#endif
#line 178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 179
tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 180
{ 
#line 187
} 
#endif
#line 191 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 192
tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) {int volatile ___ = 1;(void)t;(void)x;(void)y;::exit(___);}
#if 0
#line 193
{ 
#line 200
} 
#endif
#line 202 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 203
tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) {int volatile ___ = 1;(void)t;(void)x;(void)y;::exit(___);}
#if 0
#line 204
{ 
#line 211
} 
#endif
#line 215 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 216
tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)layer;::exit(___);}
#if 0
#line 217
{ 
#line 223
} 
#endif
#line 225 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 226
tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)layer;::exit(___);}
#if 0
#line 227
{ 
#line 234
} 
#endif
#line 238 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 239
tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 240
{ 
#line 246
} 
#endif
#line 248 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 249
tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 250
{ 
#line 257
} 
#endif
#line 260 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 261
tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 262
{ 
#line 268
} 
#endif
#line 270 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 271
tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 272
{ 
#line 279
} 
#endif
#line 282 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 283
texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 284
{ 
#line 290
} 
#endif
#line 292 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 293
texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 294
{ 
#line 301
} 
#endif
#line 304 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> 
#line 305
struct __nv_tex2dgather_ret { }; 
#line 306
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
#line 307
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
#line 308
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
#line 309
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
#line 310
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
#line 311
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
#line 312
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
#line 313
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
#line 314
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
#line 315
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
#line 316
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
#line 318
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
#line 319
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
#line 320
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
#line 321
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
#line 322
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
#line 323
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
#line 324
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
#line 325
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
#line 326
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
#line 327
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
#line 329
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
#line 330
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
#line 331
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
#line 332
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
#line 333
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
#line 334
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
#line 335
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
#line 336
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
#line 337
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
#line 338
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
#line 340
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
#line 341
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
#line 342
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
#line 343
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
#line 344
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
#line 346
template< class T> static __forceinline typename __nv_tex2dgather_ret< T> ::type 
#line 347
tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 348
{ 
#line 355
} 
#endif
#line 358 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
#line 359
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
#line 360
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
#line 361
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
#line 362
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
#line 363
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
#line 364
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
#line 365
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
#line 366
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
#line 367
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
#line 368
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
#line 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
#line 370
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
#line 371
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
#line 372
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
#line 373
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
#line 374
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
#line 375
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
#line 376
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
#line 377
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
#line 378
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
#line 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
#line 381
template< class T> static __forceinline typename __nv_tex2dgather_rmnf_ret< T> ::type 
#line 382
tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 383
{ 
#line 390
} 
#endif
#line 394 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 395
tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) {int volatile ___ = 1;(void)t;(void)x;(void)level;::exit(___);}
#if 0
#line 396
{ 
#line 402
} 
#endif
#line 404 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 405
tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) {int volatile ___ = 1;(void)t;(void)x;(void)level;::exit(___);}
#if 0
#line 406
{ 
#line 413
} 
#endif
#line 416 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 417
tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 418
{ 
#line 424
} 
#endif
#line 426 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 427
tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 428
{ 
#line 435
} 
#endif
#line 438 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 439
tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 440
{ 
#line 446
} 
#endif
#line 448 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 449
tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 450
{ 
#line 457
} 
#endif
#line 460 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 461
tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 462
{ 
#line 468
} 
#endif
#line 470 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 471
tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 472
{ 
#line 479
} 
#endif
#line 482 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 483
tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 484
{ 
#line 490
} 
#endif
#line 492 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 493
tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 494
{ 
#line 501
} 
#endif
#line 504 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 505
texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 506
{ 
#line 512
} 
#endif
#line 514 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 515
texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 516
{ 
#line 523
} 
#endif
#line 527 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 528
texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 529
{ 
#line 535
} 
#endif
#line 537 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 538
texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 539
{ 
#line 546
} 
#endif
#line 550 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 551
texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 552
{ 
#line 558
} 
#endif
#line 560 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 561
texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 562
{ 
#line 569
} 
#endif
#line 573 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 574
texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 575
{ 
#line 581
} 
#endif
#line 583 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 584
texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 585
{ 
#line 592
} 
#endif
#line 596 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 597
texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 598
{ 
#line 604
} 
#endif
#line 606 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 607
texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 608
{ 
#line 615
} 
#endif
#line 619 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 620
tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 621
{ 
#line 627
} 
#endif
#line 629 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 630
tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 631
{ 
#line 638
} 
#endif
#line 642 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 643
tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 644
{ 
#line 650
} 
#endif
#line 652 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 653
tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 654
{ 
#line 661
} 
#endif
#line 664 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 665
tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 666
{ 
#line 672
} 
#endif
#line 674 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 675
tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 676
{ 
#line 683
} 
#endif
#line 686 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 687
tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 688
{ 
#line 694
} 
#endif
#line 696 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 697
tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 698
{ 
#line 705
} 
#endif
#line 708 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 709
tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 710
{ 
#line 716
} 
#endif
#line 718 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 719
tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 720
{ 
#line 727
} 
#endif
#line 60 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
#line 61
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
#line 62
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
#line 63
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
#line 64
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
#line 65
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
#line 66
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
#line 67
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
#line 68
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
#line 69
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
#line 70
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
#line 71
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
#line 72
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
#line 73
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
#line 74
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
#line 75
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
#line 76
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
#line 77
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
#line 78
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
#line 79
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
#line 80
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
#line 81
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
#line 82
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
#line 83
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
#line 84
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
#line 85
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
#line 87
template<> struct __nv_itex_trait< long>  { typedef void type; }; 
#line 88
template<> struct __nv_itex_trait< long1>  { typedef void type; }; 
#line 89
template<> struct __nv_itex_trait< long2>  { typedef void type; }; 
#line 90
template<> struct __nv_itex_trait< long4>  { typedef void type; }; 
#line 91
template<> struct __nv_itex_trait< unsigned long>  { typedef void type; }; 
#line 92
template<> struct __nv_itex_trait< ulong1>  { typedef void type; }; 
#line 93
template<> struct __nv_itex_trait< ulong2>  { typedef void type; }; 
#line 94
template<> struct __nv_itex_trait< ulong4>  { typedef void type; }; 
#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
#line 97
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
#line 98
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
#line 99
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
#line 103
template< class T> static typename __nv_itex_trait< T> ::type 
#line 104
tex1Dfetch(T *ptr, ::cudaTextureObject_t obj, int x) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;::exit(___);}
#if 0
#line 105
{ 
#line 109
} 
#endif
#line 111 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 112
tex1Dfetch(::cudaTextureObject_t texObject, int x) {int volatile ___ = 1;(void)texObject;(void)x;::exit(___);}
#if 0
#line 113
{ 
#line 119
} 
#endif
#line 121 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 122
tex1D(T *ptr, ::cudaTextureObject_t obj, float x) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;::exit(___);}
#if 0
#line 123
{ 
#line 127
} 
#endif
#line 130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 131
tex1D(::cudaTextureObject_t texObject, float x) {int volatile ___ = 1;(void)texObject;(void)x;::exit(___);}
#if 0
#line 132
{ 
#line 138
} 
#endif
#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 142
tex2D(T *ptr, ::cudaTextureObject_t obj, float x, float y) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;::exit(___);}
#if 0
#line 143
{ 
#line 147
} 
#endif
#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 150
tex2D(::cudaTextureObject_t texObject, float x, float y) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;::exit(___);}
#if 0
#line 151
{ 
#line 157
} 
#endif
#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 160
tex3D(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 161
{ 
#line 165
} 
#endif
#line 167 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 168
tex3D(::cudaTextureObject_t texObject, float x, float y, float z) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 169
{ 
#line 175
} 
#endif
#line 177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 178
tex1DLayered(T *ptr, ::cudaTextureObject_t obj, float x, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;::exit(___);}
#if 0
#line 179
{ 
#line 183
} 
#endif
#line 185 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 186
tex1DLayered(::cudaTextureObject_t texObject, float x, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;::exit(___);}
#if 0
#line 187
{ 
#line 193
} 
#endif
#line 195 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 196
tex2DLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 197
{ 
#line 201
} 
#endif
#line 203 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 204
tex2DLayered(::cudaTextureObject_t texObject, float x, float y, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 205
{ 
#line 211
} 
#endif
#line 214 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 215
texCubemap(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 216
{ 
#line 220
} 
#endif
#line 223 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 224
texCubemap(::cudaTextureObject_t texObject, float x, float y, float z) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 225
{ 
#line 231
} 
#endif
#line 234 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 235
texCubemapLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 236
{ 
#line 240
} 
#endif
#line 242 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 243
texCubemapLayered(::cudaTextureObject_t texObject, float x, float y, float z, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 244
{ 
#line 250
} 
#endif
#line 252 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 253
tex2Dgather(T *ptr, ::cudaTextureObject_t obj, float x, float y, int comp = 0) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 254
{ 
#line 258
} 
#endif
#line 260 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 261
tex2Dgather(::cudaTextureObject_t to, float x, float y, int comp = 0) {int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 262
{ 
#line 268
} 
#endif
#line 272 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 273
tex1DLod(T *ptr, ::cudaTextureObject_t obj, float x, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;::exit(___);}
#if 0
#line 274
{ 
#line 278
} 
#endif
#line 280 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 281
tex1DLod(::cudaTextureObject_t texObject, float x, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)level;::exit(___);}
#if 0
#line 282
{ 
#line 288
} 
#endif
#line 291 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 292
tex2DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 293
{ 
#line 297
} 
#endif
#line 299 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 300
tex2DLod(::cudaTextureObject_t texObject, float x, float y, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 301
{ 
#line 307
} 
#endif
#line 310 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 311
tex3DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 312
{ 
#line 316
} 
#endif
#line 318 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 319
tex3DLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 320
{ 
#line 326
} 
#endif
#line 329 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 330
tex1DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 331
{ 
#line 335
} 
#endif
#line 337 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 338
tex1DLayeredLod(::cudaTextureObject_t texObject, float x, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 339
{ 
#line 345
} 
#endif
#line 348 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 349
tex2DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 350
{ 
#line 354
} 
#endif
#line 356 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 357
tex2DLayeredLod(::cudaTextureObject_t texObject, float x, float y, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 358
{ 
#line 364
} 
#endif
#line 367 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 368
texCubemapLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 369
{ 
#line 373
} 
#endif
#line 375 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 376
texCubemapLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 377
{ 
#line 383
} 
#endif
#line 386 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 387
texCubemapGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 388
{ 
#line 392
} 
#endif
#line 394 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 395
texCubemapGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 396
{ 
#line 402
} 
#endif
#line 404 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 405
texCubemapLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 406
{ 
#line 410
} 
#endif
#line 412 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 413
texCubemapLayeredLod(::cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 414
{ 
#line 420
} 
#endif
#line 422 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 423
tex1DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 424
{ 
#line 428
} 
#endif
#line 430 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 431
tex1DGrad(::cudaTextureObject_t texObject, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 432
{ 
#line 438
} 
#endif
#line 441 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 442
tex2DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 443
{ 
#line 448
} 
#endif
#line 450 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 451
tex2DGrad(::cudaTextureObject_t texObject, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 452
{ 
#line 458
} 
#endif
#line 461 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 462
tex3DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 463
{ 
#line 467
} 
#endif
#line 469 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 470
tex3DGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 471
{ 
#line 477
} 
#endif
#line 480 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 481
tex1DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 482
{ 
#line 486
} 
#endif
#line 488 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 489
tex1DLayeredGrad(::cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 490
{ 
#line 496
} 
#endif
#line 499 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 500
tex2DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 501
{ 
#line 505
} 
#endif
#line 507 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 508
tex2DLayeredGrad(::cudaTextureObject_t texObject, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 509
{ 
#line 515
} 
#endif
#line 518 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 519
texCubemapLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 520
{ 
#line 524
} 
#endif
#line 526 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 527
texCubemapLayeredGrad(::cudaTextureObject_t texObject, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 528
{ 
#line 534
} 
#endif
#line 59 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
#line 60
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
#line 61
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
#line 62
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
#line 63
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
#line 64
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
#line 65
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
#line 66
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
#line 67
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
#line 68
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
#line 69
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
#line 70
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
#line 71
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
#line 72
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
#line 73
template<> struct __nv_isurf_trait< __int64>  { typedef void type; }; 
#line 74
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
#line 75
template<> struct __nv_isurf_trait< unsigned __int64>  { typedef void type; }; 
#line 76
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
#line 77
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
#line 78
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
#line 80
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
#line 81
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
#line 82
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
#line 83
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
#line 84
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
#line 85
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
#line 86
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
#line 87
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
#line 88
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
#line 90
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
#line 91
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
#line 92
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
#line 93
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
#line 94
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
#line 95
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
#line 96
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
#line 99
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 100
surf1Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;::exit(___);}
#if 0
#line 101
{ 
#line 105
} 
#endif
#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 108
surf1Dread(::cudaSurfaceObject_t surfObject, int x, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;::exit(___);}
#if 0
#line 109
{ 
#line 115
} 
#endif
#line 117 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 118
surf2Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 119
{ 
#line 123
} 
#endif
#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 126
surf2Dread(::cudaSurfaceObject_t surfObject, int x, int y, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;::exit(___);}
#if 0
#line 127
{ 
#line 133
} 
#endif
#line 136 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 137
surf3Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 138
{ 
#line 142
} 
#endif
#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 145
surf3Dread(::cudaSurfaceObject_t surfObject, int x, int y, int z, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;::exit(___);}
#if 0
#line 146
{ 
#line 152
} 
#endif
#line 154 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 155
surf1DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 156
{ 
#line 160
} 
#endif
#line 162 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 163
surf1DLayeredread(::cudaSurfaceObject_t surfObject, int x, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;::exit(___);}
#if 0
#line 164
{ 
#line 170
} 
#endif
#line 172 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 173
surf2DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 174
{ 
#line 178
} 
#endif
#line 180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 181
surf2DLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;::exit(___);}
#if 0
#line 182
{ 
#line 188
} 
#endif
#line 190 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 191
surfCubemapread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 192
{ 
#line 196
} 
#endif
#line 198 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 199
surfCubemapread(::cudaSurfaceObject_t surfObject, int x, int y, int face, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;::exit(___);}
#if 0
#line 200
{ 
#line 206
} 
#endif
#line 208 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 209
surfCubemapLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;::exit(___);}
#if 0
#line 210
{ 
#line 214
} 
#endif
#line 216 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 217
surfCubemapLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layerface, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;::exit(___);}
#if 0
#line 218
{ 
#line 224
} 
#endif
#line 226 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 227
surf1Dwrite(T val, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;::exit(___);}
#if 0
#line 228
{ 
#line 232
} 
#endif
#line 234 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 235
surf2Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 236
{ 
#line 240
} 
#endif
#line 242 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 243
surf3Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 244
{ 
#line 248
} 
#endif
#line 250 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 251
surf1DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 252
{ 
#line 256
} 
#endif
#line 258 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 259
surf2DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 260
{ 
#line 264
} 
#endif
#line 266 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 267
surfCubemapwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 268
{ 
#line 272
} 
#endif
#line 274 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 275
surfCubemapLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;::exit(___);}
#if 0
#line 276
{ 
#line 280
} 
#endif
#line 3296 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\crt/device_functions.h"
extern "C" unsigned __stdcall __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
#line 68 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_launch_parameters.h"
extern "C" {
#line 71 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\device_launch_parameters.h"
extern const uint3 __device_builtin_variable_threadIdx; 
#line 72
extern const uint3 __device_builtin_variable_blockIdx; 
#line 73
extern const dim3 __device_builtin_variable_blockDim; 
#line 74
extern const dim3 __device_builtin_variable_gridDim; 
#line 75
extern const int __device_builtin_variable_warpSize; 
#line 80
}
#line 199 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_runtime.h"
template< class T> static __inline ::cudaError_t 
#line 200
cudaLaunchKernel(const T *
#line 201
func, ::dim3 
#line 202
gridDim, ::dim3 
#line 203
blockDim, void **
#line 204
args, ::size_t 
#line 205
sharedMem = 0, ::cudaStream_t 
#line 206
stream = 0) 
#line 208
{ 
#line 209
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 210
} 
#line 261
template< class T> static __inline ::cudaError_t 
#line 262
cudaLaunchCooperativeKernel(const T *
#line 263
func, ::dim3 
#line 264
gridDim, ::dim3 
#line 265
blockDim, void **
#line 266
args, ::size_t 
#line 267
sharedMem = 0, ::cudaStream_t 
#line 268
stream = 0) 
#line 270
{ 
#line 271
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 272
} 
#line 305
static __inline cudaError_t cudaEventCreate(cudaEvent_t *
#line 306
event, unsigned 
#line 307
flags) 
#line 309
{ 
#line 310
return ::cudaEventCreateWithFlags(event, flags); 
#line 311
} 
#line 370
static __inline cudaError_t cudaMallocHost(void **
#line 371
ptr, size_t 
#line 372
size, unsigned 
#line 373
flags) 
#line 375
{ 
#line 376
return ::cudaHostAlloc(ptr, size, flags); 
#line 377
} 
#line 379
template< class T> static __inline ::cudaError_t 
#line 380
cudaHostAlloc(T **
#line 381
ptr, ::size_t 
#line 382
size, unsigned 
#line 383
flags) 
#line 385
{ 
#line 386
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
#line 387
} 
#line 389
template< class T> static __inline ::cudaError_t 
#line 390
cudaHostGetDevicePointer(T **
#line 391
pDevice, void *
#line 392
pHost, unsigned 
#line 393
flags) 
#line 395
{ 
#line 396
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
#line 397
} 
#line 499
template< class T> static __inline ::cudaError_t 
#line 500
cudaMallocManaged(T **
#line 501
devPtr, ::size_t 
#line 502
size, unsigned 
#line 503
flags = 1) 
#line 505
{ 
#line 506
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
#line 507
} 
#line 589
template< class T> static __inline ::cudaError_t 
#line 590
cudaStreamAttachMemAsync(::cudaStream_t 
#line 591
stream, T *
#line 592
devPtr, ::size_t 
#line 593
length = 0, unsigned 
#line 594
flags = 4) 
#line 596
{ 
#line 597
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
#line 598
} 
#line 600
template< class T> __inline ::cudaError_t 
#line 601
cudaMalloc(T **
#line 602
devPtr, ::size_t 
#line 603
size) 
#line 605
{ 
#line 606
return ::cudaMalloc((void **)((void *)devPtr), size); 
#line 607
} 
#line 609
template< class T> static __inline ::cudaError_t 
#line 610
cudaMallocHost(T **
#line 611
ptr, ::size_t 
#line 612
size, unsigned 
#line 613
flags = 0) 
#line 615
{ 
#line 616
return cudaMallocHost((void **)((void *)ptr), size, flags); 
#line 617
} 
#line 619
template< class T> static __inline ::cudaError_t 
#line 620
cudaMallocPitch(T **
#line 621
devPtr, ::size_t *
#line 622
pitch, ::size_t 
#line 623
width, ::size_t 
#line 624
height) 
#line 626
{ 
#line 627
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
#line 628
} 
#line 667
template< class T> static __inline ::cudaError_t 
#line 668
cudaMemcpyToSymbol(const T &
#line 669
symbol, const void *
#line 670
src, ::size_t 
#line 671
count, ::size_t 
#line 672
offset = 0, ::cudaMemcpyKind 
#line 673
kind = cudaMemcpyHostToDevice) 
#line 675
{ 
#line 676
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
#line 677
} 
#line 721
template< class T> static __inline ::cudaError_t 
#line 722
cudaMemcpyToSymbolAsync(const T &
#line 723
symbol, const void *
#line 724
src, ::size_t 
#line 725
count, ::size_t 
#line 726
offset = 0, ::cudaMemcpyKind 
#line 727
kind = cudaMemcpyHostToDevice, ::cudaStream_t 
#line 728
stream = 0) 
#line 730
{ 
#line 731
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
#line 732
} 
#line 769
template< class T> static __inline ::cudaError_t 
#line 770
cudaMemcpyFromSymbol(void *
#line 771
dst, const T &
#line 772
symbol, ::size_t 
#line 773
count, ::size_t 
#line 774
offset = 0, ::cudaMemcpyKind 
#line 775
kind = cudaMemcpyDeviceToHost) 
#line 777
{ 
#line 778
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
#line 779
} 
#line 823
template< class T> static __inline ::cudaError_t 
#line 824
cudaMemcpyFromSymbolAsync(void *
#line 825
dst, const T &
#line 826
symbol, ::size_t 
#line 827
count, ::size_t 
#line 828
offset = 0, ::cudaMemcpyKind 
#line 829
kind = cudaMemcpyDeviceToHost, ::cudaStream_t 
#line 830
stream = 0) 
#line 832
{ 
#line 833
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
#line 834
} 
#line 859
template< class T> static __inline ::cudaError_t 
#line 860
cudaGetSymbolAddress(void **
#line 861
devPtr, const T &
#line 862
symbol) 
#line 864
{ 
#line 865
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
#line 866
} 
#line 891
template< class T> static __inline ::cudaError_t 
#line 892
cudaGetSymbolSize(::size_t *
#line 893
size, const T &
#line 894
symbol) 
#line 896
{ 
#line 897
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
#line 898
} 
#line 935
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 936
cudaBindTexture(::size_t *
#line 937
offset, const texture< T, dim, readMode>  &
#line 938
tex, const void *
#line 939
devPtr, const ::cudaChannelFormatDesc &
#line 940
desc, ::size_t 
#line 941
size = 4294967295U) 
#line 943
{ 
#line 944
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
#line 945
} 
#line 981
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 982
cudaBindTexture(::size_t *
#line 983
offset, const texture< T, dim, readMode>  &
#line 984
tex, const void *
#line 985
devPtr, ::size_t 
#line 986
size = 4294967295U) 
#line 988
{ 
#line 989
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
#line 990
} 
#line 1038
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1039
cudaBindTexture2D(::size_t *
#line 1040
offset, const texture< T, dim, readMode>  &
#line 1041
tex, const void *
#line 1042
devPtr, const ::cudaChannelFormatDesc &
#line 1043
desc, ::size_t 
#line 1044
width, ::size_t 
#line 1045
height, ::size_t 
#line 1046
pitch) 
#line 1048
{ 
#line 1049
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
#line 1050
} 
#line 1097
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1098
cudaBindTexture2D(::size_t *
#line 1099
offset, const texture< T, dim, readMode>  &
#line 1100
tex, const void *
#line 1101
devPtr, ::size_t 
#line 1102
width, ::size_t 
#line 1103
height, ::size_t 
#line 1104
pitch) 
#line 1106
{ 
#line 1107
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
#line 1108
} 
#line 1140
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1141
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 1142
tex, ::cudaArray_const_t 
#line 1143
array, const ::cudaChannelFormatDesc &
#line 1144
desc) 
#line 1146
{ 
#line 1147
return ::cudaBindTextureToArray(&tex, array, &desc); 
#line 1148
} 
#line 1179
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1180
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 1181
tex, ::cudaArray_const_t 
#line 1182
array) 
#line 1184
{ 
#line 1185
::cudaChannelFormatDesc desc; 
#line 1186
::cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
#line 1188
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
#line 1189
} 
#line 1221
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1222
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
#line 1223
tex, ::cudaMipmappedArray_const_t 
#line 1224
mipmappedArray, const ::cudaChannelFormatDesc &
#line 1225
desc) 
#line 1227
{ 
#line 1228
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
#line 1229
} 
#line 1260
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1261
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
#line 1262
tex, ::cudaMipmappedArray_const_t 
#line 1263
mipmappedArray) 
#line 1265
{ 
#line 1266
::cudaChannelFormatDesc desc; 
#line 1267
::cudaArray_t levelArray; 
#line 1268
::cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
#line 1270
if (err != (cudaSuccess)) { 
#line 1271
return err; 
#line 1272
}  
#line 1273
err = ::cudaGetChannelDesc(&desc, levelArray); 
#line 1275
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
#line 1276
} 
#line 1303
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1304
cudaUnbindTexture(const texture< T, dim, readMode>  &
#line 1305
tex) 
#line 1307
{ 
#line 1308
return ::cudaUnbindTexture(&tex); 
#line 1309
} 
#line 1339
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1340
cudaGetTextureAlignmentOffset(::size_t *
#line 1341
offset, const texture< T, dim, readMode>  &
#line 1342
tex) 
#line 1344
{ 
#line 1345
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
#line 1346
} 
#line 1391
template< class T> static __inline ::cudaError_t 
#line 1392
cudaFuncSetCacheConfig(T *
#line 1393
func, ::cudaFuncCache 
#line 1394
cacheConfig) 
#line 1396
{ 
#line 1397
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
#line 1398
} 
#line 1400
template< class T> static __inline ::cudaError_t 
#line 1401
cudaFuncSetSharedMemConfig(T *
#line 1402
func, ::cudaSharedMemConfig 
#line 1403
config) 
#line 1405
{ 
#line 1406
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
#line 1407
} 
#line 1436
template< class T> __inline ::cudaError_t 
#line 1437
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
#line 1438
numBlocks, T 
#line 1439
func, int 
#line 1440
blockSize, ::size_t 
#line 1441
dynamicSMemSize) 
#line 1442
{ 
#line 1443
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
#line 1444
} 
#line 1487
template< class T> __inline ::cudaError_t 
#line 1488
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
#line 1489
numBlocks, T 
#line 1490
func, int 
#line 1491
blockSize, ::size_t 
#line 1492
dynamicSMemSize, unsigned 
#line 1493
flags) 
#line 1494
{ 
#line 1495
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
#line 1496
} 
#line 1501
class __cudaOccupancyB2DHelper { 
#line 1502
size_t n; 
#line 1504
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
#line 1505
size_t operator()(int) 
#line 1506
{ 
#line 1507
return n; 
#line 1508
} 
#line 1509
}; 
#line 1556
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 1557
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
#line 1558
minGridSize, int *
#line 1559
blockSize, T 
#line 1560
func, UnaryFunction 
#line 1561
blockSizeToDynamicSMemSize, int 
#line 1562
blockSizeLimit = 0, unsigned 
#line 1563
flags = 0) 
#line 1564
{ 
#line 1565
::cudaError_t status; 
#line 1568
int device; 
#line 1569
::cudaFuncAttributes attr; 
#line 1572
int maxThreadsPerMultiProcessor; 
#line 1573
int warpSize; 
#line 1574
int devMaxThreadsPerBlock; 
#line 1575
int multiProcessorCount; 
#line 1576
int funcMaxThreadsPerBlock; 
#line 1577
int occupancyLimit; 
#line 1578
int granularity; 
#line 1581
int maxBlockSize = 0; 
#line 1582
int numBlocks = 0; 
#line 1583
int maxOccupancy = 0; 
#line 1586
int blockSizeToTryAligned; 
#line 1587
int blockSizeToTry; 
#line 1588
int blockSizeLimitAligned; 
#line 1589
int occupancyInBlocks; 
#line 1590
int occupancyInThreads; 
#line 1591
::size_t dynamicSMemSize; 
#line 1597
if (((!minGridSize) || (!blockSize)) || (!func)) { 
#line 1598
return cudaErrorInvalidValue; 
#line 1599
}  
#line 1605
status = ::cudaGetDevice(&device); 
#line 1606
if (status != (cudaSuccess)) { 
#line 1607
return status; 
#line 1608
}  
#line 1610
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
#line 1614
if (status != (cudaSuccess)) { 
#line 1615
return status; 
#line 1616
}  
#line 1618
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
#line 1622
if (status != (cudaSuccess)) { 
#line 1623
return status; 
#line 1624
}  
#line 1626
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
#line 1630
if (status != (cudaSuccess)) { 
#line 1631
return status; 
#line 1632
}  
#line 1634
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
#line 1638
if (status != (cudaSuccess)) { 
#line 1639
return status; 
#line 1640
}  
#line 1642
status = cudaFuncGetAttributes(&attr, func); 
#line 1643
if (status != (cudaSuccess)) { 
#line 1644
return status; 
#line 1645
}  
#line 1647
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
#line 1653
occupancyLimit = maxThreadsPerMultiProcessor; 
#line 1654
granularity = warpSize; 
#line 1656
if (blockSizeLimit == 0) { 
#line 1657
blockSizeLimit = devMaxThreadsPerBlock; 
#line 1658
}  
#line 1660
if (devMaxThreadsPerBlock < blockSizeLimit) { 
#line 1661
blockSizeLimit = devMaxThreadsPerBlock; 
#line 1662
}  
#line 1664
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
#line 1665
blockSizeLimit = funcMaxThreadsPerBlock; 
#line 1666
}  
#line 1668
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
#line 1670
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
#line 1674
if (blockSizeLimit < blockSizeToTryAligned) { 
#line 1675
blockSizeToTry = blockSizeLimit; 
#line 1676
} else { 
#line 1677
blockSizeToTry = blockSizeToTryAligned; 
#line 1678
}  
#line 1680
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
#line 1682
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
#line 1689
if (status != (cudaSuccess)) { 
#line 1690
return status; 
#line 1691
}  
#line 1693
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
#line 1695
if (occupancyInThreads > maxOccupancy) { 
#line 1696
maxBlockSize = blockSizeToTry; 
#line 1697
numBlocks = occupancyInBlocks; 
#line 1698
maxOccupancy = occupancyInThreads; 
#line 1699
}  
#line 1703
if (occupancyLimit == maxOccupancy) { 
#line 1704
break; 
#line 1705
}  
#line 1706
}  
#line 1714
(*minGridSize) = (numBlocks * multiProcessorCount); 
#line 1715
(*blockSize) = maxBlockSize; 
#line 1717
return status; 
#line 1718
} 
#line 1751
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 1752
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
#line 1753
minGridSize, int *
#line 1754
blockSize, T 
#line 1755
func, UnaryFunction 
#line 1756
blockSizeToDynamicSMemSize, int 
#line 1757
blockSizeLimit = 0) 
#line 1758
{ 
#line 1759
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
#line 1760
} 
#line 1796
template< class T> static __inline ::cudaError_t 
#line 1797
cudaOccupancyMaxPotentialBlockSize(int *
#line 1798
minGridSize, int *
#line 1799
blockSize, T 
#line 1800
func, ::size_t 
#line 1801
dynamicSMemSize = 0, int 
#line 1802
blockSizeLimit = 0) 
#line 1803
{ 
#line 1804
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
#line 1805
} 
#line 1855
template< class T> static __inline ::cudaError_t 
#line 1856
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
#line 1857
minGridSize, int *
#line 1858
blockSize, T 
#line 1859
func, ::size_t 
#line 1860
dynamicSMemSize = 0, int 
#line 1861
blockSizeLimit = 0, unsigned 
#line 1862
flags = 0) 
#line 1863
{ 
#line 1864
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
#line 1865
} 
#line 1896
template< class T> __inline ::cudaError_t 
#line 1897
cudaFuncGetAttributes(::cudaFuncAttributes *
#line 1898
attr, T *
#line 1899
entry) 
#line 1901
{ 
#line 1902
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
#line 1903
} 
#line 1941
template< class T> static __inline ::cudaError_t 
#line 1942
cudaFuncSetAttribute(T *
#line 1943
entry, ::cudaFuncAttribute 
#line 1944
attr, int 
#line 1945
value) 
#line 1947
{ 
#line 1948
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
#line 1949
} 
#line 1973
template< class T, int dim> 
#line 1974
__declspec(deprecated) static __inline ::cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
#line 1975
surf, ::cudaArray_const_t 
#line 1976
array, const ::cudaChannelFormatDesc &
#line 1977
desc) 
#line 1979
{ 
#line 1980
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
#line 1981
} 
#line 2004
template< class T, int dim> 
#line 2005
__declspec(deprecated) static __inline ::cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
#line 2006
surf, ::cudaArray_const_t 
#line 2007
array) 
#line 2009
{ 
#line 2010
::cudaChannelFormatDesc desc; 
#line 2011
::cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
#line 2013
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
#line 2014
} 
#line 2028 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v10.2\\include\\cuda_runtime.h"
#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 68 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_stdio_config.h"
#pragma detect_mismatch("_CRT_STDIO_ISO_WIDE_SPECIFIERS", "0")
#line 85 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_stdio_config.h"
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options() 
#line 86
{ 
#line 87
static unsigned __int64 _OptionsStorage; 
#line 88
return &_OptionsStorage; 
#line 89
} 
#line 95
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_scanf_options() 
#line 96
{ 
#line 97
static unsigned __int64 _OptionsStorage; 
#line 98
return &_OptionsStorage; 
#line 99
} 
#line 124 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_stdio_config.h"
}__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
typedef 
#line 25
struct _iobuf { 
#line 27
void *_Placeholder; 
#line 28
} FILE; 
#line 31 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) FILE *__cdecl __acrt_iob_func(unsigned _Ix); 
#line 48
__declspec(dllimport) wint_t __cdecl fgetwc(FILE * _Stream); 
#line 53
__declspec(dllimport) wint_t __cdecl _fgetwchar(); 
#line 56
__declspec(dllimport) wint_t __cdecl fputwc(__wchar_t _Character, FILE * _Stream); 
#line 61
__declspec(dllimport) wint_t __cdecl _fputwchar(__wchar_t _Character); 
#line 66
__declspec(dllimport) wint_t __cdecl getwc(FILE * _Stream); 
#line 71
__declspec(dllimport) wint_t __cdecl getwchar(); 
#line 76
__declspec(dllimport) __wchar_t *__cdecl fgetws(__wchar_t * _Buffer, int _BufferCount, FILE * _Stream); 
#line 83
__declspec(dllimport) int __cdecl fputws(const __wchar_t * _Buffer, FILE * _Stream); 
#line 90
__declspec(dllimport) __wchar_t *__cdecl _getws_s(__wchar_t * _Buffer, size_t _BufferCount); 
#line 95
extern "C++" {template < size_t _Size > inline wchar_t * __cdecl _getws_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _getws_s ( _Buffer, _Size ); }}
#line 103 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) wint_t __cdecl putwc(__wchar_t _Character, FILE * _Stream); 
#line 109
__declspec(dllimport) wint_t __cdecl putwchar(__wchar_t _Character); 
#line 114
__declspec(dllimport) int __cdecl _putws(const __wchar_t * _Buffer); 
#line 119
__declspec(dllimport) wint_t __cdecl ungetwc(wint_t _Character, FILE * _Stream); 
#line 125
__declspec(dllimport) FILE *__cdecl _wfdopen(int _FileHandle, const __wchar_t * _Mode); 
#line 131
__declspec(dllimport) FILE *__cdecl _wfopen(const __wchar_t * _FileName, const __wchar_t * _Mode); 
#line 137
__declspec(dllimport) errno_t __cdecl _wfopen_s(FILE ** _Stream, const __wchar_t * _FileName, const __wchar_t * _Mode); 
#line 145
__declspec(dllimport) FILE *__cdecl _wfreopen(const __wchar_t * _FileName, const __wchar_t * _Mode, FILE * _OldStream); 
#line 152
__declspec(dllimport) errno_t __cdecl _wfreopen_s(FILE ** _Stream, const __wchar_t * _FileName, const __wchar_t * _Mode, FILE * _OldStream); 
#line 160
__declspec(dllimport) FILE *__cdecl _wfsopen(const __wchar_t * _FileName, const __wchar_t * _Mode, int _ShFlag); 
#line 166
__declspec(dllimport) void __cdecl _wperror(const __wchar_t * _ErrorMessage); 
#line 173
__declspec(dllimport) FILE *__cdecl _wpopen(const __wchar_t * _Command, const __wchar_t * _Mode); 
#line 179 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl _wremove(const __wchar_t * _FileName); 
#line 187
__declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wtempnam(const __wchar_t * _Directory, const __wchar_t * _FilePrefix); 
#line 196
__declspec(dllimport) errno_t __cdecl _wtmpnam_s(__wchar_t * _Buffer, size_t _BufferCount); 
#line 201
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wtmpnam_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wtmpnam_s ( _Buffer, _Size ); }}
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) __wchar_t *__cdecl _wtmpnam(__wchar_t * _Buffer); 
#line 222 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) wint_t __cdecl _fgetwc_nolock(FILE * _Stream); 
#line 227
__declspec(dllimport) wint_t __cdecl _fputwc_nolock(__wchar_t _Character, FILE * _Stream); 
#line 233
__declspec(dllimport) wint_t __cdecl _getwc_nolock(FILE * _Stream); 
#line 238
__declspec(dllimport) wint_t __cdecl _putwc_nolock(__wchar_t _Character, FILE * _Stream); 
#line 244
__declspec(dllimport) wint_t __cdecl _ungetwc_nolock(wint_t _Character, FILE * _Stream); 
#line 269 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 278
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 287
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_p(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 296
__inline int __cdecl _vfwprintf_l(FILE *const 
#line 297
_Stream, const __wchar_t *const 
#line 298
_Format, const _locale_t 
#line 299
_Locale, va_list 
#line 300
_ArgList) 
#line 305 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 306
return __stdio_common_vfwprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 307
} 
#line 311 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwprintf(FILE *const 
#line 312
_Stream, const __wchar_t *const 
#line 313
_Format, va_list 
#line 314
_ArgList) 
#line 319 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 320
return _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
#line 321
} 
#line 325 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_s_l(FILE *const 
#line 326
_Stream, const __wchar_t *const 
#line 327
_Format, const _locale_t 
#line 328
_Locale, va_list 
#line 329
_ArgList) 
#line 334 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 335
return __stdio_common_vfwprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 336
} 
#line 342 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwprintf_s(FILE *const 
#line 343
_Stream, const __wchar_t *const 
#line 344
_Format, va_list 
#line 345
_ArgList) 
#line 350 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 351
return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
#line 352
} 
#line 358 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_p_l(FILE *const 
#line 359
_Stream, const __wchar_t *const 
#line 360
_Format, const _locale_t 
#line 361
_Locale, va_list 
#line 362
_ArgList) 
#line 367 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 368
return __stdio_common_vfwprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 369
} 
#line 373 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_p(FILE *const 
#line 374
_Stream, const __wchar_t *const 
#line 375
_Format, va_list 
#line 376
_ArgList) 
#line 381 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 382
return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
#line 383
} 
#line 387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_l(const __wchar_t *const 
#line 388
_Format, const _locale_t 
#line 389
_Locale, va_list 
#line 390
_ArgList) 
#line 395 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 396
return _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 397
} 
#line 401 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwprintf(const __wchar_t *const 
#line 402
_Format, va_list 
#line 403
_ArgList) 
#line 408 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 409
return _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 410
} 
#line 414 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_s_l(const __wchar_t *const 
#line 415
_Format, const _locale_t 
#line 416
_Locale, va_list 
#line 417
_ArgList) 
#line 422 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 423
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 424
} 
#line 430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwprintf_s(const __wchar_t *const 
#line 431
_Format, va_list 
#line 432
_ArgList) 
#line 437 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 438
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 439
} 
#line 445 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_p_l(const __wchar_t *const 
#line 446
_Format, const _locale_t 
#line 447
_Locale, va_list 
#line 448
_ArgList) 
#line 453 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 454
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 455
} 
#line 459 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_p(const __wchar_t *const 
#line 460
_Format, va_list 
#line 461
_ArgList) 
#line 466 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 467
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 468
} 
#line 472 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_l(FILE *const 
#line 473
_Stream, const __wchar_t *const 
#line 474
_Format, const _locale_t 
#line 475
_Locale, ...) 
#line 480 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 481
int _Result; 
#line 482
va_list _ArgList; 
#line 483
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 484
_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList); 
#line 485
(void)(_ArgList = ((va_list)0)); 
#line 486
return _Result; 
#line 487
} 
#line 491 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwprintf(FILE *const 
#line 492
_Stream, const __wchar_t *const 
#line 493
_Format, ...) 
#line 498 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 499
int _Result; 
#line 500
va_list _ArgList; 
#line 501
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 502
_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
#line 503
(void)(_ArgList = ((va_list)0)); 
#line 504
return _Result; 
#line 505
} 
#line 509 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_s_l(FILE *const 
#line 510
_Stream, const __wchar_t *const 
#line 511
_Format, const _locale_t 
#line 512
_Locale, ...) 
#line 517 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 518
int _Result; 
#line 519
va_list _ArgList; 
#line 520
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 521
_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
#line 522
(void)(_ArgList = ((va_list)0)); 
#line 523
return _Result; 
#line 524
} 
#line 530 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwprintf_s(FILE *const 
#line 531
_Stream, const __wchar_t *const 
#line 532
_Format, ...) 
#line 537 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 538
int _Result; 
#line 539
va_list _ArgList; 
#line 540
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 541
_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
#line 542
(void)(_ArgList = ((va_list)0)); 
#line 543
return _Result; 
#line 544
} 
#line 550 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_p_l(FILE *const 
#line 551
_Stream, const __wchar_t *const 
#line 552
_Format, const _locale_t 
#line 553
_Locale, ...) 
#line 558 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 559
int _Result; 
#line 560
va_list _ArgList; 
#line 561
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 562
_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
#line 563
(void)(_ArgList = ((va_list)0)); 
#line 564
return _Result; 
#line 565
} 
#line 569 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_p(FILE *const 
#line 570
_Stream, const __wchar_t *const 
#line 571
_Format, ...) 
#line 576 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 577
int _Result; 
#line 578
va_list _ArgList; 
#line 579
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 580
_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
#line 581
(void)(_ArgList = ((va_list)0)); 
#line 582
return _Result; 
#line 583
} 
#line 587 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_l(const __wchar_t *const 
#line 588
_Format, const _locale_t 
#line 589
_Locale, ...) 
#line 594 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 595
int _Result; 
#line 596
va_list _ArgList; 
#line 597
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 598
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 599
(void)(_ArgList = ((va_list)0)); 
#line 600
return _Result; 
#line 601
} 
#line 605 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wprintf(const __wchar_t *const 
#line 606
_Format, ...) 
#line 611 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 612
int _Result; 
#line 613
va_list _ArgList; 
#line 614
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 615
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 616
(void)(_ArgList = ((va_list)0)); 
#line 617
return _Result; 
#line 618
} 
#line 622 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_s_l(const __wchar_t *const 
#line 623
_Format, const _locale_t 
#line 624
_Locale, ...) 
#line 629 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 630
int _Result; 
#line 631
va_list _ArgList; 
#line 632
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 633
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 634
(void)(_ArgList = ((va_list)0)); 
#line 635
return _Result; 
#line 636
} 
#line 642 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wprintf_s(const __wchar_t *const 
#line 643
_Format, ...) 
#line 648 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 649
int _Result; 
#line 650
va_list _ArgList; 
#line 651
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 652
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 653
(void)(_ArgList = ((va_list)0)); 
#line 654
return _Result; 
#line 655
} 
#line 661 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_p_l(const __wchar_t *const 
#line 662
_Format, const _locale_t 
#line 663
_Locale, ...) 
#line 668 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 669
int _Result; 
#line 670
va_list _ArgList; 
#line 671
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 672
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 673
(void)(_ArgList = ((va_list)0)); 
#line 674
return _Result; 
#line 675
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_p(const __wchar_t *const 
#line 680
_Format, ...) 
#line 685 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 686
int _Result; 
#line 687
va_list _ArgList; 
#line 688
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 689
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 690
(void)(_ArgList = ((va_list)0)); 
#line 691
return _Result; 
#line 692
} 
#line 702 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vfwscanf(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 711
__inline int __cdecl _vfwscanf_l(FILE *const 
#line 712
_Stream, const __wchar_t *const 
#line 713
_Format, const _locale_t 
#line 714
_Locale, va_list 
#line 715
_ArgList) 
#line 720 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 721
return __stdio_common_vfwscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 724
} 
#line 728 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwscanf(FILE *const 
#line 729
_Stream, const __wchar_t *const 
#line 730
_Format, va_list 
#line 731
_ArgList) 
#line 736 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 737
return _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
#line 738
} 
#line 742 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwscanf_s_l(FILE *const 
#line 743
_Stream, const __wchar_t *const 
#line 744
_Format, const _locale_t 
#line 745
_Locale, va_list 
#line 746
_ArgList) 
#line 751 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 752
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 
#line 755
} 
#line 761 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwscanf_s(FILE *const 
#line 762
_Stream, const __wchar_t *const 
#line 763
_Format, va_list 
#line 764
_ArgList) 
#line 769 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 770
return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
#line 771
} 
#line 776 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwscanf_l(const __wchar_t *const 
#line 777
_Format, const _locale_t 
#line 778
_Locale, va_list 
#line 779
_ArgList) 
#line 784 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 785
return _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 786
} 
#line 790 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwscanf(const __wchar_t *const 
#line 791
_Format, va_list 
#line 792
_ArgList) 
#line 797 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 798
return _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 799
} 
#line 803 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwscanf_s_l(const __wchar_t *const 
#line 804
_Format, const _locale_t 
#line 805
_Locale, va_list 
#line 806
_ArgList) 
#line 811 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 812
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 813
} 
#line 819 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwscanf_s(const __wchar_t *const 
#line 820
_Format, va_list 
#line 821
_ArgList) 
#line 826 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 827
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 828
} 
#line 834 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwscanf_l(FILE *const 
#line 835
_Stream, const __wchar_t *const 
#line 836
_Format, const _locale_t 
#line 837
_Locale, ...) 
#line 842 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 843
int _Result; 
#line 844
va_list _ArgList; 
#line 845
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 846
_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList); 
#line 847
(void)(_ArgList = ((va_list)0)); 
#line 848
return _Result; 
#line 849
} 
#line 853 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwscanf(FILE *const 
#line 854
_Stream, const __wchar_t *const 
#line 855
_Format, ...) 
#line 860 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 861
int _Result; 
#line 862
va_list _ArgList; 
#line 863
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 864
_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
#line 865
(void)(_ArgList = ((va_list)0)); 
#line 866
return _Result; 
#line 867
} 
#line 871 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwscanf_s_l(FILE *const 
#line 872
_Stream, const __wchar_t *const 
#line 873
_Format, const _locale_t 
#line 874
_Locale, ...) 
#line 879 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 880
int _Result; 
#line 881
va_list _ArgList; 
#line 882
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 883
_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
#line 884
(void)(_ArgList = ((va_list)0)); 
#line 885
return _Result; 
#line 886
} 
#line 892 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwscanf_s(FILE *const 
#line 893
_Stream, const __wchar_t *const 
#line 894
_Format, ...) 
#line 899 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 900
int _Result; 
#line 901
va_list _ArgList; 
#line 902
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 903
_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
#line 904
(void)(_ArgList = ((va_list)0)); 
#line 905
return _Result; 
#line 906
} 
#line 912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wscanf_l(const __wchar_t *const 
#line 913
_Format, const _locale_t 
#line 914
_Locale, ...) 
#line 919 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 920
int _Result; 
#line 921
va_list _ArgList; 
#line 922
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 923
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 924
(void)(_ArgList = ((va_list)0)); 
#line 925
return _Result; 
#line 926
} 
#line 930 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wscanf(const __wchar_t *const 
#line 931
_Format, ...) 
#line 936 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 937
int _Result; 
#line 938
va_list _ArgList; 
#line 939
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 940
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 941
(void)(_ArgList = ((va_list)0)); 
#line 942
return _Result; 
#line 943
} 
#line 947 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wscanf_s_l(const __wchar_t *const 
#line 948
_Format, const _locale_t 
#line 949
_Locale, ...) 
#line 954 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 955
int _Result; 
#line 956
va_list _ArgList; 
#line 957
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 958
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 959
(void)(_ArgList = ((va_list)0)); 
#line 960
return _Result; 
#line 961
} 
#line 967 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wscanf_s(const __wchar_t *const 
#line 968
_Format, ...) 
#line 973 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 974
int _Result; 
#line 975
va_list _ArgList; 
#line 976
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 977
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 978
(void)(_ArgList = ((va_list)0)); 
#line 979
return _Result; 
#line 980
} 
#line 1003 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vswprintf(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1014
__declspec(dllimport) int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1025
__declspec(dllimport) int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1037
__declspec(dllimport) int __cdecl __stdio_common_vswprintf_p(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1048
__inline int __cdecl _vsnwprintf_l(__wchar_t *const 
#line 1049
_Buffer, const size_t 
#line 1050
_BufferCount, const __wchar_t *const 
#line 1051
_Format, const _locale_t 
#line 1052
_Locale, va_list 
#line 1053
_ArgList) 
#line 1058 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1059
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1063
return (_Result < 0) ? -1 : _Result; 
#line 1064
} 
#line 1067 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#pragma warning(disable: 4793)
#line 1072
__inline int __cdecl _vsnwprintf_s_l(__wchar_t *const 
#line 1073
_Buffer, const size_t 
#line 1074
_BufferCount, const size_t 
#line 1075
_MaxCount, const __wchar_t *const 
#line 1076
_Format, const _locale_t 
#line 1077
_Locale, va_list 
#line 1078
_ArgList) 
#line 1083 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1084
const int _Result = __stdio_common_vsnwprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
#line 1088
return (_Result < 0) ? -1 : _Result; 
#line 1089
} 
#line 1094 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vsnwprintf_s(__wchar_t *const 
#line 1095
_Buffer, const size_t 
#line 1096
_BufferCount, const size_t 
#line 1097
_MaxCount, const __wchar_t *const 
#line 1098
_Format, va_list 
#line 1099
_ArgList) 
#line 1104 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1105
return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 1106
} 
#line 1109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, ...); __inline int __cdecl _vsnwprintf(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, va_list _Args); 
#line 1119 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(pop)
#line 1123
__inline int __cdecl _vsnwprintf(__wchar_t *
#line 1124
_Buffer, size_t 
#line 1125
_BufferCount, const __wchar_t *
#line 1126
_Format, va_list 
#line 1127
_ArgList) 
#line 1131 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
} 
#line 1139 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {template < size_t _Size > inline int __cdecl _vsnwprintf_s ( wchar_t ( & _Buffer ) [ _Size ], size_t _BufferCount, wchar_t const * _Format, va_list _ArgList ) throw ( ) { return _vsnwprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }}
#line 1151 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_c_l(__wchar_t *const 
#line 1152
_Buffer, const size_t 
#line 1153
_BufferCount, const __wchar_t *const 
#line 1154
_Format, const _locale_t 
#line 1155
_Locale, va_list 
#line 1156
_ArgList) 
#line 1160 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1161
const int _Result = __stdio_common_vswprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1165
return (_Result < 0) ? -1 : _Result; 
#line 1166
} 
#line 1171 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_c(__wchar_t *const 
#line 1172
_Buffer, const size_t 
#line 1173
_BufferCount, const __wchar_t *const 
#line 1174
_Format, va_list 
#line 1175
_ArgList) 
#line 1180 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1181
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1182
} 
#line 1187 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_l(__wchar_t *const 
#line 1188
_Buffer, const size_t 
#line 1189
_BufferCount, const __wchar_t *const 
#line 1190
_Format, const _locale_t 
#line 1191
_Locale, va_list 
#line 1192
_ArgList) 
#line 1197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
} 
#line 1207 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl __vswprintf_l(__wchar_t *const 
#line 1208
_Buffer, const __wchar_t *const 
#line 1209
_Format, const _locale_t 
#line 1210
_Locale, va_list 
#line 1211
_ArgList) 
#line 1216 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1217
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1218
} 
#line 1223 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf(__wchar_t *const 
#line 1224
_Buffer, const __wchar_t *const 
#line 1225
_Format, va_list 
#line 1226
_ArgList) 
#line 1231 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1232
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
#line 1233
} 
#line 1238 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswprintf(__wchar_t *const 
#line 1239
_Buffer, const size_t 
#line 1240
_BufferCount, const __wchar_t *const 
#line 1241
_Format, va_list 
#line 1242
_ArgList) 
#line 1247 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1248
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1249
} 
#line 1254 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_s_l(__wchar_t *const 
#line 1255
_Buffer, const size_t 
#line 1256
_BufferCount, const __wchar_t *const 
#line 1257
_Format, const _locale_t 
#line 1258
_Locale, va_list 
#line 1259
_ArgList) 
#line 1264 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1265
const int _Result = __stdio_common_vswprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1269
return (_Result < 0) ? -1 : _Result; 
#line 1270
} 
#line 1276 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswprintf_s(__wchar_t *const 
#line 1277
_Buffer, const size_t 
#line 1278
_BufferCount, const __wchar_t *const 
#line 1279
_Format, va_list 
#line 1280
_ArgList) 
#line 1285 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1286
return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1287
} 
#line 1292 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {template < size_t _Size > inline int __cdecl vswprintf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, va_list _ArgList ) throw ( ) { return vswprintf_s ( _Buffer, _Size, _Format, _ArgList ); }}
#line 1303 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_p_l(__wchar_t *const 
#line 1304
_Buffer, const size_t 
#line 1305
_BufferCount, const __wchar_t *const 
#line 1306
_Format, const _locale_t 
#line 1307
_Locale, va_list 
#line 1308
_ArgList) 
#line 1312 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1313
const int _Result = __stdio_common_vswprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1317
return (_Result < 0) ? -1 : _Result; 
#line 1318
} 
#line 1323 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_p(__wchar_t *const 
#line 1324
_Buffer, const size_t 
#line 1325
_BufferCount, const __wchar_t *const 
#line 1326
_Format, va_list 
#line 1327
_ArgList) 
#line 1332 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1333
return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1334
} 
#line 1339 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_l(const __wchar_t *const 
#line 1340
_Format, const _locale_t 
#line 1341
_Locale, va_list 
#line 1342
_ArgList) 
#line 1347 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1348
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 
#line 1352
return (_Result < 0) ? -1 : _Result; 
#line 1353
} 
#line 1358 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf(const __wchar_t *const 
#line 1359
_Format, va_list 
#line 1360
_ArgList) 
#line 1365 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1366
return _vscwprintf_l(_Format, 0, _ArgList); 
#line 1367
} 
#line 1372 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_p_l(const __wchar_t *const 
#line 1373
_Format, const _locale_t 
#line 1374
_Locale, va_list 
#line 1375
_ArgList) 
#line 1380 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1381
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 
#line 1385
return (_Result < 0) ? -1 : _Result; 
#line 1386
} 
#line 1391 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_p(const __wchar_t *const 
#line 1392
_Format, va_list 
#line 1393
_ArgList) 
#line 1398 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1399
return _vscwprintf_p_l(_Format, 0, _ArgList); 
#line 1400
} 
#line 1405 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl __swprintf_l(__wchar_t *const 
#line 1406
_Buffer, const __wchar_t *const 
#line 1407
_Format, const _locale_t 
#line 1408
_Locale, ...) 
#line 1413 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1414
int _Result; 
#line 1415
va_list _ArgList; 
#line 1416
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1417
_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList); 
#line 1418
(void)(_ArgList = ((va_list)0)); 
#line 1419
return _Result; 
#line 1420
} 
#line 1425 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_l(__wchar_t *const 
#line 1426
_Buffer, const size_t 
#line 1427
_BufferCount, const __wchar_t *const 
#line 1428
_Format, const _locale_t 
#line 1429
_Locale, ...) 
#line 1434 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1435
int _Result; 
#line 1436
va_list _ArgList; 
#line 1437
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1438
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1439
(void)(_ArgList = ((va_list)0)); 
#line 1440
return _Result; 
#line 1441
} 
#line 1446 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf(__wchar_t *const 
#line 1447
_Buffer, const __wchar_t *const 
#line 1448
_Format, ...) 
#line 1453 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1454
int _Result; 
#line 1455
va_list _ArgList; 
#line 1456
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1457
_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList); 
#line 1458
(void)(_ArgList = ((va_list)0)); 
#line 1459
return _Result; 
#line 1460
} 
#line 1465 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swprintf(__wchar_t *const 
#line 1466
_Buffer, const size_t 
#line 1467
_BufferCount, const __wchar_t *const 
#line 1468
_Format, ...) 
#line 1473 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1474
int _Result; 
#line 1475
va_list _ArgList; 
#line 1476
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1477
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1478
(void)(_ArgList = ((va_list)0)); 
#line 1479
return _Result; 
#line 1480
} 
#line 1483 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#line 1486
#pragma warning(disable:4793 4996)
#line 1488
__inline int __cdecl __swprintf_l(__wchar_t * _Buffer, const __wchar_t * _Format, _locale_t _Locale, ...); __inline int __cdecl __vswprintf_l(__wchar_t * _Buffer, const __wchar_t * _Format, _locale_t _Locale, va_list _Args); 
#line 1498 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf(__wchar_t * _Buffer, const __wchar_t * _Format, ...); __inline int __cdecl _vswprintf(__wchar_t * _Buffer, const __wchar_t * _Format, va_list _Args); 
#line 1505 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(pop)
#line 1509
__inline int __cdecl _swprintf_s_l(__wchar_t *const 
#line 1510
_Buffer, const size_t 
#line 1511
_BufferCount, const __wchar_t *const 
#line 1512
_Format, const _locale_t 
#line 1513
_Locale, ...) 
#line 1517 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1518
int _Result; 
#line 1519
va_list _ArgList; 
#line 1520
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1521
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1522
(void)(_ArgList = ((va_list)0)); 
#line 1523
return _Result; 
#line 1524
} 
#line 1530 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swprintf_s(__wchar_t *const 
#line 1531
_Buffer, const size_t 
#line 1532
_BufferCount, const __wchar_t *const 
#line 1533
_Format, ...) 
#line 1538 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1539
int _Result; 
#line 1540
va_list _ArgList; 
#line 1541
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1542
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1543
(void)(_ArgList = ((va_list)0)); 
#line 1544
return _Result; 
#line 1545
} 
#line 1550 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {__pragma( warning(push)) __pragma( warning(disable: 4793)) template < size_t _Size > inline int __cdecl swprintf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return vswprintf_s ( _Buffer, _Size, _Format, _ArgList ); }__pragma( warning(pop)) }
#line 1560 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_p_l(__wchar_t *const 
#line 1561
_Buffer, const size_t 
#line 1562
_BufferCount, const __wchar_t *const 
#line 1563
_Format, const _locale_t 
#line 1564
_Locale, ...) 
#line 1568 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1569
int _Result; 
#line 1570
va_list _ArgList; 
#line 1571
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1572
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1573
(void)(_ArgList = ((va_list)0)); 
#line 1574
return _Result; 
#line 1575
} 
#line 1580 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_p(__wchar_t *const 
#line 1581
_Buffer, const size_t 
#line 1582
_BufferCount, const __wchar_t *const 
#line 1583
_Format, ...) 
#line 1588 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1589
int _Result; 
#line 1590
va_list _ArgList; 
#line 1591
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1592
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1593
(void)(_ArgList = ((va_list)0)); 
#line 1594
return _Result; 
#line 1595
} 
#line 1600 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_c_l(__wchar_t *const 
#line 1601
_Buffer, const size_t 
#line 1602
_BufferCount, const __wchar_t *const 
#line 1603
_Format, const _locale_t 
#line 1604
_Locale, ...) 
#line 1609 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1610
int _Result; 
#line 1611
va_list _ArgList; 
#line 1612
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1613
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1614
(void)(_ArgList = ((va_list)0)); 
#line 1615
return _Result; 
#line 1616
} 
#line 1621 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_c(__wchar_t *const 
#line 1622
_Buffer, const size_t 
#line 1623
_BufferCount, const __wchar_t *const 
#line 1624
_Format, ...) 
#line 1629 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1630
int _Result; 
#line 1631
va_list _ArgList; 
#line 1632
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1633
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1634
(void)(_ArgList = ((va_list)0)); 
#line 1635
return _Result; 
#line 1636
} 
#line 1641 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf_l(__wchar_t *const 
#line 1642
_Buffer, const size_t 
#line 1643
_BufferCount, const __wchar_t *const 
#line 1644
_Format, const _locale_t 
#line 1645
_Locale, ...) 
#line 1650 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1651
int _Result; 
#line 1652
va_list _ArgList; 
#line 1653
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1655
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
#line 1660
(void)(_ArgList = ((va_list)0)); 
#line 1661
return _Result; 
#line 1662
} 
#line 1667 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf(__wchar_t *
#line 1668
_Buffer, size_t 
#line 1669
_BufferCount, const __wchar_t *
#line 1670
_Format, ...) 
#line 1675 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1676
int _Result; 
#line 1677
va_list _ArgList; 
#line 1678
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1680
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
#line 1685
(void)(_ArgList = ((va_list)0)); 
#line 1686
return _Result; 
#line 1687
} 
#line 1692 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf_s_l(__wchar_t *const 
#line 1693
_Buffer, const size_t 
#line 1694
_BufferCount, const size_t 
#line 1695
_MaxCount, const __wchar_t *const 
#line 1696
_Format, const _locale_t 
#line 1697
_Locale, ...) 
#line 1702 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1703
int _Result; 
#line 1704
va_list _ArgList; 
#line 1705
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1706
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
#line 1707
(void)(_ArgList = ((va_list)0)); 
#line 1708
return _Result; 
#line 1709
} 
#line 1714 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf_s(__wchar_t *const 
#line 1715
_Buffer, const size_t 
#line 1716
_BufferCount, const size_t 
#line 1717
_MaxCount, const __wchar_t *const 
#line 1718
_Format, ...) 
#line 1723 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1724
int _Result; 
#line 1725
va_list _ArgList; 
#line 1726
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1727
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 1728
(void)(_ArgList = ((va_list)0)); 
#line 1729
return _Result; 
#line 1730
} 
#line 1733 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {__pragma( warning(push)) __pragma( warning(disable: 4793)) template < size_t _Size > inline int __cdecl _snwprintf_s ( wchar_t ( & _Buffer ) [ _Size ], size_t _BufferCount, wchar_t const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return _vsnwprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }__pragma( warning(pop)) }
#line 1743 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_l(const __wchar_t *const 
#line 1744
_Format, const _locale_t 
#line 1745
_Locale, ...) 
#line 1749 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1750
int _Result; 
#line 1751
va_list _ArgList; 
#line 1752
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1753
_Result = _vscwprintf_l(_Format, _Locale, _ArgList); 
#line 1754
(void)(_ArgList = ((va_list)0)); 
#line 1755
return _Result; 
#line 1756
} 
#line 1761 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf(const __wchar_t *const 
#line 1762
_Format, ...) 
#line 1767 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1768
int _Result; 
#line 1769
va_list _ArgList; 
#line 1770
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1771
_Result = _vscwprintf_l(_Format, 0, _ArgList); 
#line 1772
(void)(_ArgList = ((va_list)0)); 
#line 1773
return _Result; 
#line 1774
} 
#line 1779 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_p_l(const __wchar_t *const 
#line 1780
_Format, const _locale_t 
#line 1781
_Locale, ...) 
#line 1786 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1787
int _Result; 
#line 1788
va_list _ArgList; 
#line 1789
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1790
_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList); 
#line 1791
(void)(_ArgList = ((va_list)0)); 
#line 1792
return _Result; 
#line 1793
} 
#line 1798 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_p(const __wchar_t *const 
#line 1799
_Format, ...) 
#line 1804 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1805
int _Result; 
#line 1806
va_list _ArgList; 
#line 1807
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1808
_Result = _vscwprintf_p_l(_Format, 0, _ArgList); 
#line 1809
(void)(_ArgList = ((va_list)0)); 
#line 1810
return _Result; 
#line 1811
} 
#line 1816 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#pragma warning(disable: 4141 4412 4793 4996 6054)
#line 1822
extern "C++" 
#line 1821
__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int 
#line 1822
swprintf(__wchar_t *const 
#line 1823
_Buffer, const __wchar_t *const 
#line 1824
_Format, ...) throw() 
#line 1826
{ 
#line 1827
int _Result; 
#line 1828
va_list _ArgList; 
#line 1829
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#pragma warning(suppress: 28719)
_Result = vswprintf(_Buffer, 2147483647, _Format, _ArgList); 
#line 1832
(void)(_ArgList = ((va_list)0)); 
#line 1833
return _Result; 
#line 1834
} 
#line 1837
extern "C++" 
#line 1836
__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int __cdecl 
#line 1837
vswprintf(__wchar_t *const 
#line 1838
_Buffer, const __wchar_t *const 
#line 1839
_Format, va_list 
#line 1840
_ArgList) throw() 
#line 1842
{ 
#pragma warning(suppress: 28719)
return vswprintf(_Buffer, 2147483647, _Format, _ArgList); 
#line 1845
} 
#line 1848
extern "C++" 
#line 1847
__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int 
#line 1848
_swprintf_l(__wchar_t *const 
#line 1849
_Buffer, const __wchar_t *const 
#line 1850
_Format, const _locale_t 
#line 1851
_Locale, ...) throw() 
#line 1853
{ 
#line 1854
int _Result; 
#line 1855
va_list _ArgList; 
#line 1856
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1857
_Result = _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1858
(void)(_ArgList = ((va_list)0)); 
#line 1859
return _Result; 
#line 1860
} 
#line 1863
extern "C++" 
#line 1862
__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int __cdecl 
#line 1863
_vswprintf_l(__wchar_t *const 
#line 1864
_Buffer, const __wchar_t *const 
#line 1865
_Format, const _locale_t 
#line 1866
_Locale, va_list 
#line 1867
_ArgList) throw() 
#line 1869
{ 
#line 1870
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1871
} 
#line 1875 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(pop)
#line 1892 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vswscanf(unsigned __int64 _Options, const __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1903
__inline int __cdecl _vswscanf_l(const __wchar_t *const 
#line 1904
_Buffer, const __wchar_t *const 
#line 1905
_Format, const _locale_t 
#line 1906
_Locale, va_list 
#line 1907
_ArgList) 
#line 1912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1913
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1916
} 
#line 1921 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswscanf(const __wchar_t *
#line 1922
_Buffer, const __wchar_t *
#line 1923
_Format, va_list 
#line 1924
_ArgList) 
#line 1929 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1930
return _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
#line 1931
} 
#line 1936 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswscanf_s_l(const __wchar_t *const 
#line 1937
_Buffer, const __wchar_t *const 
#line 1938
_Format, const _locale_t 
#line 1939
_Locale, va_list 
#line 1940
_ArgList) 
#line 1945 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1946
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1949
} 
#line 1956 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswscanf_s(const __wchar_t *const 
#line 1957
_Buffer, const __wchar_t *const 
#line 1958
_Format, va_list 
#line 1959
_ArgList) 
#line 1964 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1965
return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
#line 1966
} 
#line 1971 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {template < size_t _Size > inline int __cdecl vswscanf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, va_list _ArgList ) throw ( ) { return vswscanf_s ( _Buffer, _Size, _Format, _ArgList ); }}
#line 1982 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vsnwscanf_l(const __wchar_t *const 
#line 1983
_Buffer, const size_t 
#line 1984
_BufferCount, const __wchar_t *const 
#line 1985
_Format, const _locale_t 
#line 1986
_Locale, va_list 
#line 1987
_ArgList) 
#line 1991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1992
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1995
} 
#line 2000 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vsnwscanf_s_l(const __wchar_t *const 
#line 2001
_Buffer, const size_t 
#line 2002
_BufferCount, const __wchar_t *const 
#line 2003
_Format, const _locale_t 
#line 2004
_Locale, va_list 
#line 2005
_ArgList) 
#line 2010 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2011
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2014
} 
#line 2019 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swscanf_l(const __wchar_t *const 
#line 2020
_Buffer, const __wchar_t *const 
#line 2021
_Format, _locale_t 
#line 2022
_Locale, ...) 
#line 2027 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2028
int _Result; 
#line 2029
va_list _ArgList; 
#line 2030
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2031
_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList); 
#line 2032
(void)(_ArgList = ((va_list)0)); 
#line 2033
return _Result; 
#line 2034
} 
#line 2039 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swscanf(const __wchar_t *const 
#line 2040
_Buffer, const __wchar_t *const 
#line 2041
_Format, ...) 
#line 2046 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2047
int _Result; 
#line 2048
va_list _ArgList; 
#line 2049
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2050
_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
#line 2051
(void)(_ArgList = ((va_list)0)); 
#line 2052
return _Result; 
#line 2053
} 
#line 2058 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swscanf_s_l(const __wchar_t *const 
#line 2059
_Buffer, const __wchar_t *const 
#line 2060
_Format, const _locale_t 
#line 2061
_Locale, ...) 
#line 2066 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2067
int _Result; 
#line 2068
va_list _ArgList; 
#line 2069
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2070
_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
#line 2071
(void)(_ArgList = ((va_list)0)); 
#line 2072
return _Result; 
#line 2073
} 
#line 2080 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swscanf_s(const __wchar_t *const 
#line 2081
_Buffer, const __wchar_t *const 
#line 2082
_Format, ...) 
#line 2087 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2088
int _Result; 
#line 2089
va_list _ArgList; 
#line 2090
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2091
_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
#line 2092
(void)(_ArgList = ((va_list)0)); 
#line 2093
return _Result; 
#line 2094
} 
#line 2101 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf_l(const __wchar_t *const 
#line 2102
_Buffer, const size_t 
#line 2103
_BufferCount, const __wchar_t *const 
#line 2104
_Format, const _locale_t 
#line 2105
_Locale, ...) 
#line 2110 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2111
int _Result; 
#line 2112
va_list _ArgList; 
#line 2113
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2115
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
#line 2120
(void)(_ArgList = ((va_list)0)); 
#line 2121
return _Result; 
#line 2122
} 
#line 2127 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf(const __wchar_t *const 
#line 2128
_Buffer, const size_t 
#line 2129
_BufferCount, const __wchar_t *const 
#line 2130
_Format, ...) 
#line 2135 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2136
int _Result; 
#line 2137
va_list _ArgList; 
#line 2138
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2140
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
#line 2145
(void)(_ArgList = ((va_list)0)); 
#line 2146
return _Result; 
#line 2147
} 
#line 2152 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf_s_l(const __wchar_t *const 
#line 2153
_Buffer, const size_t 
#line 2154
_BufferCount, const __wchar_t *const 
#line 2155
_Format, const _locale_t 
#line 2156
_Locale, ...) 
#line 2161 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2162
int _Result; 
#line 2163
va_list _ArgList; 
#line 2164
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2165
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2166
(void)(_ArgList = ((va_list)0)); 
#line 2167
return _Result; 
#line 2168
} 
#line 2173 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf_s(const __wchar_t *const 
#line 2174
_Buffer, const size_t 
#line 2175
_BufferCount, const __wchar_t *const 
#line 2176
_Format, ...) 
#line 2181 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2182
int _Result; 
#line 2183
va_list _ArgList; 
#line 2184
(void)((__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2185
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 2186
(void)(_ArgList = ((va_list)0)); 
#line 2187
return _Result; 
#line 2188
} 
#line 2198 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\corecrt_wstdio.h"
}__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 69 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
typedef __int64 fpos_t; 
#line 76
__declspec(dllimport) errno_t __cdecl _get_stream_buffer_pointers(FILE * _Stream, char *** _Base, char *** _Pointer, int ** _Count); 
#line 92
__declspec(dllimport) errno_t __cdecl clearerr_s(FILE * _Stream); 
#line 97
__declspec(dllimport) errno_t __cdecl fopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode); 
#line 105
__declspec(dllimport) size_t __cdecl fread_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 114
__declspec(dllimport) errno_t __cdecl freopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode, FILE * _OldStream); 
#line 122
__declspec(dllimport) char *__cdecl gets_s(char * _Buffer, rsize_t _Size); 
#line 128
__declspec(dllimport) errno_t __cdecl tmpfile_s(FILE ** _Stream); 
#line 134
__declspec(dllimport) errno_t __cdecl tmpnam_s(char * _Buffer, rsize_t _Size); 
#line 141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) void __cdecl clearerr(FILE * _Stream); 
#line 147
__declspec(dllimport) int __cdecl fclose(FILE * _Stream); 
#line 152
__declspec(dllimport) int __cdecl _fcloseall(); 
#line 155
__declspec(dllimport) FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); 
#line 161
__declspec(dllimport) int __cdecl feof(FILE * _Stream); 
#line 166
__declspec(dllimport) int __cdecl ferror(FILE * _Stream); 
#line 171
__declspec(dllimport) int __cdecl fflush(FILE * _Stream); 
#line 177
__declspec(dllimport) int __cdecl fgetc(FILE * _Stream); 
#line 182
__declspec(dllimport) int __cdecl _fgetchar(); 
#line 186
__declspec(dllimport) int __cdecl fgetpos(FILE * _Stream, fpos_t * _Position); 
#line 193
__declspec(dllimport) char *__cdecl fgets(char * _Buffer, int _MaxCount, FILE * _Stream); 
#line 200
__declspec(dllimport) int __cdecl _fileno(FILE * _Stream); 
#line 205
__declspec(dllimport) int __cdecl _flushall(); 
#line 208
__declspec(dllimport) FILE *__cdecl fopen(const char * _FileName, const char * _Mode); 
#line 216
__declspec(dllimport) int __cdecl fputc(int _Character, FILE * _Stream); 
#line 222
__declspec(dllimport) int __cdecl _fputchar(int _Character); 
#line 228
__declspec(dllimport) int __cdecl fputs(const char * _Buffer, FILE * _Stream); 
#line 234
__declspec(dllimport) size_t __cdecl fread(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 243
__declspec(dllimport) FILE *__cdecl freopen(const char * _FileName, const char * _Mode, FILE * _Stream); 
#line 250
__declspec(dllimport) FILE *__cdecl _fsopen(const char * _FileName, const char * _Mode, int _ShFlag); 
#line 258
__declspec(dllimport) int __cdecl fsetpos(FILE * _Stream, const fpos_t * _Position); 
#line 265
__declspec(dllimport) int __cdecl fseek(FILE * _Stream, long _Offset, int _Origin); 
#line 273
__declspec(dllimport) int __cdecl _fseeki64(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 281
__declspec(dllimport) long __cdecl ftell(FILE * _Stream); 
#line 287
__declspec(dllimport) __int64 __cdecl _ftelli64(FILE * _Stream); 
#line 292
__declspec(dllimport) size_t __cdecl fwrite(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 301
__declspec(dllimport) int __cdecl getc(FILE * _Stream); 
#line 306
__declspec(dllimport) int __cdecl getchar(); 
#line 309
__declspec(dllimport) int __cdecl _getmaxstdio(); 
#line 311
extern "C++" {template < size_t _Size > inline char * __cdecl gets_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return gets_s ( _Buffer, _Size ); }}
#line 317 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl _getw(FILE * _Stream); 
#line 321
__declspec(dllimport) void __cdecl perror(const char * _ErrorMessage); 
#line 329
__declspec(dllimport) int __cdecl _pclose(FILE * _Stream); 
#line 334
__declspec(dllimport) FILE *__cdecl _popen(const char * _Command, const char * _Mode); 
#line 342 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl putc(int _Character, FILE * _Stream); 
#line 348
__declspec(dllimport) int __cdecl putchar(int _Character); 
#line 353
__declspec(dllimport) int __cdecl puts(const char * _Buffer); 
#line 359
__declspec(dllimport) int __cdecl _putw(int _Word, FILE * _Stream); 
#line 364
__declspec(dllimport) int __cdecl remove(const char * _FileName); 
#line 369
__declspec(dllimport) int __cdecl rename(const char * _OldFileName, const char * _NewFileName); 
#line 374
__declspec(dllimport) int __cdecl _unlink(const char * _FileName); 
#line 381
__declspec(dllimport) int __cdecl unlink(const char * _FileName); 
#line 387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) void __cdecl rewind(FILE * _Stream); 
#line 392
__declspec(dllimport) int __cdecl _rmtmp(); 
#line 395
__declspec(dllimport) void __cdecl setbuf(FILE * _Stream, char * _Buffer); 
#line 401
__declspec(dllimport) int __cdecl _setmaxstdio(int _Maximum); 
#line 407
__declspec(dllimport) int __cdecl setvbuf(FILE * _Stream, char * _Buffer, int _Mode, size_t _Size); 
#line 420 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) __declspec(allocator) char *__cdecl _tempnam(const char * _DirectoryName, const char * _FilePrefix); 
#line 430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) FILE *__cdecl tmpfile(); 
#line 432
extern "C++" {template < size_t _Size > inline errno_t __cdecl tmpnam_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return tmpnam_s ( _Buffer, _Size ); }}
#line 439 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable: 28726)
__declspec(dllimport) char *__cdecl tmpnam(char * _Buffer); 
#line 446 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
#pragma warning(pop)
#line 450
__declspec(dllimport) int __cdecl ungetc(int _Character, FILE * _Stream); 
#line 462
__declspec(dllimport) void __cdecl _lock_file(FILE * _Stream); 
#line 466
__declspec(dllimport) void __cdecl _unlock_file(FILE * _Stream); 
#line 472
__declspec(dllimport) int __cdecl _fclose_nolock(FILE * _Stream); 
#line 478
__declspec(dllimport) int __cdecl _fflush_nolock(FILE * _Stream); 
#line 484
__declspec(dllimport) int __cdecl _fgetc_nolock(FILE * _Stream); 
#line 490
__declspec(dllimport) int __cdecl _fputc_nolock(int _Character, FILE * _Stream); 
#line 496
__declspec(dllimport) size_t __cdecl _fread_nolock(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 505
__declspec(dllimport) size_t __cdecl _fread_nolock_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 514
__declspec(dllimport) int __cdecl _fseek_nolock(FILE * _Stream, long _Offset, int _Origin); 
#line 521
__declspec(dllimport) int __cdecl _fseeki64_nolock(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 528
__declspec(dllimport) long __cdecl _ftell_nolock(FILE * _Stream); 
#line 533
__declspec(dllimport) __int64 __cdecl _ftelli64_nolock(FILE * _Stream); 
#line 538
__declspec(dllimport) size_t __cdecl _fwrite_nolock(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 546
__declspec(dllimport) int __cdecl _getc_nolock(FILE * _Stream); 
#line 551
__declspec(dllimport) int __cdecl _putc_nolock(int _Character, FILE * _Stream); 
#line 557
__declspec(dllimport) int __cdecl _ungetc_nolock(int _Character, FILE * _Stream); 
#line 587 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int *__cdecl __p__commode(); 
#line 607 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 615
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 624
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 633
__inline int __cdecl _vfprintf_l(FILE *const 
#line 634
_Stream, const char *const 
#line 635
_Format, const _locale_t 
#line 636
_Locale, va_list 
#line 637
_ArgList) 
#line 642 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 643
return __stdio_common_vfprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 644
} 
#line 648 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vfprintf(FILE *const 
#line 649
_Stream, const char *const 
#line 650
_Format, va_list 
#line 651
_ArgList) 
#line 656 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 657
return _vfprintf_l(_Stream, _Format, 0, _ArgList); 
#line 658
} 
#line 662 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_s_l(FILE *const 
#line 663
_Stream, const char *const 
#line 664
_Format, const _locale_t 
#line 665
_Locale, va_list 
#line 666
_ArgList) 
#line 671 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 672
return __stdio_common_vfprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 673
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vfprintf_s(FILE *const 
#line 680
_Stream, const char *const 
#line 681
_Format, va_list 
#line 682
_ArgList) 
#line 687 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 688
return _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
#line 689
} 
#line 695 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_p_l(FILE *const 
#line 696
_Stream, const char *const 
#line 697
_Format, const _locale_t 
#line 698
_Locale, va_list 
#line 699
_ArgList) 
#line 704 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 705
return __stdio_common_vfprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 706
} 
#line 710 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_p(FILE *const 
#line 711
_Stream, const char *const 
#line 712
_Format, va_list 
#line 713
_ArgList) 
#line 718 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 719
return _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
#line 720
} 
#line 724 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_l(const char *const 
#line 725
_Format, const _locale_t 
#line 726
_Locale, va_list 
#line 727
_ArgList) 
#line 732 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 733
return _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 734
} 
#line 738 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vprintf(const char *const 
#line 739
_Format, va_list 
#line 740
_ArgList) 
#line 745 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 746
return _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 747
} 
#line 751 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_s_l(const char *const 
#line 752
_Format, const _locale_t 
#line 753
_Locale, va_list 
#line 754
_ArgList) 
#line 759 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 760
return _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 761
} 
#line 767 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vprintf_s(const char *const 
#line 768
_Format, va_list 
#line 769
_ArgList) 
#line 774 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 775
return _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 776
} 
#line 782 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_p_l(const char *const 
#line 783
_Format, const _locale_t 
#line 784
_Locale, va_list 
#line 785
_ArgList) 
#line 790 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 791
return _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 792
} 
#line 796 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_p(const char *const 
#line 797
_Format, va_list 
#line 798
_ArgList) 
#line 803 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 804
return _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 805
} 
#line 809 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_l(FILE *const 
#line 810
_Stream, const char *const 
#line 811
_Format, const _locale_t 
#line 812
_Locale, ...) 
#line 817 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 818
int _Result; 
#line 819
va_list _ArgList; 
#line 820
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 821
_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList); 
#line 822
(void)(_ArgList = ((va_list)0)); 
#line 823
return _Result; 
#line 824
} 
#line 828 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl fprintf(FILE *const 
#line 829
_Stream, const char *const 
#line 830
_Format, ...) 
#line 835 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 836
int _Result; 
#line 837
va_list _ArgList; 
#line 838
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 839
_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList); 
#line 840
(void)(_ArgList = ((va_list)0)); 
#line 841
return _Result; 
#line 842
} 
#line 845 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl _set_printf_count_output(int _Value); 
#line 849
__declspec(dllimport) int __cdecl _get_printf_count_output(); 
#line 852
__inline int __cdecl _fprintf_s_l(FILE *const 
#line 853
_Stream, const char *const 
#line 854
_Format, const _locale_t 
#line 855
_Locale, ...) 
#line 860 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 861
int _Result; 
#line 862
va_list _ArgList; 
#line 863
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 864
_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
#line 865
(void)(_ArgList = ((va_list)0)); 
#line 866
return _Result; 
#line 867
} 
#line 873 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl fprintf_s(FILE *const 
#line 874
_Stream, const char *const 
#line 875
_Format, ...) 
#line 880 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 881
int _Result; 
#line 882
va_list _ArgList; 
#line 883
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 884
_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
#line 885
(void)(_ArgList = ((va_list)0)); 
#line 886
return _Result; 
#line 887
} 
#line 893 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_p_l(FILE *const 
#line 894
_Stream, const char *const 
#line 895
_Format, const _locale_t 
#line 896
_Locale, ...) 
#line 901 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 902
int _Result; 
#line 903
va_list _ArgList; 
#line 904
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 905
_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
#line 906
(void)(_ArgList = ((va_list)0)); 
#line 907
return _Result; 
#line 908
} 
#line 912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_p(FILE *const 
#line 913
_Stream, const char *const 
#line 914
_Format, ...) 
#line 919 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 920
int _Result; 
#line 921
va_list _ArgList; 
#line 922
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 923
_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
#line 924
(void)(_ArgList = ((va_list)0)); 
#line 925
return _Result; 
#line 926
} 
#line 930 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_l(const char *const 
#line 931
_Format, const _locale_t 
#line 932
_Locale, ...) 
#line 937 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 938
int _Result; 
#line 939
va_list _ArgList; 
#line 940
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 941
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 942
(void)(_ArgList = ((va_list)0)); 
#line 943
return _Result; 
#line 944
} 
#line 948 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl printf(const char *const 
#line 949
_Format, ...) 
#line 954 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 955
int _Result; 
#line 956
va_list _ArgList; 
#line 957
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 958
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 959
(void)(_ArgList = ((va_list)0)); 
#line 960
return _Result; 
#line 961
} 
#line 965 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_s_l(const char *const 
#line 966
_Format, const _locale_t 
#line 967
_Locale, ...) 
#line 972 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 973
int _Result; 
#line 974
va_list _ArgList; 
#line 975
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 976
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 977
(void)(_ArgList = ((va_list)0)); 
#line 978
return _Result; 
#line 979
} 
#line 985 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl printf_s(const char *const 
#line 986
_Format, ...) 
#line 991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 992
int _Result; 
#line 993
va_list _ArgList; 
#line 994
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 995
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 996
(void)(_ArgList = ((va_list)0)); 
#line 997
return _Result; 
#line 998
} 
#line 1004 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_p_l(const char *const 
#line 1005
_Format, const _locale_t 
#line 1006
_Locale, ...) 
#line 1011 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1012
int _Result; 
#line 1013
va_list _ArgList; 
#line 1014
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1015
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 1016
(void)(_ArgList = ((va_list)0)); 
#line 1017
return _Result; 
#line 1018
} 
#line 1022 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_p(const char *const 
#line 1023
_Format, ...) 
#line 1028 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1029
int _Result; 
#line 1030
va_list _ArgList; 
#line 1031
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1032
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 1033
(void)(_ArgList = ((va_list)0)); 
#line 1034
return _Result; 
#line 1035
} 
#line 1044 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vfscanf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _Arglist); 
#line 1053
__inline int __cdecl _vfscanf_l(FILE *const 
#line 1054
_Stream, const char *const 
#line 1055
_Format, const _locale_t 
#line 1056
_Locale, va_list 
#line 1057
_ArgList) 
#line 1062 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1063
return __stdio_common_vfscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 1066
} 
#line 1070 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vfscanf(FILE *const 
#line 1071
_Stream, const char *const 
#line 1072
_Format, va_list 
#line 1073
_ArgList) 
#line 1078 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1079
return _vfscanf_l(_Stream, _Format, 0, _ArgList); 
#line 1080
} 
#line 1084 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vfscanf_s_l(FILE *const 
#line 1085
_Stream, const char *const 
#line 1086
_Format, const _locale_t 
#line 1087
_Locale, va_list 
#line 1088
_ArgList) 
#line 1093 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1094
return __stdio_common_vfscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 
#line 1097
} 
#line 1104 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vfscanf_s(FILE *const 
#line 1105
_Stream, const char *const 
#line 1106
_Format, va_list 
#line 1107
_ArgList) 
#line 1112 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1113
return _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
#line 1114
} 
#line 1120 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vscanf_l(const char *const 
#line 1121
_Format, const _locale_t 
#line 1122
_Locale, va_list 
#line 1123
_ArgList) 
#line 1128 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1129
return _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 1130
} 
#line 1134 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vscanf(const char *const 
#line 1135
_Format, va_list 
#line 1136
_ArgList) 
#line 1141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1142
return _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 1143
} 
#line 1147 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vscanf_s_l(const char *const 
#line 1148
_Format, const _locale_t 
#line 1149
_Locale, va_list 
#line 1150
_ArgList) 
#line 1155 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1156
return _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 1157
} 
#line 1163 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vscanf_s(const char *const 
#line 1164
_Format, va_list 
#line 1165
_ArgList) 
#line 1170 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1171
return _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 1172
} 
#line 1178 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _fscanf_l(FILE *const 
#line 1179
_Stream, const char *const 
#line 1180
_Format, const _locale_t 
#line 1181
_Locale, ...) 
#line 1186 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1187
int _Result; 
#line 1188
va_list _ArgList; 
#line 1189
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1190
_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList); 
#line 1191
(void)(_ArgList = ((va_list)0)); 
#line 1192
return _Result; 
#line 1193
} 
#line 1197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl fscanf(FILE *const 
#line 1198
_Stream, const char *const 
#line 1199
_Format, ...) 
#line 1204 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1205
int _Result; 
#line 1206
va_list _ArgList; 
#line 1207
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1208
_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList); 
#line 1209
(void)(_ArgList = ((va_list)0)); 
#line 1210
return _Result; 
#line 1211
} 
#line 1215 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _fscanf_s_l(FILE *const 
#line 1216
_Stream, const char *const 
#line 1217
_Format, const _locale_t 
#line 1218
_Locale, ...) 
#line 1223 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1224
int _Result; 
#line 1225
va_list _ArgList; 
#line 1226
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1227
_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
#line 1228
(void)(_ArgList = ((va_list)0)); 
#line 1229
return _Result; 
#line 1230
} 
#line 1236 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl fscanf_s(FILE *const 
#line 1237
_Stream, const char *const 
#line 1238
_Format, ...) 
#line 1243 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1244
int _Result; 
#line 1245
va_list _ArgList; 
#line 1246
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1247
_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
#line 1248
(void)(_ArgList = ((va_list)0)); 
#line 1249
return _Result; 
#line 1250
} 
#line 1256 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _scanf_l(const char *const 
#line 1257
_Format, const _locale_t 
#line 1258
_Locale, ...) 
#line 1263 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1264
int _Result; 
#line 1265
va_list _ArgList; 
#line 1266
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1267
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 1268
(void)(_ArgList = ((va_list)0)); 
#line 1269
return _Result; 
#line 1270
} 
#line 1274 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl scanf(const char *const 
#line 1275
_Format, ...) 
#line 1280 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1281
int _Result; 
#line 1282
va_list _ArgList; 
#line 1283
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1284
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 1285
(void)(_ArgList = ((va_list)0)); 
#line 1286
return _Result; 
#line 1287
} 
#line 1291 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _scanf_s_l(const char *const 
#line 1292
_Format, const _locale_t 
#line 1293
_Locale, ...) 
#line 1298 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1299
int _Result; 
#line 1300
va_list _ArgList; 
#line 1301
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1302
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 1303
(void)(_ArgList = ((va_list)0)); 
#line 1304
return _Result; 
#line 1305
} 
#line 1311 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl scanf_s(const char *const 
#line 1312
_Format, ...) 
#line 1317 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1318
int _Result; 
#line 1319
va_list _ArgList; 
#line 1320
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1321
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 1322
(void)(_ArgList = ((va_list)0)); 
#line 1323
return _Result; 
#line 1324
} 
#line 1337 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vsprintf(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1347
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1357
__declspec(dllimport) int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1368
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1379
__inline int __cdecl _vsnprintf_l(char *const 
#line 1380
_Buffer, const size_t 
#line 1381
_BufferCount, const char *const 
#line 1382
_Format, const _locale_t 
#line 1383
_Locale, va_list 
#line 1384
_ArgList) 
#line 1389 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1390
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1394
return (_Result < 0) ? -1 : _Result; 
#line 1395
} 
#line 1400 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf(char *const 
#line 1401
_Buffer, const size_t 
#line 1402
_BufferCount, const char *const 
#line 1403
_Format, va_list 
#line 1404
_ArgList) 
#line 1409 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
} 
#line 1430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vsnprintf(char *const 
#line 1431
_Buffer, const size_t 
#line 1432
_BufferCount, const char *const 
#line 1433
_Format, va_list 
#line 1434
_ArgList) 
#line 1439 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1440
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), _Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1444
return (_Result < 0) ? -1 : _Result; 
#line 1445
} 
#line 1450 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_l(char *const 
#line 1451
_Buffer, const char *const 
#line 1452
_Format, const _locale_t 
#line 1453
_Locale, va_list 
#line 1454
_ArgList) 
#line 1459 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#pragma warning(pop)
} 
#line 1469 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vsprintf(char *const 
#line 1470
_Buffer, const char *const 
#line 1471
_Format, va_list 
#line 1472
_ArgList) 
#line 1477 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
#pragma warning(pop)
} 
#line 1487 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_s_l(char *const 
#line 1488
_Buffer, const size_t 
#line 1489
_BufferCount, const char *const 
#line 1490
_Format, const _locale_t 
#line 1491
_Locale, va_list 
#line 1492
_ArgList) 
#line 1497 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1498
const int _Result = __stdio_common_vsprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1502
return (_Result < 0) ? -1 : _Result; 
#line 1503
} 
#line 1510 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vsprintf_s(char *const 
#line 1511
_Buffer, const size_t 
#line 1512
_BufferCount, const char *const 
#line 1513
_Format, va_list 
#line 1514
_ArgList) 
#line 1519 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1520
return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1521
} 
#line 1524 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
extern "C++" {template < size_t _Size > inline int __cdecl vsprintf_s ( char ( & _Buffer ) [ _Size ], char const * _Format, va_list _ArgList ) throw ( ) { return vsprintf_s ( _Buffer, _Size, _Format, _ArgList ); }}
#line 1536 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_p_l(char *const 
#line 1537
_Buffer, const size_t 
#line 1538
_BufferCount, const char *const 
#line 1539
_Format, const _locale_t 
#line 1540
_Locale, va_list 
#line 1541
_ArgList) 
#line 1546 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1547
const int _Result = __stdio_common_vsprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1551
return (_Result < 0) ? -1 : _Result; 
#line 1552
} 
#line 1557 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_p(char *const 
#line 1558
_Buffer, const size_t 
#line 1559
_BufferCount, const char *const 
#line 1560
_Format, va_list 
#line 1561
_ArgList) 
#line 1566 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1567
return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1568
} 
#line 1573 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_s_l(char *const 
#line 1574
_Buffer, const size_t 
#line 1575
_BufferCount, const size_t 
#line 1576
_MaxCount, const char *const 
#line 1577
_Format, const _locale_t 
#line 1578
_Locale, va_list 
#line 1579
_ArgList) 
#line 1584 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1585
const int _Result = __stdio_common_vsnprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
#line 1589
return (_Result < 0) ? -1 : _Result; 
#line 1590
} 
#line 1595 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_s(char *const 
#line 1596
_Buffer, const size_t 
#line 1597
_BufferCount, const size_t 
#line 1598
_MaxCount, const char *const 
#line 1599
_Format, va_list 
#line 1600
_ArgList) 
#line 1605 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1606
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 1607
} 
#line 1610 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
extern "C++" {template < size_t _Size > inline int __cdecl _vsnprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, va_list _ArgList ) throw ( ) { return _vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }}
#line 1624 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vsnprintf_s(char *const 
#line 1625
_Buffer, const size_t 
#line 1626
_BufferCount, const size_t 
#line 1627
_MaxCount, const char *const 
#line 1628
_Format, va_list 
#line 1629
_ArgList) 
#line 1633 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1634
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 1635
} 
#line 1638 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
extern "C++" {template < size_t _Size > inline int __cdecl vsnprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, va_list _ArgList ) throw ( ) { return vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }}
#line 1650 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_l(const char *const 
#line 1651
_Format, const _locale_t 
#line 1652
_Locale, va_list 
#line 1653
_ArgList) 
#line 1658 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1659
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 
#line 1663
return (_Result < 0) ? -1 : _Result; 
#line 1664
} 
#line 1668 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf(const char *const 
#line 1669
_Format, va_list 
#line 1670
_ArgList) 
#line 1675 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1676
return _vscprintf_l(_Format, 0, _ArgList); 
#line 1677
} 
#line 1681 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_p_l(const char *const 
#line 1682
_Format, const _locale_t 
#line 1683
_Locale, va_list 
#line 1684
_ArgList) 
#line 1689 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1690
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 
#line 1694
return (_Result < 0) ? -1 : _Result; 
#line 1695
} 
#line 1699 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_p(const char *const 
#line 1700
_Format, va_list 
#line 1701
_ArgList) 
#line 1706 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1707
return _vscprintf_p_l(_Format, 0, _ArgList); 
#line 1708
} 
#line 1712 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_c_l(char *const 
#line 1713
_Buffer, const size_t 
#line 1714
_BufferCount, const char *const 
#line 1715
_Format, const _locale_t 
#line 1716
_Locale, va_list 
#line 1717
_ArgList) 
#line 1722 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1723
const int _Result = __stdio_common_vsprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1727
return (_Result < 0) ? -1 : _Result; 
#line 1728
} 
#line 1733 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_c(char *const 
#line 1734
_Buffer, const size_t 
#line 1735
_BufferCount, const char *const 
#line 1736
_Format, va_list 
#line 1737
_ArgList) 
#line 1742 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1743
return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1744
} 
#line 1749 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _sprintf_l(char *const 
#line 1750
_Buffer, const char *const 
#line 1751
_Format, const _locale_t 
#line 1752
_Locale, ...) 
#line 1757 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1758
int _Result; 
#line 1759
va_list _ArgList; 
#line 1760
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1762
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList); 
#pragma warning(pop)
#line 1767
(void)(_ArgList = ((va_list)0)); 
#line 1768
return _Result; 
#line 1769
} 
#line 1774 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl sprintf(char *const 
#line 1775
_Buffer, const char *const 
#line 1776
_Format, ...) 
#line 1781 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1782
int _Result; 
#line 1783
va_list _ArgList; 
#line 1784
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1786
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList); 
#pragma warning(pop)
#line 1791
(void)(_ArgList = ((va_list)0)); 
#line 1792
return _Result; 
#line 1793
} 
#line 1796 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__inline int __cdecl sprintf(char * _Buffer, const char * _Format, ...); __inline int __cdecl vsprintf(char * _Buffer, const char * _Format, va_list _Args); 
#line 1807 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
#pragma warning(pop)
#line 1811
__inline int __cdecl _sprintf_s_l(char *const 
#line 1812
_Buffer, const size_t 
#line 1813
_BufferCount, const char *const 
#line 1814
_Format, const _locale_t 
#line 1815
_Locale, ...) 
#line 1819 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1820
int _Result; 
#line 1821
va_list _ArgList; 
#line 1822
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1823
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1824
(void)(_ArgList = ((va_list)0)); 
#line 1825
return _Result; 
#line 1826
} 
#line 1833 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl sprintf_s(char *const 
#line 1834
_Buffer, const size_t 
#line 1835
_BufferCount, const char *const 
#line 1836
_Format, ...) 
#line 1841 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1842
int _Result; 
#line 1843
va_list _ArgList; 
#line 1844
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1845
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1846
(void)(_ArgList = ((va_list)0)); 
#line 1847
return _Result; 
#line 1848
} 
#line 1853 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
extern "C++" {__pragma( warning(push)) __pragma( warning(disable: 4793)) template < size_t _Size > inline int __cdecl sprintf_s ( char ( & _Buffer ) [ _Size ], char const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return vsprintf_s ( _Buffer, _Size, _Format, _ArgList ); }__pragma( warning(pop)) }
#line 1863 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _sprintf_p_l(char *const 
#line 1864
_Buffer, const size_t 
#line 1865
_BufferCount, const char *const 
#line 1866
_Format, const _locale_t 
#line 1867
_Locale, ...) 
#line 1871 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1872
int _Result; 
#line 1873
va_list _ArgList; 
#line 1874
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1875
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1876
(void)(_ArgList = ((va_list)0)); 
#line 1877
return _Result; 
#line 1878
} 
#line 1883 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _sprintf_p(char *const 
#line 1884
_Buffer, const size_t 
#line 1885
_BufferCount, const char *const 
#line 1886
_Format, ...) 
#line 1891 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1892
int _Result; 
#line 1893
va_list _ArgList; 
#line 1894
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 1895
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1896
(void)(_ArgList = ((va_list)0)); 
#line 1897
return _Result; 
#line 1898
} 
#line 1903 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_l(char *const 
#line 1904
_Buffer, const size_t 
#line 1905
_BufferCount, const char *const 
#line 1906
_Format, const _locale_t 
#line 1907
_Locale, ...) 
#line 1912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1913
int _Result; 
#line 1914
va_list _ArgList; 
#line 1915
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 1917
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
#line 1922
(void)(_ArgList = ((va_list)0)); 
#line 1923
return _Result; 
#line 1924
} 
#line 1940 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl snprintf(char *const 
#line 1941
_Buffer, const size_t 
#line 1942
_BufferCount, const char *const 
#line 1943
_Format, ...) 
#line 1948 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1949
int _Result; 
#line 1950
va_list _ArgList; 
#line 1951
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#pragma warning(suppress:28719)
_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
#line 1954
(void)(_ArgList = ((va_list)0)); 
#line 1955
return _Result; 
#line 1956
} 
#line 1961 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf(char *const 
#line 1962
_Buffer, const size_t 
#line 1963
_BufferCount, const char *const 
#line 1964
_Format, ...) 
#line 1969 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 1970
int _Result; 
#line 1971
va_list _ArgList; 
#line 1972
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#pragma warning(suppress:28719)
_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
#line 1975
(void)(_ArgList = ((va_list)0)); 
#line 1976
return _Result; 
#line 1977
} 
#line 1980 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf(char * _Buffer, size_t _BufferCount, const char * _Format, ...); __inline int __cdecl _vsnprintf(char * _Buffer, size_t _BufferCount, const char * _Format, va_list _Args); 
#line 1992 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_c_l(char *const 
#line 1993
_Buffer, const size_t 
#line 1994
_BufferCount, const char *const 
#line 1995
_Format, const _locale_t 
#line 1996
_Locale, ...) 
#line 2000 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2001
int _Result; 
#line 2002
va_list _ArgList; 
#line 2003
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2004
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2005
(void)(_ArgList = ((va_list)0)); 
#line 2006
return _Result; 
#line 2007
} 
#line 2012 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_c(char *const 
#line 2013
_Buffer, const size_t 
#line 2014
_BufferCount, const char *const 
#line 2015
_Format, ...) 
#line 2020 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2021
int _Result; 
#line 2022
va_list _ArgList; 
#line 2023
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2024
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 2025
(void)(_ArgList = ((va_list)0)); 
#line 2026
return _Result; 
#line 2027
} 
#line 2032 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_s_l(char *const 
#line 2033
_Buffer, const size_t 
#line 2034
_BufferCount, const size_t 
#line 2035
_MaxCount, const char *const 
#line 2036
_Format, const _locale_t 
#line 2037
_Locale, ...) 
#line 2042 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2043
int _Result; 
#line 2044
va_list _ArgList; 
#line 2045
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2046
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
#line 2047
(void)(_ArgList = ((va_list)0)); 
#line 2048
return _Result; 
#line 2049
} 
#line 2054 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_s(char *const 
#line 2055
_Buffer, const size_t 
#line 2056
_BufferCount, const size_t 
#line 2057
_MaxCount, const char *const 
#line 2058
_Format, ...) 
#line 2063 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2064
int _Result; 
#line 2065
va_list _ArgList; 
#line 2066
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2067
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 2068
(void)(_ArgList = ((va_list)0)); 
#line 2069
return _Result; 
#line 2070
} 
#line 2073 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
extern "C++" {__pragma( warning(push)) __pragma( warning(disable: 4793)) template < size_t _Size > inline int __cdecl _snprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return _vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }__pragma( warning(pop)) }
#line 2083 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_l(const char *const 
#line 2084
_Format, const _locale_t 
#line 2085
_Locale, ...) 
#line 2089 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2090
int _Result; 
#line 2091
va_list _ArgList; 
#line 2092
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2093
_Result = _vscprintf_l(_Format, _Locale, _ArgList); 
#line 2094
(void)(_ArgList = ((va_list)0)); 
#line 2095
return _Result; 
#line 2096
} 
#line 2100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf(const char *const 
#line 2101
_Format, ...) 
#line 2106 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2107
int _Result; 
#line 2108
va_list _ArgList; 
#line 2109
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2110
_Result = _vscprintf_l(_Format, 0, _ArgList); 
#line 2111
(void)(_ArgList = ((va_list)0)); 
#line 2112
return _Result; 
#line 2113
} 
#line 2117 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_p_l(const char *const 
#line 2118
_Format, const _locale_t 
#line 2119
_Locale, ...) 
#line 2124 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2125
int _Result; 
#line 2126
va_list _ArgList; 
#line 2127
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2128
_Result = _vscprintf_p_l(_Format, _Locale, _ArgList); 
#line 2129
(void)(_ArgList = ((va_list)0)); 
#line 2130
return _Result; 
#line 2131
} 
#line 2135 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_p(const char *const 
#line 2136
_Format, ...) 
#line 2141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2142
int _Result; 
#line 2143
va_list _ArgList; 
#line 2144
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2145
_Result = _vscprintf_p(_Format, _ArgList); 
#line 2146
(void)(_ArgList = ((va_list)0)); 
#line 2147
return _Result; 
#line 2148
} 
#line 2156 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, const char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 2166
__inline int __cdecl _vsscanf_l(const char *const 
#line 2167
_Buffer, const char *const 
#line 2168
_Format, const _locale_t 
#line 2169
_Locale, va_list 
#line 2170
_ArgList) 
#line 2175 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2176
return __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 2179
} 
#line 2183 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl vsscanf(const char *const 
#line 2184
_Buffer, const char *const 
#line 2185
_Format, va_list 
#line 2186
_ArgList) 
#line 2191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2192
return _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
#line 2193
} 
#line 2197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _vsscanf_s_l(const char *const 
#line 2198
_Buffer, const char *const 
#line 2199
_Format, const _locale_t 
#line 2200
_Locale, va_list 
#line 2201
_ArgList) 
#line 2206 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2207
return __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 2210
} 
#line 2215 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable:6530)
#line 2219
__inline int __cdecl vsscanf_s(const char *const 
#line 2220
_Buffer, const char *const 
#line 2221
_Format, va_list 
#line 2222
_ArgList) 
#line 2227 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2228
return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList); 
#line 2229
} 
#line 2232 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
extern "C++" {template < size_t _Size > inline int __cdecl vsscanf_s ( char const ( & _Buffer ) [ _Size ], char const * _Format, va_list _ArgList ) throw ( ) { return vsscanf_s ( _Buffer, _Size, _Format, _ArgList ); }}
#line 2240 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
#pragma warning(pop)
#line 2244 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _sscanf_l(const char *const 
#line 2245
_Buffer, const char *const 
#line 2246
_Format, const _locale_t 
#line 2247
_Locale, ...) 
#line 2252 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2253
int _Result; 
#line 2254
va_list _ArgList; 
#line 2255
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2256
_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList); 
#line 2257
(void)(_ArgList = ((va_list)0)); 
#line 2258
return _Result; 
#line 2259
} 
#line 2263 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl sscanf(const char *const 
#line 2264
_Buffer, const char *const 
#line 2265
_Format, ...) 
#line 2270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2271
int _Result; 
#line 2272
va_list _ArgList; 
#line 2273
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2274
_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
#line 2275
(void)(_ArgList = ((va_list)0)); 
#line 2276
return _Result; 
#line 2277
} 
#line 2281 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _sscanf_s_l(const char *const 
#line 2282
_Buffer, const char *const 
#line 2283
_Format, const _locale_t 
#line 2284
_Locale, ...) 
#line 2289 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2290
int _Result; 
#line 2291
va_list _ArgList; 
#line 2292
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2293
_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
#line 2294
(void)(_ArgList = ((va_list)0)); 
#line 2295
return _Result; 
#line 2296
} 
#line 2302 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl sscanf_s(const char *const 
#line 2303
_Buffer, const char *const 
#line 2304
_Format, ...) 
#line 2309 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2310
int _Result; 
#line 2311
va_list _ArgList; 
#line 2312
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2314
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = vsscanf_s(_Buffer, _Format, _ArgList); 
#pragma warning(pop)
#line 2319
(void)(_ArgList = ((va_list)0)); 
#line 2320
return _Result; 
#line 2321
} 
#line 2326 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable:6530)
#line 2330
__inline int __cdecl _snscanf_l(const char *const 
#line 2331
_Buffer, const size_t 
#line 2332
_BufferCount, const char *const 
#line 2333
_Format, const _locale_t 
#line 2334
_Locale, ...) 
#line 2339 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2340
int _Result; 
#line 2341
va_list _ArgList; 
#line 2342
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2344
_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2348
(void)(_ArgList = ((va_list)0)); 
#line 2349
return _Result; 
#line 2350
} 
#line 2354 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snscanf(const char *const 
#line 2355
_Buffer, const size_t 
#line 2356
_BufferCount, const char *const 
#line 2357
_Format, ...) 
#line 2362 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2363
int _Result; 
#line 2364
va_list _ArgList; 
#line 2365
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2367
_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 2371
(void)(_ArgList = ((va_list)0)); 
#line 2372
return _Result; 
#line 2373
} 
#line 2378 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snscanf_s_l(const char *const 
#line 2379
_Buffer, const size_t 
#line 2380
_BufferCount, const char *const 
#line 2381
_Format, const _locale_t 
#line 2382
_Locale, ...) 
#line 2387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2388
int _Result; 
#line 2389
va_list _ArgList; 
#line 2390
(void)((__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> ()), ((void)__va_start(&_ArgList, _Locale))); 
#line 2392
_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2396
(void)(_ArgList = ((va_list)0)); 
#line 2397
return _Result; 
#line 2398
} 
#line 2402 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__inline int __cdecl _snscanf_s(const char *const 
#line 2403
_Buffer, const size_t 
#line 2404
_BufferCount, const char *const 
#line 2405
_Format, ...) 
#line 2410 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
{ 
#line 2411
int _Result; 
#line 2412
va_list _ArgList; 
#line 2413
(void)((__vcrt_assert_va_start_is_not_reference< const char *const> ()), ((void)__va_start(&_ArgList, _Format))); 
#line 2415
_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 2419
(void)(_ArgList = ((va_list)0)); 
#line 2420
return _Result; 
#line 2421
} 
#line 2424 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
#pragma warning(pop)
#line 2447 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) char *__cdecl tempnam(const char * _Directory, const char * _FilePrefix); 
#line 2456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl fcloseall(); 
#line 2457
__declspec(dllimport) FILE *__cdecl fdopen(int _FileHandle, const char * _Format); 
#line 2458
__declspec(dllimport) int __cdecl fgetchar(); 
#line 2459
__declspec(dllimport) int __cdecl fileno(FILE * _Stream); 
#line 2460
__declspec(dllimport) int __cdecl flushall(); 
#line 2461
__declspec(dllimport) int __cdecl fputchar(int _Ch); 
#line 2462
__declspec(dllimport) int __cdecl getw(FILE * _Stream); 
#line 2463
__declspec(dllimport) int __cdecl putw(int _Ch, FILE * _Stream); 
#line 2464
__declspec(dllimport) int __cdecl rmtmp(); 
#line 2471 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\stdio.h"
}__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 45 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
typedef 
#line 40
struct _heapinfo { 
#line 42
int *_pentry; 
#line 43
size_t _size; 
#line 44
int _useflag; 
#line 45
} _HEAPINFO; 
#line 55
void *__cdecl _alloca(size_t _Size); 
#line 61
__declspec(dllimport) intptr_t __cdecl _get_heap_handle(); 
#line 64
__declspec(dllimport) int __cdecl _heapmin(); 
#line 67
__declspec(dllimport) int __cdecl _heapwalk(_HEAPINFO * _EntryInfo); 
#line 71 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
__declspec(dllimport) int __cdecl _heapchk(); 
#line 74 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
__declspec(dllimport) int __cdecl _resetstkoflw(); 
#line 86 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
typedef char __static_assert_t[(sizeof(unsigned) <= (16)) != 0]; 
#line 89
#pragma warning(push)
#pragma warning(disable:6540)
#line 92
__inline void *_MarkAllocaS(void *_Ptr, unsigned _Marker) 
#line 93
{ 
#line 94
if (_Ptr) 
#line 95
{ 
#line 96
(*((unsigned *)_Ptr)) = _Marker; 
#line 97
_Ptr = (((char *)_Ptr) + 16); 
#line 98
}  
#line 99
return _Ptr; 
#line 100
} 
#line 102
__inline size_t _MallocaComputeSize(size_t _Size) 
#line 103
{ 
#line 104
size_t _MarkedSize = _Size + (16); 
#line 105
return (_MarkedSize > _Size) ? _MarkedSize : (0); 
#line 106
} 
#line 108
#pragma warning(pop)
#line 146 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
#pragma warning(push)
#pragma warning(disable: 6014)
__inline void __cdecl _freea(void *_Memory) 
#line 149
{ 
#line 150
unsigned _Marker; 
#line 151
if (_Memory) 
#line 152
{ 
#line 153
_Memory = (((char *)_Memory) - 16); 
#line 154
_Marker = (*((unsigned *)_Memory)); 
#line 155
if (_Marker == (56797)) 
#line 156
{ 
#line 157
free(_Memory); 
#line 158
} else { 
#line 160
if (_Marker != (52428)) 
#line 161
{ 
#line 162
(void)(((!(!(("Corrupted pointer passed to _freea") && (0)))) || (1 != _CrtDbgReportW(2, L"\x43\x3a\x5c\x50\x72\x6f\x67\x72\x61\x6d\x20\x46\x69\x6c\x65\x73\x20\x28\x78\x38\x36\x29\x5c\x57\x69\x6e\x64\x6f\x77\x73\x20\x4b" L"\x69\x74\x73\x5c\x31\x30\x5c\x49\x6e\x63\x6c\x75\x64\x65\x5c\x31\x30\x2e\x30\x2e\x31\x38\x33\x36\x32\x2e\x30\x5c\x75\x63\x72\x74" L"\x5c\x6d\x61\x6c\x6c\x6f\x63\x2e\x68", 162, 0, L"\x25\x6c\x73", L"\x28\x22\x43\x6f\x72\x72\x75\x70\x74\x65\x64\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x70\x61\x73\x73\x65\x64\x20\x74\x6f\x20\x5f\x66" L"\x72\x65\x65\x61\x22\x20\x26\x26\x20\x30\x29"))) || (__debugbreak(), 0)); 
#line 163
}  }  
#line 165 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
}  
#line 166
} 
#line 179 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
}
#line 167 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
#pragma warning(pop)
#line 179 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.18362.0\\ucrt\\malloc.h"
__pragma( pack ( pop )) 
#line 6 "C:/Users/Иван/source/repos/Shaders/shader.cu"
struct Vector { 
#line 8
double x; 
#line 9
double y; 
#line 10
double z; 
#line 11
}; 
#line 13
struct Object { 
#line 15
unsigned char Type; 
#line 16
unsigned char R; 
#line 17
unsigned char G; 
#line 18
unsigned char B; 
#line 19
unsigned char atr1; 
#line 20
unsigned char atr2; 
#line 21
unsigned char atr3; 
#line 22
unsigned char atr4; 
#line 23
Vector position; 
#line 24
Vector size; 
#line 25
double r; 
#line 26
}; 
#line 28
union Data { 
#line 29
Object obj; 
#line 30
unsigned char bytes[64]; 
#line 31
}; 
#line 33
struct DistanceDate { 
#line 34
double distanceValue; 
#line 35
unsigned char r, g, b; 
#line 36
}; 
#line 38
static double lightIntensity, lightSize; 
#line 39
static Data *objects; 
#line 40
static int n; 
#line 43
extern "C" Vector mul(Vector a, double value) {int volatile ___ = 1;(void)a;(void)value;::exit(___);}
#if 0
#line 43
{ 
#line 44
Vector v = {(a.x) * value, (a.y) * value, (a.z) * value}; 
#line 45
return v; 
#line 46
} 
#endif
#line 49 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" Vector sum(Vector a, Vector b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 49
{ 
#line 50
Vector v = {(a.x) + (b.x), (a.y) + (b.y), (a.z) + (b.z)}; 
#line 51
return v; 
#line 52
} 
#endif
#line 55 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" Vector sub(Vector a, Vector b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 55
{ 
#line 56
Vector v = {(a.x) - (b.x), (a.y) - (b.y), (a.z) - (b.z)}; 
#line 57
return v; 
#line 58
} 
#endif
#line 61 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" double dot(Vector a, Vector b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 61
{ 
#line 62
return (((a.x) * (b.x)) + ((a.y) * (b.y))) + ((a.z) * (b.z)); 
#line 63
} 
#endif
#line 66 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" double distance(Vector a, Vector b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 66
{ 
#line 67
return sqrt(((((a.x) - (b.x)) * ((a.x) - (b.x))) + (((a.y) - (b.y)) * ((a.y) - (b.y)))) + (((a.z) - (b.z)) * ((a.z) - (b.z)))); 
#line 68
} 
#endif
#line 71 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" Vector normalize(Vector a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 71
{ 
#line 72
Vector n = {(0), (0), (0)}; 
#line 73
double l = distance(a, n); 
#line 74
Vector v = {(a.x) / l, (a.y) / l, (a.z) / l}; 
#line 75
return v; 
#line 76
} 
#endif
#line 79 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" double smin(double a, double b, double k) {int volatile ___ = 1;(void)a;(void)b;(void)k;::exit(___);}
#if 0
#line 80
{ 
#line 81
double m; 
#line 82
if (((0.5) + (((0.5) * (b - a)) / k)) > (1)) { 
#line 83
m = (1); } else { 
#line 85
m = ((0.5) + (((0.5) * (b - a)) / k)); }  
#line 86
double h; 
#line 87
if (m > (0)) { 
#line 88
h = ((0.5) + (((0.5) * (b - a)) / k)); } else { 
#line 90
h = (0); }  
#line 91
return ((a * h) + (b * ((1) - h))) - ((k * h) * ((1.0) - h)); 
#line 92
} 
#endif
#line 95 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" double cylinder(Vector p, Object obj) {int volatile ___ = 1;(void)p;(void)obj;::exit(___);}
#if 0
#line 96
{ 
#line 97
Vector pa = sub(p, obj.position); 
#line 98
Vector ba = sub(obj.size, obj.position); 
#line 99
double baba = dot(ba, ba); 
#line 100
double paba = dot(pa, ba); 
#line 103
float x = distance(sub(mul(pa, baba), mul(ba, paba)), {(1), (1), (1)}) - ((obj.r) * baba); 
#line 105
float y = abs(paba - (baba * (0.5))) - (baba * (0.5)); 
#line 106
float x2 = x * x; 
#line 107
float y2 = (y * y) * baba; 
#line 108
float d = ((max(x, y)) < (0.0)) ? -min(x2, y2) : (((x > (0.0)) ? x2 : (0.0)) + ((y > (0.0)) ? y2 : (0.0))); 
#line 110
float t = (0); 
#line 111
if (d > (0)) 
#line 112
{ 
#line 113
t = (1); 
#line 114
}  
#line 115
if (d < (0)) 
#line 116
{ 
#line 117
t = (-1); 
#line 118
}  
#line 120
return (t * sqrt(abs(d))) / baba; 
#line 121
} 
#endif
#line 124 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" double cube(Object obj, Vector p) {int volatile ___ = 1;(void)obj;(void)p;::exit(___);}
#if 0
#line 124
{ 
#line 126
Vector d = sub({abs((p.x) - ((obj.position).x)), abs((p.y) - ((obj.position).y)), abs((p.z) - ((obj.position).z))}, {(obj.size).x, (obj.size).y, (obj.size).z}); 
#line 128
double insideDistance = min(max(d.x, max(d.y, d.z)), (double)0); 
#line 130
if ((d.x) < (0.0)) { 
#line 131
(d.x) = (0.0); }  
#line 132
if ((d.y) < (0.0)) { 
#line 133
(d.y) = (0.0); }  
#line 134
if ((d.z) < (0.0)) { 
#line 135
(d.z) = (0.0); }  
#line 137
double outsideDistance = sqrt((((d.x) * (d.x)) + ((d.y) * (d.y))) + ((d.z) * (d.z))); 
#line 139
return insideDistance + outsideDistance; 
#line 140
} 
#endif
#line 143 "C:/Users/Иван/source/repos/Shaders/shader.cu"
double TriPrism(Vector p, Object obj) {int volatile ___ = 1;(void)p;(void)obj;::exit(___);}
#if 0
#line 144
{ 
#line 145
Vector q = {abs(p.x), abs(p.y), abs(p.z)}; 
#line 146
return max((q.z) - ((obj.position).y), max(((q.x) * (0.8660250000000000448)) + ((p.y) * (0.5)), -(p.y)) - (((obj.position).x) * (0.5))); 
#line 147
} 
#endif
#line 150 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" double distanceByType(Object obj, Vector p) {int volatile ___ = 1;(void)obj;(void)p;::exit(___);}
#if 0
#line 150
{ 
#line 151
switch (obj.Type) { 
#line 152
case 1:  
#line 153
return distance(p, obj.position) - (obj.r); 
#line 154
break; 
#line 155
case 2:  
#line 156
return distance(p, obj.position) - (obj.r); 
#line 157
break; 
#line 158
case 3:  
#line 159
return -(distance(p, obj.position) - (obj.r)); 
#line 160
break; 
#line 161
case 4:  
#line 162
return cube(obj, p); 
#line 163
break; 
#line 164
case 5:  
#line 165
return cube(obj, p); 
#line 166
break; 
#line 167
case 6:  
#line 168
return -cube(obj, p); 
#line 169
break; 
#line 170
case 7:  
#line 171
return cylinder(p, obj); 
#line 172
break; 
#line 173
case 8:  
#line 174
return cylinder(p, obj); 
#line 175
break; 
#line 176
case 9:  
#line 177
return -cylinder(p, obj); 
#line 178
break; 
#line 179
case 10:  
#line 180
return TriPrism(p, obj); 
#line 181
break; 
#line 182
case 11:  
#line 183
return TriPrism(p, obj); 
#line 184
break; 
#line 185
case 12:  
#line 186
return -TriPrism(p, obj); 
#line 187
break; 
#line 188
default:  
#line 189
break; 
#line 190
}  
#line 191
} 
#endif
#line 194 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" DistanceDate getDist(Vector p) {int volatile ___ = 1;(void)p;::exit(___);}
#if 0
#line 194
{ 
#line 195
Data *data; 
#line 196
data = objects; 
#line 197
DistanceDate value; 
#line 198
(value.distanceValue) = distanceByType(data->obj, p); 
#line 199
(value.r) = ((data->obj).R); 
#line 200
(value.g) = ((data->obj).G); 
#line 201
(value.b) = ((data->obj).B); 
#line 203
double dist = value.distanceValue; 
#line 205
for (int i = 1; i < n; i++) 
#line 206
{ 
#line 207
data = ((Data *)(((uintptr_t)data) + sizeof(Data))); 
#line 208
dist = distanceByType(data->obj, p); 
#line 209
if (((value.distanceValue) > dist) && (((((data->obj).Type) % 3) == 1) || (((data->obj).Type) == 0))) { 
#line 210
(value.distanceValue) = dist; 
#line 211
(value.r) = ((data->obj).R); 
#line 212
(value.g) = ((data->obj).G); 
#line 213
(value.b) = ((data->obj).B); 
#line 214
}  
#line 215
if (((value.distanceValue) <= dist) && ((((data->obj).Type) % 3) != 1)) { 
#line 216
(value.distanceValue) = dist; 
#line 217
(value.r) = ((data->obj).R); 
#line 218
(value.g) = ((data->obj).G); 
#line 219
(value.b) = ((data->obj).B); 
#line 220
}  
#line 221
}  
#line 223
return value; 
#line 224
} 
#endif
#line 227 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" Vector getNormal(Vector p) {int volatile ___ = 1;(void)p;::exit(___);}
#if 0
#line 228
{ 
#line 229
double d = (getDist(p)).distanceValue; 
#line 230
double p1 = (getDist(sub(p, {(0.001000000000000000021), (0), (0)}))).distanceValue; 
#line 231
double p2 = (getDist(sub(p, {(0), (0.001000000000000000021), (0)}))).distanceValue; 
#line 232
double p3 = (getDist(sub(p, {(0), (0), (0.001000000000000000021)}))).distanceValue; 
#line 233
Vector tri = {p1, p2, p3}; 
#line 234
Vector di = {d, d, d}; 
#line 235
Vector n = sub(di, tri); 
#line 236
return normalize(n); 
#line 237
} 
#endif
#line 240 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" double light(Vector p) {int volatile ___ = 1;(void)p;::exit(___);}
#if 0
#line 240
{ 
#line 241
Vector lightPos = {(-5), (5), (-10)}; 
#line 242
Vector lightDir = normalize(sub(lightPos, p)); 
#line 243
Vector normal = getNormal(p); 
#line 245
double lI = lightIntensity; 
#line 246
double lS = lightSize; 
#line 248
double dif = ((dot(normal, lightDir) * ((1) - lS)) * lI) + (lS * lI); 
#line 249
return dif; 
#line 250
} 
#endif
#line 253 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C" DistanceDate rayMarching(Vector ro, Vector rd) {int volatile ___ = 1;(void)ro;(void)rd;::exit(___);}
#if 0
#line 253
{ 
#line 254
Vector p = {ro.x, ro.y, ro.z}; 
#line 255
for (int i = 0; i < 300; i++) { 
#line 256
DistanceDate d = getDist(p); 
#line 257
if ((d.distanceValue) > (100)) { 
#line 258
break; }  
#line 259
p = sum(p, mul(rd, d.distanceValue)); 
#line 260
if ((d.distanceValue) < (0.001000000000000000021)) { 
#line 261
return {light(p), d.r, d.g, d.b}; 
#line 262
}  
#line 263
}  
#line 264
return {0, 0, 0, 0}; 
#line 265
} 
#endif
#line 268 "C:/Users/Иван/source/repos/Shaders/shader.cu"
extern "C"  __noinline__ void draw(unsigned char *data, Data *input, int on, int widht, int height, double camX, double camY, double camZ, float vA, float hA, float lI, float lS, int pn, int pc) ;
#if 0
#line 268
{ 
#line 269
int x = ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)) + (__device_builtin_variable_threadIdx.x); 
#line 270
int y = (((height / pc) * pn) + ((__device_builtin_variable_blockIdx.y) * (__device_builtin_variable_blockDim.y))) + (__device_builtin_variable_threadIdx.y); 
#line 271
if ((x >= widht) || (y >= height)) { 
#line 272
return; }  
#line 274
objects = input; 
#line 275
n = on; 
#line 277
double qx = ((((double)x) / widht) * (2)) - (1); 
#line 278
double qy = ((((double)y) / height) * (2)) - (1); 
#line 280
lightIntensity = lI; 
#line 281
lightSize = lS; 
#line 283
qx = (qx * (((double)widht) / ((double)height))); 
#line 284
Vector rd = {(1), qx, qy}; 
#line 285
rd = normalize(rd); 
#line 287
double s = sin(vA); 
#line 288
double c = cos(vA); 
#line 289
rd = {(c * (rd.x)) + ((-s) * (rd.z)), rd.y, (s * (rd.x)) + (c * (rd.z))}; 
#line 290
s = (sin(hA)); 
#line 291
c = (cos(hA)); 
#line 292
rd = {(c * (rd.x)) + ((-s) * (rd.y)), (s * (rd.x)) + (c * (rd.y)), rd.z}; 
#line 294
DistanceDate col = rayMarching({camX, camY, camZ}, rd); 
#line 295
if ((col.distanceValue) != (0)) { 
#line 296
(data[((widht * 3) * y) + (3 * x)]) = ((unsigned char)(((double)(col.r)) * (col.distanceValue))); 
#line 297
(data[(((widht * 3) * y) + (3 * x)) + 1]) = ((unsigned char)(((double)(col.g)) * (col.distanceValue))); 
#line 298
(data[(((widht * 3) * y) + (3 * x)) + 2]) = ((unsigned char)(((double)(col.b)) * (col.distanceValue))); 
#line 299
} else 
#line 301
{ 
#line 302
(data[((widht * 3) * y) + (3 * x)]) = ((unsigned char)(((double)117) * lI)); 
#line 303
(data[(((widht * 3) * y) + (3 * x)) + 1]) = ((unsigned char)(((double)187) * lI)); 
#line 304
(data[(((widht * 3) * y) + (3 * x)) + 2]) = ((unsigned char)(((double)253) * lI)); 
#line 305
}  
#line 307
} 
#endif
#line 1 "shader.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__14_shader_cpp1_ii_mul
#pragma pack()
#line 1 "shader.cudafe1.stub.c"
#include "shader.cudafe1.stub.c"
#line 1 "shader.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
