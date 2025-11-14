// 函数: sub_670ec0
// 地址: 0x670ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725220
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_104
int32_t eax_2 = data_78c474 ^ &var_104
int32_t __saved_edi
int32_t var_118 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1
int32_t* i

if (ebp[7] != ebp[8])
    sub_405220(arg1, arg2)
    ebp[0xb] = 0
    int32_t ecx = ebp[7]
    i = ebp[8]
    
    if (ecx != i)
        int32_t edx_1
        edx_1:i = muls.dp.d(0x38e38e39, i - ecx)
        int32_t edx_2 = edx_1 s>> 3
        
        if ((edx_2 u>> 0x1f) + edx_2 s> 0)
            int32_t ecx_22
            
            for (i = ebp[7]; i != 0; i = ebp[7] + ecx_22 * 0x24)
                if (i[7] == 2)
                    int32_t var_4 = 0
                    int32_t var_84
                    char eax_7 = sub_402680("#include", sub_66fc20(&var_84, i))
                    int32_t var_4_1 = 0xffffffff
                    int32_t var_70
                    
                    if (var_70 u>= 0x10)
                        int32_t var_11c_2 = var_84
                        sub_6b4d5b()
                    
                    if (eax_7 != 0)
                        ebp[0xb] += 1
                        int32_t edx_4 = ebp[7]
                        int32_t eax_8 = ebp[8]
                        int32_t ecx_5 = ebp[0xb]
                        char var_f4
                        
                        if (edx_4 == eax_8)
                        label_671327:
                            int32_t var_e0_1 = 0xf
                            int32_t var_e4_2 = 0
                            var_f4 = 0
                            sub_401270(&var_f4, 0x2a, "#includ")
                            int32_t var_4_4 = 1
                            sub_671dc0(nullptr, ebp, &var_f4)
                            
                            if (var_e0_1 u>= 0x10)
                                int32_t var_11c_18 = var_f4.d
                                sub_6b4d5b()
                            
                            i.b = 0
                            goto label_6712f6
                        
                        if ((eax_8 - edx_4) s/ 0x24 s<= ecx_5)
                            goto label_671327
                        
                        int32_t* edi_2 = ebp[7] + ecx_5 * 0x24
                        
                        if (edi_2 == 0)
                            goto label_671327
                        
                        if (edi_2[7] != 0x11)
                            int32_t var_e0_2 = 0xf
                            int32_t var_e4_3 = 0
                            var_f4 = 0
                            sub_401270(&var_f4, 0x2a, "#includ")
                            int32_t var_4_5 = 2
                            sub_671dc0(edi_2, ebp, &var_f4)
                            
                            if (var_e0_2 u< 0x10)
                                i.b = 0
                                goto label_6712f6
                            
                            int32_t var_11c_20 = var_f4.d
                            sub_6b4d5b()
                            i.b = 0
                            goto label_6712f6
                        
                        char var_a0
                        char* eax_14
                        int32_t edx_9
                        eax_14, edx_9 = sub_66fc20(&var_a0, edi_2)
                        int32_t var_4_2 = 3
                        sub_401940(&var_f4, edx_9, eax_14)
                        char* var_11c_4 = &var_f4
                        char var_bc
                        char* eax_16 = &var_bc
                        var_4_2.b = 4
                        sub_402c60(eax_16, ".inc", nullptr)
                        int32_t var_e0
                        
                        if (var_e0 u>= 0x10)
                            int32_t var_11c_5 = var_f4.d
                            eax_16 = sub_6b4d5b()
                        
                        var_e0 = 0xf
                        int32_t var_e4_1 = 0
                        var_f4 = 0
                        var_4_2.b = 7
                        int32_t var_8c
                        
                        if (var_8c u>= 0x10)
                            int32_t var_11c_6 = var_a0.d
                            eax_16 = sub_6b4d5b()
                        
                        var_8c = 0xf
                        int32_t var_90_1 = 0
                        var_a0 = 0
                        char* eax_18
                        int32_t edx_11
                        eax_18, edx_11 = sub_4018a0(eax_16, &var_84, ebp, &var_84)
                        var_4_2.b = 8
                        char var_d8
                        sub_4c1d70(&var_bc, edx_11, eax_18, &var_d8)
                        var_4_2.b = 0xa
                        
                        if (var_70 u>= 0x10)
                            int32_t var_11c_9 = var_84
                            sub_6b4d5b()
                        
                        var_70 = 0xf
                        int32_t var_74_1 = 0
                        var_84.b = 0
                        
                        if (sub_602830(&var_d8) == 0)
                            sub_402be0(&var_a0, "#includ")
                            var_4_2.b = 0xb
                            sub_671dc0(edi_2, ebp, &var_a0)
                            sub_401110(&var_a0)
                            sub_401110(&var_d8)
                            sub_401110(&var_bc)
                            i.b = 0
                            goto label_6712f6
                        
                        int32_t esi_5 = (arg2[1] - *arg2) s/ 0x1c
                        int32_t edi_3 = 0
                        int32_t var_c4
                        int32_t var_a8
                        
                        if (esi_5 s> 0)
                            int32_t var_100_1 = 0
                            
                            while (sub_405d70(&var_d8, *arg2 + var_100_1) == 0)
                                var_100_1 += 0x1c
                                edi_3 += 1
                                
                                if (edi_3 s>= esi_5)
                                    goto label_67117c
                            
                            int32_t var_e0_3 = 0xf
                            int32_t var_e4_4 = 0
                            var_f4 = 0
                            sub_401270(&var_f4, 0x21, "#includ")
                            var_4_2.b = 0xc
                            sub_671dc0(edi_2, ebp, &var_f4)
                            
                            if (var_e0_3 u>= 0x10)
                                int32_t var_11c_23 = var_f4.d
                                sub_6b4d5b()
                            
                            if (var_c4 u>= 0x10)
                                int32_t var_11c_24 = var_d8.d
                                sub_6b4d5b()
                            
                            int32_t var_c4_1 = 0xf
                            int32_t var_c8_2 = 0
                            var_d8 = 0
                            
                            if (var_a8 u< 0x10)
                                i.b = 0
                                goto label_6712f6
                            
                            int32_t var_11c_25 = var_bc.d
                            sub_6b4d5b()
                            i.b = 0
                            goto label_6712f6
                        
                    label_67117c:
                        int32_t ecx_14 = ebp[0xd]
                        int32_t var_54_1 = 0xf
                        int32_t var_58_1 = 0
                        char var_68 = 0
                        sub_401270(&var_68, nullptr, 0x72d35a)
                        int32_t* var_4c_1 = nullptr
                        int32_t var_48_1 = 0
                        int32_t var_44_1 = 0
                        int32_t var_3c_1 = 0
                        int32_t var_34_1 = ecx_14
                        var_4_2.b = 0xd
                        sub_670030(&var_68, &var_d8)
                        
                        if (sub_670ec0(arg2) == 0)
                            int32_t var_20_1 = 0
                            int32_t var_1c_1 = 0xf
                            char var_30 = 0
                            sub_401270(&var_30, 0x1b, "#includ")
                            var_4_2.b = 0xe
                            sub_671dc0(edi_2, ebp, &var_30)
                            
                            if (var_1c_1 u>= 0x10)
                                int32_t var_11c_27 = var_30.d
                                sub_6b4d5b()
                            
                            var_4_2.b = 0xa
                            sub_66ff30(&var_68)
                            
                            if (var_c4 u>= 0x10)
                                int32_t var_11c_29 = var_d8.d
                                sub_6b4d5b()
                            
                            int32_t var_c4_2 = 0xf
                            int32_t var_c8_3 = 0
                            var_d8 = 0
                            
                            if (var_a8 u< 0x10)
                                i.b = 0
                                goto label_6712f6
                            
                            int32_t var_11c_30 = var_bc.d
                            sub_6b4d5b()
                            i.b = 0
                            goto label_6712f6
                        
                        int32_t* var_11c_13 = edi_2
                        sub_672be0(&ebp[7], ebp[7] + ebp[0xb] * 0x24 + 0x24, var_4c_1, var_48_1)
                        ebp[0xb] += (var_48_1 - var_4c_1) s/ 0x24
                        var_4_2.b = 0xa
                        sub_66ff30(&var_68)
                        
                        if (var_c4 u>= 0x10)
                            int32_t var_11c_15 = var_d8.d
                            sub_6b4d5b()
                        
                        int32_t var_4_3 = 0xffffffff
                        var_c4 = 0xf
                        int32_t var_c8_1 = 0
                        var_d8 = 0
                        
                        if (var_a8 u>= 0x10)
                            int32_t var_11c_16 = var_bc.d
                            sub_6b4d5b()
                        
                        var_a8 = 0xf
                        int32_t var_ac_1 = 0
                        var_bc = 0
                
                ebp[0xb] += 1
                int32_t edx_23 = ebp[7]
                i = ebp[8]
                ecx_22 = ebp[0xb]
                
                if (edx_23 == i)
                    break
                
                if ((i - edx_23) s/ 0x24 s<= ecx_22)
                    break

i.b = 1
label_6712f6:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_104)
return i
