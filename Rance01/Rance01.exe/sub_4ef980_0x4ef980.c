// 函数: sub_4ef980
// 地址: 0x4ef980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_c
int32_t* eax
int32_t edx
float* eax_1 = sub_4ef550(eax, edx, &var_c)
float var_18 = fconvert.s(fconvert.t(eax_1[2]) * fconvert.t(arg1[1])
    - fconvert.t(eax_1[1]) * fconvert.t(arg1[2]))
float var_14 =
    fconvert.s(fconvert.t(*eax_1) * fconvert.t(arg1[2]) - fconvert.t(*arg1) * fconvert.t(eax_1[2]))
float var_10 =
    fconvert.s(fconvert.t(*arg1) * fconvert.t(eax_1[1]) - fconvert.t(*eax_1) * fconvert.t(arg1[1]))
sub_51e2a0(&var_18, arg2)
return arg2
