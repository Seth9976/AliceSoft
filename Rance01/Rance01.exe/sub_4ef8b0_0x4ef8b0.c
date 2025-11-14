// 函数: sub_4ef8b0
// 地址: 0x4ef8b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(0)
long double x87_r6 = fconvert.t(arg3)
x87_r6 - x87_r7
int32_t eax
eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x41}

if (p)
    int32_t ecx
    int32_t var_18_1 = ecx
    int32_t edx_2
    long double st0_1
    st0_1, edx_2 = sub_42a880(fconvert.s(fconvert.t(fconvert.s(x87_r7
        * fconvert.t(3.1415927410125732) / fconvert.t(180.0)))))
    
    for (int32_t i = 0; i s< 0x64; i += 1)
        float var_c
        float* eax_4
        eax_4, edx_2 = sub_4ef550(arg4, edx_2, &var_c)
        float var_8
        float var_4
        long double x87_r7_9 = fconvert.t(fconvert.s(fconvert.t(arg1[1]) * fconvert.t(var_8)
            + fconvert.t(*arg1) * fconvert.t(var_c) + fconvert.t(arg1[2]) * fconvert.t(var_4)))
        long double x87_r6_5 = fconvert.t(fconvert.s(st0_1))
        x87_r6_5 - x87_r7_9
        eax_4.w = (x87_r6_5 < x87_r7_9 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_5, x87_r7_9) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_9 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            *arg2 = var_c
            arg2[1] = var_8
            arg2[2] = var_4
            return arg2

int32_t ecx_1 = arg1[1]
int32_t edx_1 = arg1[2]
*arg2 = *arg1
arg2[1] = ecx_1
arg2[2] = edx_1
return arg2
