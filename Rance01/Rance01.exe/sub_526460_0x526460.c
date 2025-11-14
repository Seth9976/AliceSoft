// 函数: sub_526460
// 地址: 0x526460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (eax[0x11] i- eax[0x10]) s>> 2)
        eax = *(eax[0x10] i+ (arg1 << 2))
        
        if (eax != 0)
            long double x87_r7_1 = float.t(0)
            float var_c = fconvert.s(x87_r7_1)
            float var_8_1 = fconvert.s(x87_r7_1)
            float var_4_1 = fconvert.s(x87_r7_1)
            
            if (sub_505bc0(&eax[4], arg2, arg3, arg4, &var_c).b != 0)
                *arg5 = fconvert.s(fconvert.t(var_c))
                *arg6 = fconvert.s(fconvert.t(var_8_1))
                float* eax_2
                eax_2.b = 1
                *arg7 = fconvert.s(fconvert.t(var_4_1))
                return eax_2

eax.b = 0
return eax
