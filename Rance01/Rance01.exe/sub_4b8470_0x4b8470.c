// 函数: sub_4b8470
// 地址: 0x4b8470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = *arg2
int32_t i_2 = (arg2[1] - edi) s>> 2

if (i_2 == 1)
    sub_51e1c0(arg4, arg3, (*edi << 6) + *arg1, arg4)
    return arg3

long double x87_r7 = float.t(0)
float var_24 = fconvert.s(x87_r7)
float var_20 = fconvert.s(x87_r7)
float var_1c = fconvert.s(x87_r7)

if (i_2 s> 0)
    int32_t ebp_1 = *arg1
    float* esi_1 = *arg5
    void* edi_1 = edi - esi_1
    int32_t i_1 = i_2
    int32_t i
    
    do
        float var_c
        sub_51e1c0(arg4, &var_c, (*(edi_1 + esi_1) << 6) + ebp_1, arg4)
        arg5 = fconvert.s(fconvert.t(*esi_1))
        esi_1 = &esi_1[1]
        i = i_1
        i_1 -= 1
        long double x87_r6_1 = fconvert.t(arg5)
        var_24 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c) * x87_r6_1)) + fconvert.t(var_24))
        float var_8
        var_20 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_8) * x87_r6_1)) + fconvert.t(var_20))
        float var_4
        var_1c =
            fconvert.s(fconvert.t(fconvert.s(x87_r6_1 * fconvert.t(var_4))) + fconvert.t(var_1c))
    while (i != 1)

*arg3 = var_24
arg3[1] = var_20
arg3[2] = var_1c
return arg3
