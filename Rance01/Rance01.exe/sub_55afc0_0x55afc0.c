// 函数: sub_55afc0
// 地址: 0x55afc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x38) - *(arg1 + 0x34))
int32_t edx_1 = edx s>> 3
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t i = 0

if (result s> 0)
    int32_t ebx_1 = 0
    int32_t edx_3
    
    do
        *sub_513fa0(arg1, *(arg1 + 0x34) + ebx_1) = i
        int32_t edx_2
        edx_2:result = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x38) - *(arg1 + 0x34))
        edx_3 = edx_2 s>> 3
        i += 1
        ebx_1 += 0x2c
    while (i s< (edx_3 u>> 0x1f) + edx_3)

return result
