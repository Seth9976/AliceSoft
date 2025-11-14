// 函数: __fFATN2
// 地址: 0x71095c
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg2 - 0x90) = 0xfe
long double result = __fpatan(fabs(arg3), fabs(arg4))
arg1.b = arg1.b

if (arg1.b != 0)
    result = fconvert.t(3.1415926534682512) + fconvert.t(1.2154201012607932e-10) - result

arg1:1.b = arg1:1.b

if (arg1:1.b == 0)
    return result

return fneg(result)
