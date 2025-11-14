// 函数: sub_527b80
// 地址: 0x527b80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0 && result != 0xfffffff0)
            *(result + 0x5c) = fconvert.s(fconvert.t(arg2))
            *(result + 0x60) = fconvert.s(fconvert.t(arg3))
            *(result + 0x64) = fconvert.s(fconvert.t(arg4))
            result.b = 1
            return result

result.b = 0
return result
