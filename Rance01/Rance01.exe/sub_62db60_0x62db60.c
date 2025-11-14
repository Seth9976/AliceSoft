// 函数: sub_62db60
// 地址: 0x62db60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71cf38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg5
result_1 = result

if (arg1 s>= 0)
    result = (*(*arg2 + 4))(eax_4)
    
    if (arg1 s< result)
        int32_t edx_2 = arg2[0x53]
        int32_t ecx_2 = arg1 * 7
        int32_t* ebp_1 = edx_2 + (ecx_2 << 2)
        int32_t i = 0
        
        if (*(edx_2 + (ecx_2 << 2) + 0x10) s> 0)
            do
                int32_t ecx_3 = ebp_1[5]
                char* eax_7
                
                if (ecx_3 u< 0x10)
                    eax_7 = ebp_1
                else
                    eax_7 = *ebp_1
                
                char* eax_8
                
                if (eax_7[i] u>= 0x81)
                    if (ecx_3 u< 0x10)
                        eax_8 = ebp_1
                    else
                        eax_8 = *ebp_1
                
                char* eax_9
                
                if (eax_7[i] u< 0x81 || eax_8[i] u> 0x9f)
                    if (ecx_3 u< 0x10)
                        eax_9 = ebp_1
                    else
                        eax_9 = *ebp_1
                
                int32_t var_2c
                int32_t var_18
                
                if ((eax_7[i] u< 0x81 || eax_8[i] u> 0x9f) && eax_9[i] u< 0xe0)
                    int32_t var_4_2 = 1
                    sub_62dd50(arg2, arg3, arg4, sub_401ec0(ebp_1, &var_2c, i, 1), result_1)
                    int32_t var_4_3 = 0xffffffff
                    
                    if (var_18 u>= 0x10)
                        int32_t var_64_4 = var_2c
                        sub_6b4d5b()
                    
                    int32_t eax_15
                    int32_t edx_5
                    edx_5:eax_15 = sx.q(arg2[0x27])
                    i += 1
                    arg3 += (eax_15 - edx_5) s>> 1
                else
                    int32_t var_4 = 0
                    sub_62dd50(arg2, arg3, arg4, sub_401ec0(ebp_1, &var_2c, i, 2), result_1)
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_18 u>= 0x10)
                        int32_t var_64_2 = var_2c
                        sub_6b4d5b()
                    
                    i += 2
                    arg3 += arg2[0x27]
            while (i s< ebp_1[4])
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        sub_401270(&var_48, 1, 0x733cc0)
        int32_t var_4_4 = 2
        result = sub_62dd50(arg2, arg3, arg4, &var_48, result_1)
        
        if (var_34_1 u>= 0x10)
            int32_t var_64_6 = var_48.d
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
