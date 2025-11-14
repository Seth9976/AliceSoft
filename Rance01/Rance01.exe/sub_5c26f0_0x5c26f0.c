// 函数: sub_5c26f0
// 地址: 0x5c26f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float ebx = arg4
void* ebp = arg7
arg4 = fconvert.s(fconvert.t(6.2831854820251465) / float.t(arg5))
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_70ca80(mxcsr, x87control, fconvert.t(arg4))
float var_8 = fconvert.s(sub_70c950(mxcsr, x87control_1, fconvert.t(arg4)))
int32_t eax_1 = (arg5 + 1) s>> 1
int32_t eax_3 = (ebx - 1) s>> 1
int32_t eax_5 = ebx i* arg6
int32_t eax_7 = ebx i* arg5

if (ebx != 1)
    int32_t edx = 0
    
    if (ebp s>= 4)
        void* ecx_1 = arg9 + 0xc
        void* eax_9 = arg10 + 4
        int32_t i_25 = ((ebp - 4) u>> 2) + 1
        int32_t i
        
        do
            *(eax_9 - 4) = fconvert.s(fconvert.t(*(ecx_1 - 0xc)))
            eax_9 += 0x10
            ecx_1 += 0x10
            i = i_25
            i_25 -= 1
            *(eax_9 - 0x10) = fconvert.s(fconvert.t(*(arg9 - arg10 i+ eax_9 - 0x10)))
            *(eax_9 - 0xc) = fconvert.s(fconvert.t(*(ecx_1 - 0x14)))
            *(eax_9 - 8) = fconvert.s(fconvert.t(*(ecx_1 - 0x10)))
        while (i != 1)
        edx = (((ebp - 4) u>> 2) + 1) * 4
    
    if (edx s< ebp)
        float* eax_11 = arg10 + (edx << 2)
        void* i_32 = ebp - edx
        void* i_1
        
        do
            long double x87_r7_10 = fconvert.t(*(eax_11 i+ arg9 - arg10))
            eax_11 = &eax_11[1]
            i_1 = i_32
            i_32 -= 1
            eax_11[-1] = fconvert.s(x87_r7_10)
        while (i_1 != 1)
    
    int32_t eax_12 = 0
    int32_t ecx_7
    
    if (arg5 s<= 1)
        ecx_7 = arg6
    else
        int32_t var_24_1 = arg5 - 1
        ecx_7 = arg6
        
        while (true)
            int32_t eax_13 = eax_12 + eax_5
            arg4 = 0f
            int32_t var_5c_1 = eax_13
            
            if (ecx_7 s>= 4)
                int32_t i_34 = ((ecx_7 - 4) u>> 2) + 1
                arg4 = i_34 << 2
                int32_t i_2
                
                do
                    *(arg1 + (eax_13 << 2)) = fconvert.s(fconvert.t(arg3[eax_13]))
                    int32_t eax_14 = eax_13 i+ ebx
                    *(arg1 + (eax_14 << 2)) = fconvert.s(fconvert.t(arg3[eax_14]))
                    int32_t eax_15 = eax_14 i+ ebx
                    *(arg1 + (eax_15 << 2)) = fconvert.s(fconvert.t(arg3[eax_15]))
                    int32_t eax_16 = eax_15 i+ ebx
                    *(arg1 + (eax_16 << 2)) = fconvert.s(fconvert.t(arg3[eax_16]))
                    eax_13 = eax_16 i+ ebx
                    i_2 = i_34
                    i_34 -= 1
                while (i_2 != 1)
                ecx_7 = arg6
            
            if (arg4 s< ecx_7)
                float* edx_13 = arg3 - arg1
                int32_t ecx_9 = ecx_7 i- arg4
                float* eax_17 = arg1 + (eax_13 << 2)
                float* var_48_1 = edx_13
                
                while (true)
                    *eax_17 = fconvert.s(fconvert.t(*(edx_13 + eax_17)))
                    eax_17 = &eax_17[ebx]
                    int32_t temp11_1 = ecx_9
                    ecx_9 -= 1
                    
                    if (temp11_1 == 1)
                        break
                    
                    edx_13 = var_48_1
                
                ecx_7 = arg6
            
            int32_t temp7_1 = var_24_1
            var_24_1 -= 1
            
            if (temp7_1 == 1)
                break
            
            eax_12 = var_5c_1
    
    int32_t eax_19 = neg.d(ebx)
    int32_t edx_15 = 0
    int32_t var_14_1 = eax_19
    
    if (eax_3 s<= ecx_7)
        if (arg5 s> 1)
            int32_t var_28_3 = eax_19 - 1
            float* var_2c_1 = arg11 + (eax_19 << 2) - 4
            int32_t var_3c_1 = arg5 - 1
            
            while (true)
                int32_t edx_27 = edx_15 + eax_5
                var_28_3 += ebx
                int32_t eax_24 = eax_19 i+ ebx
                var_2c_1 = &var_2c_1[ebx]
                
                if (ebx s> 2)
                    int32_t edx_30 = arg6
                    int32_t var_34_1 = var_28_3 - eax_24 + edx_27 + 1
                    float* ecx_26 = var_2c_1
                    int32_t i_22 = ((ebx - 3) u>> 1) + 1
                    int32_t i_3
                    
                    do
                        int32_t eax_31 = var_34_1 + 2
                        ecx_26 = &ecx_26[2]
                        var_34_1 = eax_31
                        arg4 = 0f
                        
                        if (edx_30 s>= 4)
                            arg4 = (((edx_30 - 4) u>> 2) + 1) * 4
                            int32_t j_16 = ((edx_30 - 4) u>> 2) + 1
                            int32_t j
                            
                            do
                                *(arg1 + (eax_31 << 2) - 4) = fconvert.s(
                                    fconvert.t(arg3[eax_31]) * fconvert.t(*ecx_26)
                                    + fconvert.t(ecx_26[-1]) * fconvert.t(arg3[eax_31 - 1]))
                                *(arg1 + (eax_31 << 2)) = fconvert.s(
                                    fconvert.t(ecx_26[-1]) * fconvert.t(arg3[eax_31])
                                    - fconvert.t(arg3[eax_31 - 1]) * fconvert.t(*ecx_26))
                                int32_t eax_32 = eax_31 i+ ebx
                                *(arg1 + (eax_32 << 2) - 4) = fconvert.s(
                                    fconvert.t(arg3[eax_32]) * fconvert.t(*ecx_26)
                                    + fconvert.t(ecx_26[-1]) * fconvert.t(arg3[eax_32 - 1]))
                                *(arg1 + (eax_32 << 2)) = fconvert.s(
                                    fconvert.t(ecx_26[-1]) * fconvert.t(arg3[eax_32])
                                    - fconvert.t(arg3[eax_32 - 1]) * fconvert.t(*ecx_26))
                                int32_t eax_33 = eax_32 i+ ebx
                                *(arg1 + (eax_33 << 2) - 4) = fconvert.s(
                                    fconvert.t(arg3[eax_33]) * fconvert.t(*ecx_26)
                                    + fconvert.t(ecx_26[-1]) * fconvert.t(arg3[eax_33 - 1]))
                                *(arg1 + (eax_33 << 2)) = fconvert.s(
                                    fconvert.t(ecx_26[-1]) * fconvert.t(arg3[eax_33])
                                    - fconvert.t(arg3[eax_33 - 1]) * fconvert.t(*ecx_26))
                                int32_t eax_34 = eax_33 i+ ebx
                                *(arg1 + (eax_34 << 2) - 4) = fconvert.s(
                                    fconvert.t(arg3[eax_34]) * fconvert.t(*ecx_26)
                                    + fconvert.t(ecx_26[-1]) * fconvert.t(arg3[eax_34 - 1]))
                                *(arg1 + (eax_34 << 2)) = fconvert.s(
                                    fconvert.t(ecx_26[-1]) * fconvert.t(arg3[eax_34])
                                    - fconvert.t(arg3[eax_34 - 1]) * fconvert.t(*ecx_26))
                                eax_31 = eax_34 i+ ebx
                                j = j_16
                                j_16 -= 1
                            while (j != 1)
                            edx_30 = arg6
                        
                        if (arg4 s< edx_30)
                            float* ebp_1 = arg1 + (eax_31 << 2)
                            float* eax_35 = &arg3[eax_31 - 1]
                            arg4 = arg6 i- arg4
                            float j_1
                            
                            do
                                *(eax_35 + arg1 - arg3) = fconvert.s(
                                    fconvert.t(ecx_26[-1]) * fconvert.t(*eax_35)
                                    + fconvert.t(eax_35[1]) * fconvert.t(*ecx_26))
                                long double x87_r7_50 =
                                    fconvert.t(ecx_26[-1]) * fconvert.t(eax_35[1])
                                long double x87_r6_24 = fconvert.t(*ecx_26) * fconvert.t(*eax_35)
                                eax_35 = &eax_35[ebx]
                                *ebp_1 = fconvert.s(x87_r7_50 - x87_r6_24)
                                ebp_1 = &ebp_1[ebx]
                                j_1 = arg4
                                arg4 -= 1
                            while (j_1 != 1)
                            ebp = arg7
                            edx_30 = arg6
                        
                        i_3 = i_22
                        i_22 -= 1
                    while (i_3 != 1)
                
                int32_t temp15_1 = var_3c_1
                var_3c_1 -= 1
                
                if (temp15_1 == 1)
                    break
                
                edx_15 = edx_27
                eax_19 = eax_24
    else if (arg5 s> 1)
        arg4 = arg11 + (eax_19 << 2) - 4
        int32_t ecx_10 = ebx << 2
        float* edx_18 = arg1 - ecx_10
        float* eax_23 = arg3 - ecx_10 - 4
        int32_t var_38_1 = arg5 - 1
        
        while (true)
            float* edx_19 = &edx_18[eax_5]
            eax_23 = &eax_23[eax_5]
            arg4 += ebx << 2
            float* var_24_2 = edx_19
            float* var_10_1 = eax_23
            
            if (arg6 s> 0)
                int32_t i_24 = arg6
                int32_t i_4
                
                do
                    edx_19 = &edx_19[ebx]
                    eax_23 = &eax_23[ebx]
                    float* var_4_1 = eax_23
                    
                    if (ebx s> 2)
                        float ecx_19 = arg4
                        float* var_28_2 = edx_19
                        int32_t j_12 = ((ebx - 3) u>> 1) + 1
                        int32_t j_2
                        
                        do
                            long double x87_r7_17 =
                                fconvert.t(eax_23[2]) * fconvert.t(*(ecx_19 i+ 4))
                            var_28_2 = &var_28_2[2]
                            long double x87_r6_1 = fconvert.t(eax_23[3])
                            eax_23 = &eax_23[2]
                            long double x87_r6_2 = x87_r6_1 * fconvert.t(*(ecx_19 i+ 8))
                            ecx_19 += 8
                            j_2 = j_12
                            j_12 -= 1
                            *(eax_23 + arg1 - arg3) = fconvert.s(x87_r7_17 + x87_r6_2)
                            *var_28_2 = fconvert.s(fconvert.t(eax_23[1]) * fconvert.t(*(ecx_19 - 4))
                                - fconvert.t(*eax_23) * fconvert.t(*ecx_19))
                        while (j_2 != 1)
                        eax_23 = var_4_1
                    
                    i_4 = i_24
                    i_24 -= 1
                while (i_4 != 1)
                eax_23 = var_10_1
            
            int32_t temp16_1 = var_38_1
            var_38_1 -= 1
            
            if (temp16_1 == 1)
                break
            
            edx_18 = var_24_2
    
    int32_t edx_43 = eax_5 * arg5
    int32_t var_5c_3 = 0
    
    if (eax_3 s>= arg6)
        if (eax_1 s> 1)
            float* var_2c_3 = arg1 + (edx_43 << 2) - 4
            float* var_28_5 = &arg3[edx_43]
            float* ecx_36 = arg3
            arg4 = arg1 - 4
            int32_t i_21 = eax_1 - 1
            int32_t i_5
            
            do
                int32_t eax_50 = eax_5 * 4
                arg4 += eax_50
                var_28_5 -= eax_50
                var_2c_3 -= eax_50
                ecx_36 = &ecx_36[eax_5]
                
                if (arg6 s> 0)
                    float* var_38_2 = ecx_36
                    float* var_40_1 = var_28_5
                    float* ecx_38 = var_2c_3
                    float var_3c_2 = arg4
                    float* var_24_5 = ecx_38
                    int32_t j_11 = arg6
                    int32_t j_3
                    
                    do
                        if (ebx s> 2)
                            float* var_34_3 = var_40_1
                            void* edx_58 = arg3 - arg1
                            float* var_30_4 = var_38_2
                            float eax_53 = var_3c_2
                            int32_t k_1 = ((ebx - 3) u>> 1) + 1
                            int32_t k
                            
                            do
                                long double x87_r7_93 =
                                    fconvert.t(ecx_38[2]) + fconvert.t(*(eax_53 i+ 8))
                                var_30_4 = &var_30_4[2]
                                var_34_3 = &var_34_3[2]
                                ecx_38 = &ecx_38[2]
                                eax_53 += 8
                                k = k_1
                                k_1 -= 1
                                *(eax_53 i+ edx_58) = fconvert.s(x87_r7_93)
                                *(ecx_38 + edx_58) =
                                    fconvert.s(fconvert.t(*(eax_53 i+ 4)) - fconvert.t(ecx_38[1]))
                                *var_30_4 =
                                    fconvert.s(fconvert.t(ecx_38[1]) + fconvert.t(*(eax_53 i+ 4)))
                                *var_34_3 = fconvert.s(fconvert.t(*ecx_38) - fconvert.t(*eax_53))
                            while (k != 1)
                            ebp = arg7
                        
                        var_38_2 = &var_38_2[ebx]
                        var_3c_2 += ebx << 2
                        var_40_1 = &var_40_1[ebx]
                        ecx_38 = &var_24_5[ebx]
                        j_3 = j_11
                        j_11 -= 1
                        var_24_5 = ecx_38
                    while (j_3 != 1)
                
                i_5 = i_21
                i_21 -= 1
            while (i_5 != 1)
    else if (eax_1 s> 1)
        int32_t var_28_4 = var_14_1
        int32_t i_23 = eax_1 - 1
        int32_t i_6
        
        do
            var_5c_3 += eax_5
            var_28_4 += eax_5
            edx_43 -= eax_5
            
            if (ebx s> 2)
                int32_t edx_44 = edx_43 - var_5c_3
                int32_t eax_40 = var_28_4
                int32_t var_4_3 = edx_44
                int32_t var_34_2 = ((ebx - 3) u>> 1) + 1
                
                while (true)
                    int32_t eax_41 = eax_40 + 2
                    int32_t ecx_31 = eax_41 + edx_44
                    int32_t edx_45 = arg6
                    int32_t var_24_4 = eax_41
                    arg4 = 0f
                    
                    if (edx_45 s>= 4)
                        arg4 = (((edx_45 - 4) u>> 2) + 1) * 4
                        int32_t j_17 = ((edx_45 - 4) u>> 2) + 1
                        int32_t j_4
                        
                        do
                            int32_t ecx_32 = ecx_31 i+ ebx
                            int32_t eax_42 = eax_41 i+ ebx
                            arg3[eax_42 - 1] = fconvert.s(fconvert.t(*(arg1 + (ecx_32 << 2) - 4))
                                + fconvert.t(*(arg1 + (eax_42 << 2) - 4)))
                            arg3[ecx_32 - 1] = fconvert.s(fconvert.t(*(arg1 + (eax_42 << 2)))
                                - fconvert.t(*(arg1 + (ecx_32 << 2))))
                            arg3[eax_42] = fconvert.s(fconvert.t(*(arg1 + (eax_42 << 2)))
                                + fconvert.t(*(arg1 + (ecx_32 << 2))))
                            int32_t eax_43 = eax_42 i+ ebx
                            arg3[ecx_32] = fconvert.s(fconvert.t(*(arg1 + (ecx_32 << 2) - 4))
                                - fconvert.t(*(arg1 + (eax_42 << 2) - 4)))
                            int32_t ecx_33 = ecx_32 i+ ebx
                            arg3[eax_43 - 1] = fconvert.s(fconvert.t(*(arg1 + (ecx_33 << 2) - 4))
                                + fconvert.t(*(arg1 + (eax_43 << 2) - 4)))
                            arg3[ecx_33 - 1] = fconvert.s(fconvert.t(*(arg1 + (eax_43 << 2)))
                                - fconvert.t(*(arg1 + (ecx_33 << 2))))
                            arg3[eax_43] = fconvert.s(fconvert.t(*(arg1 + (eax_43 << 2)))
                                + fconvert.t(*(arg1 + (ecx_33 << 2))))
                            int32_t eax_44 = eax_43 i+ ebx
                            arg3[ecx_33] = fconvert.s(fconvert.t(*(arg1 + (ecx_33 << 2) - 4))
                                - fconvert.t(*(arg1 + (eax_43 << 2) - 4)))
                            int32_t ecx_34 = ecx_33 i+ ebx
                            arg3[eax_44 - 1] = fconvert.s(fconvert.t(*(arg1 + (ecx_34 << 2) - 4))
                                + fconvert.t(*(arg1 + (eax_44 << 2) - 4)))
                            arg3[ecx_34 - 1] = fconvert.s(fconvert.t(*(arg1 + (eax_44 << 2)))
                                - fconvert.t(*(arg1 + (ecx_34 << 2))))
                            arg3[eax_44] = fconvert.s(fconvert.t(*(arg1 + (eax_44 << 2)))
                                + fconvert.t(*(arg1 + (ecx_34 << 2))))
                            eax_41 = eax_44 i+ ebx
                            arg3[ecx_34] = fconvert.s(fconvert.t(*(arg1 + (ecx_34 << 2) - 4))
                                - fconvert.t(*(arg1 + (eax_44 << 2) - 4)))
                            ecx_31 = ecx_34 i+ ebx
                            j_4 = j_17
                            j_17 -= 1
                            arg3[eax_41 - 1] = fconvert.s(fconvert.t(*(arg1 + (ecx_31 << 2) - 4))
                                + fconvert.t(*(arg1 + (eax_41 << 2) - 4)))
                            arg3[ecx_31 - 1] = fconvert.s(fconvert.t(*(arg1 + (eax_41 << 2)))
                                - fconvert.t(*(arg1 + (ecx_31 << 2))))
                            arg3[eax_41] = fconvert.s(fconvert.t(*(arg1 + (eax_41 << 2)))
                                + fconvert.t(*(arg1 + (ecx_31 << 2))))
                            arg3[ecx_31] = fconvert.s(fconvert.t(*(arg1 + (ecx_31 << 2) - 4))
                                - fconvert.t(*(arg1 + (eax_41 << 2) - 4)))
                        while (j_4 != 1)
                        edx_45 = arg6
                    
                    if (arg4 s< edx_45)
                        float* var_2c_2 = &arg3[eax_41]
                        float* var_30_3 = &arg3[ecx_31]
                        void* ebp_5 = arg3 - arg1
                        float* eax_45 = arg1 + (eax_41 << 2) - 4
                        float* ecx_35 = arg1 + (ecx_31 << 2) - 4
                        arg4 = arg6 i- arg4
                        float j_5
                        
                        do
                            long double x87_r7_85 =
                                fconvert.t(ecx_35[ebx]) + fconvert.t(eax_45[ebx])
                            var_2c_2 = &var_2c_2[ebx]
                            var_30_3 = &var_30_3[ebx]
                            ecx_35 = &ecx_35[ebx]
                            eax_45 = &eax_45[ebx]
                            j_5 = arg4
                            arg4 -= 1
                            *(eax_45 + ebp_5) = fconvert.s(x87_r7_85)
                            *(ecx_35 + ebp_5) =
                                fconvert.s(fconvert.t(eax_45[1]) - fconvert.t(ecx_35[1]))
                            *var_2c_2 = fconvert.s(fconvert.t(eax_45[1]) + fconvert.t(ecx_35[1]))
                            *var_30_3 = fconvert.s(fconvert.t(*ecx_35) - fconvert.t(*eax_45))
                        while (j_5 != 1)
                        ebp = arg7
                    
                    int32_t temp40_1 = var_34_2
                    var_34_2 -= 1
                    eax_40 = var_24_4
                    
                    if (temp40_1 == 1)
                        break
                    
                    edx_44 = var_4_3
            
            i_6 = i_23
            i_23 -= 1
        while (i_6 != 1)

