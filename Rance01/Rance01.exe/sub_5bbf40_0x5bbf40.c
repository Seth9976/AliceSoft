// 函数: sub_5bbf40
// 地址: 0x5bbf40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp)
int32_t edi_1 = ((edx & 3) + eax_1) s>> 2
int32_t eax_3 = sub_6b5c43(edi_1 << 2)
int32_t eax_4 = sub_6b5c43((edi_1 + ebp) * 4)
float var_34 = fconvert.s(float.t(arg2))
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_70cf70(mxcsr, x87control, fconvert.t(var_34))
int16_t x87control_2
long double st0_1
st0_1, x87control_2 = sub_70cf70(mxcsr, x87control_1, fconvert.t(2.0))
uint32_t var_4c
var_4c.q = fconvert.d(fconvert.t(fconvert.d(st0)) / st0_1 + fconvert.t(0.5))
int16_t x87control_3
long double st0_2
st0_2, x87control_3 = sub_70cb70(mxcsr, x87control_2, var_4c)
int32_t eax_7 = sub_70c710(st0_2)
long double x87_r7_8 = fconvert.t(3.1415927410125732)
arg1[3] = eax_3
int32_t esi_1 = 0
char var_28 = eax_7.b
arg1[1] = eax_7
*arg1 = ebp
arg1[2] = eax_4

if (edi_1 s> 0)
    int32_t var_30_1 = 0
    float* ebp_1 = eax_4 + (ebp s>> 1 << 2)
    int32_t var_2c_2 = 1
    
    do
        long double x87_r7_11 =
            float.t(var_30_1) * fconvert.t(fconvert.d(x87_r7_8 / fconvert.t(var_34)))
        int32_t var_24
        var_24.q = fconvert.d(x87_r7_11)
        int16_t x87control_4
        int80_t st0_3
        st0_3, x87control_4 = sub_70ca80(mxcsr, x87control_3, x87_r7_11)
        *(eax_4 + (esi_1 << 3)) = fconvert.s(st0_3)
        int16_t x87control_5
        long double st0_4
        st0_4, x87control_5 = sub_70c950(mxcsr, x87control_4, fconvert.t(var_24.q))
        *(eax_4 + (esi_1 << 3) + 4) = fconvert.s(fneg(st0_4))
        long double x87_r7_17 =
            float.t(var_2c_2) * fconvert.t(fconvert.d(x87_r7_8 / float.t(ebp * 2)))
        var_24.q = fconvert.d(x87_r7_17)
        int16_t x87control_6
        long double st0_5
        st0_5, x87control_6 = sub_70ca80(mxcsr, x87control_5, x87_r7_17)
        *ebp_1 = fconvert.s(st0_5)
        long double st0_6
        st0_6, x87control_3 = sub_70c950(mxcsr, x87control_6, fconvert.t(var_24.q))
        ebp_1[1] = fconvert.s(st0_6)
        var_30_1 += 4
        var_2c_2 += 2
        esi_1 += 1
        ebp_1 = &ebp_1[2]
    while (esi_1 s< edi_1)
    
    x87_r7_8 = fconvert.t(3.1415927410125732)
    ebp = arg2

int32_t eax_11
int32_t edx_3
edx_3:eax_11 = sx.q(ebp)
int32_t i_4 = ((edx_3 & 7) + eax_11) s>> 3

if (i_4 s> 0)
    arg2 = 2
    float* ebx_1 = eax_4 + (ebp << 2)
    int32_t i_2 = i_4
    int32_t i
    
    do
        long double x87_r7_23 =
            float.t(arg2) * fconvert.t(fconvert.d(x87_r7_8 / fconvert.t(var_34)))
        int16_t x87control_7
        long double st0_7
        st0_7, x87control_7 = sub_70ca80(mxcsr, x87control_3, x87_r7_23)
        *ebx_1 = fconvert.s(st0_7 * fconvert.t(0.5))
        long double st0_8
        st0_8, x87control_3 = sub_70c950(mxcsr, x87control_7, fconvert.t(fconvert.d(x87_r7_23)))
        arg2 += 4
        ebx_1 = &ebx_1[2]
        i = i_2
        i_2 -= 1
        ebx_1[-1] = fconvert.s(st0_8 * fconvert.t(-0.5))
    while (i != 1)

int32_t i_3 = 1 << (var_28 - 2)
int32_t edx_5 = 0

if (i_4 s> 0)
    do
        int32_t ebx_2 = 0
        int32_t ecx_8 = 0
        
        if (i_3 != 0)
            int32_t i_1 = i_3
            
            do
                if ((edx_5 & i_1) != 0)
                    ebx_2 |= 1 << ecx_8.b
                
                ecx_8 += 1
                i_1 = i_3 s>> ecx_8.b
            while (i_1 != 0)
        
        *(eax_3 + (edx_5 << 3)) = (not.d(ebx_2) & ((1 << (var_28 - 1)) - 1)) - 1
        *(eax_3 + (edx_5 << 3) + 4) = ebx_2
        edx_5 += 1
    while (edx_5 s< i_4)

arg1[4] = fconvert.s(fconvert.t(4.0) / fconvert.t(var_34))
