// 函数: sub_5ba9d0
// 地址: 0x5ba9d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(arg4)
int32_t esi = 0
int32_t mxcsr
int16_t x87control

if (arg6 s> 0)
    do
        long double st0_1
        st0_1, x87control = sub_70ca80(mxcsr, x87control, fconvert.t(*(arg5 + (esi << 2))))
        esi += 1
        *(arg5 + (esi << 2) - 4) = fconvert.s(st0_1 + st0_1)
    while (esi s< arg6)

if (arg3 s<= 0)
    return 

int32_t i = *arg2
int32_t* esi_1 = nullptr
int32_t edi_2 = 0

do
    long double x87_r7_5 = fconvert.t(0.5f)
    int32_t i_1 = i
    float var_18_1 = fconvert.s(x87_r7_5)
    arg4 = fconvert.s(x87_r7_5)
    long double x87_r6_1 = fconvert.t(2.0)
    int32_t eax_2 = 1
    long double x87_r6_3 = fconvert.t(fconvert.s(sub_70ca80(mxcsr, x87control, 
        float.t(i_1) * fconvert.t(fconvert.s(fconvert.t(3.1415927410125732) / x87_r7))) * x87_r6_1))
    
    if (arg6 s> 1)
        do
            long double x87_r5_2 = x87_r6_3 - fconvert.t(*(arg5 + (eax_2 << 2) - 4))
            eax_2 += 2
            arg4 = fconvert.s(x87_r5_2 * fconvert.t(arg4))
            var_18_1 = fconvert.s((x87_r6_3 - fconvert.t(*(arg5 + (eax_2 << 2) - 8)))
                * fconvert.t(var_18_1))
        while (eax_2 s< arg6)
    
    float var_18_2
    long double x87_r7_16
    
    if (eax_2 != arg6)
        long double x87_r4_1 = fconvert.t(var_18_1)
        var_18_2 = fconvert.s((x87_r6_1 - x87_r6_3) * x87_r4_1 * x87_r4_1)
        long double x87_r6_8 = fconvert.t(arg4)
        x87_r7_16 = (x87_r6_1 + x87_r6_3) * x87_r6_8 * x87_r6_8
    else
        long double x87_r6_7 = fconvert.t(var_18_1)
        var_18_2 = fconvert.s((fconvert.t(4.0) - x87_r6_1 * x87_r6_1) * x87_r6_7 * x87_r6_7)
        long double x87_r7_15 = fconvert.t(fconvert.s((x87_r6_1
            - fconvert.t(*(arg5 + (eax_2 << 2) - 4))) * fconvert.t(arg4)))
        x87_r7_16 = x87_r7_15 * x87_r7_15
    
    float var_14_2
    var_14_2.q = fconvert.d(fconvert.t(arg7))
    int16_t x87control_1
    long double st0_3
    st0_3, x87control_1 = __CIasin_default(fconvert.t(fconvert.s(x87_r7_16)) + fconvert.t(var_18_2))
    x87control = sub_70d0bc(mxcsr, x87control_1)
    long double x87_r6_9 = fconvert.t(fconvert.s((fconvert.t(var_14_2.q) / st0_3 - fconvert.t(arg8))
        * fconvert.t(0.1151292473077774)))
    edi_2 += 1
    *(esi_1 + arg1) = fconvert.s(fconvert.t(*(esi_1 + arg1)) * x87_r6_9)
    esi_1 = edi_2 << 2
    
    for (i = *(esi_1 + arg2); i == i_1; i = *(esi_1 + arg2))
        edi_2 += 1
        *(esi_1 + arg1) = fconvert.s(fconvert.t(*(esi_1 + arg1)) * x87_r6_9)
        esi_1 = edi_2 << 2
while (edi_2 s< arg3)