int32_t edx_69 = 0

if (ebp s>= 4)
    void* ecx_40 = arg10 + 0xc
    void* eax_56 = arg9 + 4
    int32_t i_26 = ((ebp - 4) u>> 2) + 1
    int32_t i_7
    
    do
        *(eax_56 - 4) = fconvert.s(fconvert.t(*(ecx_40 - 0xc)))
        eax_56 += 0x10
        ecx_40 += 0x10
        i_7 = i_26
        i_26 -= 1
        *(eax_56 - 0x10) = fconvert.s(fconvert.t(*(arg10 - arg9 i+ eax_56 - 0x10)))
        *(eax_56 - 0xc) = fconvert.s(fconvert.t(*(ecx_40 - 0x14)))
        *(eax_56 - 8) = fconvert.s(fconvert.t(*(ecx_40 - 0x10)))
    while (i_7 != 1)
    edx_69 = (((ebp - 4) u>> 2) + 1) * 4

if (edx_69 s< ebp)
    void* eax_58 = arg9 + (edx_69 << 2)
    void* i_33 = ebp - edx_69
    void* i_8
    
    do
        long double x87_r7_104 = fconvert.t(*(eax_58 i+ arg10 - arg9))
        eax_58 += 4
        i_8 = i_33
        i_33 -= 1
        *(eax_58 - 4) = fconvert.s(x87_r7_104)
    while (i_8 != 1)

