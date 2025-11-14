// 函数: sub_5a35c0
// 地址: 0x5a35c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 0x16bc)

if (ecx s<= 0xd)
    *(arg1 + 0x16bc) = ecx + 3
    *(arg1 + 0x16b8) |= arg3 << ecx.b
    sub_5a3dc0(arg1, arg2, arg4, arg5)
    return 

arg2.w = arg3
arg2.w <<= ecx.b
char* ecx_1 = *(arg1 + 8)
*(arg1 + 0x16b8) |= arg2.w
ecx_1[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
char ebx_1 = *(arg1 + 0x16b9)
*(arg1 + 0x14) += 1
(*(arg1 + 0x14))[*(arg1 + 8)] = ebx_1
int32_t edx_2 = *(arg1 + 0x16bc)
*(arg1 + 0x14) += 1
char* ecx_2
ecx_2.b = 0x10
ecx_2.b = 0x10 - edx_2.b
*(arg1 + 0x16b8) = arg3 u>> ecx_2.b
*(arg1 + 0x16bc) = edx_2 - 0xd
sub_5a3dc0(arg1, edx_2 - 0xd, arg4, arg5)
