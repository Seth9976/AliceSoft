// 函数: sub_6cf9e0
// 地址: 0x6cf9e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_8c
void var_8a
void var_88
int16_t var_86[0x3f]

for (int32_t i = 0; i s< 0x40; i += 4)
    int32_t esi_2 = sx.d(*(arg1 + (i << 1) + 2))
    *(&var_8c + (i << 1)) = (divs.dp.d(0:0x8000, sx.d(*(arg1 + (i << 1))))).w
    int32_t esi_3 = sx.d(*(arg1 + (i << 1) + 4))
    *(&var_8a + (i << 1)) = (divs.dp.d(0:0x8000, esi_2)).w
    int32_t esi_4 = sx.d(*(arg1 + (i << 1) + 6))
    *(&var_88 + (i << 1)) = (divs.dp.d(0:0x8000, esi_3)).w
    var_86[i] = (divs.dp.d(0:0x8000, esi_4)).w

int32_t i_1

for (i_1 = 0; i_1 s< 0x40; i_1 += 4)
    *(arg1 + (*((i_1 << 2) + &data_79aee0) << 1)) = *(&var_8c + (i_1 << 1))
    *(arg1 + (*((i_1 << 2) + &data_79aee4) << 1)) = *(&var_8a + (i_1 << 1))
    *(arg1 + (*((i_1 << 2) + &data_79aee8) << 1)) = *(&var_88 + (i_1 << 1))
    *(arg1 + (*((i_1 << 2) + &data_79aeec) << 1)) = var_86[i_1]

return i_1
