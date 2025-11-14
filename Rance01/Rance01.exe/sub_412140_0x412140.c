// 函数: sub_412140
// 地址: 0x412140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_711fa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t result = (*(*arg1 + 0x18))(data_78c474 ^ &__saved_edi)

if (result == 0x20)
    result = (*(*arg6 + 0x18))()
    
    if (result == 0x20)
        void* eax_7 = (*(*arg1 + 8))(arg2, arg3)
        void* edi_1 = eax_7
        void* var_94_1 = eax_7
        int32_t eax_9 = (*(*arg6 + 8))(arg7, arg8)
        int32_t ebx_1 = arg4
        int32_t eax_12 = (*(*arg1 + 0x1c))() - (ebx_1 << 2)
        int32_t eax_14 = (*(*arg6 + 0x1c))()
        int32_t eax_16 = arg9 * arg10
        int32_t result_2 = 0
        int32_t var_60_1 = 0
        int32_t var_5c_1 = 0
        sub_65a090(&result_2, ebx_1)
        int32_t eax_17 = 0
        int32_t var_c_1 = 0
        int32_t esi_3 = 0
        int32_t ecx_11 = (var_60_1 - result_2) s>> 2
        
        if (ecx_11 s> 0)
            int32_t var_ac_1 = 0
            
            do
                esi_3 += 1
                *(result_2 + (esi_3 << 2) - 4) = divs.dp.d(sx.q(eax_17), ebx_1)
                eax_17 = var_ac_1 + arg9
                var_ac_1 = eax_17
            while (esi_3 s< ecx_11)
        
        int32_t* var_54 = nullptr
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        sub_65a090(&var_54, ebx_1)
        int32_t esi_5 = arg9
        int32_t eax_23 = (var_50_1 - var_54) s>> 2
        int32_t ecx_12 = 0
        
        if (eax_23 s> 0)
            int32_t var_b0_1 = esi_5
            
            do
                int32_t eax_25
                int32_t edx_9
                edx_9:eax_25 = sx.q(var_b0_1)
                var_b0_1 += esi_5
                ecx_12 += 1
                var_54[ecx_12 - 1] = divs.dp.d(edx_9:eax_25, ebx_1) + 1
            while (ecx_12 s< eax_23)
        
        if (arg5 s> 0)
            int32_t ecx_13 = 0
            int32_t var_8c_1 = 0
            int32_t var_ac_2 = arg5
            int32_t i_1 = arg5
            int32_t i
            
            do
                int32_t temp0_3 = divs.dp.d(sx.q(ecx_13), arg5)
                int32_t ecx_14 = ecx_13 + arg10
                int32_t eax_33
                int32_t edx_14
                edx_14:eax_33 = sx.q(ecx_14)
                int32_t edx_17 = temp0_3 * eax_14 + eax_9
                int32_t var_24_1 = edx_17
                
                if (ebx_1 s> 0)
                    int32_t* eax_38 = var_54
                    int32_t ecx_17 = neg.d(esi_5)
                    int32_t* ecx_19 = result_2 - eax_38
                    int32_t var_a0_1 = 0
                    int32_t* var_b0_2 = eax_38
                    int32_t var_9c_1 = ebx_1
                    int32_t* var_44_1 = ecx_19
                    int32_t var_80_1 = ebx_1
                    
                    while (true)
                        int32_t ecx_20 = *(ecx_19 + eax_38)
                        int32_t eax_39 = *eax_38
                        int32_t var_7c_1 = temp0_3 * arg5
                        int32_t var_a8_1 = edx_17
                        int32_t var_88_1 = 0
                        int32_t var_98_1 = 0
                        int32_t var_90_1 = 0
                        int32_t var_78_1 = ecx_20
                        
                        if (temp0_3 s< divs.dp.d(edx_14:eax_33, arg5) + 1)
                            int32_t j_1 = divs.dp.d(edx_14:eax_33, arg5) + 1 - temp0_3
                            int32_t j
                            
                            do
                                int32_t edi_2 = arg5
                                int32_t eax_42 = var_7c_1
                                var_7c_1 += edi_2
                                
                                if (eax_42 s< var_8c_1)
                                    edi_2 = eax_42 + var_ac_2
                                    eax_42 = var_8c_1
                                
                                if (edi_2 + eax_42 s<= ecx_14)
                                label_4123e4:
                                    int32_t eax_44 = ecx_20 * ebx_1
                                    char* edx_25 = var_a8_1 + (ecx_20 << 2)
                                    int32_t var_a8_2 = ecx_20
                                    
                                    if (ecx_20 s< eax_39)
                                        while (true)
                                            int32_t esi_7 = eax_44
                                            int32_t eax_45 = eax_44 + ebx_1
                                            int32_t ecx_21 = ebx_1
                                            
                                            if (esi_7 s< var_a0_1)
                                                ecx_21 = var_9c_1 + esi_7
                                                esi_7 = var_a0_1
                                            
                                            if (ecx_21 + esi_7 s> var_a0_1 + arg9)
                                                ecx_21 = var_a0_1 - esi_7 + arg9
                                                
                                                if (ecx_21 s<= 0)
                                                    break
                                            
                                            int32_t ecx_25 = ecx_21 * edi_2
                                            var_88_1 += zx.d(*edx_25) * ecx_25
                                            var_98_1 += zx.d(edx_25[1]) * ecx_25
                                            var_90_1 += zx.d(edx_25[2]) * ecx_25
                                            int32_t eax_55 = var_a8_2 + 1
                                            edx_25 = &edx_25[4]
                                            var_a8_2 = eax_55
                                            
                                            if (eax_55 s>= eax_39)
                                                break
                                            
                                            ebx_1 = arg4
                                            eax_44 = eax_45
                                        
                                        ecx_20 = var_78_1
                                        ebx_1 = arg4
                                    
                                    var_a8_1 += eax_14
                                else
                                    edi_2 = var_8c_1 - eax_42 + arg10
                                    
                                    if (edi_2 s> 0)
                                        goto label_4123e4
                                
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            edi_1 = var_94_1
                            esi_5 = arg9
                        
                        var_a0_1 += esi_5
                        var_b0_2 = &var_b0_2[1]
                        edi_1 += 4
                        var_94_1 = edi_1
                        *(edi_1 - 4) = (divs.dp.d(sx.q(var_88_1), eax_16)).b
                        *(edi_1 - 3) = (divs.dp.d(sx.q(var_98_1), eax_16)).b
                        var_9c_1 += ecx_17
                        int32_t temp3_1 = var_80_1
                        var_80_1 -= 1
                        *(edi_1 - 2) = (divs.dp.d(sx.q(var_90_1), eax_16)).b
                        
                        if (temp3_1 == 1)
                            break
                        
                        edx_17 = var_24_1
                        eax_38 = var_b0_2
                        ecx_19 = var_44_1
                
                edi_1 += eax_12
                ecx_13 = ecx_14
                var_ac_2 += neg.d(arg10)
                i = i_1
                i_1 -= 1
                var_94_1 = edi_1
                var_8c_1 = ecx_13
            while (i != 1)
        
        int32_t* eax_67 = var_54
        
        if (eax_67 != 0)
            int32_t* var_c8_5 = eax_67
            sub_6b4d5b()
        
        result = result_2
        
        if (result != 0)
            int32_t result_1 = result
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
