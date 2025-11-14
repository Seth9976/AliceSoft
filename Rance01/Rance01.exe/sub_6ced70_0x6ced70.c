// 函数: sub_6ced70
// 地址: 0x6ced70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_4 = esi
int32_t var_c = esi
int32_t i

for (i = 0; i s< 0x40; i += 4)
    int32_t ebx_2 = sx.d(*(arg1 + (i << 1) + 2))
    *(arg1 + (i << 1)) = ((sx.d(*(arg2 + (i << 1))) * sx.d(*(arg1 + (i << 1))) + 0x40) s>> 7).w
    int32_t ebx_3 = sx.d(*(arg1 + (i << 1) + 4))
    *(arg1 + (i << 1) + 2) = ((sx.d(*(arg2 + (i << 1) + 2)) * ebx_2 + 0x40) s>> 7).w
    int32_t ebx_4 = sx.d(*(arg1 + (i << 1) + 6))
    *(arg1 + (i << 1) + 4) = ((sx.d(*(arg2 + (i << 1) + 4)) * ebx_3 + 0x40) s>> 7).w
    *(arg1 + (i << 1) + 6) = ((sx.d(*(arg2 + (i << 1) + 6)) * ebx_4 + 0x40) s>> 7).w

return i
