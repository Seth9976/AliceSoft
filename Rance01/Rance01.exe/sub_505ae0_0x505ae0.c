// 函数: sub_505ae0
// 地址: 0x505ae0
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
float* eax_3

if (sub_505970(arg1, arg4, arg2, &var_5c, &var_68).b != 0 && arg3 s>= 0)
    eax_3 = *arg1
    
    if (arg3 s< (arg1[1] - eax_3) s>> 2)
        eax_3 = eax_3[arg3]
        var_6c = eax_3
        
        if (eax_3 != 0)
            float var_50[0x11]
            eax_3 = sub_4b6800(&var_50, &arg1[8])
            int32_t ecx_3 = var_6c[0x74]
            
            if (ecx_3 != 0)
                float* var_7c_2 = arg5
                float* var_80_1 = eax_3
                int32_t eax_4
                int80_t st0
                st0, eax_4 = sub_4c2720(ecx_3 + 0xb4, &var_5c, &var_68)
                sub_6b4885(eax_1 ^ &var_6c)
                return eax_4
            
            long double x87_r7_1 = float.t(0)
            *arg5 = fconvert.s(x87_r7_1)
            arg5[1] = fconvert.s(x87_r7_1)
            arg5[2] = fconvert.s(x87_r7_1)

eax_3.b = 0
sub_6b4885(eax_1 ^ &var_6c)
return eax_3
