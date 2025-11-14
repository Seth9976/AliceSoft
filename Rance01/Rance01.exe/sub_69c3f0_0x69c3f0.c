// 函数: sub_69c3f0
// 地址: 0x69c3f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_6 = data_797ddc
int32_t* ecx = *(eax_6 + 0x7c)

if (ecx == *(eax_6 + 0x80))
    return 0

void* esi = *ecx
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2e8ba2e9, *(esi + 0xc) - *(esi + 8))
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 s> arg1 && arg1 s>= 0)
    return *(arg1 * 0x2c + *(esi + 8) + 4)

return 0
