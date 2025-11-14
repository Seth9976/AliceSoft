// 函数: sub_697a20
// 地址: 0x697a20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x40)

if (ecx == 0)
    return 0

int32_t eax_1 = sub_697810(ecx, arg1)
void* edx_1 = *(arg1 + 0x40)
int32_t edx_2 = *(edx_1 + 0x2c)
int32_t ecx_3 = *(edx_1 + 0x34) + *(edx_1 + 0x30) + eax_1
int32_t var_4 = ecx_3
int32_t var_8 = edx_2
int32_t* eax_2 = &var_8

if (ecx_3 s>= edx_2)
    eax_2 = &var_4

return *eax_2
