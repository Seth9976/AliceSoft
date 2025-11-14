// 函数: sub_5c1ae0
// 地址: 0x5c1ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_10 = arg4
int32_t esi_1 = arg3 * i_10
int32_t edx = 0
int32_t var_c = esi_1
int32_t var_2c = 0

if (i_10 s>= 4)
    int32_t i_6 = ((i_10 - 4) u>> 2) + 1
    float* ebx_2 = &arg5[arg3 * 2 - 1]
    var_2c = (((i_10 - 4) u>> 2) + 1) * 4
    int32_t i
    
    do
        int32_t ebp_5 = arg3 << 3
        arg5[edx * 2] = fconvert.s(fconvert.t(arg1[edx]) + fconvert.t(arg1[esi_1]))
        int32_t edx_1 = edx + arg3
        int32_t esi_2 = esi_1 + arg3
        *ebx_2 = fconvert.s(fconvert.t(arg1[edx]) - fconvert.t(arg1[esi_1]))
        void* ebx_3 = &ebx_2[arg3 * 2]
        arg5[edx_1 * 2] = fconvert.s(fconvert.t(arg1[edx_1]) + fconvert.t(arg1[esi_2]))
        int32_t edx_2 = edx_1 + arg3
        int32_t esi_3 = esi_2 + arg3
        *ebx_3 = fconvert.s(fconvert.t(arg1[edx_1]) - fconvert.t(arg1[esi_2]))
        void* ebx_4 = ebx_3 + ebp_5
        arg5[edx_2 * 2] = fconvert.s(fconvert.t(arg1[edx_2]) + fconvert.t(arg1[esi_3]))
        int32_t edx_3 = edx_2 + arg3
        int32_t esi_4 = esi_3 + arg3
        *ebx_4 = fconvert.s(fconvert.t(arg1[edx_2]) - fconvert.t(arg1[esi_3]))
        void* ebx_5 = ebx_4 + ebp_5
        arg5[edx_3 * 2] = fconvert.s(fconvert.t(arg1[edx_3]) + fconvert.t(arg1[esi_4]))
        edx = edx_3 + arg3
        esi_1 = esi_4 + arg3
        *ebx_5 = fconvert.s(fconvert.t(arg1[edx_3]) - fconvert.t(arg1[esi_4]))
        ebx_2 = ebx_5 + ebp_5
        i = i_6
        i_6 -= 1
    while (i != 1)
    i_10 = arg4

if (var_2c s< i_10)
    float* ebx_6 = &arg1[edx]
    void* var_18_1 = &arg5[edx * 2]
    float* var_28_1 = &arg5[arg3 * 2 + (edx << 1) - 1]
    float* esi_5 = &arg1[esi_1]
    int32_t i_5 = arg4 - var_2c
    int32_t i_1
    
    do
        float* edx_8 = var_18_1
        *edx_8 = fconvert.s(fconvert.t(*ebx_6) + fconvert.t(*esi_5))
        *var_28_1 = fconvert.s(fconvert.t(*ebx_6) - fconvert.t(*esi_5))
        var_28_1 = &var_28_1[arg3 * 2]
        var_18_1 = &edx_8[arg3 * 2]
        ebx_6 = &ebx_6[arg3]
        esi_5 = &esi_5[arg3]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    i_10 = arg4

if (arg3 s< 2)
    return 

int32_t edx_19

