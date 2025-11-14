// 函数: sub_543b60
// 地址: 0x543b60
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
int32_t ebx = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t edx = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t eax_8 = **(arg4 + 0x2b0)
char result

if (eax_8 u>= (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
    result = sub_53d0e0(arg4, 0x74e9b8, eax_8, edx, eax_4, arg3, arg2)
else
    int32_t* ecx_4 = *(*(arg4 + 0x1e4) + (eax_8 << 2))
    
    if (ecx_4 == 0)
        result = sub_53d0e0(arg4, 0x74e9b8, eax_8, edx, eax_4, arg3, arg2)
    else
        int32_t esi = ecx_4[1]
        
        if (edx u>= esi u>> 2)
            result = sub_53d0e0(arg4, 0x74e9b8, eax_8, edx, eax_4, arg3, arg2)
        else
            int32_t ecx_5
            
            if (esi != 0)
                ecx_5 = *ecx_4
            else
                ecx_5 = 0
            
            int32_t edx_1 = *(ecx_5 + (edx << 2))
            int32_t* eax_13
            
            if (edx_1 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
                eax_13 = *(*(arg4 + 0x1e4) + (edx_1 << 2))
            
            if (edx_1 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2 && eax_13 != 0)
                char var_50 = ebx.b
                
                if (ebx s<= 0xff)
                    char var_4f_2 = 0
                else
                    char var_4f_1 = (ebx s>> 8).b
                    char var_4e_1 = 0
                
                int128_t* edx_2
                
                if (eax_13[1] != 0)
                    edx_2 = *eax_13
                else
                    edx_2 = nullptr
                
                char* eax_14 = edx_2
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                char var_48 = 0
                
                do
                    ecx_5.b = *eax_14
                    eax_14 = &eax_14[1]
                while (ecx_5.b != 0)
                
                char* var_6c_3 = &var_48
                int32_t var_4 = 0
                void* var_2c
                sub_402c60(&var_2c, &var_50, sub_401270(&var_48, eax_14 - &eax_14[1], edx_2))
                var_4.b = 2
                
                if (var_34_1 u>= 0x10)
                    int32_t var_6c_4 = var_48.d
                    sub_6b4d5b()
                
                int32_t var_34_2 = 0xf
                int32_t var_38_2 = 0
                var_48 = 0
                int32_t var_18
                
                if (sub_550660(eax_13, &var_2c) != 0)
                    if (var_18 u>= 0x10)
                        void* var_6c_7 = var_2c
                        sub_6b4d5b()
                    
                    result = 1
                else
                    int32_t entry_ebx
                    sub_53d0e0(arg4, 0x74ea2c, eax_4, arg3, arg2, arg1, entry_ebx)
                    
                    if (var_18 u>= 0x10)
                        void* var_6c_6 = var_2c
                        sub_6b4d5b()
                    
                    result = 0
            else
                result = sub_53d0e0(arg4, 0x74e9f4, edx_1, eax_4, arg3, arg2, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
