// 函数: sub_5f6b30
// 地址: 0x5f6b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_1
result, ecx_1 = sub_5f7370(*data_797da0, arg2)

if (result != 0)
    result = sub_5f3910(ecx_1, result, arg3)
    
    if (result != 0)
        result = *(*(result + 0x40) + 0x70)
        
        if (result != 0)
            void* ecx_2 = *(result + 0x1c)
            
            if (ecx_2 != 0)
                void* ecx_3 = *(ecx_2 + 0x24)
                
                if (ecx_3 != 0)
                    result.b = *(ecx_3 + 0x18) == *(result + 0x58)
                    return result
                
                result.b = 0xffffffff == *(result + 0x58)
                return result

result.b = 1
return result