if (arg3 != 2)
    if (i_10 s> 0)
        void* var_1c_1 = &arg1[var_c]
        float* var_18_2 = arg5
        float* var_20_1 = arg1
        float* var_24_1 = &arg5[arg3 * 2]
        int32_t i_7 = i_10
        int32_t i_2
        
        do
            if (arg3 s> 2)
                float* esi_6 = var_20_1
                float* var_2c_1 = var_24_1
                float* ebx_8 = arg6 + 4
                float* var_28_2 = var_18_2
                void* edx_16 = var_1c_1
                int32_t j_1 = ((arg3 - 3) u>> 1) + 1
                int32_t j
                
                do
                    long double x87_r7_21 = fconvert.t(*(edx_16 + 4))
                    edx_16 += 8
                    var_2c_1 -= 8
                    esi_6 = &esi_6[2]
                    float* ebp_14 = &var_28_2[2]
                    var_28_2 = ebp_14
                    long double x87_r7_23 =
                        x87_r7_21 * fconvert.t(ebx_8[-1]) + fconvert.t(*edx_16) * fconvert.t(*ebx_8)
                    ebx_8 = &ebx_8[2]
                    j = j_1
                    j_1 -= 1
                    long double x87_r6_5 = fconvert.t(fconvert.s(
                        fconvert.t(*edx_16) * fconvert.t(ebx_8[-3])
                        - fconvert.t(*(edx_16 - 4)) * fconvert.t(ebx_8[-2])))
                    *ebp_14 = fconvert.s(fconvert.t(*esi_6) + x87_r6_5)
                    *var_2c_1 = fconvert.s(x87_r6_5 - fconvert.t(*esi_6))
                    long double x87_r6_7 = fconvert.t(fconvert.s(x87_r7_23))
                    var_28_2[-1] = fconvert.s(fconvert.t(esi_6[-1]) + x87_r6_7)
                    var_2c_1[-1] = fconvert.s(fconvert.t(esi_6[-1]) - x87_r6_7)
                while (j != 1)
                i_10 = arg4
            
            var_24_1 = &var_24_1[arg3 * 2]
            var_18_2 = &var_18_2[arg3 * 2]
            var_20_1 = &var_20_1[arg3]
            var_1c_1 += arg3 << 2
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    edx_19 = arg3 & 0x80000001
    
    if (edx_19 s< 0)
        edx_19 = ((edx_19 - 1) | 0xfffffffe) + 1

if (arg3 != 2 && edx_19 == 1)
    return 

int32_t ebx_9 = arg3 - 1
int32_t esi_9 = arg3 - 1 + var_c
int32_t edx_22 = arg3
int32_t var_2c_2 = 0

if (i_10 s>= 4)
    int32_t i_8 = ((arg4 - 4) u>> 2) + 1
    var_2c_2 = (((arg4 - 4) u>> 2) + 1) * 4
    int32_t i_3
    
    do
        int32_t esi_10 = esi_9 + arg3
        int32_t ebp_24 = arg3 * 2
        arg5[edx_22] = fconvert.s(fneg(fconvert.t(arg1[esi_9])))
        int32_t ebx_10 = ebx_9 + arg3
        arg5[edx_22 - 1] = fconvert.s(fconvert.t(arg1[ebx_9]))
        int32_t edx_23 = edx_22 + (arg3 << 1)
        int32_t esi_11 = esi_10 + arg3
        arg5[edx_23] = fconvert.s(fneg(fconvert.t(arg1[esi_10])))
        int32_t ebx_11 = ebx_10 + arg3
        arg5[edx_23 - 1] = fconvert.s(fconvert.t(arg1[ebx_10]))
        int32_t edx_24 = edx_23 + ebp_24
        int32_t esi_12 = esi_11 + arg3
        arg5[edx_24] = fconvert.s(fneg(fconvert.t(arg1[esi_11])))
        int32_t ebx_12 = ebx_11 + arg3
        arg5[edx_24 - 1] = fconvert.s(fconvert.t(arg1[ebx_11]))
        int32_t edx_25 = edx_24 + ebp_24
        esi_9 = esi_12 + arg3
        arg5[edx_25] = fconvert.s(fneg(fconvert.t(arg1[esi_12])))
        ebx_9 = ebx_12 + arg3
        arg5[edx_25 - 1] = fconvert.s(fconvert.t(arg1[ebx_12]))
        edx_22 = edx_25 + ebp_24
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)
    i_10 = arg4

if (var_2c_2 s>= i_10)
    return 

void* edx_26 = &arg5[edx_22]
int32_t i_9 = arg4 - var_2c_2
void* esi_13 = &arg1[esi_9]
arg1 = &arg1[ebx_9]
int32_t i_4

do
    long double x87_r7_47 = fconvert.t(*esi_13)
    esi_13 += arg3 * 4
    *edx_26 = fconvert.s(fneg(x87_r7_47))
    long double x87_r7_49 = fconvert.t(*arg1)
    arg1 = &arg1[arg3]
    *(edx_26 - 4) = fconvert.s(x87_r7_49)
    edx_26 += arg3 << 3
    i_4 = i_9
    i_9 -= 1
while (i_4 != 1)
