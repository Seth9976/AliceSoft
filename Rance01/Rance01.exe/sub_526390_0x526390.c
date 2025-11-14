// 函数: sub_526390
// 地址: 0x526390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    void* ecx_1 = data_797d4c
    
    if (arg1 s< (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2)
        void* edx_2 = *(*(ecx_1 + 0x40) + (arg1 << 2))
        
        if (edx_2 != 0 && arg2 s>= 0)
            result = *(edx_2 + 0x10)
            
            if (arg2 s< (*(edx_2 + 0x14) - result) s>> 2)
                void* edi_2 = *(result + (arg2 << 2))
                
                if (edi_2 != 0)
                    int32_t eax_3 = *(ecx_1 + 0x44) - *(ecx_1 + 0x40)
                    float var_18 = fconvert.s(fconvert.t(arg6))
                    float var_14 = fconvert.s(fconvert.t(arg7))
                    int32_t ebx_4
                    ebx_4.b = arg1 s>= eax_3 s>> 2
                    float var_10 = fconvert.s(fconvert.t(arg8))
                    float var_c = fconvert.s(fconvert.t(arg3))
                    float var_8 = fconvert.s(fconvert.t(arg4))
                    float var_4 = fconvert.s(fconvert.t(arg5))
                    int32_t ecx_2
                    ecx_2.b = arg1 s>= (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2
                    return sub_4c8560(edi_2, &var_c, &var_18, ((ebx_4 - 1) & edx_2) + 0x30, 
                        ((ecx_2 - 1) & edx_2) + 0xe4)

result.b = 0
return result
