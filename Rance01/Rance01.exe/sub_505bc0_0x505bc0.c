// 函数: sub_505bc0
// 地址: 0x505bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* var_6c
int32_t eax_1 = data_78c474 ^ &var_6c
long double x87_r7 = float.t(0)
float var_5c = fconvert.s(x87_r7)
float var_58 = fconvert.s(x87_r7)
float var_54 = fconvert.s(x87_r7)
float var_68 = fconvert.s(x87_r7)
float var_64 = fconvert.s(x87_r7)
float var_60 = fconvert.s(x87_r7)
var_6c = arg5
float* eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_505970(arg1, arg3, arg4, &var_5c, &var_68)

if (eax_4.b != 0 && arg2 s>= 0)
    eax_4 = *arg1
    
    if (arg2 s< (arg1[1] - eax_4) s>> 2)
        int32_t ebx_1 = eax_4[arg2]
        
        if (ebx_1 != 0)
            int32_t var_80_1 = ecx_1
            float var_50[0x11]
            int32_t eax_8 =
                sub_4c85d0(ebx_1, &var_5c, &var_68, sub_4b6800(&var_50, &arg1[8]), var_6c)
            sub_6b4885(eax_1 ^ &var_6c)
            return eax_8

eax_4.b = 0
sub_6b4885(eax_1 ^ &var_6c)
return eax_4
