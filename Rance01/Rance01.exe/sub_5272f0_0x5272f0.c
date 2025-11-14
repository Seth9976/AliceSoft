// 函数: sub_5272f0
// 地址: 0x5272f0
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
                    result = *(result + 0x26c)
                    
                    if (result != 0)
                        return sub_4e4420(result)

result.b = 0
return result
