// 函数: sub_6a6a30
// 地址: 0x6a6a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_722dc1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_94
int32_t eax_2 = data_78c474 ^ &var_94
int32_t __saved_edi
int32_t var_a4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0xf
int32_t var_80 = 0
char var_90 = 0
int32_t* result
int32_t ecx
result, ecx = sub_401270(&var_90, 0xd, "DPSplitWindow")
int32_t var_c_1 = 0
char lpwndpl

if (*(arg1 + 0x114) == 0)
    int32_t* eax_5 = operator new(0xb8)
    var_94 = eax_5
    var_c_1.b = 1
    int32_t* eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        eax_6 = sub_6ae3b0(eax_5)
    
    var_c_1.b = 0
    char* edx_1 = var_90.d
    *(arg1 + 0x114) = eax_6
    
    if (var_7c u< 0x10)
        edx_1 = &var_90
    
    char* eax_7 = edx_1
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0xf
    lpwndpl = 0
    char i
    
    do
        i = *eax_7
        eax_7 = &eax_7[1]
    while (i != 0)
    sub_401270(&lpwndpl, eax_7 - &eax_7[1], edx_1)
    var_c_1.b = 2
    result, ecx = sub_6ae6b0(*(arg1 + 0x114), &lpwndpl, arg2, *(arg1 + 0x18), *(arg1 + 0xec), 
        *(arg1 + 0xf0), *(arg1 + 0xf4), *(arg1 + 0xf8))
    var_c_1.b = 0
    
    if (var_60_1 u>= 0x10)
        int32_t var_a8_4 = lpwndpl.d
        result, ecx = sub_6b4d5b()

void* edx_5 = *(arg1 + 0x10c)

if (edx_5 == 0)
    if (var_7c u>= 0x10)
        int32_t var_a8_5 = var_90.d
        sub_6b4d5b()
    
    result.b = 0
else if (*(arg1 + 0x110) != 0)
    sub_6af100(sub_6af100(ecx, edx_5, *(arg1 + 0x114), 0), *(arg1 + 0x110), *(arg1 + 0x114), 1)
    int32_t ecx_6 = *(arg1 + 0x108)
    void* eax_12 = *(arg1 + 0x114)
    *(eax_12 + 0x2c) = *(arg1 + 0x104)
    *(eax_12 + 0x30) = ecx_6
    GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
    WINDOWPLACEMENT lpwndpl_1
    GetWindowPlacement(*(arg1 + 0x34), &lpwndpl_1)
    int32_t var_54
    int32_t var_4c
    sub_6af3a0(*(arg1 + 0x114), lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, 
        var_4c - var_54)
    
    if (var_7c u>= 0x10)
        int32_t var_a8_10 = var_90.d
        sub_6b4d5b()
    
    result.b = 1
else if (var_7c u< 0x10)
    result.b = 0
else
    int32_t var_a8_6 = var_90.d
    sub_6b4d5b()
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_94)
return result
