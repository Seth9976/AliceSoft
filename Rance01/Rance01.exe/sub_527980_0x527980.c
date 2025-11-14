// 函数: sub_527980
// 地址: 0x527980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0)
            bool cond:0 = *(result + 0x44) != 0
            result.b = 1
            int32_t ecx
            ecx.b = cond:0
            *arg2 = ecx
            return result

result.b = 0
return result
