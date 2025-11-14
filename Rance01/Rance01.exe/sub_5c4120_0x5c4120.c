// 函数: sub_5c4120
// 地址: 0x5c4120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *arg2
void* esi = *(arg1 + 0x1c)
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t ecx_1 = arg2[1]
int32_t var_14
__builtin_memset(&var_14, 0, 0x14)
int32_t var_4 = ecx_1

if (sub_5b4d20(1, &var_14) != 0)
    return 0xffffff79

int32_t i = *(esi + 8)
int32_t eax_2 = 0

while (i s> 1)
    i s>>= 1
    eax_2 += 1

int32_t eax_3 = sub_5b4d20(eax_2, &var_14)

if (eax_3 != 0xffffffff)
    return *(esi + (**(esi + (eax_3 << 2) + 0x20) << 2))

return 0xffffff78
