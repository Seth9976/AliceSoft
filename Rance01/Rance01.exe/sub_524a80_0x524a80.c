// 函数: sub_524a80
// 地址: 0x524a80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x10)
            
            if (arg2 s< (*(eax + 0x14) - ecx) s>> 2)
                void* ecx_1 = *(ecx + (arg2 << 2))
                
                if (ecx_1 != 0)
                    float var_18 = fconvert.s(fconvert.t(arg4))
                    float var_14 = fconvert.s(fconvert.t(arg5))
                    float var_10 = fconvert.s(fconvert.t(arg6))
                    float var_c
                    sub_4c4980(ecx_1, arg3, &var_c, &var_18)
                    *arg7 = fconvert.s(fconvert.t(var_c))
                    float var_8
                    *arg8 = fconvert.s(fconvert.t(var_8))
                    float* eax_5
                    eax_5.b = 1
                    float var_4
                    *arg9 = fconvert.s(fconvert.t(var_4))
                    return eax_5

eax.b = 0
return eax
