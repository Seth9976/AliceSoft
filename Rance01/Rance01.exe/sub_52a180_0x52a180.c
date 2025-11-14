// 函数: sub_52a180
// 地址: 0x52a180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_120
int32_t eax_1 = data_78c474 ^ &var_120
int32_t ecx
int32_t var_12c = ecx
float var_12c_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[2]))))
float var_48 = 0f
int32_t var_44
__builtin_memset(&var_44, 0, 0x3c)
int32_t var_12c_2 = sub_6602e0(&var_48, var_12c_1)
float var_12c_3 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[1]))))
float var_88 = 0f
int32_t var_84
__builtin_memset(&var_84, 0, 0x3c)
int32_t var_12c_4 = sub_660260(&var_88, var_12c_3)
float var_12c_5 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg2))))
float var_c8 = 0f
int32_t var_c4
__builtin_memset(&var_c4, 0, 0x3c)
sub_529c30(&var_c8, var_12c_5)
float var_108[0x10]
float* eax_3 = sub_4b65f0(&var_108, &var_c8, &var_88, &var_108)
float var_118[0x4]
float* eax_5 = sub_529cb0(&var_118, sub_4b65f0(eax_3, eax_3, &var_48, &var_c8))
*arg1 = *eax_5
arg1[1] = eax_5[1]
arg1[2] = eax_5[2]
int32_t result = eax_5[3]
arg1[3] = result
sub_6b4885(eax_1 ^ &var_120)
return result