void* ecx_45 = arg5 * ebp

if (eax_1 s> 1)
    void* ecx_46 = ecx_45 i- ebx
    int32_t eax_60 = neg.d(ebx)
    int32_t var_24_6 = eax_1 - 1
    int32_t edx_73 = arg6
    
    while (true)
        int32_t eax_64 = eax_60 + eax_5
        void* ecx_47 = ecx_46 - eax_5
        int32_t var_4_5 = eax_64
        void* var_c_3 = ecx_47
        arg4 = 0f
        
        if (edx_73 s>= 4)
            arg4 = (((edx_73 - 4) u>> 2) + 1) * 4
            int32_t i_35 = ((edx_73 - 4) u>> 2) + 1
            int32_t i_9
            
            do
                int32_t eax_61 = eax_64 i+ ebx
                void* ecx_48 = ecx_47 i+ ebx
                arg3[eax_61] = fconvert.s(fconvert.t(*(arg1 + (eax_61 << 2)))
                    + fconvert.t(*(arg1 + (ecx_48 << 2))))
                int32_t eax_62 = eax_61 i+ ebx
                arg3[ecx_48] = fconvert.s(fconvert.t(*(arg1 + (ecx_48 << 2)))
                    - fconvert.t(*(arg1 + (eax_61 << 2))))
                void* ecx_49 = ecx_48 i+ ebx
                arg3[eax_62] = fconvert.s(fconvert.t(*(arg1 + (eax_62 << 2)))
                    + fconvert.t(*(arg1 + (ecx_49 << 2))))
                int32_t eax_63 = eax_62 i+ ebx
                arg3[ecx_49] = fconvert.s(fconvert.t(*(arg1 + (ecx_49 << 2)))
                    - fconvert.t(*(arg1 + (eax_62 << 2))))
                void* ecx_50 = ecx_49 i+ ebx
                arg3[eax_63] = fconvert.s(fconvert.t(*(arg1 + (eax_63 << 2)))
                    + fconvert.t(*(arg1 + (ecx_50 << 2))))
                eax_64 = eax_63 i+ ebx
                arg3[ecx_50] = fconvert.s(fconvert.t(*(arg1 + (ecx_50 << 2)))
                    - fconvert.t(*(arg1 + (eax_63 << 2))))
                ecx_47 = ecx_50 i+ ebx
                i_9 = i_35
                i_35 -= 1
                arg3[eax_64] = fconvert.s(fconvert.t(*(arg1 + (eax_64 << 2)))
                    + fconvert.t(*(arg1 + (ecx_47 << 2))))
                arg3[ecx_47] = fconvert.s(fconvert.t(*(arg1 + (ecx_47 << 2)))
                    - fconvert.t(*(arg1 + (eax_64 << 2))))
            while (i_9 != 1)
            edx_73 = arg6
        
        if (arg4 s< edx_73)
            float* edx_80 = arg3 - arg1
            float* eax_65 = arg1 + (eax_64 << 2)
            float* ecx_51 = arg1 + (ecx_47 << 2)
            arg4 = arg6 i- arg4
            float i_10
            
            do
                long double x87_r7_121 = fconvert.t(ecx_51[ebx])
                ecx_51 = &ecx_51[ebx]
                long double x87_r7_122 = x87_r7_121 + fconvert.t(eax_65[ebx])
                eax_65 = &eax_65[ebx]
                i_10 = arg4
                arg4 -= 1
                *(edx_80 + eax_65) = fconvert.s(x87_r7_122)
                *(edx_80 + ecx_51) = fconvert.s(fconvert.t(*ecx_51) - fconvert.t(*eax_65))
            while (i_10 != 1)
            edx_73 = arg6
        
        int32_t temp5_1 = var_24_6
        var_24_6 -= 1
        
        if (temp5_1 == 1)
            break
        
        eax_60 = var_4_5
        ecx_46 = var_c_3

