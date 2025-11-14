// 函数: sub_6873f0
// 地址: 0x6873f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x40)

if (result == 0)
    return result

int32_t eax = sub_687330(result, arg1)
void* edx = *(arg1 + 0x40)
int32_t edx_1 = *(edx + 0x28)
int32_t ecx_2 = *(edx + 0x34) + *(edx + 0x30) + eax
int32_t var_4 = ecx_2
int32_t var_8 = edx_1
int32_t* eax_1 = &var_8

if (ecx_2 s>= edx_1)
    eax_1 = &var_4

return *eax_1
