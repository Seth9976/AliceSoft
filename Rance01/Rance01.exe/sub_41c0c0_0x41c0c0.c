// 函数: sub_41c0c0
// 地址: 0x41c0c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_41cd00(arg1, arg2, arg3, arg4)
long double x87_r7_2 = fconvert.t(fconvert.s(float.t(arg3)))
long double x87_r5 = fconvert.t(0.40000000596046448)
long double x87_r5_3 = fconvert.t(fconvert.s(float.t(arg2)))
long double x87_r5_6 = fconvert.t(0.30000001192092896)
int32_t result
int80_t st0
st0, result = sub_41d030(arg1, fconvert.s(fconvert.t(fconvert.s(x87_r5_6 * x87_r5_3))), 
    fconvert.s(fconvert.t(fconvert.s(x87_r7_2 * x87_r5_6))), 
    fconvert.s(fconvert.t(fconvert.s(x87_r5 * x87_r5_3))), 
    fconvert.s(fconvert.t(fconvert.s(x87_r7_2 * x87_r5))), 0, 0, 0f, arg4)
return result
