// 函数: sub_42bc10
// 地址: 0x42bc10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_1 = fconvert.t(arg2)
long double x87_r6 = fconvert.t(fconvert.s(float.t(*(arg1 + 0x9c))))
x87_r6 - x87_r7_1

if ((((x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
    long double x87_r6_2 = x87_r7_1 * fconvert.t(255.0)
    return sub_70c710(x87_r6_2 / x87_r6_2)

int32_t eax_2 = *(arg1 + 0x34)
int32_t edx = *(arg1 + 0xa0)
long double x87_r6_3 = float.t(eax_2 - edx)
x87_r6_3 - x87_r6
int32_t eax_3
eax_3.w = (x87_r6_3 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r6) ? 1 : 0) << 0xa
    | (x87_r6_3 == x87_r6 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x5}

if (p)
    return 0xff

return sub_70c710((float.t(eax_2) - x87_r6) * fconvert.t(255.0) / float.t(edx))
