// 函数: sub_4ccb50
// 地址: 0x4ccb50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x2c) != 0)
    return 1

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    if (*i != 0 && sub_4ccb50() != 0)
        return 1

return 0
