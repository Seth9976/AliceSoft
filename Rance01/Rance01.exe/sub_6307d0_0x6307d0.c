// 函数: sub_6307d0
// 地址: 0x6307d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7213d7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dplogviewer::CTextChildWnd::`vftable'{for `win32only::CWindowCallback'}
int32_t var_4 = 2
int32_t ecx = sub_62b300(&arg1[0x37])
HWND hWnd = arg1[1]

if (hWnd != 0)
    BOOL eax_3
    eax_3, ecx = DestroyWindow(hWnd)
    
    if (eax_3 != 0)
        arg1[1] = 0

if (arg1[0xc].b != 0)
    BOOL eax_5
    eax_5, ecx = UnregisterClassA(arg1[0xb], arg1[0x1b])
    
    if (eax_5 != 0)
        arg1[0xc].b = 0

var_4.b = 1
sub_62b240(ecx, &arg1[0x37])
arg1[0x2a] = &dplogviewer::CDIBSurface::`vftable'{for `ISurface'}
sub_62c310(&arg1[0x2a])
BOOL result = sub_6b37f0(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
