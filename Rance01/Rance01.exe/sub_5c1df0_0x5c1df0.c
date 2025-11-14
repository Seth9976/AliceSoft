// 函数: sub_5c1df0
// 地址: 0x5c1df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ecx = arg3
int32_t ebx = arg4
void* ebp_1 = ecx * arg4
void* edi = ebp_1
void* var_60 = ebp_1 * 2
void* esi_1 = nullptr
void* ebp_2 = ebp_1 * 3
arg3 = ebp_2
int32_t var_4c = 0

if (ebx s>= 4)
    int32_t i_6 = ((ebx - 4) u>> 2) + 1
    var_4c = (((ebx - 4) u>> 2) + 1) * 4
    int32_t i
    
    do
        int32_t ebx_7 = esi_1 << 2
        long double x87_r7_5 =
            fconvert.t(fconvert.s(fconvert.t(arg1[var_60]) + fconvert.t(arg1[esi_1])))
        long double x87_r5_1 =
            fconvert.t(fconvert.s(fconvert.t(arg1[edi]) + fconvert.t(arg1[ebp_2])))
        arg2[ebx_7] = fconvert.s(x87_r7_5 + x87_r5_1)
        int32_t ebx_8 = ebx_7 + (ecx << 1)
        arg2[ebx_7 + (ecx << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_5 - x87_r5_1)))
        void* esi_2 = esi_1 + ecx
        arg2[ebx_8 - 1] = fconvert.s(fconvert.t(arg1[esi_1]) - fconvert.t(arg1[var_60]))
        void* ebp_6 = arg3 + ecx
        long double x87_r7_11 = fconvert.t(arg1[arg3]) - fconvert.t(arg1[edi])
        void* edi_1 = edi + ecx
        arg3 = ebp_6
        arg2[ebx_8] = fconvert.s(x87_r7_11)
        void* ebx_10 = var_60 + ecx
        int32_t ebx_11 = esi_2 << 2
        long double x87_r7_16 =
            fconvert.t(fconvert.s(fconvert.t(arg1[ebx_10]) + fconvert.t(arg1[esi_2])))
        long double x87_r5_3 =
            fconvert.t(fconvert.s(fconvert.t(arg1[edi_1]) + fconvert.t(arg1[ebp_6])))
        arg2[ebx_11] = fconvert.s(x87_r7_16 + x87_r5_3)
        int32_t ebx_12 = ebx_11 + (ecx << 1)
        arg2[ebx_11 + (ecx << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_16 - x87_r5_3)))
        void* esi_3 = esi_2 + ecx
        arg2[ebx_12 - 1] = fconvert.s(fconvert.t(arg1[esi_2]) - fconvert.t(arg1[ebx_10]))
        void* ebp_10 = arg3 + ecx
        long double x87_r7_22 = fconvert.t(arg1[arg3]) - fconvert.t(arg1[edi_1])
        void* edi_2 = edi_1 + ecx
        arg3 = ebp_10
        arg2[ebx_12] = fconvert.s(x87_r7_22)
        void* ebx_14 = ebx_10 + ecx
        int32_t ebx_15 = esi_3 << 2
        long double x87_r7_27 =
            fconvert.t(fconvert.s(fconvert.t(arg1[ebx_14]) + fconvert.t(arg1[esi_3])))
        long double x87_r5_5 =
            fconvert.t(fconvert.s(fconvert.t(arg1[edi_2]) + fconvert.t(arg1[ebp_10])))
        arg2[ebx_15] = fconvert.s(x87_r7_27 + x87_r5_5)
        int32_t ebx_16 = ebx_15 + (ecx << 1)
        arg2[ebx_15 + (ecx << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_27 - x87_r5_5)))
        void* esi_4 = esi_3 + ecx
        arg2[ebx_16 - 1] = fconvert.s(fconvert.t(arg1[esi_3]) - fconvert.t(arg1[ebx_14]))
        void* ebp_14 = arg3 + ecx
        long double x87_r7_33 = fconvert.t(arg1[arg3]) - fconvert.t(arg1[edi_2])
        void* edi_3 = edi_2 + ecx
        arg3 = ebp_14
        arg2[ebx_16] = fconvert.s(x87_r7_33)
        void* ebx_18 = ebx_14 + ecx
        int32_t ebx_19 = esi_4 << 2
        long double x87_r7_38 =
            fconvert.t(fconvert.s(fconvert.t(arg1[ebx_18]) + fconvert.t(arg1[esi_4])))
        long double x87_r5_7 =
            fconvert.t(fconvert.s(fconvert.t(arg1[edi_3]) + fconvert.t(arg1[ebp_14])))
        arg2[ebx_19] = fconvert.s(x87_r7_38 + x87_r5_7)
        int32_t ebx_20 = ebx_19 + (ecx << 1)
        arg2[ebx_19 + (ecx << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_38 - x87_r5_7)))
        var_60 = ebx_18 + ecx
        esi_1 = esi_4 + ecx
        arg2[ebx_20 - 1] = fconvert.s(fconvert.t(arg1[esi_4]) - fconvert.t(arg1[ebx_18]))
        ebp_2 = arg3 + ecx
        long double x87_r7_44 = fconvert.t(arg1[arg3]) - fconvert.t(arg1[edi_3])
        edi = edi_3 + ecx
        i = i_6
        i_6 -= 1
        arg3 = ebp_2
        arg2[ebx_20] = fconvert.s(x87_r7_44)
    while (i != 1)
    ebx = arg4

