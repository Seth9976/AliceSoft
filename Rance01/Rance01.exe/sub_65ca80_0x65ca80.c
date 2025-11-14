// 函数: sub_65ca80
// 地址: 0x65ca80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
long double x87_r7 = fconvert.t(*(arg2 + 0x70))
long double x87_r7_2

if (sx.d((arg1 u>> 0x10).w) s/ 0x78 s>= 0)
    x87_r7_2 = fconvert.t(fconvert.s(x87_r7 + fconvert.t(0.25)))
else
    x87_r7_2 = fconvert.t(fconvert.s(x87_r7 - fconvert.t(0.25)))

*(arg2 + 0x70) = fconvert.s(x87_r7_2)
fconvert.t(16f) - x87_r7_2
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    *(arg2 + 0x70) = fconvert.s(x87_r7_2)

long double x87_r7_3 = fconvert.t(0.25f)
long double temp1 = fconvert.t(*(arg2 + 0x70))
x87_r7_3 - temp1

if ((((x87_r7_3 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
    return 0

*(arg2 + 0x70) = fconvert.s(x87_r7_3)
return 0
