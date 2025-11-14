// 函数: sub_5f6020
// 地址: 0x5f6020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result
struct partsengine::CSprite::partsengine::CLoopCGSprite::VTable** ecx_1
result, ecx_1 = sub_5f7370(*data_797da0, arg2)

if (result != 0)
    result = sub_5f32f0(ecx_1, result, arg7)
    
    if (result != 0)
        if (*(result + 0x5c) != arg3 || *(result + 0x60) != arg4 || *(result + 0x64) != arg5
                || *(result + 0x68) != arg6)
            *(result + 0x5c) = arg3
            *(result + 0x60) = arg4
            *(result + 0x64) = arg5
            *(result + 0x68) = arg6
            *(result + 0x6c) = 1
        
        result.b = 1
        return result

result.b = 0
return result
