// 函数: sub_525f90
// 地址: 0x525f90
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
                    result = *(result + 0x1d0)
                    
                    if (result != 0 && arg3 s>= 0
                            && arg3 s< (*(result + 0x54) - *(result + 0x50)) s>> 2)
                        result = *(*(result + 0x50) + (arg3 << 2))
                        
                        if (result != 0)
                            result.b = *(result + 0x7b)
                            return result

result.b = 0
return result
