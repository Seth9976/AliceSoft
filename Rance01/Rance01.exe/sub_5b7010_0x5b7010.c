// 函数: sub_5b7010
// 地址: 0x5b7010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t* ebp = arg3
int32_t ebx = ebp[2]
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t edi = *(arg1 + 0x1c)

if (*(ebx + (edi << 2)) != 0)
    return 

int32_t eax_2
int32_t edx_2
edx_2:eax_2 = sx.q(*(*(*(*(arg1 + 0x40) + 4) + 0x1c) + (edi << 2)))
int32_t esi_1 = (eax_2 - edx_2) s>> 1
long double x87_r6_1 = fconvert.t(0.5)
long double x87_r7_2 = float.t(*(arg2 + 4)) * x87_r6_1
double var_14_1 = fconvert.d(x87_r6_1 * float.t(*(arg2 + 4)))
double var_c_1 = fconvert.d(float.t(*ebp))
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0_1
st0_1, x87control_1 =
    sub_70d210(mxcsr, x87control, x87_r7_2 * x87_r7_2 * fconvert.t(1.8499999754340024e-08))
int16_t x87control_2
long double st0_2
st0_2, x87control_2 =
    sub_70d210(mxcsr, x87control_1, fconvert.t(var_14_1) * fconvert.t(0.00073999998858198524))
void* var_38_1 = (esi_1 << 2) + 4
var_14_1.d = fconvert.s(fconvert.t(var_c_1) / (st0_2 * fconvert.t(13.100000381469727)
    + fconvert.t(fconvert.d(st0_1 * fconvert.t(2.2400000095367432)))
    + fconvert.t(var_14_1) * fconvert.t(9.9999997473787516e-05)))
*(ebx + (edi << 2)) = sub_6b5c43()
int32_t ebx_1 = 0
double var_24_1
var_24_1.d = 0

if (esi_1 s> 0)
    do
        long double x87_r5_1 = fconvert.t(0.5)
        var_24_1.d = fconvert.s(float.t(var_24_1.d))
        long double x87_r4_3 = fconvert.t(var_24_1.d)
        long double x87_r6_9 =
            float.t(*(arg2 + 4)) * x87_r5_1 / fconvert.t(fconvert.s(float.t(esi_1))) * x87_r4_3
        long double x87_r5_2 = x87_r5_1 * float.t(*(arg2 + 4))
        var_24_1 = fconvert.d(x87_r5_2 / x87_r5_2 * x87_r4_3)
        int16_t x87control_3
        long double st0_3
        st0_3, x87control_3 = sub_70d210(mxcsr, x87control_2, 
            x87_r6_9 * x87_r6_9 * fconvert.t(1.8499999754340024e-08))
        int16_t x87control_4
        long double st0_4
        st0_4, x87control_4 = sub_70d210(mxcsr, x87control_3, 
            fconvert.t(var_24_1) * fconvert.t(0.00073999998858198524))
        long double st0_5
        st0_5, x87control_2 = sub_70cb70(mxcsr, x87control_4, 
            fconvert.d((st0_4 * fconvert.t(13.100000381469727)
                + fconvert.t(fconvert.d(st0_3 * fconvert.t(2.2400000095367432)))
                + fconvert.t(var_24_1) * fconvert.t(9.9999997473787516e-05)) * fconvert.t(var_14_1.d)))
        int32_t eax_9 = sub_70c710(st0_5)
        int32_t ecx_2 = *ebp
        
        if (eax_9 s>= ecx_2)
            eax_9 = ecx_2 - 1
        
        *(*(ebp[2] + (edi << 2)) + (ebx_1 << 2)) = eax_9
        ebx_1 += 1
        var_24_1.d = ebx_1
    while (ebx_1 s< esi_1)

*(*(ebp[2] + (edi << 2)) + (ebx_1 << 2)) = 0xffffffff
ebp[edi + 3] = esi_1
