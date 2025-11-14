// 函数: sub_524b20
// 地址: 0x524b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0 && arg2 s>= 0)
            int32_t ecx = *(result + 0x10)
            
            if (arg2 s< (*(result + 0x14) - ecx) s>> 2)
                void* ecx_1 = *(ecx + (arg2 << 2))
                
                if (ecx_1 != 0)
                    return sub_516a40(ecx_1 + 0xc8)

result.b = 0
return result
