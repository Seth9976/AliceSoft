// 函数: sub_558890
// 地址: 0x558890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7226f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg4
int32_t* edi = arg2
int32_t eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x2e8ba2e9, arg4[1] - esi)
int32_t edx_1 = edx s>> 3
int32_t ebp = 0
var_40 = edi

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t var_3c_1 = 0
    
    while (true)
        if (*(var_3c_1 + esi + 0x1c) == 0x1b)
            int32_t ebx_1 = edi[1]
            
            if (ebp u< ebx_1 u>> 2)
                int32_t eax_10
                
                if (ebx_1 != 0)
                    eax_10 = *edi
                else
                    eax_10 = 0
                
                int32_t ecx_3 = *(eax_10 + (ebp << 2))
                
                if (ecx_3 != 0)
                    int32_t edi_1 = *arg3
                    
                    if (ecx_3 u< (arg3[1] - edi_1) s/ 0x1c)
                        int32_t var_18_1 = 0xf
                        int32_t var_1c_1 = 0
                        char var_2c = 0
                        sub_401180(&var_2c, 0xffffffff, edi_1 + ecx_3 * 0x1c, 0)
                        int32_t var_34
                        int32_t* var_58_1 = &var_34
                        int32_t var_4 = 0
                        ebx_1.b = sub_537dc0(&var_34, &var_2c, arg1 + 0x4c) == 0
                        int32_t var_4_1 = 0xffffffff
                        
                        if (var_18_1 u>= 0x10)
                            int32_t var_58_2 = var_2c.d
                            sub_6b4d5b()
                        
                        int32_t* ecx_8 = var_40
                        int32_t eax_22 = ecx_8[1]
                        uint32_t edx_12 = eax_22 u>> 2
                        
                        if (ebx_1.b == 0)
                            if (ebp u< edx_12)
                                if (eax_22 != 0)
                                    eax_22 = *ecx_8
                                
                                *(eax_22 + (ebp << 2)) = var_34
                        else if (ebp u< edx_12)
                            if (eax_22 != 0)
                                *(*ecx_8 + (ebp << 2)) = 0
                            else
                                *(eax_22 + (ebp << 2)) = eax_22
                    else if (ebp u< ebx_1 u>> 2)
                        if (ebx_1 != 0)
                            *(*var_40 + (ebp << 2)) = 0
                        else
                            *(ebp << 2) = 0
        
        esi = *arg4
        var_3c_1 += 0x2c
        int32_t eax_27
        int32_t edx_13
        edx_13:eax_27 = muls.dp.d(0x2e8ba2e9, arg4[1] - esi)
        int32_t edx_14 = edx_13 s>> 3
        ebp += 1
        
        if (ebp s>= (edx_14 u>> 0x1f) + edx_14)
            break
        
        edi = var_40

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
