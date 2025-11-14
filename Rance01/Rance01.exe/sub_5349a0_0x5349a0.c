// 函数: sub_5349a0
// 地址: 0x5349a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71aac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg2
int32_t result

if (arg1 u>= (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2)
    result = 0xffffffff
else
    int32_t* ecx = *(*(arg3 + 8) + (arg1 << 2))
    
    if (ecx == 0)
        result = 0xffffffff
    else
        int32_t eax_5 = ecx[7]
        void* ecx_2 = *(ecx[5] + 4)
        
        if (eax_5 u>= (*(ecx_2 + 0x12c) - *(ecx_2 + 0x128)) s>> 4)
            result = 0xffffffff
        else
            int32_t eax_6 = eax_5 << 4
            
            if (eax_6 == neg.d(*(ecx_2 + 0x128)))
                result = 0xffffffff
            else
                void* ebx_1 = *(eax_6 + *(ecx_2 + 0x128) + 4)
                
                if (ebx_1 == 0)
                    result = 0xffffffff
                else
                    int32_t var_1c = 0
                    int32_t var_18_1 = 0
                    int32_t var_14_1 = 0
                    int32_t var_4 = 0
                    int32_t eax_8
                    int32_t edx_6
                    edx_6:eax_8 = muls.dp.d(0x2e8ba2e9, *(ebx_1 + 0x38) - *(ebx_1 + 0x34))
                    int32_t edx_7 = edx_6 s>> 3
                    void* var_20 = ebx_1
                    sub_65a090(&var_1c, (edx_7 u>> 0x1f) + edx_7)
                    int32_t edi_1 = *(ebx_1 + 0x34)
                    int32_t eax_12
                    int32_t edx_8
                    edx_8:eax_12 = muls.dp.d(0x2e8ba2e9, *(ebx_1 + 0x38) - edi_1)
                    int32_t edx_9 = edx_8 s>> 3
                    int32_t esi_2 = 0
                    
                    if ((edx_9 u>> 0x1f) + edx_9 s<= 0)
                    label_534b06:
                        int32_t eax_25
                        int32_t edx_13
                        edx_13:eax_25 = muls.dp.d(0x66666667, ebp[1] - *ebp)
                        int32_t edx_14 = edx_13 s>> 3
                        sub_534ca0(&var_20, ebp)
                        int32_t eax_26 = var_1c
                        
                        if (eax_26 != 0)
                            int32_t var_40_3 = eax_26
                            sub_6b4d5b()
                        
                        result = (edx_14 u>> 0x1f) + edx_14
                    else
                        arg2 = nullptr
                        
                        while (true)
                            int32_t eax_14
                            
                            if (ecx[1] != 0)
                                eax_14 = *ecx
                            else
                                eax_14 = 0
                            
                            void var_24
                            
                            if (sub_534460(ebp, *(arg2 + edi_1 + 0x1c), *(eax_14 + (esi_2 << 2)), 
                                    &var_24, arg3) == 0)
                                int32_t eax_27 = var_1c
                                
                                if (eax_27 != 0)
                                    int32_t var_40_4 = eax_27
                                    sub_6b4d5b()
                                
                                break
                            
                            *(var_1c + (esi_2 << 2)) = (ebp[0x11] - ebp[0x10]) s>> 2
                            sub_416780(&var_24, &ebp[0x10])
                            edi_1 = *(ebx_1 + 0x34)
                            arg2 = &arg2[0xb]
                            int32_t eax_21
                            int32_t edx_11
                            edx_11:eax_21 = muls.dp.d(0x2e8ba2e9, *(ebx_1 + 0x38) - edi_1)
                            int32_t edx_12 = edx_11 s>> 3
                            esi_2 += 1
                            
                            if (esi_2 s>= (edx_12 u>> 0x1f) + edx_12)
                                goto label_534b06
                        
                        result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return result
