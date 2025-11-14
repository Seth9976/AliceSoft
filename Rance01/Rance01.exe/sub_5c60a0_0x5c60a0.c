// 函数: sub_5c60a0
// 地址: 0x5c60a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0
int32_t eax_1

if (arg1[0x16] s>= 2 && arg1[1] != 0)
    eax_1 = arg1[0xd]

int32_t edx_2
int32_t ebx

if (arg1[0x16] s< 2 || arg1[1] == 0 || eax_1 s<= 0xffffffff)
    edx_2 = 0xffffffff
    ebx = 0xffffff7d
else
    ebx = 0
    int32_t var_7c_1 = 0
    
    if (eax_1 s> 0)
        do
            int32_t eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_5c5c40(arg1, i)
            int32_t temp1_1 = ebx
            ebx += eax_2
            var_7c_1 = adc.d(var_7c_1, edx_1, temp1_1 + eax_2 u< temp1_1)
            i += 1
        while (i s< arg1[0xd])
    
    edx_2 = var_7c_1

int32_t var_98 = ebx
int32_t var_94 = edx_2

if (arg1[0x16] s>= 2)
    if (arg1[1] == 0)
        return 0xffffff76
    
    if (arg3 s>= 0 && (arg3 s> 0 || arg2 u>= 0) && arg3 s<= edx_2
            && (arg3 s< edx_2 || arg2 u<= ebx))
        int32_t ecx_2 = arg1[0xd]
        int32_t ecx_3 = ecx_2 - 1
        int32_t var_84 = ecx_3
        
        if (ecx_2 - 1 s>= 0)
            int32_t* eax_7 = arg1[0x11] + ecx_3 * 0x10 + 8
            int32_t temp21_1
            
            do
                int32_t temp9_1 = ebx
                ebx -= *eax_7
                edx_2 = sbb.d(edx_2, eax_7[1], temp9_1 u< *eax_7)
                
                if (arg3 s> edx_2)
                    break
                
                if (arg3 s>= edx_2 && arg2 u>= ebx)
                    break
                
                eax_7 -= 0x10
                temp21_1 = ecx_3
                ecx_3 -= 1
            while (temp21_1 - 1 s>= 0)
            var_84 = ecx_3
            var_94 = edx_2
            var_98 = ebx
        
        int32_t edx_3 = arg1[0xe]
        int32_t esi_1 = *(edx_3 + (ecx_3 << 3) + 4)
        int32_t* eax_8 = edx_3 + (ecx_3 << 3)
        int32_t result_1 = eax_8[2]
        int32_t ecx_4 = ecx_3 << 4
        int32_t var_9c = eax_8[3]
        void* eax_9 = arg1[0x11]
        int32_t ebx_1 = *(eax_9 + ecx_4 + 8)
        int32_t* eax_10 = eax_9 + ecx_4
        int32_t ecx_5 = *eax_10
        int32_t result_11 = *eax_8
        int32_t edx_7 = eax_10[1]
        int32_t var_7c_2 = adc.d(eax_10[3], edx_7, ebx_1 + ecx_5 u< ebx_1)
        int32_t eax_14 = ecx_5 - var_98
        int32_t var_ac = esi_1
        int32_t var_60 = ecx_5
        int32_t eax_18 = eax_14 + arg2
        int32_t var_5c = edx_7
        int32_t eax_20 = adc.d(sbb.d(edx_7, var_94, ecx_5 u< var_98), arg3, eax_14 + arg2 u< eax_14)
        int32_t var_80 = ebx_1 + ecx_5
        int32_t result_2 = result_11
        int32_t var_8c_1 = esi_1
        int32_t result
        void* var_78
        
        if (esi_1 s> var_9c || (esi_1 s>= var_9c && result_11 u>= result_1))
        label_5c6677:
            int32_t result_6
            int32_t edx_46
            edx_46:result_6 = sx.q(sub_5c4230(arg1, result_2, var_8c_1))
            result = result_6
            arg1[0x14] = 0xffffffff
            arg1[0x15] = 0xffffffff
            
            if ((result_6 | edx_46) == 0)
                int32_t result_7
                int32_t edx_47
                result_7, edx_47 = sub_5c4290(arg1, &var_78, 0xffffffff, 0xffffffff)
                result = result_7
                
                if (edx_47 s>= 0 && (edx_47 s> 0 || result_7 u>= 0))
                    int32_t ecx_42
                    
                    if (var_84 == arg1[0x18])
                        ecx_42 = sub_5b55f0(&arg1[0x78])
                    else
                        sub_5c5500(arg1)
                        ecx_42 = arg1[0x10]
                        arg1[0x18] = var_84
                        arg1[0x17] = *(ecx_42 + (var_84 << 2))
                        arg1[0x16] = 3
                    
                    int32_t eax_83 = arg1[0x17]
                    int32_t var_cc_5 = eax_83
                    sub_5b9df0(eax_83, &arg1[0x1e], ecx_42)
                    int32_t edx_50 = sub_5b9a70(&var_78, &arg1[0x1e])
                    
                    while (true)
                        if (arg1 == 0xffffff88)
                            goto label_5c6709
                        
                        if (arg1[0x1e] == 0)
                            break
                        
                        int32_t var_cc_6 = 0
                        void var_28
                        int32_t eax_86 = sub_5b9e20(&arg1[0x1e], &var_28, edx_50)
                        
                        while (true)
                            int32_t eax_87
                            int32_t edx_51
                            edx_51:eax_87 = sx.q(eax_86)
                            
                            if ((eax_87 | edx_51) != 0)
                                if (edx_51 s< 0 || (edx_51 s<= 0 && eax_87 u< 0))
                                    result = 0xffffff78
                                else
                                    int32_t var_14
                                    edx_50 = var_14
                                    int32_t var_18
                                    
                                    if ((var_18 & edx_50) != 0xffffffff)
                                        int32_t ecx_54 = arg1[0x11]
                                        int32_t eax_100 = arg1[0x18] * 2
                                        int32_t esi_24 = var_18 - *(ecx_54 + (eax_100 << 3))
                                        int32_t edx_58 = sbb.d(edx_50, 
                                            *(ecx_54 + (eax_100 << 3) + 4), 
                                            var_18 u< *(ecx_54 + (eax_100 << 3)))
                                        arg1[0x14] = esi_24
                                        arg1[0x15] = edx_58
                                        
                                        if (edx_58 s<= 0 && (edx_58 s< 0 || esi_24 u< 0))
                                            arg1[0x14] = 0
                                            arg1[0x15] = 0
                                        
                                        int32_t temp39_1 = arg1[0x14]
                                        arg1[0x14] += var_98
                                        arg1[0x15] =
                                            adc.d(arg1[0x15], var_94, temp39_1 + var_98 u< temp39_1)
                                        int32_t temp40_1 = arg1[0x15]
                                        
                                        if (temp40_1 s<= arg3
                                                && (temp40_1 s< arg3 || arg1[0x14] u<= arg2))
                                            int32_t eax_103
                                            int32_t edx_59
                                            eax_103, edx_59 = sub_5c5c40(arg1, 0xffffffff)
                                            
                                            if (arg3 s<= edx_59
                                                    && (arg3 s< edx_59 || arg2 u<= eax_103))
                                                long double x87_r7_4 = float.t(0)
                                                *(arg1 + 0x68) = fconvert.d(x87_r7_4)
                                                *(arg1 + 0x70) = fconvert.d(x87_r7_4)
                                                return 0
                                        
                                        result = 0xffffff7f
                                    else
                                        if (arg1 == 0xffffff88)
                                        label_5c6709:
                                            eax_86 = 0
                                            continue
                                        
                                        if (arg1[0x1e] == 0)
                                            break
                                        
                                        int32_t var_cc_7 = 1
                                        edx_50 = sub_5b9e20(&arg1[0x1e], nullptr, edx_50)
                                        break
                                
                                int32_t var_b4_2 = 0xffffffff
                                goto label_5c68df
                            
                            int32_t result_8
                            int32_t* edx_53
                            edx_53:result_8 = sx.q(sub_5c4230(arg1, result_2, var_8c_1))
                            result = result_8
                            
                            if (edx_53 s>= 0 && (edx_53 s> 0 || result_8 u>= 0))
                                void** var_cc_9 = &var_78
                                int32_t result_13
                                int32_t edx_54
                                result_13, edx_54 = sub_5c4340(arg1, edx_53)
                                int32_t esi_23 = edx_54
                                int32_t result_9 = result_13
                                result = result_9
                                
                                if (esi_23 s>= 0 && (esi_23 s> 0 || result_9 u>= 0))
                                    while (true)
                                        void* eax_93 = var_78
                                        int32_t* edx_56 = zx.d(*(eax_93 + 0xf))
                                        
                                        if ((((zx.d(*(eax_93 + 0x11)) << 8 | zx.d(*(eax_93 + 0x10)))
                                                << 8 | edx_56) << 8 | zx.d(*(eax_93 + 0xe))) == arg1[0x17])
                                            int32_t eax_96
                                            eax_96, edx_56 = sub_5b95e0(&var_78)
                                            int32_t result_10
                                            
                                            if (edx_56 s> 0xffffffff)
                                                result_10 = result_9
                                                return sub_5c5cc0(arg1, result_9, esi_23)
                                            
                                            if (edx_56 s< 0xffffffff)
                                                if ((*(var_78 + 5) & 1) == 0)
                                                    result_10 = result_9
                                                    return sub_5c5cc0(arg1, result_9, esi_23)
                                            else if (eax_96 u> 0xffffffff
                                                    || (*(var_78 + 5) & 1) == 0)
                                                result_10 = result_9
                                                return sub_5c5cc0(arg1, result_9, esi_23)
                                        
                                        void** var_cc_10 = &var_78
                                        arg1[2] = result_9
                                        arg1[3] = esi_23
                                        int32_t result_14
                                        int32_t edx_57
                                        result_14, edx_57 = sub_5c4340(arg1, edx_56)
                                        esi_23 = edx_57
                                        result_9 = result_14
                                        
                                        if (esi_23 s<= 0)
                                            if (esi_23 s< 0)
                                                break
                                            
                                            if (result_9 u< 0)
                                                break
                                    
                                    result = result_9
                            
                            goto label_5c68df
                    
                    goto label_5c6709
        else
            while (true)
                int32_t ebx_4 = result_1 - result_11
                int32_t eax_23 = sbb.d(var_9c, esi_1, result_1 u< result_11)
                int32_t var_3c_1 = eax_23
                int32_t result_12
                int32_t ebx_9
                
                if (eax_23 s> 0 || (eax_23 s>= 0 && ebx_4 u>= 0x10000))
                    int32_t var_4c_1 = sbb.d(eax_20, edx_7, eax_18 u< ecx_5)
                    int32_t var_34_1 = sbb.d(var_7c_2, edx_7, var_80 u< ecx_5)
                    int32_t eax_28
                    int32_t edx_8
                    eax_28, edx_8 = __ftol2(float.t((eax_18 - ecx_5).q) * float.t(ebx_4.q)
                        / float.t((var_80 - ecx_5).q))
                    int32_t eax_29 = eax_28 + result_11
                    ebx_9 = sbb.d(adc.d(edx_8, esi_1, eax_28 + result_11 u< eax_28), 0, 
                        eax_29 u< 0x10000)
                    result_12 = eax_29 - 0x10000
                    int32_t eax_32 = adc.d(esi_1, 0, result_11 u>= 0xffff0000)
                    
                    if (ebx_9 s<= eax_32 && (ebx_9 s< eax_32 || result_12 u< result_11 + 0x10000))
                        result_12 = result_11
                        ebx_9 = esi_1
                else
                    result_12 = result_11
                    ebx_9 = esi_1
                
                if (result_12 != arg1[2] || ebx_9 != arg1[3])
                    int32_t ecx_11 = *arg1
                    int32_t eax_37
                    
                    if (ecx_11 == 0)
                        eax_37 = 0xffffff7f
                    else
                        int32_t eax_34 = arg1[0xb1]
                        int32_t eax_35
                        
                        if (eax_34 != 0)
                            eax_35 = eax_34(ecx_11, result_12, ebx_9, 0)
                        
                        if (eax_34 == 0 || eax_35 == 0xffffffff)
                            eax_37 = 0xffffff80
                        else
                            arg1[2] = result_12
                            eax_37 = 0
                            arg1[3] = ebx_9
                            
                            if (arg1[7] s>= 0)
                                __builtin_memset(&arg1[8], 0, 0x14)
                    
                    int32_t result_3
                    int32_t edx_11
                    edx_11:result_3 = sx.q(eax_37)
                    result = result_3
                    
                    if ((result_3 | edx_11) != 0)
                        break
                    
                    esi_1 = var_ac
                
                while (true)
                    int32_t result_4
                    int32_t edx_14
                    result_4, edx_14 = sub_5c4290(arg1, &var_78, result_1 - arg1[2], 
                        sbb.d(var_9c, arg1[3], result_1 u< arg1[2]))
                    result = result_4
                    
                    if (result_4 == 0xffffff80)
                        if (edx_14 == 0xffffffff)
                            goto label_5c68df
                        
                        esi_1 = var_ac
                    
                    int32_t eax_43
                    
                    if (edx_14 s<= 0 && (edx_14 s< 0 || result u< 0))
                        int32_t eax_40 = adc.d(esi_1, 0, result_11 u>= 0xffffffff)
                        
                        if (ebx_9 s< eax_40)
                            goto label_5c6677
                        
                        if (ebx_9 s<= eax_40 && result_12 u<= result_11 + 1)
                            goto label_5c6677
                        
                        if ((result_12 | ebx_9) == 0)
                            goto label_5c68df
                        
                        int32_t result_15 = result_12 - 0x10000
                        ebx_9 = adc.d(ebx_9, 0xffffffff, result_12 u>= 0x10000)
                        result_12 = result_15
                        
                        if (ebx_9 s<= var_ac && (ebx_9 s< var_ac || result_15 u<= result_11))
                            result_15 = result_11 + 1
                            result_12 = result_15
                            ebx_9 = eax_40
                        
                        int32_t ecx_16 = *arg1
                        
                        if (ecx_16 == 0)
                            eax_43 = 0xffffff7f
                        else
                            int32_t eax_41 = arg1[0xb1]
                            int32_t eax_42
                            
                            if (eax_41 != 0)
                                eax_42 = eax_41(ecx_16, result_15, ebx_9, 0)
                            
                            if (eax_41 == 0 || eax_42 == 0xffffffff)
                                eax_43 = 0xffffff80
                            else
                                eax_43 = 0
                                arg1[2] = result_15
                                arg1[3] = ebx_9
                                
                                if (arg1[7] s>= 0)
                                    __builtin_memset(&arg1[8], 0, 0x14)
                        
                        goto label_5c65fd
                    
                    void* eax_44 = var_78
                    
                    if ((((zx.d(*(eax_44 + 0x11)) << 8 | zx.d(*(eax_44 + 0x10))) << 8
                            | zx.d(*(eax_44 + 0xf))) << 8 | zx.d(*(eax_44 + 0xe)))
                            == *(arg1[0x10] + (var_84 << 2)))
                        void* ecx_24 = var_78
                        int32_t eax_48
                        int32_t edx_20
                        edx_20:eax_48 = sx.q(zx.d(*(ecx_24 + 0xd)))
                        int32_t eax_51
                        int32_t edx_22
                        edx_22:eax_51 = sx.q(zx.d(*(ecx_24 + 0xc)))
                        int32_t esi_4 = eax_48 << 8 | eax_51
                        int32_t eax_53
                        int32_t edx_24
                        edx_24:eax_53 = sx.q(zx.d(*(var_78 + 0xb)))
                        int32_t esi_6 = esi_4 << 8 | eax_53
                        int32_t eax_56
                        int32_t edx_25
                        edx_25:eax_56 = sx.q(zx.d(*(var_78 + 0xa)))
                        int32_t esi_8 = esi_6 << 8 | eax_56
                        int32_t eax_58
                        int32_t edx_27
                        edx_27:eax_58 = sx.q(zx.d(*(var_78 + 9)))
                        int32_t esi_10 = esi_8 << 8 | eax_58
                        int32_t ecx_32 = (((edx_20 << 8 | eax_48 u>> 0xffffffe8 | edx_22) << 8
                            | esi_4 u>> 0xffffffe8 | edx_24) << 8 | esi_6 u>> 0xffffffe8 | edx_25) << 8
                            | esi_8 u>> 0xffffffe8 | edx_27
                        int32_t eax_61
                        int32_t edx_28
                        edx_28:eax_61 = sx.q(zx.d(*(var_78 + 8)))
                        int32_t esi_12 = esi_10 << 8 | eax_61
                        int32_t eax_63
                        int32_t edx_30
                        edx_30:eax_63 = sx.q(zx.d(*(var_78 + 7)))
                        int32_t eax_64 = eax_63 | esi_12 << 8
                        int32_t eax_67
                        int32_t edx_32
                        edx_32:eax_67 = sx.q(zx.d(*(var_78 + 6)))
                        ecx_5 = eax_64 << 8 | eax_67
                        int32_t esi_16 = ((ecx_32 << 8 | esi_10 u>> 0xffffffe8 | edx_28) << 8
                            | esi_12 u>> 0xffffffe8 | edx_30) << 8 | eax_64 u>> 0xffffffe8 | edx_32
                        
                        if ((ecx_5 & esi_16) == 0xffffffff)
                            esi_1 = var_ac
                        else if (esi_16 s> eax_20 || (esi_16 s>= eax_20 && ecx_5 u>= eax_18))
                            esi_1 = var_ac
                            int32_t eax_75 = adc.d(esi_1, 0, result_11 u>= 0xffffffff)
                            
                            if (ebx_9 s< eax_75)
                                goto label_5c6677
                            
                            if (ebx_9 s<= eax_75 && result_12 u<= result_11 + 1)
                                goto label_5c6677
                            
                            if (result_1 != arg1[2] || var_9c != arg1[3])
                                var_80 = ecx_5
                                ecx_5 = var_60
                                result_1 = result_12
                                var_9c = ebx_9
                                var_7c_2 = esi_16
                            label_5c6648:
                                edx_7 = var_5c
                                
                                if (esi_1 s< var_9c)
                                    break
                                
                                if (esi_1 s> var_9c)
                                    goto label_5c6677
                                
                                if (result_11 u< result_1)
                                    break
                                
                                goto label_5c6677
                            
                            int32_t result_16 = result_12
                            result_12 -= 0x10000
                            ebx_9 = adc.d(ebx_9, 0xffffffff, result_16 u>= 0x10000)
                            result_1 = result
                            var_9c = edx_14
                            
                            if (ebx_9 s<= esi_1 && (ebx_9 s< esi_1 || result_12 u<= result_11))
                                result_12 = result_11 + 1
                                ebx_9 = eax_75
                            
                            eax_43 = sub_5c4230(arg1, result_12, ebx_9)
                        label_5c65fd:
                            int32_t result_5
                            int32_t edx_43
                            edx_43:result_5 = sx.q(eax_43)
                            result = result_5
                            
                            if ((result_5 | edx_43) != 0)
                                goto label_5c68df
                            
                            esi_1 = var_ac
                        else
                            esi_1 = arg1[3]
                            result_2 = result
                            result_11 = arg1[2]
                            var_8c_1 = edx_14
                            int32_t eax_72 = sbb.d(eax_20, esi_16, eax_18 u< ecx_5)
                            var_ac = esi_1
                            var_60 = ecx_5
                            var_5c = esi_16
                            
                            if (eax_72 s> 0 || (eax_72 s>= 0 && eax_18 - ecx_5 u> 0xac44))
                                goto label_5c6648
                            
                            result_12 = result_11
                            ebx_9 = esi_1
                    
                    if (esi_1 s> var_9c)
                        goto label_5c6677
                    
                    if (esi_1 s>= var_9c)
                        if (result_11 u>= result_1)
                            goto label_5c6677
    label_5c68df:
        arg1[0x14] = 0xffffffff
        arg1[0x15] = 0xffffffff
        sub_5b5350(&arg1[0x78])
        sub_5b4f70(&arg1[0x94])
        arg1[0x16] = 2
        return result

return 0xffffff7d
