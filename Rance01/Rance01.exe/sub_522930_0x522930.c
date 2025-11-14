// 函数: sub_522930
// 地址: 0x522930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0 && arg2 s>= 0)
            int32_t ecx = *(result + 0x10)
            
            if (arg2 s< (*(result + 0x14) - ecx) s>> 2)
                void* edi_1 = *(ecx + (arg2 << 2))
                
                if (edi_1 != 0)
                    if (*(edi_1 + 8) != arg3)
                        sub_4c3e30(ecx, edi_1)
                        *(edi_1 + 8) = arg3
                    
                    result.b = 1
                    return result

result.b = 0
return result
