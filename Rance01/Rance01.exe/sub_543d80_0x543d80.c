// 函数: sub_543d80
// 地址: 0x543d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723b80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg4 + 0x2b0) -= 4
int32_t ecx = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t eax_7 = **(arg4 + 0x2b0)
int32_t* edx_4

if (eax_7 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
    edx_4 = *(*(arg4 + 0x1e4) + (eax_7 << 2))

char result

if (eax_7 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2 && edx_4 != 0)
    char var_50 = ecx.b
    
    if (ecx s<= 0xff)
        char var_4f_2 = 0
    else
        char var_4f_1 = (ecx s>> 8).b
        char var_4e_1 = 0
    
    char* edx_5
    
    if (edx_4[1] != 0)
        edx_5 = *edx_4
    else
        edx_5 = nullptr
    
    char* eax_8 = edx_5
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    
    do
        ecx.b = *eax_8
        eax_8 = &eax_8[1]
    while (ecx.b != 0)
    
    char* var_6c_2 = &var_48
    int32_t var_4 = 0
    void* var_2c
    sub_402c60(&var_2c, &var_50, sub_401270(&var_48, eax_8 - &eax_8[1], edx_5))
    var_4.b = 2
    
    if (var_34_1 u>= 0x10)
        int32_t var_6c_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    int32_t var_18
    
    if (sub_550660(edx_4, &var_2c) != 0)
        if (var_18 u>= 0x10)
            void* var_6c_6 = var_2c
            sub_6b4d5b()
        
        result = 1
    else
        int32_t entry_ebx
        sub_53d0e0(arg4, 0x74ea90, eax_4, arg3, arg2, arg1, entry_ebx)
        
        if (var_18 u>= 0x10)
            void* var_6c_5 = var_2c
            sub_6b4d5b()
        
        result = 0
else
    result = sub_53d0e0(arg4, 0x74ea58, eax_7, eax_4, arg3, arg2, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
