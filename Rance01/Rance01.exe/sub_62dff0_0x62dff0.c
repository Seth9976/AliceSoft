// 函数: sub_62dff0
// 地址: 0x62dff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7233e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dplogviewer::COutputLog::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &dplogviewer::COutputLog::`vftable'{for `IJaffaDebugPlugin'}
int32_t var_4 = 2
int32_t i = 0

if (((arg1[0x96] - arg1[0x95]) & 0xfffffffc) s> 0)
    do
        struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** vFunc_0 =
            arg1[0x95][i].vFunc_0
        
        if (vFunc_0 != 0)
            sub_62c5a0(vFunc_0)
            struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** vFunc = vFunc_0
            sub_6b4d5b()
        
        i += 1
    while (i s< (arg1[0x96] - arg1[0x95]) s>> 2)

int128_t* ecx_2 = arg1[0x96]
int128_t* edi = arg1[0x95]

if (edi != ecx_2)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_2, ebx_1, eax_2)
    arg1[0x96] = ebx_1 + edi

int32_t eax_8 = arg1[0x95]

if (eax_8 != 0)
    int32_t var_20_3 = eax_8
    sub_6b4d5b()

arg1[0x95] = 0
arg1[0x96] = 0
arg1[0x97] = 0
sub_62f2b0(&arg1[0x28])
BOOL result = sub_6b37f0(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
