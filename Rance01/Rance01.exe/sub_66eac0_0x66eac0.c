// 函数: sub_66eac0
// 地址: 0x66eac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4_3 = arg3
bool cond:0 = *arg1 == 2
arg4[2] = fconvert.s(float.t(0))
*arg4 = 0
arg4[1] = 0

if (not(cond:0) && *arg3 != 2)
    int32_t temp0 = divs.dp.d(sx.q(*(arg1 + 4)), arg3[1])
    *arg4 = 1
    arg4[1] = temp0
    arg4[2] = fconvert.s(float.t(temp0))
    return arg4

long double x87_r7_5 =
    fconvert.t(fconvert.s(fconvert.t(*(arg1 + 8)) / fconvert.t(fconvert.s(fconvert.t(arg3[2])))))
int32_t eax_4 = sub_70c710(x87_r7_5)
arg4[2] = fconvert.s(x87_r7_5)
arg4[1] = eax_4
*arg4 = 2
return arg4
