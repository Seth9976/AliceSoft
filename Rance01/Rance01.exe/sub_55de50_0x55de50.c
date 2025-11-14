// 函数: sub_55de50
// 地址: 0x55de50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_6 = *(arg1 + 4)
int32_t ecx = eax_6[1]

if (arg2 u>= ecx u>> 2)
    sub_604c90(0x74c7c0)
    return 0

if (ecx != 0)
    ecx = *eax_6

int32_t ecx_1 = *(ecx + (arg2 << 2))

if (eax_6[0xc] != 0)
    sub_604c90(0x74c7e8)
    return 0

void* eax_2 = eax_6[5]

if (ecx_1 u< (*(eax_2 + 0xc) - *(eax_2 + 8)) s>> 2)
    return sub_5521d0(*(*(eax_2 + 8) + (ecx_1 << 2)))

return sub_5521d0(nullptr)
