// 函数: sub_4da170
// 地址: 0x4da170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg2
void* ebx = arg1
int32_t eax_2 = (*(ebx + 0x128) - *(ebx + 0x124)) s>> 6
float var_44

if (eax_2 != (ecx[1] - *ecx) s>> 6 || eax_2 != (*(ebx + 0x114) - *(ebx + 0x110)) s>> 6)
    long double x87_r7_1 = float.t(1)
    eax_2 = *(ebx + 0x128)
    int32_t ebx_1 = *(ebx + 0x124)
    var_44 = fconvert.s(x87_r7_1)
    long double x87_r6_1 = float.t(0)
    float var_40_1 = fconvert.s(x87_r6_1)
    float var_3c_1 = fconvert.s(x87_r6_1)
    float var_38_1 = fconvert.s(x87_r6_1)
    float var_34_1 = fconvert.s(x87_r6_1)
    float var_2c_1 = fconvert.s(x87_r6_1)
    float var_28_1 = fconvert.s(x87_r6_1)
    float var_24_1 = fconvert.s(x87_r6_1)
    float var_20_1 = fconvert.s(x87_r6_1)
    float var_18_1 = fconvert.s(x87_r6_1)
    float var_14_1 = fconvert.s(x87_r6_1)
    float var_10_1 = fconvert.s(x87_r6_1)
    float var_c_1 = fconvert.s(x87_r6_1)
    float var_30_1 = fconvert.s(x87_r7_1)
    float var_1c_1 = fconvert.s(x87_r7_1)
    float var_8_1 = fconvert.s(x87_r7_1)
    
    while (ebx_1 != eax_2)
        int32_t edi_3 = ebx_1
        ebx_1 += 0x40
        __builtin_memcpy(edi_3, &var_44, 0x40)
else
    int32_t ebp_1 = 0
    arg1 = nullptr
    
    if (eax_2 s> 0)
        void* eax_6
        
        while (true)
            float* eax_4 = sub_4b65f0(&var_44, *(ebx + 0x110) + ebp_1, *ecx + ebp_1, &var_44)
            __builtin_memcpy(*(ebx + 0x124) + ebp_1, eax_4, 0x40)
            eax_6 = arg1 + 1
            ebp_1 += 0x40
            arg1 = eax_6
            
            if (eax_6 s>= (*(ebx + 0x128) - *(ebx + 0x124)) s>> 6)
                break
            
            ecx = arg2
        
        return eax_6
return eax_2
