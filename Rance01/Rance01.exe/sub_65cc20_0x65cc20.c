// 函数: sub_65cc20
// 地址: 0x65cc20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x70)) + fconvert.t(0.25)))
*(arg1 + 0x70) = fconvert.s(x87_r7_2)
fconvert.t(16f) - x87_r7_2
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    *(arg1 + 0x70) = fconvert.s(x87_r7_2)

long double x87_r7_3 = fconvert.t(0.25f)
long double temp0 = fconvert.t(*(arg1 + 0x70))
x87_r7_3 - temp0

if ((((x87_r7_3 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
    return 0

*(arg1 + 0x70) = fconvert.s(x87_r7_3)
return 0
