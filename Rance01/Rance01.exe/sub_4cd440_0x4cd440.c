// 函数: sub_4cd440
// 地址: 0x4cd440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_3 = fconvert.t(fconvert.s(float.t(arg3) * fconvert.t(arg2) / fconvert.t(1000.0)
    + fconvert.t(*arg1)))
*arg1 = fconvert.s(x87_r7_3)
float.t(1) - x87_r7_3
bool p = unimplemented  {test ah, 0x41}

if (not(p))
    int32_t eax_1 = sub_70c710(x87_r7_3)
    *arg1 = fconvert.s(x87_r7_3 - float.t(eax_1))
    return eax_1

long double x87_r6_3 = float.t(0)
x87_r6_3 - x87_r7_3
int16_t eax = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
    | 0x3800

if ((eax:1.b & 0x41) != 0)
    return eax

int32_t eax_2 = sub_70c710(x87_r7_3)
*arg1 = fconvert.s(float.t(1) - (float.t(eax_2) - x87_r7_3))
return eax_2
