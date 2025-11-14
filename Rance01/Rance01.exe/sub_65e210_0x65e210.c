// 函数: sub_65e210
// 地址: 0x65e210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg2)
*(arg1 + 0x70) = fconvert.s(x87_r7)
fconvert.t(16f) - x87_r7
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    *(arg1 + 0x70) = fconvert.s(x87_r7)

long double x87_r7_1 = fconvert.t(0.25f)
long double temp1 = fconvert.t(*(arg1 + 0x70))
x87_r7_1 - temp1
int16_t result = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp1) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp1 ? 1 : 0) << 0xe | 0x3800

if ((result:1.b & 0x41) != 0)
    return result

*(arg1 + 0x70) = fconvert.s(x87_r7_1)
return result
