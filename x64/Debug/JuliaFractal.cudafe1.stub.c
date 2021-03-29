#define __NV_CUBIN_HANDLE_STORAGE__ static
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "JuliaFractal.fatbin.c"
extern void __device_stub__Z5draw2Ph(unsigned char *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void);
#pragma section(".CRT$XCU",read)
__declspec(allocate(".CRT$XCU"))static void (*__dummy_static_init__sti____cudaRegisterAll[])(void) = {__sti____cudaRegisterAll};
void __device_stub__Z5draw2Ph(
unsigned char *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(unsigned char *))draw2)));
}
void draw2( unsigned char *__cuda_0)
{__device_stub__Z5draw2Ph( __cuda_0);
}
#line 1 "x64/Debug/JuliaFractal.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback(
void **__T0)
{
__nv_dummy_param_ref(__T0);
__nv_save_fatbinhandle_for_managed_rt(__T0);
__cudaRegisterEntry(__T0, ((void ( *)(unsigned char *))draw2), draw2, (-1));
}
static void __sti____cudaRegisterAll(void)
{
__cudaRegisterBinary(__nv_cudaEntityRegisterCallback);
}
