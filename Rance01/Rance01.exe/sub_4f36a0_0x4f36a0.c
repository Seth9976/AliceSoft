// 函数: sub_4f36a0
// 地址: 0x4f36a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7224f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t var_88 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = *arg1

if (result + 4 u> arg1[1])
label_4f3825:
    result.b = 0
else
    uint32_t ebp_7 =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    *arg1 = result + 4
    uint32_t result_1 = 0
    
    if (ebp_7 s> 0)
        do
            char* ecx_1 = *arg1
            
            if (&ecx_1[4] u> arg1[1])
                goto label_4f3825
            
            result =
                ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
            *arg1 = &ecx_1[4]
            
            if (result == 0)
                int32_t var_54_1 = 0xf
                int32_t var_58_1 = 0
                char var_68 = 0
                int32_t var_4c_1 = 0xffffffff
                int32_t var_48_1 = 0
                int32_t var_44_1 = 0
                int32_t var_40_1 = 0
                int32_t var_38_1 = 0
                int32_t var_34_1 = 0
                int32_t var_30_1 = 0
                int32_t var_28_1 = 0
                int32_t var_24_1 = 0
                int32_t var_20_1 = 0
                int16_t var_18_1 = 0
                char* var_8c_1 = &var_68
                int32_t var_4 = 0
                char eax_12
                int16_t x87control
                eax_12, x87control = sub_4f38b0(x87control, arg2, arg1)
                
                if (eax_12 == 0)
                    sub_4f3830(&var_68)
                    goto label_4f3825
                
                if (*(arg2 + 4) s<= 1)
                    char eax_13
                    eax_13, x87control = sub_4f4ab0(arg1, arg2)
                    
                    if (eax_13 == 0)
                        sub_4f3830(&var_68)
                        goto label_4f3825
                
                sub_4f56a0(&var_68, arg2 + 0x18)
                int32_t var_4_1 = 0xffffffff
                sub_4f3830(&var_68)
            else if (result != 0xffffffff)
                goto label_4f3825
            
            result = result_1 + 1
            result_1 = result
        while (result s< ebp_7)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result
