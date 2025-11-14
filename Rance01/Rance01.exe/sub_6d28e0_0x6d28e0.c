// 函数: sub_6d28e0
// 地址: 0x6d28e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_84

for (int32_t i = 0; i s< 0x40; i += 4)
    *(&var_84 + (*((i << 2) + &data_79aee0) << 1)) = *(arg1 + (i << 1))
    *(&var_84 + (*((i << 2) + &data_79aee4) << 1)) = *(arg1 + (i << 1) + 2)
    *(&var_84 + (*((i << 2) + &data_79aee8) << 1)) = *(arg1 + (i << 1) + 4)
    *(&var_84 + (*((i << 2) + &data_79aeec) << 1)) = *(arg1 + (i << 1) + 6)

for (int32_t i_1 = 0; i_1 s< 0x40; i_1 += 4)
    *(arg1 + (i_1 << 1)) = *(&var_84 + (i_1 << 1))
    void var_82
    *(arg1 + (i_1 << 1) + 2) = *(&var_82 + (i_1 << 1))
    void var_80
    *(arg1 + (i_1 << 1) + 4) = *(&var_80 + (i_1 << 1))
    int16_t var_7e[0x3d]
    *(arg1 + (i_1 << 1) + 6) = var_7e[i_1]

__builtin_memset(arg1 + 0x80, 0, 0x20)
return 0
