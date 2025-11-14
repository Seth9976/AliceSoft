// 函数: sub_5786d0
// 地址: 0x5786d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x14) = arg3
*(arg1 + 0x18) = arg4
int32_t result = (*(*arg2 + 0x30))()
*(arg1 + 4) = result

if (result != 0 && sub_578780(arg1).b != 0)
    result = (*(*arg2 + 0x30))()
    *(arg1 + 8) = result
    
    if (result != 0 && sub_578910(arg1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
