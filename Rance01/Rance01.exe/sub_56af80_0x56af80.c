// 函数: sub_56af80
// 地址: 0x56af80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
ebx.b = arg2

if (*(arg1 + 0xec) == ebx.b)
    int32_t eax
    eax.b = 1
    return eax

int32_t edx
edx.b = ebx.b != 0
char eax_3 = (**(arg1 + 0x1c4))(1, edx)

if (eax_3 == 0)
    return eax_3

int32_t ecx_1 = *(arg1 + 0xe8)
HMODULE edx_1 = *(arg1 + 0x98)
*(arg1 + 0xec) = ebx.b
sub_56e790(arg1 + 0x128, edx_1, ecx_1)
HDC eax_5
eax_5.b = 1
return eax_5
