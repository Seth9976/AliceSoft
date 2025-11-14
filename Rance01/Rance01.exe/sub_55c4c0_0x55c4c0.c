// 函数: sub_55c4c0
// 地址: 0x55c4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 4)
*(edi + 4) = sub_55c540(arg1, *(*(arg2 + 4) + 4), edi)
int32_t* edx = *(arg1 + 4)
*(arg1 + 8) = *(arg2 + 8)
int32_t* eax_3 = edx[1]

if (*(eax_3 + 0x15) != 0)
    *edx = edx
    void* esi_2 = *(arg1 + 4)
    *(esi_2 + 8) = esi_2
    return eax_3

int32_t* ecx_2 = *eax_3

while (*(ecx_2 + 0x15) == 0)
    eax_3 = ecx_2
    ecx_2 = *eax_3

*edx = eax_3
void* esi_1 = *(arg1 + 4)
void* ecx_3 = *(esi_1 + 4)
void* eax_4 = *(ecx_3 + 8)

while (*(eax_4 + 0x15) == 0)
    ecx_3 = eax_4
    eax_4 = *(ecx_3 + 8)

*(esi_1 + 8) = ecx_3
return eax_4
