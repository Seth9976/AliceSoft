// 函数: sub_542260
// 地址: 0x542260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_7 = **(arg1 + 0x2b0)
int32_t* ecx_4

if (eax_7 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_4 = *(*(arg1 + 0x1e4) + (eax_7 << 2))

int32_t* result

if (eax_7 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 && ecx_4 != 0)
    int32_t ebp_1 = ecx_4[1]
    
    if (edx u>= ebp_1 u>> 2)
        result = sub_53d0e0(arg1, "string", eax_7, edx, eax_4, arg3, arg2)
    else
        int32_t ecx_6
        
        if (ebp_1 != 0)
            ecx_6 = *ecx_4
        else
            ecx_6 = 0
        
        int32_t edx_1 = *(ecx_6 + (edx << 2))
        int32_t eax_10 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
        int32_t var_48_1
        
        if (edx_1 u>= eax_10)
            var_48_1 = edx_1
            result = sub_53d1c0(eax_10, edx_1, arg1, 0x74e548)
        else
            eax_10 = *(*(arg1 + 0x1e4) + (edx_1 << 2))
            
            if (eax_10 != 0)
                int128_t* eax_12
                
                if (*(eax_10 + 4) != 0)
                    eax_12 = *eax_10
                else
                    eax_12 = nullptr
                
                char var_2c
                sub_402be0(&var_2c, eax_12)
                int32_t var_4 = 0
                int32_t edx_3
                result, edx_3 = sub_552d50(arg1 + 0x1dc, &var_2c, &var_30)
                uint32_t ebx_2
                ebx_2.b = result.b == 0
                int32_t var_4_1 = 0xffffffff
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_48_4 = var_2c.d
                    result, edx_3 = sub_6b4d5b()
                
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                
                if (ebx_2.b == 0)
                    **(arg1 + 0x2b0) = var_30
                    *(arg1 + 0x2b0) += 4
                    result.b = 1
                else
                    result = sub_53d1c0(result, edx_3, arg1, 0x74e584)
            else
                var_48_1 = edx_1
                result = sub_53d1c0(eax_10, edx_1, arg1, 0x74e548)
else
    int32_t var_48 = eax_7
    result = sub_53d1c0(eax_7, edx, arg1, 0x74e4d4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
