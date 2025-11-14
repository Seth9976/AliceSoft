// 函数: sub_53f770
// 地址: 0x53f770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_4 = *(arg1 + 0x28c)
int32_t esi = *eax_4
int32_t* eax = *(arg1 + 0x12c8)
*(arg1 + 0x28c) = &eax_4[1]
int32_t eax_1

if (eax[1] != 0)
    eax_1 = *eax
else
    eax_1 = 0

int32_t esi_1 = *(eax_1 + (esi << 2))
int32_t eax_2 = eax_4[1]
*(arg1 + 0x28c) = &eax_4[2]
int32_t ebp
int32_t edi
return sub_53f820(arg1, eax_2, ebp, esi_1, edi, arg1, esi_1)