float var_1c = fconvert.s(float.t(1))
void* eax_68 = (arg5 - 1) * ebp
void* var_5c_4 = nullptr
void* edi_1 = ecx_45

if (eax_1 s> 1)
    long double x87_r7_127 = fconvert.t(fconvert.s(st0))
    long double x87_r6_25 = fconvert.t(var_8)
    long double x87_r5_1 = fconvert.t(fconvert.s(float.t(0)))
    void* var_28_7 = arg10 + 8
    void* var_2c_4 = arg10 + (edi_1 << 2) + 8
    int32_t var_4_6 = eax_1 - 1
    
    while (true)
        long double x87_r4_1 = fconvert.t(var_1c)
        void* eax_72 = eax_68
        int32_t edx_86 = ebp << 2
        var_28_7 += edx_86
        var_2c_4 -= edx_86
        void* ecx_54 = var_5c_4 + ebp
        void* edi_2 = edi_1 - ebp
        int32_t edx_87 = 0
        var_5c_4 = ecx_54
        void* var_54_2 = edi_2
        void* var_48_5 = ecx_54
        void* var_44_1 = ebp
        long double x87_r5_4 = fconvert.t(fconvert.s(x87_r4_1 * x87_r7_127 - x87_r5_1 * x87_r6_25))
        var_1c = fconvert.s(x87_r5_4)
        long double x87_r4_3 = fconvert.t(fconvert.s(x87_r5_1 * x87_r7_127 + x87_r4_1 * x87_r6_25))
        
        if (ebp s>= 4)
            void* var_34_4 = var_2c_4
            void* var_3c_3 = arg9 + 8
            int32_t i_37 = ((ebp - 4) u>> 2) + 1
            void* var_40_2 = arg9 + (ebp << 2) + 8
            edx_87 = i_37 << 2
            var_48_5 = ecx_54 + edx_87
            arg4 = arg9 + (eax_72 << 2) + 8
            void* eax_74 = var_28_7
            var_44_1 = edx_87 + ebp
            int32_t i_11
            
            do
                eax_74 += 0x10
                *(eax_74 - 0x18) =
                    fconvert.s(fconvert.t(*(var_40_2 - 8)) * x87_r5_4 + fconvert.t(*(var_3c_3 - 8)))
                *(var_34_4 - 8) = fconvert.s(fconvert.t(*(arg4 - 8)) * x87_r4_3)
                *(eax_74 - 0x14) =
                    fconvert.s(fconvert.t(*(var_40_2 - 4)) * x87_r5_4 + fconvert.t(*(var_3c_3 - 4)))
                *(var_34_4 - 4) = fconvert.s(fconvert.t(*(arg4 - 4)) * x87_r4_3)
                *(eax_74 - 0x10) =
                    fconvert.s(x87_r5_4 * fconvert.t(*var_40_2) + fconvert.t(*var_3c_3))
                *var_34_4 = fconvert.s(fconvert.t(*arg4) * x87_r4_3)
                long double x87_r3_20 = fconvert.t(*(var_40_2 + 4))
                void* ecx_74 = var_3c_3
                var_40_2 += 0x10
                var_3c_3 += 0x10
                float ecx_75 = arg4
                arg4 += 0x10
                *(eax_74 - 0xc) = fconvert.s(x87_r3_20 * x87_r5_4 + fconvert.t(*(ecx_74 + 4)))
                void* ecx_77 = var_34_4 + 0x10
                i_11 = i_37
                i_37 -= 1
                var_34_4 = ecx_77
                *(ecx_77 - 0xc) = fconvert.s(fconvert.t(*(ecx_75 i+ 4)) * x87_r4_3)
            while (i_11 != 1)
            eax_72 = eax_68 + edx_87
            edi_2 = var_54_2 + edx_87
        
        if (edx_87 s< ebp)
            float* var_34_5 = arg9 + (eax_72 << 2)
            float* var_38_4 = arg10 + (edi_2 << 2)
            arg4 = arg10 + (var_48_5 << 2)
            void* edi_8 = arg9 + (edx_87 << 2)
            float* ecx_79 = arg9 + (var_44_1 << 2)
            void* i_30 = ebp - edx_87
            void* i_12
            
            do
                float* edx_91 = arg4
                long double x87_r3_26 = x87_r5_4 * fconvert.t(*ecx_79)
                arg4 += 4
                ecx_79 = &ecx_79[1]
                edi_8 += 4
                *edx_91 = fconvert.s(x87_r3_26 + fconvert.t(*(edi_8 - 4)))
                long double x87_r3_28 = fconvert.t(*var_34_5)
                float* edx_93 = var_38_4
                var_34_5 = &var_34_5[1]
                var_38_4 = &var_38_4[1]
                i_12 = i_30
                i_30 -= 1
                *edx_93 = fconvert.s(x87_r3_28 * x87_r4_3)
            while (i_12 != 1)
        
        void* edx_94 = eax_68
        float var_18_1 = fconvert.s(x87_r5_4)
        x87_r5_1 = x87_r5_4
        void* edi_9 = ebp
        
        if (eax_1 s<= 2)
            x87_r6_25 = x87_r4_3
        else
            x87_r7_127 = x87_r4_3
            long double x87_r4_6 = fconvert.t(fconvert.s(x87_r4_3))
            void* var_40_3 = arg9 + (ebp << 2) + 8
            void* var_34_6 = arg9 + (edx_94 << 2) + 8
            int32_t var_c_5 = eax_1 - 2
            
            while (true)
                long double x87_r3_30 = fconvert.t(var_18_1)
                void* ecx_83 = var_54_2
                void* edx_95 = edx_94 - ebp
                int32_t eax_82 = ebp << 2
                var_40_3 += eax_82
                var_34_6 -= eax_82
                void* eax_83 = var_5c_4
                void* edi_10 = edi_9 + ebp
                void* var_14_3 = edi_10
                arg4 = fconvert.s(x87_r4_6 * x87_r5_1 + x87_r3_30 * x87_r6_25)
                x87_r4_6 = fconvert.t(fconvert.s(x87_r3_30 * x87_r5_1 - x87_r4_6 * x87_r6_25))
                void* var_10_4 = edx_95
                int32_t edx_96 = 0
                var_18_1 = fconvert.s(x87_r4_6)
                long double x87_r3_32 = fconvert.t(arg4)
                
                if (ebp s>= 4)
                    void* ecx_84 = var_2c_4
                    void* eax_84 = var_28_7
                    void* var_3c_4 = var_34_6
                    int32_t i_38 = ((ebp - 4) u>> 2) + 1
                    arg4 = var_40_3
                    edx_96 = i_38 << 2
                    var_14_3 = edi_10 + edx_96
                    var_10_4 = edx_95 + edx_96
                    int32_t i_13
                    
                    do
                        eax_84 += 0x10
                        ecx_84 += 0x10
                        *(eax_84 - 0x18) = fconvert.s(fconvert.t(*(arg4 - 8)) * x87_r4_6
                            + fconvert.t(*(eax_84 - 0x18)))
                        *(ecx_84 - 0x18) = fconvert.s(fconvert.t(*(var_3c_4 - 8)) * x87_r3_32
                            + fconvert.t(*(ecx_84 - 0x18)))
                        *(eax_84 - 0x14) = fconvert.s(fconvert.t(*(arg4 - 4)) * x87_r4_6
                            + fconvert.t(*(eax_84 - 0x14)))
                        *(ecx_84 - 0x14) = fconvert.s(fconvert.t(*(var_3c_4 - 4)) * x87_r3_32
                            + fconvert.t(*(ecx_84 - 0x14)))
                        *(eax_84 - 0x10) =
                            fconvert.s(x87_r4_6 * fconvert.t(*arg4) + fconvert.t(*(eax_84 - 0x10)))
                        float ebp_28 = arg4
                        arg4 += 0x10
                        *(ecx_84 - 0x10) = fconvert.s(x87_r3_32 * fconvert.t(*var_3c_4)
                            + fconvert.t(*(ecx_84 - 0x10)))
                        void* ebp_29 = var_3c_4
                        var_3c_4 += 0x10
                        i_13 = i_38
                        i_38 -= 1
                        *(eax_84 - 0xc) = fconvert.s(fconvert.t(*(ebp_28 i+ 4)) * x87_r4_6
                            + fconvert.t(*(eax_84 - 0xc)))
                        *(ecx_84 - 0xc) = fconvert.s(fconvert.t(*(ebp_29 + 4)) * x87_r3_32
                            + fconvert.t(*(ecx_84 - 0xc)))
                    while (i_13 != 1)
                    ecx_83 = var_54_2 + edx_96
                    eax_83 = var_5c_4 + edx_96
                    ebp = arg7
                
                if (edx_96 s< ebp)
                    void* ecx_86 = arg10 + (eax_83 << 2)
                    arg4 = arg9 + (var_14_3 << 2)
                    void* var_24_9 = arg9 + (var_10_4 << 2)
                    void* i_31 = ebp - edx_96
                    void* edx_99 = arg10 + (ecx_83 << 2)
                    void* i_14
                    
                    do
                        long double x87_r2_31 = fconvert.t(*arg4)
                        void* edi_18 = var_24_9
                        arg4 += 4
                        var_24_9 += 4
                        ecx_86 += 4
                        edx_99 += 4
                        i_14 = i_31
                        i_31 -= 1
                        *(ecx_86 - 4) = fconvert.s(x87_r2_31 * x87_r4_6 + fconvert.t(*(ecx_86 - 4)))
                        *(edx_99 - 4) =
                            fconvert.s(x87_r3_32 * fconvert.t(*edi_18) + fconvert.t(*(edx_99 - 4)))
                    while (i_14 != 1)
                
                int32_t temp28_1 = var_c_5
                var_c_5 -= 1
                x87_r5_1 = x87_r3_32
                
                if (temp28_1 == 1)
                    break
                
                edx_94 = edx_95
                edi_9 = edi_10
            
            x87_r5_1 = x87_r4_6
            x87_r6_25 = fconvert.t(var_8)
        
        int32_t temp17_1 = var_4_6
        var_4_6 -= 1
        
        if (temp17_1 == 1)
            break
        
        edi_1 = var_54_2

