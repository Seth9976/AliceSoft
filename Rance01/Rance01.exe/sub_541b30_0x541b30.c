// 函数: sub_541b30
// 地址: 0x541b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x28c)
int32_t ecx = *eax
*(arg1 + 0x28c) = &eax[1]
int32_t* eax_2 = *(arg1 + 0x12c8)
int32_t eax_3

if (eax_2[1] != 0)
    eax_3 = *eax_2
else
    eax_3 = 0

int32_t eax_4 = *(eax_3 + (ecx << 2))
int32_t* eax_5

if (eax_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_5 = *(*(arg1 + 0x1e4) + (eax_4 << 2))
else
    eax_5 = nullptr

*(arg1 + 0x2b0) -= 4
int32_t ecx_5 = **(arg1 + 0x2b0)
int32_t* ecx_6

if (ecx_5 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_6 = *(*(arg1 + 0x1e4) + (ecx_5 << 2))
else
    ecx_6 = nullptr

char result = sub_5506c0(ecx_6, eax_5)

if (result != 0)
    return result

return sub_53d0e0(arg1, "copyString")
