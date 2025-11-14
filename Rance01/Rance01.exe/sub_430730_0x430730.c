// 函数: sub_430730
// 地址: 0x430730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg2 + 0x1c)

if (eax == 0)
    eax.b = 0
    return eax

void* ecx = *(eax + 0x24)
int32_t ecx_1

if (ecx != 0)
    ecx_1 = *(ecx + 0x18)
else
    ecx_1 = 0xffffffff

*(arg2 + 0x54) = 1
void* eax_1 = *(eax + 0x24)
int32_t var_8 = ecx_1
int32_t eax_2

if (eax_1 != 0)
    eax_2 = *(eax_1 + 0x18)
else
    eax_2 = 0xffffffff

int32_t var_c = eax_2
int32_t var_4 = 0
int32_t* eax_3 = &var_c

if (eax_2 s>= ecx_1)
    eax_3 = &var_8

if (*eax_3 s<= 0)
    eax_3 = &var_4

*(arg2 + 0x58) = *eax_3
*(arg2 + 0x5c) = 0
int32_t eax_4
eax_4.b = 1
return eax_4