void* edi_19 = nullptr

if (eax_1 s> 1)
    void* edx_100 = arg10
    arg7 = arg9 + 8
    arg4 = eax_1 - 1
    float i_15
    
    do
        arg7 += ebp << 2
        edi_19 += ebp
        int32_t ecx_89 = 0
        void* var_5c_5 = edi_19
        void* eax_91 = edi_19
        
        if (ebp s>= 4)
            ecx_89 = (((ebp - 4) u>> 2) + 1) * 4
            void* eax_92 = edx_100 + 8
            void* edx_101 = arg7
            int32_t j_19 = ((ebp - 4) u>> 2) + 1
            int32_t j_6
            
            do
                long double x87_r7_130 = fconvert.t(*(edx_101 - 8))
                edx_101 += 0x10
                long double x87_r7_131 = x87_r7_130 + fconvert.t(*(eax_92 - 8))
                eax_92 += 0x10
                j_6 = j_19
                j_19 -= 1
                *(eax_92 - 0x18) = fconvert.s(x87_r7_131)
                *(eax_92 - 0x14) =
                    fconvert.s(fconvert.t(*(edx_101 - 0x14)) + fconvert.t(*(eax_92 - 0x14)))
                *(eax_92 - 0x10) =
                    fconvert.s(fconvert.t(*(eax_92 - 0x10)) + fconvert.t(*(edx_101 - 0x10)))
                *(eax_92 - 0xc) =
                    fconvert.s(fconvert.t(*(edx_101 - 0xc)) + fconvert.t(*(eax_92 - 0xc)))
            while (j_6 != 1)
            edx_100 = arg10
            eax_91 = edi_19 + ecx_89
            edi_19 = var_5c_5
        
        if (ecx_89 s< ebp)
            float* eax_93 = arg9 + (eax_91 << 2)
            
            do
                ecx_89 += 1
                long double x87_r7_139 =
                    fconvert.t(*eax_93) + fconvert.t(*(edx_100 + (ecx_89 << 2) - 4))
                eax_93 = &eax_93[1]
                *(edx_100 + (ecx_89 << 2) - 4) = fconvert.s(x87_r7_139)
            while (ecx_89 s< ebp)
            
            edi_19 = var_5c_5
        
        i_15 = arg4
        arg4 -= 1
    while (i_15 != 1)

