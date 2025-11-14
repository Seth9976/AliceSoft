// 函数: sub_5276c0
// 地址: 0x5276c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_64
int32_t eax_1 = data_78c474 ^ &var_64
void* eax_2

if (arg1 s>= 0)
    void* ecx_1 = data_797d4c
    
    if (arg1 s< (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2)
        eax_2 = *(*(ecx_1 + 0x40) + (arg1 << 2))
        
        if (eax_2 != 0)
            float var_50[0x11]
            float* eax_4 = sub_4b6990(&var_50, eax_2 + 0x30)
            long double x87_r6 = float.t(0)
            float var_60 = fconvert.s(fconvert.t(*eax_4) * x87_r6 + fconvert.t(eax_4[4])
                + fconvert.t(eax_4[8]) * x87_r6)
            float var_5c = fconvert.s(fconvert.t(eax_4[1]) * x87_r6 + fconvert.t(eax_4[5])
                + fconvert.t(eax_4[9]) * x87_r6)
            long double x87_r6_8 = fconvert.t(eax_4[2]) * x87_r6 + fconvert.t(eax_4[6])
            long double x87_r5_5 = fconvert.t(eax_4[0xa])
            eax_4.b = 1
            float var_58 = fconvert.s(x87_r6 * x87_r5_5 + x87_r6_8)
            *arg2 = fconvert.s(fconvert.t(var_60))
            *arg3 = fconvert.s(fconvert.t(var_5c))
            *arg4 = fconvert.s(fconvert.t(var_58))
            sub_6b4885(eax_1 ^ &var_64)
            return eax_4

eax_2.b = 0
sub_6b4885(eax_1 ^ &var_64)
return eax_2
