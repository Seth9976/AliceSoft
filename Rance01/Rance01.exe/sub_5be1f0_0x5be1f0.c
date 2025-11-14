// 函数: sub_5be1f0
// 地址: 0x5be1f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
void* ebx = arg5
void* i_8 = *arg4
int32_t __saved_edi
int32_t* var_c = &__saved_edi
int32_t var_30 = __alloca_probe_16(i_8 << 2)
sub_5bd680(i_8, arg4[6], arg3, ebx, fconvert.s(fconvert.t(140f)), 0xffffffff)
int32_t i = 0

if (i_8 s>= 4)
    void* ecx_3 = &var_c[2]
    void* eax_4 = ebx + 4
    
    do
        long double x87_r7_2 = fconvert.t(arg3[i]) - fconvert.t(*(eax_4 - 4))
        i += 4
        eax_4 += 0x10
        ecx_3 += 0x10
        *(ecx_3 - 0x18) = fconvert.s(x87_r7_2)
        *(var_c - ebx + eax_4 - 0x10) =
            fconvert.s(fconvert.t(*(arg3 - ebx + eax_4 - 0x10)) - fconvert.t(*(eax_4 - 0x10)))
        *(ecx_3 - 0x10) =
            fconvert.s(fconvert.t(*(arg3 - var_c + ecx_3 - 0x10)) - fconvert.t(*(eax_4 - 0xc)))
        *(ecx_3 - 0xc) = fconvert.s(fconvert.t(arg3[i - 1]) - fconvert.t(*(eax_4 - 8)))
    while (i s< i_8 - 3)
    
    ebx = arg5

if (i s< i_8)
    void* eax_5 = ebx + (i << 2)
    void* i_5 = i_8 - i
    void* i_1
    
    do
        long double x87_r7_10 = fconvert.t(*(arg3 - ebx + eax_5)) - fconvert.t(*eax_5)
        eax_5 += 4
        i_1 = i_5
        i_5 -= 1
        *(var_c - ebx + eax_5 - 4) = fconvert.s(x87_r7_10)
    while (i_1 != 1)

void* ecx_9 = arg4[1]
void* var_30_2 = ecx_9
sub_5bd680(i_8, arg4[6], var_c, ebx, fconvert.s(float.t(0)), *(ecx_9 + 0x80))
int32_t result = nullptr
int32_t result_1 = 0

if (i_8 s>= 4)
    void* eax_8 = &var_c[1]
    int32_t i_7 = ((i_8 - 4) u>> 2) + 1
    result_1 = i_7 << 2
    void* ecx_11 = &arg3[3]
    int32_t i_2
    
    do
        eax_8 += 0x10
        long double x87_r7_13 = fconvert.t(*(ecx_11 - 0xc)) - fconvert.t(*(eax_8 - 0x14))
        ecx_11 += 0x10
        i_2 = i_7
        i_7 -= 1
        *(eax_8 - 0x14) = fconvert.s(x87_r7_13)
        *(eax_8 - 0x10) =
            fconvert.s(fconvert.t(*(arg3 - var_c + eax_8 - 0x10)) - fconvert.t(*(eax_8 - 0x10)))
        *(eax_8 - 0xc) = fconvert.s(fconvert.t(*(ecx_11 - 0x14)) - fconvert.t(*(eax_8 - 0xc)))
        *(eax_8 - 8) = fconvert.s(fconvert.t(*(ecx_11 - 0x10)) - fconvert.t(*(eax_8 - 8)))
    while (i_2 != 1)
    result = result_1
    ebx = arg5

if (result s< i_8)
    void* i_6 = i_8 - result_1
    result = &var_c[result]
    void* i_3
    
    do
        long double x87_r7_20 = fconvert.t(*(arg3 - var_c + result))
        result += 4
        i_3 = i_6
        i_6 -= 1
        *(result - 4) = fconvert.s(x87_r7_20 - fconvert.t(*(result - 4)))
    while (i_3 != 1)

if (i_8 s> 0)
    int32_t esi_3 = var_c - ebx
    void* i_4
    
    do
        result = sub_70c710(fconvert.t(*ebx) + fconvert.t(0.5))
        
        if (result s>= 0x28)
            result = 0x27
        else if (result s< 0)
            result = 0
        
        ebx += 4
        i_4 = i_8
        i_8 -= 1
        *(ebx - 4) = fconvert.s(fconvert.t(*(arg4[1] + (result << 2) + 0x150))
            + fconvert.t(*(esi_3 + ebx - 4)))
    while (i_4 != 1)

sub_6b4885(eax_1 ^ &__saved_ebp)
return result
