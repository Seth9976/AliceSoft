// 函数: sub_5f6920
// 地址: 0x5f6920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** ecx_1
result, ecx_1 = sub_5f7370(*data_797da0, arg2)

if (result != 0)
    result = sub_5f3610(ecx_1, result, arg7)
    
    if (result != 0)
        if (*(result + 0x340) != arg3 || *(result + 0x344) != arg4 || *(result + 0x348) != arg5
                || *(result + 0x34c) != arg6)
            *(result + 0x340) = arg3
            *(result + 0x344) = arg4
            *(result + 0x348) = arg5
            *(result + 0x34c) = arg6
            *(result + 0x350) = 1
        
        result.b = 1
        return result

result.b = 0
return result
