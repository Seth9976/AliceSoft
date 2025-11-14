// 函数: sub_5a51e0
// 地址: 0x5a51e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0 || arg3 == 0)
    *arg1 = 0
    return 1

int32_t mxcsr
int16_t x87control
long double st0 = sub_70cb70(mxcsr, x87control, 
    fconvert.d(float.t(arg2) * float.t(arg3) / float.t(arg4) + fconvert.t(0.5)))
long double x87_r6 = fconvert.t(2147483647.0)
x87_r6 - st0

if ((((x87_r6 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, st0) ? 1 : 0) << 0xa
        | (x87_r6 == st0 ? 1 : 0) << 0xe | 0x3800):1.b & 1) == 0)
    fconvert.t(-2147483648.0) - st0
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (not(p_1))
        *arg1 = sub_70c710(st0)
        return 1

return 0
