#define __NV_CUBIN_HANDLE_STORAGE__ static
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "GetRendered.fatbin.c"
extern void __device_stub__Z3getPhS_S_S_S_S_S_S_iiS_(unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, int, int, unsigned char *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void);
#pragma section(".CRT$XCU",read)
__declspec(allocate(".CRT$XCU"))static void (*__dummy_static_init__sti____cudaRegisterAll[])(void) = {__sti____cudaRegisterAll};
void __device_stub__Z3getPhS_S_S_S_S_S_S_iiS_(
unsigned char *__par0, 
unsigned char *__par1, 
unsigned char *__par2, 
unsigned char *__par3, 
unsigned char *__par4, 
unsigned char *__par5, 
unsigned char *__par6, 
unsigned char *__par7, 
int __par8, 
int __par9, 
unsigned char *__par10)
{
__cudaLaunchPrologue(11);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaSetupArgSimple(__par1, 8Ui64);
__cudaSetupArgSimple(__par2, 16Ui64);
__cudaSetupArgSimple(__par3, 24Ui64);
__cudaSetupArgSimple(__par4, 32Ui64);
__cudaSetupArgSimple(__par5, 40Ui64);
__cudaSetupArgSimple(__par6, 48Ui64);
__cudaSetupArgSimple(__par7, 56Ui64);
__cudaSetupArgSimple(__par8, 64Ui64);
__cudaSetupArgSimple(__par9, 68Ui64);
__cudaSetupArgSimple(__par10, 72Ui64);
__cudaLaunch(((char *)((void ( *)(unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, int, int, unsigned char *))get)));
}
void get( unsigned char *__cuda_0,unsigned char *__cuda_1,unsigned char *__cuda_2,unsigned char *__cuda_3,unsigned char *__cuda_4,unsigned char *__cuda_5,unsigned char *__cuda_6,unsigned char *__cuda_7,int __cuda_8,int __cuda_9,unsigned char *__cuda_10)
{__device_stub__Z3getPhS_S_S_S_S_S_S_iiS_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10);
}
#line 1 "x64/Debug/GetRendered.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback(
void **__T0)
{
__nv_dummy_param_ref(__T0);
__nv_save_fatbinhandle_for_managed_rt(__T0);
__cudaRegisterEntry(__T0, ((void ( *)(unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, int, int, unsigned char *))get), get, (-1));
}
static void __sti____cudaRegisterAll(void)
{
__cudaRegisterBinary(__nv_cudaEntityRegisterCallback);
}
