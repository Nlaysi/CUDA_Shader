#define __NV_CUBIN_HANDLE_STORAGE__ static
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "shader.fatbin.c"
extern void __device_stub__Z4drawPhP4Dataiiidddffffii(unsigned char *, union Data *, int, int, int, double, double, double, float, float, float, float, int, int);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void);
#pragma section(".CRT$XCU",read)
__declspec(allocate(".CRT$XCU"))static void (*__dummy_static_init__sti____cudaRegisterAll[])(void) = {__sti____cudaRegisterAll};
void __device_stub__Z4drawPhP4Dataiiidddffffii(
unsigned char *__par0, 
union Data *__par1, 
int __par2, 
int __par3, 
int __par4, 
double __par5, 
double __par6, 
double __par7, 
float __par8, 
float __par9, 
float __par10, 
float __par11, 
int __par12, 
int __par13)
{
__cudaLaunchPrologue(14);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaSetupArgSimple(__par1, 8Ui64);
__cudaSetupArgSimple(__par2, 16Ui64);
__cudaSetupArgSimple(__par3, 20Ui64);
__cudaSetupArgSimple(__par4, 24Ui64);
__cudaSetupArgSimple(__par5, 32Ui64);
__cudaSetupArgSimple(__par6, 40Ui64);
__cudaSetupArgSimple(__par7, 48Ui64);
__cudaSetupArgSimple(__par8, 56Ui64);
__cudaSetupArgSimple(__par9, 60Ui64);
__cudaSetupArgSimple(__par10, 64Ui64);
__cudaSetupArgSimple(__par11, 68Ui64);
__cudaSetupArgSimple(__par12, 72Ui64);
__cudaSetupArgSimple(__par13, 76Ui64);
__cudaLaunch(((char *)((void ( *)(unsigned char *, union Data *, int, int, int, double, double, double, float, float, float, float, int, int))draw)));
}
void draw( unsigned char *__cuda_0,union Data *__cuda_1,int __cuda_2,int __cuda_3,int __cuda_4,double __cuda_5,double __cuda_6,double __cuda_7,float __cuda_8,float __cuda_9,float __cuda_10,float __cuda_11,int __cuda_12,int __cuda_13)
{__device_stub__Z4drawPhP4Dataiiidddffffii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12,__cuda_13);
}
#line 1 "x64/Debug/shader.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback(
void **__T18)
{
__nv_dummy_param_ref(__T18);
__nv_save_fatbinhandle_for_managed_rt(__T18);
__cudaRegisterEntry(__T18, ((void ( *)(unsigned char *, union Data *, int, int, int, double, double, double, float, float, float, float, int, int))draw), draw, (-1));
}
static void __sti____cudaRegisterAll(void)
{
__cudaRegisterBinary(__nv_cudaEntityRegisterCallback);
}
