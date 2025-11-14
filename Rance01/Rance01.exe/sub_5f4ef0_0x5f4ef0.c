// 函数: sub_5f4ef0
// 地址: 0x5f4ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d8e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg1
sub_433790(edi, *(arg2 + 0xc), arg3)

if (arg3 != 0)
    edi *= *(*(arg2 + 0xc) + 0x54)

*(arg2 + 0x4c) += edi

if (*(arg2 + 0x54) != *(arg2 + 0x58))
    void* eax_9 = sub_5f2f00(1, arg2, sub_5f3f50(arg2))
    
    if (eax_9 != 0)
        char var_2c
        char* eax_10 = sub_5edec0(arg2 + 0x54, &var_2c, *(arg2 + 0x4c))
        int32_t var_4 = 0
        char* ebx_1
        
        if (*(eax_10 + 0x14) u< 0x10)
            ebx_1 = eax_10
        else
            ebx_1 = *eax_10
        
        int32_t var_60_3 = sub_5ee110(arg2 + 0x54, *(arg2 + 0x4c))
        var_4.b = 1
        sub_5dee00(eax_9, sub_4104a0(ebx_1), *(eax_9 + 0x5c))
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_60_5 = var_48.d
            sub_6b4d5b()
        
        int32_t var_4_1 = 0xffffffff
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_60_6 = var_2c.d
            sub_6b4d5b()
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        *(arg2 + 0x10) = 1

if (*(arg2 + 0x64) != *(arg2 + 0x68) && *(arg2 + 0x74) != *(arg2 + 0x78))
    void* eax_16
    int32_t edx_5
    eax_16, edx_5 = sub_5f3470(arg2, sub_5f3f50(arg2))
    
    if (eax_16 != 0)
        int32_t ecx_6
        int32_t edx_6
        long double st0_1
        st0_1, ecx_6, edx_6 = sub_5ebfe0(*(arg2 + 0x4c), edx_5, arg2 + 0x74)
        int32_t var_60_8 = ecx_6
        int32_t ecx_8
        long double st0_2
        st0_2, ecx_8 = sub_5ebfe0(*(arg2 + 0x4c), edx_6, arg2 + 0x64)
        int32_t var_64_5 = ecx_8
        sub_5e6dd0(eax_16, fconvert.s(st0_2), fconvert.s(st0_1))
        *(arg2 + 0x10) = 1

int32_t* result = *(arg2 + 0x84)

if (result != *(arg2 + 0x88) && *(arg2 + 0x94) != *(arg2 + 0x98))
    int32_t edx_7
    result, edx_7 = sub_5f3540(arg2, sub_5f3f50(arg2))
    
    if (result != 0)
        int32_t ecx_13
        int32_t edx_8
        long double st0_3
        st0_3, ecx_13, edx_8 = sub_5ebfe0(*(arg2 + 0x4c), edx_7, arg2 + 0x94)
        int32_t var_60_11 = ecx_13
        int32_t ecx_15
        long double st0_4
        st0_4, ecx_15 = sub_5ebfe0(*(arg2 + 0x4c), edx_8, arg2 + 0x84)
        int32_t var_64_7 = ecx_15
        result = sub_5e6dd0(result, fconvert.s(st0_4), fconvert.s(st0_3))
        *(arg2 + 0x10) = 1

if (*(arg2 + 0xa4) != *(arg2 + 0xa8))
    int32_t eax_22
    struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** ecx_18
    eax_22, ecx_18 = sub_5f3f50(arg2)
    int32_t edx_10
    result, edx_10 = sub_5f3610(ecx_18, arg2, eax_22)
    
    if (result != 0)
        result[0xc5] = sub_5ee000(*(arg2 + 0x4c), edx_10, arg2 + 0xa4)
        result = sub_5f0de0(result)
        *(arg2 + 0x10) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
