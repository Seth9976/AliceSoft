// 函数: sub_527de0
// 地址: 0x527de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0)
            if (arg2 s>= 0 && arg2 s< (*(result + 0xac) - *(result + 0xa8)) s>> 2)
                *(*(result + 0xa8) + (arg2 << 2)) = fconvert.s(fconvert.t(arg3))
            
            result.b = 1
            return result

result.b = 0
return result
