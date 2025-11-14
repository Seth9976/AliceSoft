// 函数: sub_5d1a10
// 地址: 0x5d1a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx_4 = data_797d90

if (*ecx_4 == 0)
    return 0

int32_t esi = *(ecx_4 + 0x28)

if (esi == *(ecx_4 + 0x2c) || arg1 s< 0 || arg1 s>= *(ecx_4 + 0x20))
    return 0

int32_t ecx_1 = arg1 & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg1)
int32_t result
result.b = (*(((eax_1 + (edx & 7)) s>> 3) + esi) & (0x80 s>> ecx_1.b).b) != 0
return result
