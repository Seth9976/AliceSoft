// 函数: sub_5bcd10
// 地址: 0x5bcd10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
void* eax_2 = *arg1
int32_t ecx_1 = eax_2 s>> 1
int32_t ecx_3 = eax_2 s>> 2
void* eax_4 = eax_2 * 4
int32_t ebx_1 = eax_2 s>> 3
__alloca_probe_16(eax_4)
int32_t ecx_4 = ecx_1 << 2
int32_t __saved_esi
int32_t* esi = &__saved_esi
void* edx = &(&__saved_esi)[ecx_1]
void* edx_3 = arg2 + ((ecx_3 + ecx_1) << 2)
float* var_14 = edx_3 + 4
float* eax_9 = arg1[2] + ecx_4
int32_t ecx_5 = 0
void* var_c = edx_3

if (ebx_1 s> 0)
    while (true)
        var_c = edx_3 - 0x10
        float* edx_5 = var_14
        eax_9 -= 8
        var_14 = &var_14[4]
        ecx_5 += 2
        long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(edx_3 - 8)) + fconvert.t(*edx_5)))
        long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(edx_5[2]) + fconvert.t(*var_c)))
        *(edx + (ecx_5 << 2) - 8) =
            fconvert.s(fconvert.t(eax_9[1]) * x87_r4_1 + fconvert.t(*eax_9) * x87_r6_1)
        *(edx + (ecx_5 << 2) - 4) =
            fconvert.s(x87_r4_1 * fconvert.t(*eax_9) - x87_r6_1 * fconvert.t(eax_9[1]))
        
        if (ecx_5 s>= ebx_1)
            break
        
        edx_3 = var_c

float* var_14_1 = arg2 + 4
int32_t edx_11 = ecx_1 - ebx_1
int32_t var_28_1 = edx_11

if (ecx_5 s< edx_11)
    float* ebx_2 = var_14_1
    
    do
        void* edx_13 = var_c - 0x10
        long double x87_r7_11 = fconvert.t(*(var_c - 8)) - fconvert.t(*ebx_2)
        eax_9 -= 8
        var_c = edx_13
        ecx_5 += 2
        ebx_2 = &ebx_2[4]
        edx_11 = &(&__saved_esi)[ecx_1]
        long double x87_r6_3 = fconvert.t(fconvert.s(x87_r7_11))
        long double x87_r4_3 = fconvert.t(fconvert.s(fconvert.t(*edx_13) - fconvert.t(ebx_2[-2])))
        *(edx_11 + (ecx_5 << 2) - 8) =
            fconvert.s(fconvert.t(eax_9[1]) * x87_r4_3 + fconvert.t(*eax_9) * x87_r6_3)
        *(edx_11 + (ecx_5 << 2) - 4) =
            fconvert.s(x87_r4_3 * fconvert.t(*eax_9) - x87_r6_3 * fconvert.t(eax_9[1]))
    while (ecx_5 s< var_28_1)
    
    var_14_1 = ebx_2

float* ebx_4 = arg2 + eax_4

if (ecx_5 s< ecx_1)
    edx_11 = var_14_1
    
    while (true)
        eax_9 -= 8
        long double x87_r7_21 = fneg(fconvert.t(ebx_4[-2])) - fconvert.t(*edx_11)
        ecx_5 += 2
        edx_11 += 0x10
        void* ebx_7 = &(&__saved_esi)[ecx_1]
        long double x87_r6_5 = fconvert.t(fconvert.s(x87_r7_21))
        long double x87_r4_5 =
            fconvert.t(fconvert.s(fneg(fconvert.t(*(ebx_4 - 0x10))) - fconvert.t(*(edx_11 - 8))))
        *(ebx_7 + (ecx_5 << 2) - 8) =
            fconvert.s(fconvert.t(eax_9[1]) * x87_r4_5 + fconvert.t(*eax_9) * x87_r6_5)
        *(ebx_7 + (ecx_5 << 2) - 4) =
            fconvert.s(x87_r4_5 * fconvert.t(*eax_9) - x87_r6_5 * fconvert.t(eax_9[1]))
        
        if (ecx_5 s>= ecx_1)
            break
        
        ebx_4 -= 0x10

