// 函数: sub_51cbb0
// 地址: 0x51cbb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float edi_2 = arg4 * 0x2c + *(arg2 + 0x60)
int32_t i_2 = (*(edi_2 i+ 0x10) - *(edi_2 i+ 0xc)) s>> 2
float var_18

if (i_2 == 1)
    sub_51e1c0(arg1, &var_18, (**(edi_2 i+ 0xc) << 6) + *arg1, edi_2)
    *arg3 = fconvert.s(fconvert.t(var_18))
    float var_14
    arg3[1] = fconvert.s(fconvert.t(var_14))
    float var_10
    arg3[2] = fconvert.s(fconvert.t(var_10))
    return arg3

long double x87_r7_3 = float.t(0)
float var_24 = fconvert.s(x87_r7_3)
float var_20 = fconvert.s(x87_r7_3)
float var_1c = fconvert.s(x87_r7_3)

if (i_2 s> 0)
    int32_t ecx = *arg1
    float* esi_1 = *(edi_2 i+ 0x1c)
    arg4 = ecx
    int32_t* ebx_2 = *(edi_2 i+ 0xc) - esi_1
    int32_t i_1 = i_2
    int32_t i
    
    do
        float var_c
        ecx = sub_51e1c0(ecx, &var_c, (*(ebx_2 + esi_1) << 6) + arg4, edi_2)
        float var_28_1 = fconvert.s(fconvert.t(*esi_1))
        esi_1 = &esi_1[1]
        i = i_1
        i_1 -= 1
        long double x87_r6_1 = fconvert.t(var_28_1)
        var_18 = fconvert.s(fconvert.t(var_c) * x87_r6_1)
        var_24 = fconvert.s(fconvert.t(var_18) + fconvert.t(var_24))
        float var_8
        var_20 =
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_8) * x87_r6_1)) + fconvert.t(var_20))
        float var_4
        var_1c =
            fconvert.s(fconvert.t(fconvert.s(x87_r6_1 * fconvert.t(var_4))) + fconvert.t(var_1c))
    while (i != 1)

*arg3 = fconvert.s(fconvert.t(var_24))
arg3[1] = fconvert.s(fconvert.t(var_20))
arg3[2] = fconvert.s(fconvert.t(var_1c))
return arg3