if (var_4c s< ebx)
    float* var_48_1 = &arg1[arg3]
    arg3 = &arg1[var_60]
    float* edi_4 = &arg1[edi]
    float* var_30_1 = edi_4
    int32_t i_5 = arg4 - var_4c
    int32_t i_1
    
    do
        int32_t ebx_28 = esi_1 << 2
        long double x87_r7_49 = fconvert.t(fconvert.s(fconvert.t(arg1[esi_1]) + fconvert.t(*arg3)))
        long double x87_r5_9 = fconvert.t(fconvert.s(fconvert.t(*var_48_1) + fconvert.t(*edi_4)))
        arg2[ebx_28] = fconvert.s(x87_r7_49 + x87_r5_9)
        int32_t ebx_29 = ebx_28 + (ecx << 1)
        arg2[ebx_28 + (ecx << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_49 - x87_r5_9)))
        float* edi_7 = arg3
        arg3 = &arg3[ecx]
        long double x87_r7_53 = fconvert.t(arg1[esi_1]) - fconvert.t(*edi_7)
        float* edi_8 = var_48_1
        var_48_1 = &var_48_1[ecx]
        esi_1 += ecx
        arg2[ebx_29 - 1] = fconvert.s(x87_r7_53)
        long double x87_r7_55 = fconvert.t(*edi_8) - fconvert.t(*var_30_1)
        edi_4 = &var_30_1[ecx]
        i_1 = i_5
        i_5 -= 1
        var_30_1 = edi_4
        arg2[ebx_29] = fconvert.s(x87_r7_55)
    while (i_1 != 1)

if (ecx s< 2)
    return 

