// 函数: sub_5281e0
// 地址: 0x5281e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0 && result != 0xfffffff0)
            *(result + 0x148) = arg2
            *(result + 0x14c) = arg3
            *(result + 0x150) = arg4
            *(result + 0x154) = arg5
            result.b = 1
            return result

result.b = 0
return result
