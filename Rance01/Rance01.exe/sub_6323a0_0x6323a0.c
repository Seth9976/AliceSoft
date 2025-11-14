// 函数: sub_6323a0
// 地址: 0x6323a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_718ec8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t edi
int32_t var_68 = edi
int32_t var_6c = data_78c474 ^ &var_68
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_48 = arg1
int32_t result

if (*(arg1 + 0x14) == 0)
    result = 0
else
    int32_t var_58 = 0
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    int32_t var_c_1 = 0
    char* eax_5 = arg2
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    
    do
        arg1.b = *eax_5
        eax_5 = &eax_5[1]
    while (arg1.b != 0)
    
    sub_401270(&var_38, eax_5 - &eax_5[1], arg2)
    int32_t var_44_1 = 0xffffffff
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int32_t* var_70_2 = &var_58
    var_c_1.b = 2
    bool var_59_1 = sub_601f80(&var_38) == 0
    var_c_1.b = 0
    
    if (var_24_1 u>= 0x10)
        int32_t var_70_3 = var_38.d
        sub_6b4d5b()
    
    if (var_59_1 == 0)
        int32_t edx_1 = var_58
        
        if (edx_1 != var_54_1)
            int32_t result_1 = (*(**(var_48 + 0x14) + 8))(edx_1, var_54_1 - edx_1)
            sub_65ab60(&var_58)
            
            result = result_1 == 0 ? 0 : result_1
        else if (edx_1 == 0)
            result = 0
        else
            int32_t var_70_5 = edx_1
            sub_6b4d5b()
            result = 0
    else
        int32_t eax_8 = var_58
        
        if (eax_8 != 0)
            int32_t var_70_4 = eax_8
            sub_6b4d5b()
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
