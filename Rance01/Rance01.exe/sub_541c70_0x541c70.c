// 函数: sub_541c70
// 地址: 0x541c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x28c)
int32_t edx = *eax
*(arg1 + 0x28c) = &eax[1]
int32_t ecx = eax[1]
*(arg1 + 0x28c) = &eax[2]
int32_t* eax_3 = *(arg1 + 0x12c4)
int32_t eax_4

if (eax_3[1] != 0)
    eax_4 = *eax_3
else
    eax_4 = 0

int32_t eax_5 = *(eax_4 + (ecx << 2))
int32_t* ecx_4

if (eax_5 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_4 = *(*(arg1 + 0x1e4) + (eax_5 << 2))
else
    ecx_4 = nullptr

int32_t* eax_6 = *(arg1 + 0x12c8)
int32_t eax_7

if (eax_6[1] != 0)
    eax_7 = *eax_6
else
    eax_7 = 0

int32_t eax_8 = *(eax_7 + (edx << 2))
int32_t* eax_9

if (eax_8 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_9 = *(*(arg1 + 0x1e4) + (eax_8 << 2))
else
    eax_9 = nullptr

char result = sub_5506c0(eax_9, ecx_4)

if (result != 0)
    return result

return sub_53d0e0(arg1, "copyString")
