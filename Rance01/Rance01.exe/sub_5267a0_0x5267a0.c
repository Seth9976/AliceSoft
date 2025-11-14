// 函数: sub_5267a0
// 地址: 0x5267a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x10)
            
            if (arg2 s< (*(eax + 0x14) - ecx) s>> 2)
                void* edx_5 = *(ecx + (arg2 << 2))
                
                if (edx_5 != 0)
                    float var_18 = fconvert.s(fconvert.t(arg7))
                    float var_14 = fconvert.s(fconvert.t(arg8))
                    float var_10 = fconvert.s(fconvert.t(arg9))
                    float var_c = fconvert.s(fconvert.t(arg3))
                    float var_8 = fconvert.s(fconvert.t(arg4))
                    float var_4 = fconvert.s(fconvert.t(arg5))
                    sub_4c7640(&var_c, edx_5, arg6, &var_18, arg10)
                    int32_t eax_4
                    eax_4.b = 1
                    return eax_4

eax.b = 0
return eax
