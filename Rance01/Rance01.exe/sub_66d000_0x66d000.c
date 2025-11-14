// 函数: sub_66d000
// 地址: 0x66d000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg2 != 0)
    result = *(arg1 + 8)
    
    if ((*(arg1 + 0xc) - result) s>> 2 s>= arg2)
        result = *(result + (arg2 << 2) - 4)
        
        if (result != 0 && *(result + 8) == 5 && arg3 s>= 0)
            result.b = (*(result + 0x70) - *(result + 0x6c)) s>> 2 s> arg3
            return result

result.b = 0
return result
