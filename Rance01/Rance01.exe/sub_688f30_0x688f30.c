// 函数: sub_688f30
// 地址: 0x688f30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = *(arg1 + 0xd4) - *(arg1 + 0xd0)
bool cond:0 = ecx_1 s/ 0x1c - 1 s< arg2
int32_t var_8 = ecx_1 s/ 0x1c - 1
int32_t var_4 = 0xffffffff
int32_t* eax_4 = &var_8

if (not(cond:0))
    eax_4 = &arg2

if (*eax_4 s<= 0xffffffff)
    eax_4 = &var_4

int32_t result = *eax_4

if (*(arg1 + 0xe0) != result)
    *(arg1 + 0xe0) = result
    *(arg1 + 0xe4) = 1

return result
