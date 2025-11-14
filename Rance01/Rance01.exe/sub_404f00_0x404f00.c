// 函数: sub_404f00
// 地址: 0x404f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_1 = *(arg1 + 0x98) - *(arg1 + 0x94)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x92492493, esi_1)
int32_t edx_2 = (edx + esi_1) s>> 4
void* result

if (edx_2 u>> 0x1f != neg.d(edx_2) && esi_1 s/ 0x1c s> arg2 && arg2 s>= 0)
    result = *(arg1 + 0x94) + arg2 * 0x1c
else
    result = arg1 + 4

if (*(result + 0x14) u< 0x10)
    return result

return *result
