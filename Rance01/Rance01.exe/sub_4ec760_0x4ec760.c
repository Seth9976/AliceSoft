// 函数: sub_4ec760
// 地址: 0x4ec760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 2)
    return 1

if (arg2 == 6)
    char result = sub_4dc740(arg1 + 0x40, arg3, arg4)
    
    if (result == 0)
        return result

for (int32_t* i = *(arg1 + 0x54); i != *(arg1 + 0x58); i = &i[1])
    if ((***i)(arg2, arg3, arg4) == 0)
        return 0

if (*(arg1 + 0x64) != 0 && (***(arg1 + 0x64))(arg2, arg3, arg4) == 0)
    return 0

return 1
