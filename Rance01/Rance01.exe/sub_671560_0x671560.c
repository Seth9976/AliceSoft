// 函数: sub_671560
// 地址: 0x671560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7230e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2c) = 0
int32_t ecx = *(arg1 + 0x1c)
int32_t eax_5 = *(arg1 + 0x20)
char var_49 = 0

if (ecx != eax_5 && (eax_5 - ecx) s/ 0x24 s> 0)
    int32_t ecx_6
    
    for (int32_t* i = *(arg1 + 0x1c); i != 0; i = *(arg1 + 0x1c) + ecx_6 * 0x24)
        if (i[7] == 0x10)
            int32_t var_2c
            bool var_4a_1 = sub_66ed40(sub_66fc20(&var_2c, i)) == 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_64_2 = var_2c
                sub_6b4d5b()
            
            if (var_4a_1 != 0)
                bool var_4a_2 = sub_66ecd0(sub_66fc20(&var_2c, i)) == 0
                
                if (var_18 u>= 0x10)
                    int32_t var_64_4 = var_2c
                    sub_6b4d5b()
                
                if (var_4a_2 != 0)
                    int32_t var_34_1 = 0xf
                    int32_t var_38_1 = 0
                    char var_48 = 0
                    sub_401270(&var_48, 0x28, 0x730238)
                    int32_t var_4 = 0
                    sub_671dc0(i, arg1, &var_48)
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_34_1 u>= 0x10)
                        int32_t var_64_6 = var_48.d
                        sub_6b4d5b()
                    
                    int32_t var_34_2 = 0xf
                    int32_t var_38_2 = 0
                    var_48 = 0
                    var_49 = 1
        
        *(arg1 + 0x2c) += 1
        int32_t edx_4 = *(arg1 + 0x1c)
        int32_t eax_15 = *(arg1 + 0x20)
        ecx_6 = *(arg1 + 0x2c)
        
        if (edx_4 == eax_15)
            break
        
        if ((eax_15 - edx_4) s/ 0x24 s<= ecx_6)
            break

int32_t result
result.b = var_49 == 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
