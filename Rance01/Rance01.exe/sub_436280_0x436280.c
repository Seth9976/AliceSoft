// 函数: sub_436280
// 地址: 0x436280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* const ebx = arg1

if (*(ebx + 0x10) == *(ebx + 0x14))
    int32_t eax
    eax.b = 1
    return eax

int32_t eax_2
int32_t ecx_1
eax_2, ecx_1 = (*(**(ebx + 0x20) + 0x14))()
int32_t var_8 = eax_2

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

int32_t eax_3 = *(ebx + 0x14)
void** i = *(ebx + 0x10)
arg1 = nullptr

for (; i != eax_3; i = &i[1])
    sub_434f80(*i, &var_8, &arg1, *(ebx + 0x24), *(ebx + 0x28), *(ebx + 0x2c), *(ebx + 0x30))

return (*(**(ebx + 0x20) + 0x18))() != 0
