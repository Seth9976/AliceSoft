// 函数: sub_52ff90
// 地址: 0x52ff90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7276aa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1
*arg3 = 0
ebp[0x28] = 0
void* ecx
sub_52fed0(ecx, ebp)
void** arg_8
BOOL result = sub_5302c0(arg_8, ebp, arg2)

if (result.b == 0)
labelid_9:
    result.b = 0
else
    if (ebp[0x24] != 0 && ebp[0x1c] != 0)
        result = sub_405d70(&ebp[0x18], &ebp[0x20])
    
    if (ebp[0x24] != 0 && ebp[0x1c] != 0 && result.b == 0)
        result.b = 1
    else
        void* arg_18
        void* edx_2 = arg_18
        result = *(edx_2 + 0x18)
        
        if (result s< 0)
        labelid_9:
            result.b = 0
        else
            int32_t ecx_3 = *(edx_2 + 8)
            
            if (result u>= (*(edx_2 + 0xc) - ecx_3) s>> 2)
            labelid_9:
                result.b = 0
            else
                result = *(ecx_3 + (result << 2))
                arg2 = result
                
                if (result == 0)
                label_530267:
                    result.b = 0
                else
                    result = arg4 + 0xbc
                    
                    if (result == 0)
                    label_530267_1:
                        result.b = 0
                    else
                        void* edi_1 = *ebp
                        
                        if (edi_1 == ebp[1])
                        label_530267_2:
                            result.b = 0
                        else
                            void var_1c
                            sub_513f30(&var_1c)
                            int32_t var_4 = 0
                            int32_t* i = *(edi_1 + 4)
                            
                            while (i != *(edi_1 + 8))
                                int32_t esi_2 = *i
                                i = &i[1]
                                *sub_513fa0(&var_1c, ebp[4] + esi_2 * 0x24 + 8) = esi_2
                            
                            void* esi_3 = *result
                            void* ecx_6 = *(result + 4) - esi_3
                            int32_t edi_4 = 0
                            void** var_18
                            
                            if (ecx_6 s/ 0x2c s> 0)
                                arg1 = nullptr
                                
                                while (true)
                                    void* esi_4 = esi_3 + arg1
                                    void* eax_14 = *(esi_4 + 0x20)
                                    int32_t edx_9 = *(esi_4 + 0x1c)
                                    int32_t eax_15 = *(arg2 + 4)
                                    int32_t* var_4c_3
                                    void** var_48_6
                                    
                                    if (edi_4 u>= eax_15 u>> 2)
                                        int32_t var_4_2 = 1
                                        var_48_6 = var_18
                                        var_4c_3 = *var_18
                                    else
                                        if (eax_15 != 0)
                                            eax_15 = *arg2
                                        
                                        arg_8 = *(eax_15 + (edi_4 << 2))
                                        void** eax_18 = sub_429b30(&var_1c, esi_4)
                                        void** ebx_1 = var_18
                                        void** var_2c = eax_18
                                        void*** eax_21
                                        void** var_28
                                        
                                        if (eax_18 == ebx_1)
                                            var_28 = ebx_1
                                            eax_21 = &var_28
                                        else
                                            ebx_1 = var_18
                                            
                                            if (sub_405dd0(&eax_18[3], esi_4) != 0)
                                                var_28 = ebx_1
                                                eax_21 = &var_28
                                            else
                                                eax_21 = &var_2c
                                        void** eax_22 = *eax_21
                                        
                                        if (eax_22 != ebx_1)
                                            int32_t esi_5 = eax_22[0xa]
                                            int32_t edx_14
                                            
                                            if (esi_5 s>= 0)
                                                int32_t eax_23
                                                int32_t edx_13
                                                edx_13:eax_23 =
                                                    muls.dp.d(0x38e38e39, ebp[5] - ebp[4])
                                                edx_14 = edx_13 s>> 3
                                            
                                            if (esi_5 s< 0 || esi_5 s>= (edx_14 u>> 0x1f) + edx_14)
                                                int32_t var_4_4 = 2
                                                sub_429bc0(&var_1c, &arg_18, *ebx_1, ebx_1)
                                                void** var_48_10 = var_18
                                                sub_6b4d5b()
                                                result.b = 0
                                                goto label_53022b
                                            
                                            int32_t eax_24 = ebp[4]
                                            int32_t edx_15 = esi_5 * 9
                                            
                                            if (*(eax_24 + (edx_15 << 2)) == edx_9)
                                                void* var_48_3 = arg_18
                                                char eax_27
                                                int32_t ecx_15
                                                eax_27, ecx_15 = sub_5313f0(ebp, edx_9, &arg_8, 
                                                    *(eax_24 + (edx_15 << 2) + 4), eax_14)
                                                
                                                if (eax_27 == 0)
                                                    int32_t var_4_3 = 0xffffffff
                                                    sub_428520(ecx_15, &var_1c)
                                                    result.b = 0
                                                    goto label_53022b
                                                
                                                ebp[0x28] += 1
                                                ebx_1 = var_18
                                        
                                        int32_t eax_28 = *(arg2 + 4)
                                        
                                        if (edi_4 u>= eax_28 u>> 2)
                                            int32_t var_4_5 = 3
                                            var_48_6 = ebx_1
                                            var_4c_3 = *ebx_1
                                        else
                                            if (eax_28 != 0)
                                                eax_28 = *arg2
                                            
                                            *(eax_28 + (edi_4 << 2)) = arg_8
                                            esi_3 = *result
                                            arg1 += 0x2c
                                            ecx_6 = *(result + 4) - esi_3
                                            edi_4 += 1
                                            
                                            if (edi_4 s>= ecx_6 s/ 0x2c)
                                                break
                                            
                                            continue
                                    
                                    sub_429bc0(&var_1c, &arg_18, var_4c_3, var_48_6)
                                    void** var_48_7 = var_18
                                    sub_6b4d5b()
                                    goto label_530267_2
                            
                            sub_52fed0(ecx_6, ebp)
                            *arg3 = ebp[0x28]
                            int32_t var_4_1 = 4
                            sub_429bc0(&var_1c, &arg_18, *var_18, var_18)
                            void** var_48_5 = var_18
                            sub_6b4d5b()
                            result.b = 1

label_53022b:
fsbase->NtTib.ExceptionList = ExceptionList
return result