if (ecx != 2)
    void* ebx_30 = nullptr
    void* var_18_1 = nullptr
    
    if (arg4 s> 0)
        void* var_34_1 = &arg1[ebp_1]
        int32_t edi_11 = ecx << 4
        int32_t var_4_1 = edi_11
        float* var_38_1 = arg2
        float* var_30_2 = &arg1[ebp_1 * 3]
        int32_t i_7 = arg4
        int32_t i_2
        
        do
            int32_t ebp_21 = ecx * 2
            int32_t esi_8 = ebp_21 + (ebx_30 << 2)
            
            if (ecx s> 2)
                float* var_40_1 = &arg2[ebp_21 + (ebx_30 << 2)]
                float* var_60_4 = &arg2[esi_8]
                arg3 = &arg1[ebx_30 + (ebp_1 << 1)]
                void* ebx_34 = arg6 - arg5
                void* ebx_36 = arg7 - arg5
                float* ebx_38 = arg6 - arg7
                void* var_3c_1 = &arg2[esi_8 + ebp_21]
                float* var_54_1 = var_38_1
                float* var_48_2 = arg7
                float* esi_14 = arg5 + 4
                float* var_50_1 = &arg1[ebx_30]
                void* edi_14 = var_34_1
                int32_t j_1 = ((ecx - 3) u>> 1) + 1
                float* ebx_42 = var_30_2
                int32_t j
                
                do
                    long double x87_r7_57 = fconvert.t(*esi_14) * fconvert.t(*(edi_14 + 8))
                    edi_14 += 8
                    float* ebp_27 = &arg3[2]
                    arg3 = ebp_27
                    var_50_1 = &var_50_1[2]
                    var_54_1 = &var_54_1[2]
                    var_40_1 = &var_40_1[2]
                    var_60_4 -= 8
                    var_3c_1 -= 8
                    float var_c_1 = fconvert.s(fconvert.t(*ebp_27) * fconvert.t(*(esi_14 + ebx_34))
                        + fconvert.t(ebp_27[-1]) * fconvert.t(*(ebx_38 + var_48_2)))
                    ebx_42 = &ebx_42[2]
                    long double x87_r7_74 = fconvert.t(fconvert.s(
                        fconvert.t(ebx_42[-1]) * fconvert.t(*var_48_2)
                        + fconvert.t(*(esi_14 + ebx_36)) * fconvert.t(*ebx_42)))
                    long double x87_r5_11 = fconvert.t(fconvert.s(x87_r7_57
                        + fconvert.t(esi_14[-1]) * fconvert.t(*(edi_14 - 4))))
                    float var_20_2 = fconvert.s(x87_r7_74 - x87_r5_11)
                    long double x87_r7_76 = fconvert.t(fconvert.s(
                        fconvert.t(*var_48_2) * fconvert.t(*ebx_42)
                        - fconvert.t(ebx_42[-1]) * fconvert.t(*(esi_14 + ebx_36))))
                    long double x87_r5_13 = fconvert.t(fconvert.s(
                        fconvert.t(esi_14[-1]) * fconvert.t(*edi_14)
                        - fconvert.t(*(edi_14 - 4)) * fconvert.t(*esi_14)))
                    long double x87_r7_78 = fconvert.t(fconvert.s(
                        fconvert.t(*arg3) * fconvert.t(*(ebx_38 + var_48_2))
                        - fconvert.t(arg3[-1]) * fconvert.t(*(esi_14 + ebx_34))))
                    float var_10_2 = fconvert.s(x87_r7_78 + fconvert.t(*var_50_1))
                    var_48_2 = &var_48_2[2]
                    esi_14 = &esi_14[2]
                    j = j_1
                    j_1 -= 1
                    float var_4c_3 = fconvert.s(fconvert.t(*var_50_1) - x87_r7_78)
                    long double x87_r7_80 = fconvert.t(var_c_1)
                    float var_c_2 = fconvert.s(fconvert.t(var_50_1[-1]) - x87_r7_80)
                    long double x87_r7_82 =
                        fconvert.t(fconvert.s(x87_r7_80 + fconvert.t(var_50_1[-1])))
                    long double x87_r5_15 = fconvert.t(fconvert.s(x87_r7_74 + x87_r5_11))
                    var_54_1[-1] = fconvert.s(x87_r7_82 + x87_r5_15)
                    long double x87_r5_17 = fconvert.t(var_10_2)
                    long double x87_r3_1 = fconvert.t(fconvert.s(x87_r7_76 + x87_r5_13))
                    *var_54_1 = fconvert.s(x87_r5_17 + x87_r3_1)
                    long double x87_r3_3 = fconvert.t(var_c_2)
                    long double x87_r1_1 = fconvert.t(fconvert.s(x87_r5_13 - x87_r7_76))
                    var_60_4[-1] = fconvert.s(x87_r3_3 - x87_r1_1)
                    *var_60_4 = fconvert.s(fconvert.t(var_20_2) - fconvert.t(var_4c_3))
                    var_40_1[-1] = fconvert.s(x87_r3_3 + x87_r1_1)
                    *var_40_1 = fconvert.s(fconvert.t(var_4c_3) + fconvert.t(var_20_2))
                    *(var_3c_1 - 4) = fconvert.s(x87_r7_82 - x87_r5_15)
                    *var_3c_1 = fconvert.s(x87_r3_1 - x87_r5_17)
                while (j != 1)
                ebx_30 = var_18_1
                edi_11 = var_4_1
            
            var_38_1 += edi_11
            var_34_1 += ecx << 2
            var_30_2 = &var_30_2[ecx]
            ebx_30 += ecx
            i_2 = i_7
            i_7 -= 1
            var_18_1 = ebx_30
        while (i_2 != 1)

