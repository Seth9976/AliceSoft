// 函数: sub_567b40
// 地址: 0x567b40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t eax = GetSystemMetrics(SM_CYCAPTION)
int32_t eax_1 = GetSystemMetrics(SM_CYMENU)
int32_t eax_2 = GetSystemMetrics(SM_CXFRAME)
int32_t result = eax_1 + (GetSystemMetrics(SM_CYFRAME) << 1) + eax + arg3
*(arg1 + 0x7c) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x84) = arg2 + (eax_2 << 1)
*(arg1 + 0x88) = result
return result
