// 函数: sub_597490
// 地址: 0x597490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg4 != 0x20 || arg2 s<= 0 || arg3 s<= 0)
    int32_t eax
    eax.b = 0
    return eax

void* eax_2 = ((arg2 << 2) + 0xf) & 0xfffffff0
*(arg1 + 0x1c) = eax_2
sub_404f60(eax_2 * arg3 + 0x28, arg1 + 0x24)
int32_t eax_7 = (*(arg1 + 0x24) + 7) & 0xfffffff8
*(arg1 + 0xc) = arg2
*(arg1 + 0x34) = eax_7
*(arg1 + 0x10) = arg3
*(arg1 + 0x14) = 0x20
*(arg1 + 0x18) = 4
eax_7.b = 1
*(arg1 + 0x20) = 0x101
return eax_7
