// 函数: sub_5be3e0
// 地址: 0x5be3e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t eax_2 = *arg1
void* ebx = arg3
int32_t edi = arg1[0xa]
__alloca_probe_16(edi << 2)
void* edx = arg1[1]
int32_t __saved_edi
int32_t* var_10 = &__saved_edi
float var_c = fconvert.s(fconvert.t(*(edx + 4)) + fconvert.t(arg5))
int32_t ecx_2
int32_t edi_1

if (edi s> 0)
    edi_1, ecx_2 = __memfill_u32(&__saved_edi, 0xc61c3c00, edi)
long double x87_r7_2 = fconvert.t(var_c)
long double x87_r6 = fconvert.t(*(edx + 8))
x87_r6 - x87_r7_2

if ((((x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
    x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*(edx + 8))))

int32_t ecx_3 = eax_2
int32_t edi_2 = 0

if (ecx_3 s>= 4)
    void* edx_2 = 0xfffffff8 - ebx
    int32_t ecx_6 = ((ecx_3 - 4) u>> 2) + 1
    float* var_c_2 = 8
    void* eax_5 = ebx + 8
    void* var_18_1 = edx_2
    edi_2 = ecx_6 << 2
    
    while (true)
        void* edx_3 = edx_2 + eax_5
        *(eax_5 - 8) = fconvert.s(fconvert.t(*(edx_3 + arg1[4])) + x87_r7_2)
        float* ebx_3 = var_c_2
        var_c_2 = &var_c_2[4]
        *(eax_5 - 4) = fconvert.s(fconvert.t(*(edx_3 + arg1[4] + 4)) + x87_r7_2)
        float* edx_6 = 4 - ebx + eax_5
        eax_5 += 0x10
        int32_t temp0_1 = ecx_6
        ecx_6 -= 1
        *(eax_5 - 0x10) = fconvert.s(fconvert.t(*(ebx_3 + arg1[4])) + x87_r7_2)
        *(eax_5 - 0xc) = fconvert.s(fconvert.t(*(edx_6 + arg1[4])) + x87_r7_2)
        
        if (temp0_1 == 1)
            break
        
        edx_2 = var_18_1
    
    ebx = arg3
    ecx_3 = eax_2

while (edi_2 s< ecx_3)
    long double x87_r6_9 = fconvert.t(*(arg1[4] + (edi_2 << 2)))
    edi_2 += 1
    *(ebx + (edi_2 << 2) - 4) = fconvert.s(x87_r6_9 + x87_r7_2)

int32_t var_28 = ecx_3
int80_t result = sub_5bd0e0(arg1, arg1[2], arg2, ebx, var_10, fconvert.s(fconvert.t(arg4)))
sub_5bd560(arg1, var_10, ebx)
sub_6b4885(eax_1 ^ &__saved_ebp)
return result
