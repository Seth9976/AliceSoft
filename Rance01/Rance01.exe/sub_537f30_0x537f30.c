// 函数: sub_537f30
// 地址: 0x537f30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, *(arg2 + 0xb0) - *(arg2 + 0xac))
int32_t edx_1 = edx s>> 3

if (arg1 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t* esi_1 = *(arg2 + 0xac) + arg1 * 0x30 + 0x1c
    
    if (arg3 u< (esi_1[1] - *esi_1) s/ 0x38)
        return *esi_1 + arg3 * 0x38

return 0
