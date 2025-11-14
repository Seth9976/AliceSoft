// 函数: sub_53e030
// 地址: 0x53e030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x28c)
void* edx = *(arg1 + 0xab8)
int32_t esi = *eax
*(arg1 + 0x28c) = &eax[1]
int32_t var_8
int32_t var_4
sub_5542b0(*(edx - 4), arg1 + 0x1dc, esi, &var_8, &var_4)
**(arg1 + 0x2b0) = var_8
int32_t ecx_2 = var_4
*(arg1 + 0x2b0) += 4
**(arg1 + 0x2b0) = ecx_2
*(arg1 + 0x2b0) += 4
return 4
