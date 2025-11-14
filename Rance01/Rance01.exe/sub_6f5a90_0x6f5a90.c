// 函数: sub_6f5a90
// 地址: 0x6f5a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_2 = arg1 * 0x28
*(arg4[0x120c] + edx_2 + 4) = *(arg3 + 0x24)
*(arg4[0x120c] + edx_2 + 8) = *(arg3 + 0x28)
*(arg4[0x120c] + edx_2 + 0xc) = *(arg3 + 0x2c)
*(arg4[0x120c] + edx_2 + 0x10) = *(arg3 + 0x30)
int32_t ecx_2 = arg2[1]
int32_t edi_3 = arg4[0x120c]
*(edi_3 + edx_2 + 0x18) = *arg2
*(edi_3 + edx_2 + 0x1c) = ecx_2
*(arg4[0x120c] + edx_2 + 0x20) = arg2[3]
int32_t eax_6
eax_6.b = arg2[0xc].b
*(arg4[0x120c] + edx_2 + 0x24) = eax_6.b
int32_t eax_7 = *arg4

if (eax_7 != 2 && eax_7 != 0xe && eax_7 != 0x10 && eax_7 != 6 && eax_7 != 0x12)
    int32_t eax_8 = arg2[4]
    arg4[0x120c][arg1 * 0xa] = eax_8
    return eax_8

int32_t eax_9 = arg2[7]
arg4[0x120c][arg1 * 0xa] = eax_9
return eax_9