int32_t i_39 = arg6
int32_t eax_94 = 0

if (ebx s>= i_39)
    void* var_5c_6 = nullptr
    int32_t var_54_4 = 0
    
    if (i_39 s> 0)
        arg4 = arg1 + 8
        void* var_24_10 = arg8 + 8
        int32_t i_28 = i_39
        int32_t i_16
        
        do
            void* eax_105 = var_5c_6
            int32_t edi_24 = var_54_4
            int32_t ebp_37 = 0
            
            if (ebx s>= 4)
                void* edx_104 = var_24_10
                float ecx_102 = arg4
                int32_t j_14 = ((ebx - 4) u>> 2) + 1
                int32_t edi_25 = j_14 << 2
                edi_24 = edi_25 + var_54_4
                int32_t j_7
                
                do
                    long double x87_r7_145 = fconvert.t(*(ecx_102 - 8))
                    ecx_102 += 0x10
                    *(edx_104 - 8) = fconvert.s(x87_r7_145)
                    edx_104 += 0x10
                    j_7 = j_14
                    j_14 -= 1
                    *(edx_104 - 0x14) = fconvert.s(fconvert.t(*(ecx_102 - 0x14)))
                    *(edx_104 - 0x10) = fconvert.s(fconvert.t(*(ecx_102 - 0x10)))
                    *(edx_104 - 0xc) = fconvert.s(fconvert.t(*(ecx_102 - 0xc)))
                while (j_7 != 1)
                ebp_37 = edi_25
                eax_105 = var_5c_6 + edi_25
            
            if (ebp_37 s< ebx)
                void* edx_105 = arg8 + (edi_24 << 2)
                float* ecx_104 = arg1 + (eax_105 << 2)
                int32_t j_15 = ebx i- ebp_37
                int32_t j_8
                
                do
                    long double x87_r7_149 = fconvert.t(*ecx_104)
                    ecx_104 = &ecx_104[1]
                    *edx_105 = fconvert.s(x87_r7_149)
                    edx_105 += 4
                    j_8 = j_15
                    j_15 -= 1
                while (j_8 != 1)
            
            var_5c_6 += ebx
            arg4 += ebx << 2
            var_54_4 += eax_7
            var_24_10 += eax_7 * 4
            i_16 = i_28
            i_28 -= 1
        while (i_16 != 1)
else
    int32_t var_28_8 = 0
    
    if (ebx s> 0)
        do
            int32_t ecx_94 = eax_94
            arg4 = 0f
            
            if (i_39 s>= 4)
                arg4 = (((i_39 - 4) u>> 2) + 1) * 4
                void* i_36 = ((i_39 - 4) u>> 2) + 1
                void* i_17
                
                do
                    int32_t eax_95 = eax_94 i+ ebx
                    *(arg8 + (ecx_94 << 2)) = fconvert.s(fconvert.t(*(arg1 + (eax_94 << 2))))
                    int32_t ecx_95 = ecx_94 + eax_7
                    int32_t eax_96 = eax_95 i+ ebx
                    *(arg8 + (ecx_95 << 2)) = fconvert.s(fconvert.t(*(arg1 + (eax_95 << 2))))
                    int32_t ecx_96 = ecx_95 + eax_7
                    int32_t eax_97 = eax_96 i+ ebx
                    *(arg8 + (ecx_96 << 2)) = fconvert.s(fconvert.t(*(arg1 + (eax_96 << 2))))
                    int32_t ecx_97 = ecx_96 + eax_7
                    eax_94 = eax_97 i+ ebx
                    *(arg8 + (ecx_97 << 2)) = fconvert.s(fconvert.t(*(arg1 + (eax_97 << 2))))
                    ecx_94 = ecx_97 + eax_7
                    i_17 = i_36
                    i_36 -= 1
                while (i_17 != 1)
                i_39 = arg6
            
            if (arg4 s< i_39)
                arg7 = arg8 + (ecx_94 << 2)
                float* ecx_99 = arg1 + (eax_94 << 2)
                int32_t eax_99 = arg6 i- arg4
                
                while (true)
                    *arg7 = fconvert.s(fconvert.t(*ecx_99))
                    arg7 += eax_7 << 2
                    int32_t temp27_1 = eax_99
                    eax_99 -= 1
                    
                    if (temp27_1 == 1)
                        break
                    
                    ecx_99 = &ecx_99[ebx]
                
                i_39 = arg6
            
            eax_94 = var_28_8 + 1
            var_28_8 = eax_94
        while (eax_94 s< ebx)

