// 函数: sub_541d20
// 地址: 0x541d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_2 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
int32_t* esi_3

if (eax_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    esi_3 = *(*(arg1 + 0x1e4) + (eax_2 << 2))
else
    esi_3 = nullptr

int32_t ebx = esi_3[1]

if (edx u>= ebx u>> 2)
    int32_t var_18 = edx
    int32_t var_1c = eax_2
    return sub_53d1c0(eax_2, edx, arg1, 0x74e2d0)

int32_t esi_5

if (ebx != 0)
    esi_5 = *esi_3
else
    esi_5 = 0

int32_t edx_1 = *(esi_5 + (edx << 2))
int32_t* edx_2

if (edx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    edx_2 = *(*(arg1 + 0x1e4) + (edx_1 << 2))
else
    edx_2 = nullptr

int32_t* eax_11

if (ecx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_11 = *(*(arg1 + 0x1e4) + (ecx_1 << 2))
else
    eax_11 = nullptr

char result = sub_5506c0(eax_11, edx_2)

if (result != 0)
    return result

int32_t entry_ebx
return sub_53d0e0(arg1, "copyString", arg6, arg5, arg4, entry_ebx, arg3)
