// 函数: sub_53e310
// 地址: 0x53e310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x28c)
int32_t ebx = *eax
*(arg1 + 0x28c) = &eax[1]
int32_t esi = eax[1]
*(arg1 + 0x28c) = &eax[2]
int32_t var_4
int32_t* eax_3
int32_t edx
eax_3, edx = sub_553750(arg1 + 0x1dc, esi, &var_4, 1)

if (eax_3.b == 0)
    int32_t var_18 = esi
    return sub_53d1c0(eax_3, edx, arg1, 0x74d280)

int32_t* eax_5 = *(arg1 + 0x12c4)

if (eax_5 == 0)
    void var_8
    int32_t entry_ebx
    return sub_53d0e0(arg1, 0x74d2cc, arg3, arg2, entry_ebx, var_8, var_4)

if (eax_5[1] != 0)
    *(*eax_5 + (ebx << 2)) = var_4
    int32_t result
    result.b = 1
    return result

*(ebx << 2) = var_4
int32_t eax_7
eax_7.b = 1
return 1
