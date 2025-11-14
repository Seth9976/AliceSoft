// 函数: sub_5b7cf0
// 地址: 0x5b7cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = 0
int32_t ebp = arg6
int32_t edi = arg1
arg6 = 0
int32_t var_2c_1
__builtin_memset(&var_2c_1, 0, 0x28)
sub_6bc670(arg2, 0, 0x38)
int32_t eax = arg5
*arg2 = edi
arg2[1] = eax

if (eax s>= ebp)
    arg5 = ebp - 1
    eax = ebp - 1

int32_t var_28_1
int32_t var_24_1
int32_t var_20_1
int32_t var_1c_1
int32_t var_18_1
int32_t var_14_1
int32_t var_10_1
int32_t var_c_1
int32_t var_8_1

if (edi s<= eax)
    float* ebp_2 = arg3 + (edi << 2)
    
    do
        int32_t eax_2 =
            sub_70c710(fconvert.t(*ebp_2) * fconvert.t(7.3142857551574707) + fconvert.t(1023.5))
        int32_t ecx_3
        
        if (eax_2 s> 0x3ff)
            ecx_3 = 0x3ff
        label_5b7da7:
            int32_t edx_3 = ecx_3 * ecx_3
            fconvert.t(*ebp_2) - (fconvert.t(*(arg4 - arg3 + ebp_2)) + fconvert.t(*(arg7 + 0x458)))
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (p_1)
                var_18_1 += ecx_3
                var_1c_1 += edi
                var_14_1 += edi * edi
                var_10_1 += edx_3
                var_c_1 += ecx_3 * edi
                var_8_1 += 1
            else
                var_2c_1 += ecx_3
                arg6 += edi
                var_28_1 += edi * edi
                var_24_1 += edx_3
                var_20_1 += ecx_3 * edi
                ebx += 1
        else if (eax_2 s>= 0)
            ecx_3 = eax_2
            
            if (eax_2 != 0)
                goto label_5b7da7
        edi += 1
        ebp_2 = &ebp_2[1]
    while (edi s<= arg5)

int32_t ecx_6 = var_2c_1
arg2[2] = arg6
arg2[3] = ecx_6
arg2[5] = var_24_1
arg2[4] = var_28_1
arg2[6] = var_20_1
arg2[9] = var_18_1
arg2[8] = var_1c_1
arg2[0xa] = var_14_1
arg2[0xc] = var_c_1
arg2[7] = ebx
arg2[0xb] = var_10_1
arg2[0xd] = var_8_1