int32_t eax_112 = eax_5 * arg5
int32_t ecx_105 = 0
void* edx_106 = nullptr
int32_t ebp_40 = eax_112

if (eax_1 s> 1)
    int32_t var_4_8 = eax_1 - 1
    
    while (true)
        void* edx_107 = edx_106 + eax_5
        int32_t ebp_41 = ebp_40 - eax_5
        int32_t ecx_106 = ecx_105 + (ebx << 1)
        int32_t eax_115 = ecx_106
        void* ecx_107 = edx_107
        int32_t edx_108 = ebp_41
        int32_t ebp_42 = arg6
        arg4 = 0f
        
        if (ebp_42 s>= 4)
            arg5 = ((ebp_42 - 4) u>> 2) + 1
            arg4 = (((ebp_42 - 4) u>> 2) + 1) * 4
            int32_t i_18
            
            do
                *(arg8 + (eax_115 << 2) - 4) = fconvert.s(fconvert.t(*(arg1 + (ecx_107 << 2))))
                void* ecx_108 = ecx_107 i+ ebx
                int32_t edx_109 = edx_108 i+ ebx
                *(arg8 + (eax_115 << 2)) = fconvert.s(fconvert.t(*(arg1 + (edx_108 << 2))))
                int32_t eax_116 = eax_115 + eax_7
                void* ecx_109 = ecx_108 i+ ebx
                *(arg8 + (eax_116 << 2) - 4) = fconvert.s(fconvert.t(*(arg1 + (ecx_108 << 2))))
                int32_t edx_110 = edx_109 i+ ebx
                *(arg8 + (eax_116 << 2)) = fconvert.s(fconvert.t(*(arg1 + (edx_109 << 2))))
                int32_t eax_117 = eax_116 + eax_7
                void* ecx_110 = ecx_109 i+ ebx
                *(arg8 + (eax_117 << 2) - 4) = fconvert.s(fconvert.t(*(arg1 + (ecx_109 << 2))))
                int32_t edx_111 = edx_110 i+ ebx
                *(arg8 + (eax_117 << 2)) = fconvert.s(fconvert.t(*(arg1 + (edx_110 << 2))))
                int32_t eax_118 = eax_117 + eax_7
                ecx_107 = ecx_110 i+ ebx
                *(arg8 + (eax_118 << 2) - 4) = fconvert.s(fconvert.t(*(arg1 + (ecx_110 << 2))))
                edx_108 = edx_111 i+ ebx
                *(arg8 + (eax_118 << 2)) = fconvert.s(fconvert.t(*(arg1 + (edx_111 << 2))))
                eax_115 = eax_118 + eax_7
                i_18 = arg5
                arg5 -= 1
            while (i_18 != 1)
            ebp_42 = arg6
        
        if (arg4 s< ebp_42)
            arg5 = arg1 + (edx_108 << 2)
            float* edx_113 = arg1 + (ecx_107 << 2)
            int32_t ecx_112 = arg6 i- arg4
            void* eax_119 = arg8 + (eax_115 << 2)
            
            while (true)
                *(eax_119 - 4) = fconvert.s(fconvert.t(*edx_113))
                *eax_119 = fconvert.s(fconvert.t(*arg5))
                eax_119 += eax_7 * 4
                arg5 += ebx << 2
                int32_t temp33_1 = ecx_112
                ecx_112 -= 1
                
                if (temp33_1 == 1)
                    break
                
                edx_113 = &edx_113[ebx]
        
        int32_t temp24_1 = var_4_8
        var_4_8 -= 1
        
        if (temp24_1 == 1)
            break
        
        edx_106 = edx_107
        ebp_40 = ebp_41
        ecx_105 = ecx_106

if (ebx == 1)
    return 

