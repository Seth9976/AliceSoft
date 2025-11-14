// 函数: sub_55dde0
// 地址: 0x55dde0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_6 = *(arg1 + 4)
int32_t ecx = eax_6[1]

if (arg2 u>= ecx u>> 2)
    sub_604c90(0x74c778)
    return 0

if (ecx != 0)
    ecx = *eax_6

int32_t ecx_1 = *(ecx + (arg2 << 2))

if (eax_6[0xc] != 0)
    sub_604c90(0x74c7a0)
    return 0

void* eax_2 = eax_6[5]

if (ecx_1 u< (*(eax_2 + 0xc) - *(eax_2 + 8)) s>> 2)
    return sub_552210(*(*(eax_2 + 8) + (ecx_1 << 2)))

return sub_552210(nullptr)