if (ecx != 2 && (ecx.b & 1) != 0)
    return 

long double x87_r7_85 = fconvert.t(-0.70710676908493042)
long double x87_r6_43 = fconvert.t(0.70710676908493042)
void* esi_16 = ebp_1 + ecx - 1
arg3 = esi_16 + (ebp_1 << 1)
float* edi_17 = ecx
void* var_50_2 = ecx
int32_t var_4c_4 = 0

if (arg4 s>= 4)
    void* var_60_5 = &arg2[ecx * 3]
    int32_t ebx_52 = ecx * 0x10
    void* var_5c_8 = &arg1[ebp_1 + esi_16]
    int32_t ebx_53 = ecx << 2
    void* var_54_2 = ebx_53 + arg1 - 4
    int32_t i_8 = ((arg4 - 4) u>> 2) + 1
    var_4c_4 = (((arg4 - 4) u>> 2) + 1) * 4
    int32_t i_3
    
    do
        float* ebp_49 = arg3
        arg3 += ecx
        float var_58_3 =
            fconvert.s((fconvert.t(arg1[esi_16]) + fconvert.t(arg1[ebp_49])) * x87_r7_85)
        void* esi_17 = esi_16 + ecx
        float* ebp_50 = var_54_2
        long double x87_r4_13 = fconvert.t(fconvert.s((fconvert.t(arg1[esi_16])
            - fconvert.t(arg1[ebp_49])) * x87_r6_43))
        arg2[edi_17 - 1] = fconvert.s(fconvert.t(*ebp_50) + x87_r4_13)
        *(var_60_5 - 4) = fconvert.s(fconvert.t(*ebp_50) - x87_r4_13)
        float* ebp_52 = var_5c_8
        long double x87_r5_29 = fconvert.t(var_58_3)
        void* var_5c_9 = var_5c_8 + ebx_53
        arg2[edi_17] = fconvert.s(x87_r5_29 - fconvert.t(*ebp_52))
        void* edi_18 = &edi_17[ecx]
        float* var_60_6 = var_60_5 + ebx_52
        *var_60_5 = fconvert.s(x87_r5_29 + fconvert.t(*ebp_52))
        void* ebx_57 = var_54_2 + (ecx << 2)
        float* ebp_55 = arg3
        arg3 += ecx
        float var_58_4 =
            fconvert.s((fconvert.t(arg1[esi_17]) + fconvert.t(arg1[ebp_55])) * x87_r7_85)
        void* esi_18 = esi_17 + ecx
        long double x87_r4_17 = fconvert.t(fconvert.s((fconvert.t(arg1[esi_17])
            - fconvert.t(arg1[ebp_55])) * x87_r6_43))
        arg2[edi_18 - 1] = fconvert.s(fconvert.t(*ebx_57) + x87_r4_17)
        var_60_6[-1] = fconvert.s(fconvert.t(*ebx_57) - x87_r4_17)
        long double x87_r5_41 = fconvert.t(var_58_4)
        arg2[edi_18] = fconvert.s(x87_r5_41 - fconvert.t(*var_5c_9))
        *var_60_6 = fconvert.s(x87_r5_41 + fconvert.t(*var_5c_9))
        void* ebx_59 = var_5c_9 + (ecx << 2)
        void* edi_19 = edi_18 + (ecx << 2)
        void* var_60_7 = &var_60_6[ecx << 2]
        void* ebx_63 = ebx_57 + (ecx << 2)
        float* ebp_59 = arg3
        arg3 += ecx
        var_50_2 += ecx * 4
        float var_58_5 =
            fconvert.s((fconvert.t(arg1[esi_18]) + fconvert.t(arg1[ebp_59])) * x87_r7_85)
        void* esi_19 = esi_18 + ecx
        float* ebp_60 = var_60_7
        long double x87_r4_21 = fconvert.t(fconvert.s((fconvert.t(arg1[esi_18])
            - fconvert.t(arg1[ebp_59])) * x87_r6_43))
        arg2[edi_19 - 1] = fconvert.s(fconvert.t(*ebx_63) + x87_r4_21)
        ebp_60[-1] = fconvert.s(fconvert.t(*ebx_63) - x87_r4_21)
        long double x87_r5_53 = fconvert.t(var_58_5)
        arg2[edi_19] = fconvert.s(x87_r5_53 - fconvert.t(*ebx_59))
        *ebp_60 = fconvert.s(x87_r5_53 + fconvert.t(*ebx_59))
        void* edi_20 = edi_19 + (ecx << 2)
        void* var_60_8 = var_60_7 + ebx_52
        float* ebx_69 = ebx_63 + (ecx << 2)
        float* ebp_63 = arg3
        arg3 += ecx
        float var_58_6 =
            fconvert.s((fconvert.t(arg1[esi_19]) + fconvert.t(arg1[ebp_63])) * x87_r7_85)
        esi_16 = esi_19 + ecx
        long double x87_r4_25 = fconvert.t(fconvert.s((fconvert.t(arg1[esi_19])
            - fconvert.t(arg1[ebp_63])) * x87_r6_43))
        arg2[edi_20 - 1] = fconvert.s(fconvert.t(*ebx_69) + x87_r4_25)
        float* ebx_70 = ebx_59 + (ecx << 2)
        *(var_60_8 - 4) = fconvert.s(fconvert.t(*ebx_69) - x87_r4_25)
        long double x87_r5_65 = fconvert.t(var_58_6)
        arg2[edi_20] = fconvert.s(x87_r5_65 - fconvert.t(*ebx_70))
        *var_60_8 = fconvert.s(x87_r5_65 + fconvert.t(*ebx_70))
        var_5c_8 = &ebx_70[ecx]
        edi_17 = edi_20 + (ecx << 2)
        var_60_5 = var_60_8 + ebx_52
        ebx_53 = ecx << 2
        var_54_2 = ebx_69 + ebx_53
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)

