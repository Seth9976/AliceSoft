// 函数: sub_4db780
// 地址: 0x4db780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg1[0x13] = fconvert.s(fconvert.t(arg16))
int32_t ecx
int32_t var_8 = ecx
float arg_40
arg1[0x14] = fconvert.s(fconvert.t(arg_40))
*arg1 = arg17
sub_4dc050(arg1, fconvert.s(fconvert.t(arg2)))
float* result = arg1[0x11]

if (result s>= 0 && result s< (arg1[0xa] - arg1[9]) s>> 2)
    arg_40 = arg1
    sub_61b5a0(&arg_40, arg18)
    sub_4db850(arg8, arg1, arg3, arg4, arg5, arg6, arg7, fconvert.s(fconvert.t(arg9)), 
        fconvert.s(fconvert.t(arg10)), fconvert.s(fconvert.t(arg11)), 
        fconvert.s(fconvert.t(arg12)), fconvert.s(fconvert.t(arg13)), 
        fconvert.s(fconvert.t(arg14)), fconvert.s(fconvert.t(arg15)), 
        fconvert.s(fconvert.t(arg16)), *(*(arg1[9] + (arg1[0x11] << 2)) + 0x10))

result.b = 1
return result