if (eax_3 s< arg6)
    int32_t ecx_114 = eax_112
    void* edi_27 = nullptr
    int32_t edx_115 = 0
    
    if (eax_1 s> 1)
        int32_t ebp_56 = ebx i+ neg.d(ebx) - 2
        int32_t i_27 = eax_1 - 1
        int32_t i_19
        
        do
            edi_27 += ebx i* 2
            edx_115 += eax_5
            ecx_114 -= eax_5
            ebp_56 += ebx << 1
            
            if (ebx s> 2)
                int32_t eax_124 = edx_115 + 2
                void* edi_28 = edi_27 - edx_115
                int32_t ecx_115 = ecx_114 - edx_115
                int32_t var_c_6 = eax_124
                arg5 = ebp_56
                void* var_1c_1 = edi_28
                int32_t var_18_2 = ecx_115
                int32_t var_10_5 = ((ebx - 3) u>> 1) + 1
                
                while (true)
                    int32_t ebp_70 = arg6
                    int32_t edx_119 = arg5
                    void* edi_29 = edi_28 + eax_124
                    int32_t ecx_116 = ecx_115 + eax_124
                    void* var_44_3 = edi_29
                    arg4 = 0f
                    
                    if (ebp_70 s>= 4)
                        int32_t j_13 = ((ebp_70 - 4) u>> 2) + 1
                        arg4 = (((ebp_70 - 4) u>> 2) + 1) * 4
                        void* edi_30 = edi_29
                        int32_t j_9
                        
                        do
                            *(arg8 + (edi_30 << 2) - 4) = fconvert.s(
                                fconvert.t(*(arg1 + (eax_124 << 2) - 4))
                                + fconvert.t(*(arg1 + (ecx_116 << 2) - 4)))
                            *(arg8 + (edx_119 << 2) - 4) = fconvert.s(
                                fconvert.t(*(arg1 + (eax_124 << 2) - 4))
                                - fconvert.t(*(arg1 + (ecx_116 << 2) - 4)))
                            *(arg8 + (edi_30 << 2)) = fconvert.s(
                                fconvert.t(*(arg1 + (ecx_116 << 2)))
                                + fconvert.t(*(arg1 + (eax_124 << 2))))
                            int32_t ecx_117 = ecx_116 i+ ebx
                            int32_t eax_125 = eax_124 i+ ebx
                            *(arg8 + (edx_119 << 2)) = fconvert.s(
                                fconvert.t(*(arg1 + (ecx_116 << 2)))
                                - fconvert.t(*(arg1 + (eax_124 << 2))))
                            int32_t edx_120 = edx_119 + eax_7
                            void* edi_31 = edi_30 + eax_7
                            *(arg8 + (edi_31 << 2) - 4) = fconvert.s(
                                fconvert.t(*(arg1 + (eax_125 << 2) - 4))
                                + fconvert.t(*(arg1 + (ecx_117 << 2) - 4)))
                            *(arg8 + (edx_120 << 2) - 4) = fconvert.s(
                                fconvert.t(*(arg1 + (eax_125 << 2) - 4))
                                - fconvert.t(*(arg1 + (ecx_117 << 2) - 4)))
                            *(arg8 + (edi_31 << 2)) = fconvert.s(
                                fconvert.t(*(arg1 + (ecx_117 << 2)))
                                + fconvert.t(*(arg1 + (eax_125 << 2))))
                            int32_t ecx_118 = ecx_117 i+ ebx
                            int32_t eax_126 = eax_125 i+ ebx
                            *(arg8 + (edx_120 << 2)) = fconvert.s(
                                fconvert.t(*(arg1 + (ecx_117 << 2)))
                                - fconvert.t(*(arg1 + (eax_125 << 2))))
                            int32_t edx_121 = edx_120 + eax_7
                            void* edi_32 = edi_31 + eax_7
                            *(arg8 + (edi_32 << 2) - 4) = fconvert.s(
                                fconvert.t(*(arg1 + (eax_126 << 2) - 4))
                                + fconvert.t(*(arg1 + (ecx_118 << 2) - 4)))
                            *(arg8 + (edx_121 << 2) - 4) = fconvert.s(
                                fconvert.t(*(arg1 + (eax_126 << 2) - 4))
                                - fconvert.t(*(arg1 + (ecx_118 << 2) - 4)))
                            *(arg8 + (edi_32 << 2)) = fconvert.s(
                                fconvert.t(*(arg1 + (ecx_118 << 2)))
                                + fconvert.t(*(arg1 + (eax_126 << 2))))
                            int32_t ecx_119 = ecx_118 i+ ebx
                            int32_t eax_127 = eax_126 i+ ebx
                            *(arg8 + (edx_121 << 2)) = fconvert.s(
                                fconvert.t(*(arg1 + (ecx_118 << 2)))
                                - fconvert.t(*(arg1 + (eax_126 << 2))))
                            int32_t edx_122 = edx_121 + eax_7
                            void* edi_33 = edi_32 + eax_7
                            *(arg8 + (edi_33 << 2) - 4) = fconvert.s(
                                fconvert.t(*(arg1 + (eax_127 << 2) - 4))
                                + fconvert.t(*(arg1 + (ecx_119 << 2) - 4)))
                            *(arg8 + (edx_122 << 2) - 4) = fconvert.s(
                                fconvert.t(*(arg1 + (eax_127 << 2) - 4))
                                - fconvert.t(*(arg1 + (ecx_119 << 2) - 4)))
                            *(arg8 + (edi_33 << 2)) = fconvert.s(
                                fconvert.t(*(arg1 + (ecx_119 << 2)))
                                + fconvert.t(*(arg1 + (eax_127 << 2))))
                            ecx_116 = ecx_119 i+ ebx
                            eax_124 = eax_127 i+ ebx
                            *(arg8 + (edx_122 << 2)) = fconvert.s(
                                fconvert.t(*(arg1 + (ecx_119 << 2)))
                                - fconvert.t(*(arg1 + (eax_127 << 2))))
                            edx_119 = edx_122 + eax_7
                            edi_30 = edi_33 + eax_7
                            j_9 = j_13
                            j_13 -= 1
                        while (j_9 != 1)
                        ebp_70 = arg6
                        var_44_3 = edi_30
                    
                    if (arg4 s< ebp_70)
                        int32_t edi_36 = eax_7 * 4
                        void* ebp_72 = arg8 + (var_44_3 << 2)
                        float edx_123 = arg8 + (edx_119 << 2)
                        int32_t edi_39 = arg6 i- arg4
                        void* eax_128 = arg1 + (eax_124 << 2)
                        void* ecx_120 = arg1 + (ecx_116 << 2)
                        void* var_8_2 = ebp_72
                        
                        while (true)
                            *(ebp_72 - 4) =
                                fconvert.s(fconvert.t(*(ecx_120 - 4)) + fconvert.t(*(eax_128 - 4)))
                            *(edx_123 - 4) =
                                fconvert.s(fconvert.t(*(eax_128 - 4)) - fconvert.t(*(ecx_120 - 4)))
                            *ebp_72 = fconvert.s(fconvert.t(*ecx_120) + fconvert.t(*eax_128))
                            ebp_72 = var_8_2 + edi_36
                            var_8_2 = ebp_72
                            *edx_123 = fconvert.s(fconvert.t(*ecx_120) - fconvert.t(*eax_128))
                            int32_t edx_125 = ebx << 2
                            eax_128 += edx_125
                            ecx_120 += edx_125
                            int32_t temp47_1 = edi_39
                            edi_39 -= 1
                            
                            if (temp47_1 == 1)
                                break
                            
                            edx_123 += edi_36
                    
                    arg5 -= 2
                    eax_124 = var_c_6 + 2
                    int32_t temp45_1 = var_10_5
                    var_10_5 -= 1
                    var_c_6 = eax_124
                    
                    if (temp45_1 == 1)
                        break
                    
                    ecx_115 = var_18_2
                    edi_28 = var_1c_1
            
            i_19 = i_27
            i_27 -= 1
        while (i_19 != 1)
else if (eax_1 s> 1)
    void* var_20_2 = arg1 + (eax_112 << 2) + 8
    arg7 = arg8 + ((neg.d(ebx) i+ ebx) << 2) - 8
    int32_t ecx_123 = eax_5 * 4
    int32_t edx_128 = ebx i* 8
    int32_t var_10_6 = ecx_123
    int32_t var_c_7 = edx_128
    arg4 = arg8 + 8
    arg5 = arg1 + 8
    int32_t var_8_3 = eax_1 - 1
    
    while (true)
        arg7 += edx_128
        arg4 += edx_128
        arg5 += ecx_123
        var_20_2 -= ecx_123
        
        if (arg6 s> 0)
            float ebp_75 = arg4
            int32_t var_28_10 = arg5
            void* var_24_11 = arg7
            void* var_2c_5 = var_20_2
            int32_t i_29 = arg6
            int32_t i_20
            
            do
                if (ebx s> 2)
                    int32_t ecx_126 = var_28_10
                    void* eax_136 = var_2c_5
                    void* esi_2 = var_24_11
                    float edi_43 = ebp_75
                    int32_t j_18 = ((ebx - 3) u>> 1) + 1
                    int32_t j_10
                    
                    do
                        edi_43 += 8
                        long double x87_r7_201 =
                            fconvert.t(*(eax_136 - 4)) + fconvert.t(*(ecx_126 - 4))
                        eax_136 += 8
                        ecx_126 += 8
                        esi_2 -= 8
                        j_10 = j_18
                        j_18 -= 1
                        *(edi_43 - 0xc) = fconvert.s(x87_r7_201)
                        *(esi_2 + 4) =
                            fconvert.s(fconvert.t(*(ecx_126 - 0xc)) - fconvert.t(*(eax_136 - 0xc)))
                        *(edi_43 - 8) =
                            fconvert.s(fconvert.t(*(eax_136 - 8)) + fconvert.t(*(ecx_126 - 8)))
                        *(esi_2 + 8) =
                            fconvert.s(fconvert.t(*(eax_136 - 8)) - fconvert.t(*(ecx_126 - 8)))
                    while (j_10 != 1)
                
                int32_t eax_139 = eax_7 * 4
                var_24_11 += eax_139
                ebp_75 += eax_139
                int32_t eax_140 = ebx << 2
                var_28_10 += eax_140
                var_2c_5 += eax_140
                i_20 = i_29
                i_29 -= 1
            while (i_20 != 1)
        
        int32_t temp37_1 = var_8_3
        var_8_3 -= 1
        
        if (temp37_1 == 1)
            break
        
        edx_128 = var_c_7
        ecx_123 = var_10_6
