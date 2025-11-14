// 函数: sub_528050
// 地址: 0x528050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0 && result != 0xfffffff0)
            *(result + 0xd4) = fconvert.s(fconvert.t(arg2))
            *(result + 0xd8) = fconvert.s(fconvert.t(arg3))
            *(result + 0xdc) = fconvert.s(fconvert.t(arg4))
            *(result + 0xe0) = fconvert.s(float.t(1))
            result.b = 1
            return result

result.b = 0
return result
