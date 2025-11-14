// 函数: sub_67f130
// 地址: 0x67f130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = data_797ddc
int32_t* ecx = *(eax + 0x7c)

if (ecx == *(eax + 0x80))
    return eax + 0x8c

void* esi = *ecx
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2e8ba2e9, *(esi + 0xc) - *(esi + 8))
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 s> arg1 && arg1 s>= 0)
    return arg1 * 0x2c + *(esi + 8) + 0x10

return esi + 0x18
