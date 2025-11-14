// 函数: sub_4b22c0
// 地址: 0x4b22c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(0)
long double x87_r6 = fconvert.t(arg2)
x87_r6 - x87_r7
int32_t eax
eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r6_1 = float.t(1)
    x87_r6_1 - x87_r7
    eax.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        arg2 = fconvert.s(x87_r7)
else
    arg2 = fconvert.s(x87_r6)

long double x87_r7_2 = fconvert.t(arg2) * fconvert.t(255.0)
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
arg2.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16((zx.d(arg2.w) | 0xc00).w)
int32_t var_8
var_8.q = int.q(x87_r7_2)
int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(arg2.w)
