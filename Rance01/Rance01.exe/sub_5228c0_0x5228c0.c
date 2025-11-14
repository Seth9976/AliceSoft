// 函数: sub_5228c0
// 地址: 0x5228c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0)
            void* ebx_1 = result + 0x10
            
            if (ebx_1 != 0)
                if (arg2 s>= 0)
                    result = *ebx_1
                    
                    if (arg2 s< (*(ebx_1 + 4) - result) s>> 2 && *(result + (arg2 << 2)) != 0)
                        sub_4c3d90(*(result + (arg2 << 2)))
                        *(*ebx_1 + (arg2 << 2)) = 0
                
                result.b = 1
                return result

result.b = 0
return result
