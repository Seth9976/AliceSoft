// 函数: sub_5586e0
// 地址: 0x5586e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x78787879, *(arg1 + 0xa0) - *(arg1 + 0x9c))
int32_t edx_1 = edx s>> 5

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t eax_4 = *(arg1 + 0x9c) + arg2 * 0x44
    
    if (eax_4 != 0)
        return eax_4 + 0x10

return 0
