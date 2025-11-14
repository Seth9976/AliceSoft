// 函数: sub_505970
// 地址: 0x505970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_130
int32_t eax_1 = data_78c474 ^ &var_130
float* result = arg2

if (result s< 0)
    result.b = 0
else
    int32_t ecx_1 = *(arg1 + 0x140)
    var_130 = ecx_1
    
    if (result s>= ecx_1 || arg3 s< 0)
        result.b = 0
    else
        result = *(arg1 + 0x144)
        
        if (arg3 s>= result)
            result.b = 0
        else
            long double x87_r6_1 = fconvert.t(2.0)
            long double x87_r5_2 = float.t(1)
            float var_12c_1 = fconvert.s(float.t(arg2) * x87_r6_1 / float.t(var_130) - x87_r5_2)
            var_130 = fconvert.s(x87_r5_2 - x87_r6_1 * float.t(arg3) / float.t(result))
            float var_cc[0x10]
            float* eax_3
            int32_t edx_1
            eax_3, edx_1 = sub_4b6800(&var_cc, arg1 + 0x20)
            float var_8c[0x10]
            sub_6603e0(&var_8c, edx_1, eax_3)
            float var_4c[0x11]
            float* eax_5 = &var_4c
            sub_6603e0(eax_5, &var_8c, arg1 + 0xd4)
            float* ecx_4 = &var_8c
            float var_10c[0x10]
            sub_4b65f0(eax_5, &var_4c, ecx_4, &var_10c)
            float var_128 = fconvert.s(fconvert.t(var_12c_1))
            float var_124_1 = fconvert.s(fconvert.t(var_130))
            float var_120_1 = fconvert.s(float.t(0))
            float var_118
            float* eax_7 = sub_51e1c0(ecx_4, &var_118, &var_10c, &var_128)
            float ecx_5 = *eax_7
            var_128 = fconvert.s(fconvert.t(var_12c_1))
            long double x87_r7_11 = fconvert.t(var_130)
            *arg4 = ecx_5
            float var_124_2 = fconvert.s(x87_r7_11)
            arg4[1] = eax_7[1]
            float var_120_2 = fconvert.s(float.t(1))
            arg4[2] = eax_7[2]
            result = sub_51e1c0(&var_128, &var_118, &var_10c, &var_128)
            *arg5 = *result
            arg5[1] = result[1]
            arg5[2] = result[2]
            result.b = 1

sub_6b4885(eax_1 ^ &var_130)
return result
