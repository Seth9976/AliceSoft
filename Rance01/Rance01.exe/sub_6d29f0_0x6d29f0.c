// 函数: sub_6d29f0
// 地址: 0x6d29f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_4 = esi
int32_t var_c = esi
int32_t i

for (i = 0; i s< 0x40; i += 4)
    *(arg1 + (i << 1)) *= *(arg2 + (i << 1))
    int16_t ebx_3 = *(arg1 + (i << 1) + 4)
    *(arg1 + (i << 1) + 2) *= *(arg2 + (i << 1) + 2)
    *(arg1 + (i << 1) + 4) = *(arg2 + (i << 1) + 4) * ebx_3
    *(arg1 + (i << 1) + 6) *= *(arg2 + (i << 1) + 6)

return i
