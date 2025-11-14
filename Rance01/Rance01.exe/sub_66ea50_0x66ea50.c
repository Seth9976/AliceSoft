// 函数: sub_66ea50
// 地址: 0x66ea50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4_3 = arg3
bool cond:0 = *arg1 == 2
arg4[2] = fconvert.s(float.t(0))
*arg4 = 0
arg4[1] = 0

if (not(cond:0) && *arg3 != 2)
    int32_t eax_1 = *(arg1 + 4) * arg3[1]
    arg4[1] = eax_1
    *arg4 = 1
    arg4[2] = fconvert.s(float.t(eax_1))
    return arg4

long double x87_r7_5 =
    fconvert.t(fconvert.s(fconvert.t(*(arg1 + 8)) * fconvert.t(fconvert.s(fconvert.t(arg3[2])))))
int32_t eax_3 = sub_70c710(x87_r7_5)
arg4[2] = fconvert.s(x87_r7_5)
arg4[1] = eax_3
*arg4 = 2
return arg4
