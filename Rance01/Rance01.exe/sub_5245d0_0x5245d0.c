// 函数: sub_5245d0
// 地址: 0x5245d0
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
                    if (arg3 s>= 0 && arg3 s< (*(result + 0x1c0) - *(result + 0x1bc)) s>> 2)
                        *(*(result + 0x1bc) + (arg3 << 2)) = arg4
                    
                    result.b = 1
                    return result

result.b = 0
return result
