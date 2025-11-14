// 函数: sub_6f5980
// 地址: 0x6f5980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_2 = arg1 * 0x28
int32_t eax_1 = arg4[0x120c]
int32_t eax_2 = *(eax_1 + ecx_2 + 0x1c)
*arg2 = *(eax_1 + ecx_2 + 0x18)
arg2[1] = eax_2
arg2[3] = *(arg4[0x120c] + ecx_2 + 0x20)
int32_t eax_5
eax_5.b = *(arg4[0x120c] + ecx_2 + 0x24)
arg2[0xc].b = eax_5.b
*(arg3 + 0x24) = *(arg4[0x120c] + ecx_2 + 4)
*(arg3 + 0x28) = *(arg4[0x120c] + ecx_2 + 8)
*(arg3 + 0x2c) = *(arg4[0x120c] + ecx_2 + 0xc)
*(arg3 + 0x30) = *(arg4[0x120c] + ecx_2 + 0x10)
int32_t eax_14 = *arg4

if (eax_14 == 2 || eax_14 == 6 || eax_14 == 0xe || eax_14 == 0x12 || eax_14 == 0x10)
    int32_t ecx_5 = arg4[0x120c][arg1 * 0xa]
    HANDLE edx_3 = arg2[0xf]
    arg2[7] = ecx_5
    
    if (sub_6ca810(edx_3, ecx_5, FILE_BEGIN) == 0)
        return 0xffffffe9
    
    if (sub_6fa810(arg2) != 0)
        return 0xffffffe9
else
    int32_t edx_1 = arg4[0x120c][arg1 * 0xa]
    int32_t ecx_3 = arg2[8]
    arg2[4] = edx_1
    int32_t edx_2 = edx_1 - arg4[0x11]
    arg2[7] = edx_2
    arg2[9] = ecx_3 - edx_2

return 0
