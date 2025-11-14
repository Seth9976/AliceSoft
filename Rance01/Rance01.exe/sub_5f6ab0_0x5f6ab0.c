// 函数: sub_5f6ab0
// 地址: 0x5f6ab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result
struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** ecx_1
result, ecx_1 = sub_5f7370(*data_797da0, arg2)

if (result != 0)
    result = sub_5f3850(ecx_1, result, arg7)
    
    if (result != 0)
        if (*(result + 0x4c) != arg3 || *(result + 0x50) != arg4 || *(result + 0x54) != arg5
                || *(result + 0x58) != arg6)
            *(result + 0x4c) = arg3
            *(result + 0x50) = arg4
            *(result + 0x54) = arg5
            *(result + 0x58) = arg6
            *(result + 0x5c) = 1
        
        result.b = 1
        return result

result.b = 0
return result
