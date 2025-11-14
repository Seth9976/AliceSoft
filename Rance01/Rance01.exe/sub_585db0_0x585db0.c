// 函数: sub_585db0
// 地址: 0x585db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg5)
long double x87_r7_2 = float.t(*(arg1 + 0xc))
long double x87_r6 = fconvert.t(fconvert.s(x87_r7 * x87_r7))
long double x87_r6_2 = float.t(*(arg1 + 0x10))
long double x87_r7_7 = float.t(1)
long double x87_r6_3 = fconvert.t(fconvert.s(x87_r7_2 - x87_r6 * x87_r7_2))
x87_r6_3 - x87_r7_7
int32_t eax
eax.w = (x87_r6_3 < x87_r7_7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_7) ? 1 : 0) << 0xa
    | (x87_r6_3 == x87_r7_7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    x87_r7_7 = x87_r6_3
    x87_r6_3 = fconvert.t(fconvert.s(x87_r7_7))

long double x87_r5_2 = fconvert.t(fconvert.s(x87_r6_2 - x87_r6 * x87_r6_2))
x87_r5_2 - x87_r7_7
eax.w = (x87_r5_2 < x87_r7_7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_2, x87_r7_7) ? 1 : 0) << 0xa
    | (x87_r5_2 == x87_r7_7 ? 1 : 0) << 0xe | 0x2800
bool p_1 = unimplemented  {test ah, 0x5}

if (not(p_1))
    x87_r6_3 = x87_r5_2
    x87_r7_7 = fconvert.t(fconvert.s(x87_r7_7))

int32_t edx = *(arg1 + 0x10)
int32_t ecx = *(arg1 + 0xc)
long double x87_r5_4 = fconvert.t(0.5)
(*(***(arg1 + 4) + 0x3c))(arg2, 0, 0, ecx, edx, arg4, 
    fconvert.s(fconvert.t(fconvert.s(x87_r5_4 * (float.t(ecx) - x87_r6_3)))), 
    fconvert.s(fconvert.t(fconvert.s((float.t(edx) - x87_r7_7) * x87_r5_4))), fconvert.s(x87_r6_3), 
    fconvert.s(x87_r7_7))
void* ebp_1 = ***(arg1 + 4)
int32_t eax_4 = sub_70c710(fconvert.t(arg5) * fconvert.t(255.0))
(*(ebp_1 + 0x18))(arg2, 0, 0, arg3, 0, 0, *(arg1 + 0xc), *(arg1 + 0x10), eax_4)
int32_t eax_6
eax_6.b = 1
