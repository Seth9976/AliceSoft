// 函数: sub_62b4c0
// 地址: 0x62b4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = 0xf
int32_t var_44 = 0
char var_54 = 0
sub_401180(&var_54, 0xffffffff, arg3, 0)
int32_t var_4 = 0
void* var_5c
sub_62b8a0(&var_54, arg2, &var_5c)
void* ecx_1 = var_5c
int32_t* result

if (ecx_1 == arg2[1])
    char eax_7
    int32_t edx_1
    eax_7, edx_1 = sub_62b690(arg2, arg1)
    
    if (eax_7 == 0)
        if (var_40 u>= 0x10)
            int32_t var_78_3 = var_54.d
            sub_6b4d5b()
        
        result = nullptr
    else if (arg2[0x11] != 0)
    label_62b5b6:
        
        if (sub_62b7b0(arg2, edx_1, arg3) == 0)
            sub_4c1cf0(&var_54)
            result = nullptr
        else
            int32_t* result_1 = operator new(0x4c)
            
            if (result_1 == 0)
                sub_4c1cf0(&var_54)
                result = nullptr
            else
                sub_62ee80(result_1)
                
                if (result_1 == 0)
                    sub_4c1cf0(&var_54)
                    result = nullptr
                else if (sub_62eec0(result_1, arg1, arg1) != 0)
                    sub_62b800(result_1, arg2)
                    int32_t var_20_1 = 0xf
                    int32_t var_24_1 = 0
                    char var_34 = 0
                    sub_401180(&var_34, 0xffffffff, &var_54, 0)
                    int32_t var_18_1 = arg1
                    int32_t* result_3 = result_1
                    char* var_78_7 = &var_34
                    var_4.b = 1
                    sub_62be50(arg2, &var_5c, sub_62c210(arg2))
                    sub_4c1cf0(&var_34)
                    sub_4c1cf0(&var_54)
                    result = result_1
                else
                    sub_62b460(result_1)
                    sub_4c1cf0(&var_54)
                    result = nullptr
    else
        arg2[0x12] = arg1
        char eax_8
        eax_8, edx_1 = sub_61ea10(&arg2[0x11])
        
        if (eax_8 != 0)
            goto label_62b5b6
        
        if (var_40 u< 0x10)
            result = nullptr
        else
            int32_t var_78_4 = var_54.d
            sub_6b4d5b()
            result = nullptr
else
    int32_t* result_2 = *(ecx_1 + 0x2c)
    
    if (var_40 u>= 0x10)
        int32_t var_78_1 = var_54.d
        sub_6b4d5b()
    
    result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return result
