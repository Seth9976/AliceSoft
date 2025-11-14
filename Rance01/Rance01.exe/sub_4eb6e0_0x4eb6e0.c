// 函数: sub_4eb6e0
// 地址: 0x4eb6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72698e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_858
int32_t eax_2 = data_78c474 ^ &var_858
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4eb9d0(arg1)
int32_t* ecx = *(arg1 + 0x50)
int32_t ebx = 0

if (ecx != 0)
    (*(*ecx + 4))(eax_4)
    *(arg1 + 0x50) = 0

int32_t eax_7
int32_t edx_2
edx_2:eax_7 = muls.dp.d(0x7e07e07f, *(arg2 + 0x10) - *(arg2 + 0xc))
int32_t edx_3 = edx_2 s>> 8
int32_t result = (edx_3 u>> 0x1f) + edx_3
int32_t result_2 = result
int32_t var_84c = 0

if (result s<= 0)
label_4eb8ca:
    sub_401180(arg1 + 0x10, 0xffffffff, arg2 + 0x1c, 0)
    *(arg1 + 0x2c) = *(arg2 + 8)
    result.b = 1
else
    int32_t var_850_1 = 0
    
    while (true)
        if (ebx s>= 0)
            void* edi_1 = *(arg2 + 0xc)
            int32_t edx_4
            edx_4:result = muls.dp.d(0x7e07e07f, *(arg2 + 0x10) - edi_1)
            int32_t edx_5 = edx_4 s>> 8
            
            if (ebx s< (edx_5 u>> 0x1f) + edx_5 && edi_1 != neg.d(var_850_1))
                void var_838
                sub_5952a0(0, &var_838)
                int32_t edi_3 = *(edi_1 + var_850_1 + 0x30)
                int32_t result_1 = 0
                
                if (edi_3 s<= 0)
                label_4eb8a7:
                    var_850_1 += 0x208
                    ebx += 1
                    var_84c = ebx
                    
                    if (ebx s>= result_2)
                        goto label_4eb8ca
                    
                    continue
                else
                    while (true)
                        int32_t* eax_10 = operator new(0x2a8)
                        int32_t* var_854 = eax_10
                        int32_t* edi_4 = nullptr
                        int32_t var_4 = 0
                        
                        if (eax_10 != 0)
                            int32_t* eax_11 = sub_4ed8b0(eax_10)
                            int16_t top = top - 1
                            unimplemented  {call 0x4ed8b0}
                            edi_4 = eax_11
                        
                        int32_t var_4_1 = 0xffffffff
                        edi_4[0xa8] = *(arg1 + 0x68)
                        edi_4[0xa9] = *(arg1 + 0x6c)
                        var_854 = edi_4
                        
                        if (sub_4eda30(edi_4, arg2, ebx, result_1, edi_3, &var_838, arg3) == 0)
                            sub_4ed980(edi_4)
                            int32_t* var_870_5 = edi_4
                            sub_6b4d5b()
                            break
                        
                        int32_t eax_15 = *(arg1 + 0x34)
                        int32_t ecx_9
                        
                        if (&var_854 u< eax_15)
                            ecx_9 = *(arg1 + 0x30)
                        
                        if (&var_854 u>= eax_15 || ecx_9 u> &var_854)
                            if (eax_15 == *(arg1 + 0x38))
                                sub_4307a0(arg1 + 0x30)
                            
                            int32_t** eax_19 = *(arg1 + 0x34)
                            
                            if (eax_19 != 0)
                                *eax_19 = edi_4
                        else
                            if (eax_15 == *(arg1 + 0x38))
                                sub_4307a0(arg1 + 0x30)
                            
                            int32_t* eax_17 = *(arg1 + 0x34)
                            
                            if (eax_17 != 0)
                                *eax_17 = *(*(arg1 + 0x30) + ((&var_854 - ecx_9) s>> 2 << 2))
                        
                        *(arg1 + 0x34) += 4
                        ebx = var_84c
                        result = result_1 + 1
                        result_1 = result
                        
                        if (result s>= edi_3)
                            goto label_4eb8a7
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_858)
return result
