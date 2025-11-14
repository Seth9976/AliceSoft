// 函数: sub_64da50
// 地址: 0x64da50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 8) == *(arg1 + 0xc))
    int32_t eax
    eax.b = 0
    return eax

*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 7
InitCommonControls()
int32_t __saved_ebp = *(arg1 + 0x18)
sub_6b4d5b()
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_1 = edx s>> 1
int32_t eax_4 = (edx_1 u>> 0x1f) + edx_1
int32_t ecx_3
ecx_3.b = mulu.dp.d(eax_4, 0x14) u>> 0x20 != 0
int32_t __saved_edi = neg.d(ecx_3) | (eax_4 * 0x14)
int32_t* eax_6 = sub_6b487a()
*(arg1 + 0x18) = eax_6
int32_t* ecx_6 = eax_6
int32_t* i = *(arg1 + 8)

while (i != *(arg1 + 0xc))
    char edx_2 = i[2].b
    int32_t ebp_1 = i[1]
    char edx_3 = *(i + 9)
    *ecx_6 = *i
    ecx_6[1] = ebp_1
    char var_b_1 = edx_3
    int16_t var_a_1 = 0
    ecx_6[2] = edx_2.d
    ecx_6[3] = 0
    ecx_6[4] = 0
    i = &i[3]
    ecx_6 = &ecx_6[5]

HWND eax_8 = CreateToolbarEx(arg2, 0x50000100, 0x18a92, 1, arg3, 0x9c96, *(arg1 + 0x18), 7, 0, 0, 
    0x1b, 0x10, 0x14)
*(arg1 + 4) = eax_8
eax_8.b = eax_8 != 0
return eax_8
