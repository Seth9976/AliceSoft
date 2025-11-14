// 函数: sub_4afe60
// 地址: 0x4afe60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d4c
int32_t result

if (arg1 s>= 0)
    result = *(esi + 0x40)
    
    if (arg1 s< (*(esi + 0x44) - result) s>> 2)
        if (*(result + (arg1 << 2)) != 0)
            if (*(esi + 0x50) != 0)
                (*(**(esi + 0x50) + 0xc))(*(*(result + (arg1 << 2)) + 8))
                (*(**(esi + 0x50) + 0x10))(*(*(esi + 0x40) + (arg1 << 2)))
            
            (*(**(*(esi + 0x40) + (arg1 << 2)) + 4))()
            *(*(esi + 0x40) + (arg1 << 2)) = 0
        
        result.b = 1
        return result

result.b = 0
return result
