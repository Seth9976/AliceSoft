// 函数: sub_4b9930
// 地址: 0x4b9930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct sealengine::CDualQuaternion::VTable** result = arg3
*result = &sealengine::CDualQuaternion::`vftable'
result[1] = *arg1
result[2] = arg1[1]
result[3] = arg1[2]
result[4] = arg1[3]
long double x87_r6_4 = fconvert.t(0.5)
long double x87_r7_4 = (fconvert.t(arg1[3]) * fconvert.t(arg2[1])
    - fconvert.t(arg1[2]) * fconvert.t(*arg2) + fconvert.t(*arg1) * fconvert.t(arg2[2])) * x87_r6_4
long double x87_r6_10 = (fconvert.t(*arg2) * fconvert.t(arg1[1])
    - fconvert.t(arg2[1]) * fconvert.t(*arg1) + fconvert.t(arg1[3]) * fconvert.t(arg2[2])) * x87_r6_4
long double x87_r6_15 = (fconvert.t(*arg1) * fconvert.t(*arg2)
    + fconvert.t(arg2[1]) * fconvert.t(arg1[1]) + fconvert.t(arg1[2]) * fconvert.t(arg2[2]))
    * fconvert.t(-0.5)
result[5] = fconvert.s(x87_r6_4 * (fconvert.t(arg1[2]) * fconvert.t(arg2[1])
    + fconvert.t(arg1[3]) * fconvert.t(*arg2) - fconvert.t(arg1[1]) * fconvert.t(arg2[2])))
result[6] = fconvert.s(fconvert.t(fconvert.s(x87_r7_4)))
result[7] = fconvert.s(fconvert.t(fconvert.s(x87_r6_10)))
result[8] = fconvert.s(fconvert.t(fconvert.s(x87_r6_15)))
return result
