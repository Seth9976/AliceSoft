// 函数: sub_6ce5d0
// 地址: 0x6ce5d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_4 = esi

if (sx.d(*(arg1 + 0x7e)) s< 2)
    *(arg1 + 0x7e) = 2

void var_8c
void var_8a

for (int32_t i = 0; i s< 0x40; i += 2)
    int32_t esi_2 = sx.d(*(arg1 + (i << 1)))
    int32_t esi_3 = sx.d(*(arg1 + (i << 1) + 2))
    *(&var_8c + (i << 1)) = (divs.dp.d(sx.q((esi_2 s>> 1) + *((i << 2) + &data_79b220)), esi_2)).w
    *(&var_8a + (i << 1)) = (divs.dp.d(sx.q((esi_3 s>> 1) + *((i << 2) + &data_79b224)), esi_3)).w

int32_t i_1

for (i_1 = 0; i_1 s< 0x40; i_1 += 4)
    *(arg1 + (*((i_1 << 2) + &data_79aee0) << 1)) = *(&var_8c + (i_1 << 1))
    *(arg1 + (*((i_1 << 2) + &data_79aee4) << 1)) = *(&var_8a + (i_1 << 1))
    void var_88
    *(arg1 + (*((i_1 << 2) + &data_79aee8) << 1)) = *(&var_88 + (i_1 << 1))
    int16_t var_86[0x3f]
    *(arg1 + (*((i_1 << 2) + &data_79aeec) << 1)) = var_86[i_1]

return i_1
