// 函数: sub_562ec0
// 地址: 0x562ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a286
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND var_150
int32_t eax_2 = data_78c474 ^ &var_150
int32_t __saved_edi
int32_t var_164 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_150 = arg1
char result

if (*(arg2 + 0xa8) == 0)
    result = 0
else
    *(arg2 + 0xb4) = arg3
    int32_t eax_6 = GetWindowLongA(arg1, 0xfffffffa)
    char string = 0
    int128_t var_10f[0xf]
    sub_6bc670(&var_10f, 0, 0xff)
    GetWindowTextA(arg1, &string, 0x100)
    *(arg2 + 0xac) = GetSystemMetrics(SM_CXSCREEN)
    int32_t edi_3 = GetSystemMetrics(SM_CYDLGFRAME) * 2 + GetSystemMetrics(SM_CYMENU)
    *(arg2 + 0xb0) = GetSystemMetrics(SM_CYCAPTION) + edi_3
    int32_t var_134_1 = 0xf
    int32_t var_138_1 = 0
    char var_148 = 0
    sub_401270(&var_148, 0x1b, "AliceRunFullScreenMenuClass")
    int32_t var_4 = 0
    sub_401180(arg2 + 0x34, 0xffffffff, &var_148, 0)
    int32_t var_4_1 = 0xffffffff
    
    if (var_134_1 u>= 0x10)
        int32_t var_168_1 = var_148.d
        sub_6b4d5b()
    
    HWND edx_1 = var_150
    *(arg2 + 0x74) = 0x80cb0000
    *(arg2 + 0x88) = edx_1
    *(arg2 + 0x8c) = arg4
    *(arg2 + 0x1c) = arg5
    *(arg2 + 0x24) = GetStockObject(WHITE_BRUSH)
    char* eax_14 = &string
    int32_t var_118_1 = 0xf
    int32_t var_11c_1 = 0
    char var_12c = 0
    char i
    
    do
        i = *eax_14
        eax_14 = &eax_14[1]
    while (i != 0)
    sub_401270(&var_12c, eax_14 - &var_10f, &string)
    int32_t var_4_2 = 1
    sub_401180(arg2 + 0x50, 0xffffffff, &var_12c, 0)
    
    if (var_118_1 u>= 0x10)
        int32_t var_168_3 = var_12c.d
        sub_6b4d5b()
    
    int32_t ecx_5 = *(arg2 + 0xb0)
    *(arg2 + 0x80) = *(arg2 + 0xac)
    *(arg2 + 0x7c) = neg.d(ecx_5)
    *(arg2 + 0x78) = 0
    *(arg2 + 0x84) = ecx_5
    *(arg2 + 0x6c) = eax_6
    *(arg2 + 0x90) = arg2
    *(arg2 + 0xa8) = 0
    *(arg2 + 0x9c) = 0
    
    if (sub_6b3860(arg2 + 4) != 0)
        SetFocus(*(arg2 + 4))
        SetForegroundWindow(*(arg2 + 4))
        ShowWindow(*(arg2 + 4), SW_SHOWMAXIMIZED)
        UpdateWindow(*(arg2 + 4))
        result = 1
    else
        *(arg2 + 0xa8) = 1
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_150)
return result
