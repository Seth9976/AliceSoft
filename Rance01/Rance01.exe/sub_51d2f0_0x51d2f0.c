// 函数: sub_51d2f0
// 地址: 0x51d2f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** eax_2 = *(arg1 + 4)
void** esi = eax_2[1]
void** edi = eax_2

if (*(esi + 0x69) != 0)
    return eax_2

do
    char eax_1
    int32_t edx
    eax_1, edx = sub_51c740(arg2, edx, &esi[3])
    
    if (eax_1 == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]
while (*(esi + 0x69) == 0)

return edi
