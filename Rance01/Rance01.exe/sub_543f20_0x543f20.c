// 函数: sub_543f20
// 地址: 0x543f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg4 + 0x2b0) -= 4
int32_t edx = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t eax_7 = **(arg4 + 0x2b0)
char result

if (eax_7 u>= (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
    result = sub_53d0e0(arg4, 0x74eabc, eax_7, edx, eax_4, arg3, arg2)
else
    int32_t edi = *(arg4 + 0x1e4)
    int32_t* ecx_3 = *(edi + (eax_7 << 2))
    
    if (ecx_3 == 0)
        result = sub_53d0e0(arg4, 0x74eabc, eax_7, edx, eax_4, arg3, arg2)
    else
        int32_t esi = ecx_3[1]
        
        if (edx u>= esi u>> 2)
            result = sub_53d0e0(arg4, 0x74eabc, eax_7, edx, eax_4, arg3, arg2)
        else
            int32_t ebx_2 = 0
            int32_t ecx_4
            
            if (esi != 0)
                ecx_4 = *ecx_3
            else
                ecx_4 = 0
            
            int32_t eax_8 = *(ecx_4 + (edx << 2))
            int32_t* edi_1
            
            if (eax_8 u< (*(arg4 + 0x1e8) - edi) s>> 2)
                edi_1 = *(edi + (eax_8 << 2))
            
            if (eax_8 u< (*(arg4 + 0x1e8) - edi) s>> 2 && edi_1 != 0)
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                int32_t var_4 = 0
                int128_t* edx_4
                
                if (edi_1[1] != 0)
                    edx_4 = *edi_1
                else
                    edx_4 = nullptr
                
                char* eax_9 = edx_4
                
                do
                    ecx_4.b = *eax_9
                    eax_9 = &eax_9[1]
                while (ecx_4.b != 0)
                
                char* edx_5 = sub_401270(&var_2c, eax_9 - &eax_9[1], edx_4)
                
                if (var_1c_1 != 0)
                    int32_t eax_11 = 0
                    
                    if (var_1c_1 u> 0)
                        char* edi_5 = var_2c.d
                        
                        do
                            ebx_2 = eax_11
                            char* edx_6 = edi_5
                            
                            if (var_18_1 u< 0x10)
                                edx_6 = &var_2c
                            
                            if (edx_6[eax_11] u>= 0x81)
                                edx_5 = edi_5
                                
                                if (var_18_1 u< 0x10)
                                    edx_5 = &var_2c
                            
                            if (edx_6[eax_11] u>= 0x81 && edx_5[eax_11] u<= 0x9f)
                                eax_11 += 2
                            else
                                edx_5 = edi_5
                                
                                if (var_18_1 u< 0x10)
                                    edx_5 = &var_2c
                                
                                if (edx_5[eax_11] u< 0xe0)
                                    eax_11 += 1
                                else
                                    eax_11 += 2
                        while (eax_11 u< var_1c_1)
                    
                    sub_401350(0xffffffff, edx_5, ebx_2, &var_2c)
                
                if (sub_550660(edi_1, &var_2c) != 0)
                    if (var_18_1 u>= 0x10)
                        int32_t var_4c_5 = var_2c.d
                        sub_6b4d5b()
                    
                    result = 1
                else
                    int32_t entry_ebx
                    ebx_2.b = sub_53d0e0(arg4, 0x74eb30, eax_4, arg3, arg2, arg1, entry_ebx)
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_4c_4 = var_2c.d
                        sub_6b4d5b()
                    
                    result = ebx_2.b
            else
                result = sub_53d0e0(arg4, 0x74eaf8, eax_8, eax_4, arg3, arg2, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