if (var_4c_4 s>= arg4)
    return 

void* var_30_3 = &arg2[edi_17]
float* ebx_79 = &arg1[esi_16]
float* edx = &arg2[edi_17 + (ecx << 1)]
float* esi_21 = &arg1[esi_16 + ebp_1]
float* ecx_3 = &arg1[arg3]
arg1 = &arg1[var_50_2 - 1]
float* var_14_6 = edx
arg4 -= var_4c_4
int32_t i_4

do
    float var_58_7 = fconvert.s((fconvert.t(*ecx_3) + fconvert.t(*ebx_79)) * x87_r7_85)
    long double x87_r5_70 = fconvert.t(*ebx_79)
    ebx_79 = &ebx_79[ecx]
    long double x87_r5_71 = x87_r5_70 - fconvert.t(*ecx_3)
    ecx_3 = &ecx_3[ecx]
    long double x87_r4_29 = fconvert.t(fconvert.s(x87_r5_71 * x87_r6_43))
    *(var_30_3 - 4) = fconvert.s(fconvert.t(*arg1) + x87_r4_29)
    long double x87_r5_76 = fconvert.t(*arg1) - x87_r4_29
    arg1 = &arg1[ecx]
    edx[-1] = fconvert.s(x87_r5_76)
    long double x87_r5_77 = fconvert.t(var_58_7)
    *var_30_3 = fconvert.s(x87_r5_77 - fconvert.t(*esi_21))
    long double x87_r5_78 = x87_r5_77 + fconvert.t(*esi_21)
    esi_21 = &esi_21[ecx]
    var_30_3 += ecx * 0x10
    *edx = fconvert.s(x87_r5_78)
    edx = &var_14_6[ecx << 2]
    i_4 = arg4
    arg4 -= 1
    var_14_6 = edx
while (i_4 != 1)
