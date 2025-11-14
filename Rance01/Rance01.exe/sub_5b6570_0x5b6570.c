// 函数: sub_5b6570
// 地址: 0x5b6570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t* edi = arg1

if (edi[2] s> 0)
    *edi
    int32_t ebx_1 = divs.dp.d(sx.q(arg4), *edi)
    int32_t esi_1 = ebx_1 << 2
    int32_t var_14_1 = ebx_1
    __alloca_probe_16(esi_1)
    __alloca_probe_16(esi_1)
    int32_t var_10_1 = 0
    int32_t __saved_edi
    
    if (ebx_1 s> 0)
        int32_t* var_18_1 = &__saved_edi
        int32_t ecx_20
        
        do
            int32_t var_c_2 = edi[0xa]
            int32_t eax_10
            int32_t edx_4
            eax_10, edx_4 = sub_5b4c20(arg3, edi[9])
            int32_t esi_5
            int32_t ebx_3
            
            if (eax_10 s< 0)
                ebx_3 = edi[2]
                esi_5 = 0
            label_5b662b:
                int32_t edi_3 = var_c_2
                int32_t i = sub_5b4c20(arg3, edi_3)
                
                if (i s< 0)
                    do
                        if (edi_3 s<= 1)
                            var_c_2 = edi_3
                            
                            if (i s< 0)
                                goto label_5b66bc
                            
                            goto label_5b665e
                        
                        edi_3 -= 1
                        i = sub_5b4c20(arg3, edi_3)
                    while (i s< 0)
                    
                    var_c_2 = edi_3
                
            label_5b665e:
                int32_t eax_13 = sub_5b6410(i)
                int32_t i_1 = ebx_3 - esi_5
                
                if (i_1 s> 1)
                    do
                        int32_t edx_9 = i_1 s>> 1
                        int32_t ecx_10 = edx_9 + esi_5
                        int32_t ecx_12 =
                            neg.d(sbb.d(ecx_10, ecx_10, eax_13 u< *(arg1[5] + (ecx_10 << 2))))
                        ebx_3 -= neg.d(ecx_12) & edx_9
                        esi_5 += (ecx_12 - 1) & edx_9
                        i_1 = ebx_3 - esi_5
                    while (i_1 s> 1)
                    
                    edi_3 = var_c_2
                
                int32_t eax_15 = sx.d(*(arg1[7] + esi_5))
                
                if (eax_15 s> edi_3)
                    sub_5b4cd0(edi_3, arg1, arg3)
                label_5b66bc:
                    esi_5 = 0xffffffff
                else
                    sub_5b4cd0(eax_15, arg1, arg3)
                
                ebx_1 = var_14_1
            else
                int32_t edi_1 = *(edi[8] + (eax_10 << 2))
                
                if (edi_1 s< 0)
                    esi_5 = edi_1 s>> 0xf & 0x7fff
                    ebx_3 = arg1[2] - (edi_1 & 0x7fff)
                    goto label_5b662b
                
                sub_5b4cd0(sx.d(*(arg1[7] + edi_1 - 1)), edx_4, arg3)
                esi_5 = edi_1 - 1
            *var_18_1 = esi_5
            
            if (esi_5 == 0xffffffff)
                sub_6b4885(eax_1 ^ &__saved_ebp)
                return 0xffffffff
            
            edi = arg1
            ecx_20 = var_10_1 + 1
            *var_18_1 = arg1[4] + ((*arg1 * esi_5) << 2)
            var_10_1 = ecx_20
            var_18_1 = &var_18_1[1]
        while (ecx_20 s< ebx_1)
    
    int32_t i_2 = 0
    int32_t var_c_3 = 0
    
    if (*edi s> 0)
        float* var_10_2 = arg2
        
        do
            int32_t esi_6 = 0
            
            if (ebx_1 s>= 4)
                float* eax_20 = var_10_2
                int32_t __saved_ebx
                int32_t* edx_15 = &__saved_ebx
                int32_t j_1 = ((ebx_1 - 4) u>> 2) + 1
                esi_6 = j_1 << 2
                int32_t j
                
                do
                    int32_t ebx_5 = edx_15[-1]
                    long double x87_r7_2 =
                        fconvert.t(*(edx_15[-2] + (i_2 << 2))) + fconvert.t(*eax_20)
                    eax_20 = &eax_20[4]
                    edx_15 = &edx_15[4]
                    j = j_1
                    j_1 -= 1
                    eax_20[-4] = fconvert.s(x87_r7_2)
                    int32_t ebx_6 = edx_15[-4]
                    eax_20[-3] =
                        fconvert.s(fconvert.t(*(ebx_5 + (i_2 << 2))) + fconvert.t(eax_20[-3]))
                    int32_t ebx_7 = edx_15[-3]
                    eax_20[-2] =
                        fconvert.s(fconvert.t(*(ebx_6 + (i_2 << 2))) + fconvert.t(eax_20[-2]))
                    eax_20[-1] =
                        fconvert.s(fconvert.t(*(ebx_7 + (i_2 << 2))) + fconvert.t(eax_20[-1]))
                while (j != 1)
                ebx_1 = var_14_1
                edi = arg1
            
            if (esi_6 s< ebx_1)
                void* eax_23 = &arg2[var_c_3 + esi_6]
                
                do
                    long double x87_r7_9 = fconvert.t(*((&__saved_edi)[esi_6] + (i_2 << 2)))
                    esi_6 += 1
                    long double x87_r7_10 = x87_r7_9 + fconvert.t(*eax_23)
                    eax_23 += 4
                    *(eax_23 - 4) = fconvert.s(x87_r7_10)
                while (esi_6 s< ebx_1)
                
                edi = arg1
            
            var_c_3 += ebx_1
            var_10_2 = &var_10_2[ebx_1]
            i_2 += 1
        while (i_2 s< *edi)

sub_6b4885(eax_1 ^ &__saved_ebp)
return 0
