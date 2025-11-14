// 函数: sub_408950
// 地址: 0x408950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg4 = fconvert.s(fconvert.t(arg2[1]) * fconvert.t(arg3[2])
    - fconvert.t(arg2[2]) * fconvert.t(arg3[1]))
arg4[1] =
    fconvert.s(fconvert.t(arg2[2]) * fconvert.t(*arg3) - fconvert.t(*arg2) * fconvert.t(arg3[2]))
arg4[2] =
    fconvert.s(fconvert.t(arg3[1]) * fconvert.t(*arg2) - fconvert.t(*arg3) * fconvert.t(arg2[1]))
return arg4
