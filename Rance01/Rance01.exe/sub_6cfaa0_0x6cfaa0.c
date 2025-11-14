// 函数: sub_6cfaa0
// 地址: 0x6cfaa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_4 = esi
int32_t var_c = esi
int32_t i

for (i = 0; i s< 0x40; i += 4)
    int32_t ebx_2 = sx.d(*(arg1 + (i << 1) + 2))
    *(arg1 + (i << 1)) = ((zx.d(*(arg2 + (i << 1))) * sx.d(*(arg1 + (i << 1))) + 0x4000) s>> 0xf).w
    int32_t ebx_3 = sx.d(*(arg1 + (i << 1) + 4))
    *(arg1 + (i << 1) + 2) = ((zx.d(*(arg2 + (i << 1) + 2)) * ebx_2 + 0x4000) s>> 0xf).w
    int32_t ebx_4 = sx.d(*(arg1 + (i << 1) + 6))
    *(arg1 + (i << 1) + 4) = ((zx.d(*(arg2 + (i << 1) + 4)) * ebx_3 + 0x4000) s>> 0xf).w
    *(arg1 + (i << 1) + 6) = ((zx.d(*(arg2 + (i << 1) + 6)) * ebx_4 + 0x4000) s>> 0xf).w

return i
