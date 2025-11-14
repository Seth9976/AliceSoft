// 函数: sub_523590
// 地址: 0x523590
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
                    *(result + 0x88) = fconvert.s(fconvert.t(arg3))
                    *(result + 0x8c) = fconvert.s(fconvert.t(arg4))
                    *(result + 0x90) = fconvert.s(fconvert.t(arg5))
                    *(result + 0x94) = fconvert.s(float.t(1))
                    result.b = 1
                    return result

result.b = 0
return result
