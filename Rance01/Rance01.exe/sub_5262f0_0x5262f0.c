// 函数: sub_5262f0
// 地址: 0x5262f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0 && arg2 s>= 0)
            int32_t ecx = *(result + 0x10)
            
            if (arg2 s< (*(result + 0x14) - ecx) s>> 2)
                result = *(ecx + (arg2 << 2))
                
                if (result != 0)
                    int32_t var_4 = ecx
                    float var_4_1 = fconvert.s(fconvert.t(arg12))
                    int32_t var_8 = arg11
                    int32_t var_c = arg10
                    int32_t var_10 = arg9
                    float var_14 = fconvert.s(fconvert.t(arg8))
                    float var_18 = fconvert.s(fconvert.t(arg7))
                    float var_1c = fconvert.s(fconvert.t(arg6))
                    return sub_4c8450(result, fconvert.s(fconvert.t(arg3)), 
                        fconvert.s(fconvert.t(arg4)), fconvert.s(fconvert.t(arg5)))

result.b = 0
return result
