// 函数: sub_4c3fd0
// 地址: 0x4c3fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char result = *(arg1 + 0x160)

if (result != 0)
    result = sub_576800(*(arg1 + 0x294))
    *(arg1 + 0x160) = 0

int32_t* esi_2 = *(arg1 + 0x15c)

if (esi_2 != 0)
    result = sub_4d0840(esi_2)
    *(arg1 + 0x15c) = 0

return result