int32_t var_38 = ecx_1
void* var_3c = &(&__saved_esi)[ecx_1]
sub_5bc900(arg1, sub_5bc7f0(arg1, edx_11, ecx_5), &__saved_esi)
float* result = arg1[2] + ecx_4
float* ecx_7 = ecx_4 + arg3
int32_t ebx_9 = ecx_3
int32_t var_10_1 = 0

if (ebx_9 s>= 4)
    void* edx_17 = arg3 + 8
    var_10_1 = (((ebx_9 - 4) u>> 2) + 1) * 4
    int32_t i_1 = ((ebx_9 - 4) u>> 2) + 1
    int32_t i
    
    do
        esi = &esi[8]
        long double x87_r7_31 = fconvert.t(*result) * fconvert.t(esi[-8])
        ecx_7 = &ecx_7[-4]
        result = &result[8]
        edx_17 += 0x10
        i = i_1
        i_1 -= 1
        *(edx_17 - 0x18) = fconvert.s((x87_r7_31 + fconvert.t(esi[-7]) * fconvert.t(result[-7]))
            * fconvert.t(arg1[4]))
        ecx_7[3] = fconvert.s((fconvert.t(result[-7]) * fconvert.t(esi[-8])
            - fconvert.t(result[-8]) * fconvert.t(esi[-7])) * fconvert.t(arg1[4]))
        *(edx_17 - 0x14) = fconvert.s((fconvert.t(result[-5]) * fconvert.t(esi[-5])
            + fconvert.t(result[-6]) * fconvert.t(esi[-6])) * fconvert.t(arg1[4]))
        ecx_7[2] = fconvert.s((fconvert.t(result[-5]) * fconvert.t(esi[-6])
            - fconvert.t(esi[-5]) * fconvert.t(result[-6])) * fconvert.t(arg1[4]))
        *(edx_17 - 0x10) = fconvert.s((fconvert.t(result[-3]) * fconvert.t(esi[-3])
            + fconvert.t(result[-4]) * fconvert.t(esi[-4])) * fconvert.t(arg1[4]))
        ecx_7[1] = fconvert.s((fconvert.t(esi[-4]) * fconvert.t(result[-3])
            - fconvert.t(result[-4]) * fconvert.t(esi[-3])) * fconvert.t(arg1[4]))
        *(edx_17 - 0xc) = fconvert.s((fconvert.t(result[-2]) * fconvert.t(esi[-2])
            + fconvert.t(result[-1]) * fconvert.t(esi[-1])) * fconvert.t(arg1[4]))
        *ecx_7 = fconvert.s((fconvert.t(esi[-2]) * fconvert.t(result[-1])
            - fconvert.t(result[-2]) * fconvert.t(esi[-1])) * fconvert.t(arg1[4]))
    while (i != 1)
    ebx_9 = ecx_3

if (var_10_1 s< ebx_9)
    int32_t edx_18 = var_10_1
    result -= esi
    
    do
        long double x87_r7_63 = fconvert.t(esi[1]) * fconvert.t(*(result + esi + 4))
        ecx_7 -= 4
        edx_18 += 1
        long double x87_r6_24 = fconvert.t(*(result + esi)) * fconvert.t(*esi)
        esi = &esi[2]
        *(arg3 + (edx_18 << 2) - 4) = fconvert.s((x87_r7_63 + x87_r6_24) * fconvert.t(arg1[4]))
        *ecx_7 = fconvert.s((fconvert.t(*(result + esi - 4)) * fconvert.t(esi[-2])
            - fconvert.t(esi[-1]) * fconvert.t(*(result + esi - 8))) * fconvert.t(arg1[4]))
    while (edx_18 s< ecx_3)

sub_6b4885(eax_1 ^ &__saved_ebp)
return result
