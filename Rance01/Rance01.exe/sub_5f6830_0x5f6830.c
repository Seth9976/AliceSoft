// 函数: sub_5f6830
// 地址: 0x5f6830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = sub_5f7370(*data_797da0, arg2)

if (result != 0)
    result = sub_5f3540(result, arg7)
    
    if (result != 0)
        if (*(result + 0x40) != arg3 || *(result + 0x44) != arg4 || *(result + 0x48) != arg5
                || *(result + 0x4c) != arg6)
            *(result + 0x40) = arg3
            *(result + 0x44) = arg4
            *(result + 0x48) = arg5
            *(result + 0x4c) = arg6
            *(result + 0x50) = 1
        
        result.b = 1
        return result

result.b = 0
return result
