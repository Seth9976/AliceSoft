// 函数: sub_527260
// 地址: 0x527260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    void* esi_1 = data_797d4c
    
    if (arg1 s< (*(esi_1 + 0x44) - *(esi_1 + 0x40)) s>> 2)
        result = *(*(esi_1 + 0x40) + (arg1 << 2))
        
        if (result != 0 && arg2 s>= 0)
            int32_t ecx_2 = *(result + 0x10)
            
            if (arg2 s< (*(result + 0x14) - ecx_2) s>> 2)
                void* ebx_4 = *(ecx_2 + (arg2 << 2))
                
                if (ebx_4 != 0 && arg1 s< (*(esi_1 + 0x44) - *(esi_1 + 0x40)) s>> 2 && result != 0
                        && arg3 s>= 0 && arg3 s< (*(result + 0x14) - ecx_2) s>> 2)
                    result = *(ecx_2 + (arg3 << 2))
                    
                    if (result != 0)
                        return sub_4c7790(ebx_4, result, arg4, arg5)

result.b = 0
return result
