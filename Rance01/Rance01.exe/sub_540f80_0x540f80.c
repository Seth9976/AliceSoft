// 函数: sub_540f80
// 地址: 0x540f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
long double x87_r7 = fconvert.t(**(arg1 + 0x2b0))
*(arg1 + 0x2b0) -= 4
long double x87_r7_2 = fconvert.t(fconvert.s(x87_r7))
long double x87_r5 = float.t(0)
x87_r5 - x87_r7_2
bool p = unimplemented  {test ah, 0x44}
float* result = *(arg1 + 0x2b0)

if (p)
    *result = fconvert.s(fconvert.t(fconvert.s(fconvert.t(**(arg1 + 0x2b0)))) / x87_r7_2)
    *(arg1 + 0x2b0) += 4
    result.b = 1
    return result

*result = fconvert.s(x87_r5)
*(arg1 + 0x2b0) += 4
result.b = 1
return result
