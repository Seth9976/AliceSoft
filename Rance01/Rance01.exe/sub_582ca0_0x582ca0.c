// 函数: sub_582ca0
// 地址: 0x582ca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_1 = fconvert.t(0.5f)
long double x87_r6 = fconvert.t(arg5)
x87_r6 - x87_r7_1
int32_t eax
eax.w = (x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}
long double x87_r6_2

if (p)
    x87_r6_2 = (float.t(1) - x87_r7_1) * fconvert.t(96.0)
else
    x87_r6_2 = fconvert.t(96.0) * x87_r7_1

int32_t eax_6 = (*(*arg2 + 0x10))((*(*arg2 + 0x14))(
    (sub_70c710(x87_r6_2 + x87_r6_2) & 0xfffffffe) + 1, sub_70c710(x87_r7_1 * fconvert.t(255.0))))
sub_57e020(arg2, *(arg1 + 4), arg4, arg3, eax_6)
int32_t result
result.b = 1
return result
