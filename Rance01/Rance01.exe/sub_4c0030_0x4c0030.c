// 函数: sub_4c0030
// 地址: 0x4c0030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713198
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebp = arg2
int32_t __saved_edi
int32_t result

if ((*(*arg4 + 0x18))(data_78c474 ^ &__saved_edi) == 0x20)
    void* eax_5 = (*(*arg1 + 8))(0, 0)
    void* edi_1 = eax_5
    void* var_9c_1 = eax_5
    int32_t eax_7 = (*(*arg4 + 8))(0, 0)
    int32_t eax_11
    int32_t edx_4
    edx_4:eax_11 = sx.q((*(*arg1 + 0x18))() * ebp)
    int32_t eax_16 = (*(*arg1 + 0x1c))() - ((eax_11 + (edx_4 & 7)) s>> 3)
    int32_t eax_18 = (*(*arg4 + 0x1c))()
    int32_t eax_20 = arg5 * arg6
    int32_t result_2 = 0
    int32_t var_5c_1 = 0
    int32_t var_58_1 = 0
    sub_65a090(&result_2, ebp)
    int32_t var_4 = 0
    int32_t esi_2 = 0
    int32_t ecx_8 = (var_5c_1 - result_2) s>> 2
    
    if (ecx_8 s> 0)
        int32_t var_a8_1 = 0
        
        do
            esi_2 += 1
            *(result_2 + (esi_2 << 2) - 4) = divs.dp.d(sx.q(var_a8_1), ebp)
            var_a8_1 += arg5
        while (esi_2 s< ecx_8)
    
    int32_t* var_20 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    sub_65a090(&var_20, ebp)
    int32_t* ebx_1 = var_20
    int32_t esi_6 = (var_1c_1 - ebx_1) s>> 2
    int32_t ecx_9 = 0
    
    if (esi_6 s> 0)
        int32_t var_a8_2 = arg5
        
        do
            ecx_9 += 1
            ebx_1[ecx_9 - 1] = divs.dp.d(sx.q(var_a8_2), ebp) + 1
            var_a8_2 += arg5
        while (ecx_9 s< esi_6)
    
    if (arg3 s> 0)
        int32_t ecx_10 = 0
        int32_t var_94_1 = 0
        int32_t var_8c_1 = arg3
        int32_t i_1 = arg3
        int32_t i
        
        do
            int32_t temp0_3 = divs.dp.d(sx.q(ecx_10), arg3)
            int32_t eax_34 = ecx_10 + arg6
            int32_t edx_22 = temp0_3 * eax_18 + eax_7
            int32_t eax_37 = divs.dp.d(sx.q(eax_34), arg3) + 1
            int32_t var_28_1 = eax_37
            int32_t var_50_1 = edx_22
            
            if (ebp s> 0)
                int32_t* esi_8 = ebx_1
                int32_t* ecx_15 = result_2 - ebx_1
                int32_t var_a8_3 = 0
                int32_t* var_7c_1 = esi_8
                int32_t var_90_1 = ebp
                int32_t* var_34_1 = ecx_15
                int32_t var_80_1 = ebp
                
                while (true)
                    int32_t var_88_1 = 0
                    int32_t var_84_1 = 0
                    int32_t var_98_1 = 0
                    int32_t var_a0_1 = 0
                    int32_t ebx_2 = *(ecx_15 + esi_8)
                    int32_t ecx_16 = *esi_8
                    int32_t ecx_17 = temp0_3 * arg3
                    int32_t var_68_1 = ebx_2
                    
                    if (temp0_3 s< eax_37)
                        int32_t var_6c_1 = eax_37 - temp0_3
                        
                        while (true)
                            int32_t edi_3 = arg3
                            int32_t eax_39 = ecx_17
                            int32_t ecx_18 = ecx_17 + edi_3
                            
                            if (eax_39 s< var_94_1)
                                edi_3 = var_8c_1 + eax_39
                                eax_39 = var_94_1
                            
                            if (edi_3 + eax_39 s<= eax_34)
                            label_4c02f9:
                                int32_t eax_41 = ebx_2 * ebp
                                char* edx_23 = edx_22 + (ebx_2 << 2)
                                
                                if (ebx_2 s< ecx_16)
                                    while (true)
                                        int32_t esi_9 = eax_41
                                        int32_t eax_42 = eax_41 + ebp
                                        int32_t ecx_21 = ebp
                                        
                                        if (esi_9 s< var_a8_3)
                                            ecx_21 = var_90_1 + esi_9
                                            esi_9 = var_a8_3
                                        
                                        if (ecx_21 + esi_9 s> var_a8_3 + arg5)
                                            ecx_21 = var_a8_3 - esi_9 + arg5
                                            
                                            if (ecx_21 s<= 0)
                                                break
                                        
                                        int32_t ecx_25 = ecx_21 * edi_3
                                        var_88_1 += zx.d(*edx_23) * ecx_25
                                        var_84_1 += zx.d(edx_23[1]) * ecx_25
                                        var_98_1 += zx.d(edx_23[2]) * ecx_25
                                        var_a0_1 += zx.d(edx_23[3]) * ecx_25
                                        ebx_2 += 1
                                        edx_23 = &edx_23[4]
                                        
                                        if (ebx_2 s>= ecx_16)
                                            break
                                        
                                        ebp = arg2
                                        eax_41 = eax_42
                                    
                                    ebx_2 = var_68_1
                                    ebp = arg2
                                
                                edx_22 += eax_18
                            else
                                edi_3 = var_94_1 - eax_39 + arg6
                                
                                if (edi_3 s> 0)
                                    goto label_4c02f9
                            
                            int32_t temp4_1 = var_6c_1
                            var_6c_1 -= 1
                            
                            if (temp4_1 == 1)
                                break
                            
                            ecx_17 = ecx_18
                        
                        edi_1 = var_9c_1
                        esi_8 = var_7c_1
                    
                    edi_1 += 4
                    esi_8 = &esi_8[1]
                    var_9c_1 = edi_1
                    var_7c_1 = esi_8
                    *(edi_1 - 4) = (divs.dp.d(sx.q(var_88_1), eax_20)).b
                    *(edi_1 - 3) = (divs.dp.d(sx.q(var_84_1), eax_20)).b
                    *(edi_1 - 2) = (divs.dp.d(sx.q(var_98_1), eax_20)).b
                    var_90_1 += neg.d(arg5)
                    *(edi_1 - 1) = (divs.dp.d(sx.q(var_a0_1), eax_20)).b
                    var_a8_3 += arg5
                    int32_t temp3_1 = var_80_1
                    var_80_1 -= 1
                    
                    if (temp3_1 == 1)
                        break
                    
                    eax_37 = var_28_1
                    ecx_15 = var_34_1
                    edx_22 = var_50_1
                
                ebx_1 = var_20
            
            edi_1 += eax_16
            ecx_10 = eax_34
            var_8c_1 += neg.d(arg6)
            i = i_1
            i_1 -= 1
            var_9c_1 = edi_1
            var_94_1 = ecx_10
        while (i != 1)
    
    if (ebx_1 != 0)
        int32_t* var_c4_3 = ebx_1
        sub_6b4d5b()
    
    result = result_2
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
