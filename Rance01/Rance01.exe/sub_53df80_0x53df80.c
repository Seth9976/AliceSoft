// 函数: sub_53df80
// 地址: 0x53df80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x28c)
int32_t esi = *eax
*(arg1 + 0x28c) = &eax[1]
int32_t ecx = eax[1]
*(arg1 + 0x28c) = &eax[2]
int32_t* eax_3 = *(arg1 + 0x12c4)
int32_t edx

if (eax_3[1] != 0)
    edx = *eax_3
else
    edx = 0

int32_t ecx_1 = *(edx + (ecx << 2))
int32_t* ecx_2

if (ecx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_2 = *(*(arg1 + 0x1e4) + (ecx_1 << 2))
else
    ecx_2 = nullptr

int32_t eax_4

if (eax_3[1] != 0)
    eax_4 = *eax_3
else
    eax_4 = 0

int32_t eax_5 = *(eax_4 + (esi << 2))
int32_t* eax_6

if (eax_5 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_6 = *(*(arg1 + 0x1e4) + (eax_5 << 2))
else
    eax_6 = nullptr

char result = sub_5506c0(eax_6, ecx_2)

if (result != 0)
    return result

return sub_53d0e0(arg1, "copyString")
