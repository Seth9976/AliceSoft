// 函数: sub_58ad40
// 地址: 0x58ad40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    (*(**i + 4))()

int128_t* ecx_3 = *(arg1 + 8)
int128_t* esi = *(arg1 + 4)

if (esi != ecx_3)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx_3, ebx_1)
    *(arg1 + 8) = ebx_1 + esi

void** ebx_3 = *(*(arg1 + 0x18) + 4)
void** esi_1 = ebx_3

if (*(ebx_3 + 0x11) == 0)
    do
        sub_4fdc60(esi_1[2])
        esi_1 = *esi_1
        void** var_10_3 = ebx_3
        sub_6b4d5b()
        ebx_3 = esi_1
    while (*(esi_1 + 0x11) == 0)

void* eax_5 = *(arg1 + 0x18)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x18)
*eax_6 = eax_6
void* result = *(arg1 + 0x18)
*(result + 8) = result
*(arg1 + 0x1c) = 0
return result
