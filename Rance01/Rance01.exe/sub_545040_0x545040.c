// 函数: sub_545040
// 地址: 0x545040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_5 = *(arg1 + 0x28c)
int32_t edx = *eax_5
*(arg1 + 0x28c) = &eax_5[1]
int32_t ecx = eax_5[1]
*(arg1 + 0x28c) = &eax_5[2]
int32_t* eax_2 = *(arg1 + 0x12c8)
int32_t eax_3

if (eax_2[1] != 0)
    eax_3 = *eax_2
else
    eax_3 = 0

int32_t var_4
int32_t* result = sub_553850(ecx, arg1 + 0x1dc, *(eax_3 + (edx << 2)), &var_4)
**(arg1 + 0x2b0) = var_4
*(arg1 + 0x2b0) += 4
return result
