// 函数: sub_525b70
// 地址: 0x525b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0 && arg2 s>= 0)
            int32_t ecx = *(result + 0x10)
            
            if (arg2 s< (*(result + 0x14) - ecx) s>> 2)
                int32_t ecx_1 = *(ecx + (arg2 << 2))
                
                if (ecx_1 != 0)
                    return sub_4b5090(ecx_1 + 0xf4, arg3)

result.b = 0
return result
