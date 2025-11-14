// 函数: sub_5a52a0
// 地址: 0x5a52a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t mxcsr
int16_t x87control
long double st0 = sub_70cb70(mxcsr, x87control, 
    fconvert.d(float.t(arg1) * fconvert.t(1.0000000000000001e-05) * float.t(arg2)
        + fconvert.t(0.5)))
long double x87_r6 = fconvert.t(2147483647.0)
x87_r6 - st0

if ((((x87_r6 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, st0) ? 1 : 0) << 0xa
        | (x87_r6 == st0 ? 1 : 0) << 0xe | 0x3800):1.b & 1) == 0)
    fconvert.t(-2147483648.0) - st0
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (not(p_1))
        return sub_70c710(st0) __tailcall

return 0
