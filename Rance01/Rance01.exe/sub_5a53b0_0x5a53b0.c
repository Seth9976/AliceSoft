// 函数: sub_5a53b0
// 地址: 0x5a53b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 - 1 u> 0xfd)
    return 

long double x87_r7_1 = float.t(arg1)

if (arg1 s< 0)
    x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)

int32_t mxcsr
int16_t x87control
int16_t x87control_2
int80_t st0_1
st0_1, x87control_2 = sub_70cb70(mxcsr, 
    sub_70cce0(mxcsr, x87control, float.t(arg3) * fconvert.t(1.0000000000000001e-05), 
        x87_r7_1 / fconvert.t(255.0)), 
    fconvert.d(arg2 * fconvert.t(255.0) + fconvert.t(0.5)))
int16_t x87status_1
int16_t temp0_1
temp0_1, x87status_1 = __fnstcw_memmem16(x87control_2)
int16_t x87control_3
int16_t x87status_2
x87control_3, x87status_2 = __fldcw_memmem16((zx.d(temp0_1) | 0xc00).w)
arg1.b = (int.d(st0_1)).b
int16_t x87control_4
int16_t x87status_3
x87control_4, x87status_3 = __fldcw_memmem16(temp0_1)
