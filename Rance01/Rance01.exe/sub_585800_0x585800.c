// 函数: sub_585800
// 地址: 0x585800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7

if (*(arg1 + 0xc) == 0)
    x87_r7 = float.t(1)
else
    x87_r7 = fconvert.t(-1f)

float eax_1 = (*(*arg2 + 0x10))()
long double x87_r7_3 = fconvert.t(0.00999999978f)
long double x87_r6_1 = fconvert.t(fconvert.s(float.t(1) - fconvert.t(arg5)))
int32_t ecx_2 = (*(*arg2 + 0x14))()
x87_r6_1 - x87_r7_3
int32_t eax_3
eax_3.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    eax_3.b = 1
    return eax_3

int32_t eax_6
int80_t st0
st0, eax_6 = sub_57ddd0(arg3, arg2, eax_1, arg2, arg4, eax_1, ecx_2, 
    fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg5) * fconvert.t(360.0)
        * fconvert.t(fconvert.s(x87_r7))))), 
    fconvert.s(x87_r7_3))
eax_6.b = 1
return eax_6
