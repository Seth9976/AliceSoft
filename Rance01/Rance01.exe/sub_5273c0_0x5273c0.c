// 函数: sub_5273c0
// 地址: 0x5273c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0)
            *(result + 0x30) = fconvert.s(fconvert.t(arg2))
            *(result + 0x34) = fconvert.s(fconvert.t(arg3))
            *(result + 0x38) = fconvert.s(fconvert.t(arg4))
            result.b = 1
            return result

result.b = 0
return result
