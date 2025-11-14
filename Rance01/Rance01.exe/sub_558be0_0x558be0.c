// 函数: sub_558be0
// 地址: 0x558be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7226f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg4
int32_t ebp = result[1]
int32_t ebx = 0
int32_t* var_38 = arg2
int32_t* result_1 = result

if (ebp u>> 2 s> 0)
    while (true)
        if (ebx u< ebp u>> 2)
            int32_t eax_6
            
            if (ebp != 0)
                eax_6 = *result
            else
                eax_6 = 0
            
            int32_t ecx_4 = *(eax_6 + (ebx << 2))
            
            if (ecx_4 != 0)
                int32_t edi_1 = *arg2
                
                if (ecx_4 u< (arg2[1] - edi_1) s/ 0x1c)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    sub_401180(&var_2c, 0xffffffff, edi_1 + ecx_4 * 0x1c, 0)
                    int32_t var_34
                    int32_t* var_58_1 = &var_34
                    int32_t var_4 = 0
                    bool var_3d_1 = sub_537dc0(&var_34, &var_2c, arg3 + 0x4c) == 0
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_58_2 = var_2c.d
                        sub_6b4d5b()
                    
                    int32_t eax_17 = result_1[1]
                    uint32_t edx_7 = eax_17 u>> 2
                    
                    if (var_3d_1 == 0)
                        if (ebx u< edx_7)
                            if (eax_17 != 0)
                                eax_17 = *result_1
                            
                            *(eax_17 + (ebx << 2)) = var_34
                    else if (ebx u< edx_7)
                        if (eax_17 != 0)
                            *(*result_1 + (ebx << 2)) = 0
                        else
                            *(eax_17 + (ebx << 2)) = eax_17
                else if (ebx u< ebp u>> 2)
                    if (ebp != 0)
                        *(*result_1 + (ebx << 2)) = 0
                    else
                        *(ebx << 2) = 0
        
        result = result_1
        ebp = result[1]
        ebx += 1
        
        if (ebx s>= ebp u>> 2)
            break
        
        arg2 = var_38

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
