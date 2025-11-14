// 函数: sub_522830
// 地址: 0x522830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        void* edx_5 = *(*(result + 0x40) + (arg1 << 2))
        
        if (edx_5 != 0)
            if (*(result + 0x50) != 0)
                (*(**(result + 0x50) + 0xc))(*(edx_5 + 8))
            
            result.b = 1
            return result

result.b = 0
return result
