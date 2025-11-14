// 函数: sub_40f630
// 地址: 0x40f630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** eax_1 = *(arg1 + 4)
void** esi = eax_1[1]
void** edi = eax_1

if (*(esi + 0x21) != 0)
    return eax_1

do
    if (sub_40f4a0(&esi[3], arg2) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]
while (*(esi + 0x21) == 0)

return edi
