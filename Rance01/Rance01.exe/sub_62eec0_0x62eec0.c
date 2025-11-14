// 函数: sub_62eec0
// 地址: 0x62eec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_62ef50(arg1)

if (arg2 s<= 0 || arg3 s<= 0)
    int32_t eax
    eax.b = 0
    return eax

*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = (arg2 + 7) & 0xfffffff8
int128_t* eax_3 = *(arg1 + 0x28)
int128_t* ebp = *(arg1 + 0x24)

if (ebp != eax_3)
    void* esi_2 = 0
    sub_6b49d0(ebp, eax_3, esi_2)
    *(arg1 + 0x28) = esi_2 + ebp

int32_t eax_6 = *(arg1 + 0x1c) * arg3 + 0x18
*(arg1 + 0x44) = 0
sub_404f60(eax_6, arg1 + 0x34)
*(arg1 + 0x48) = (*(arg1 + 0x34) + 7) & 0xfffffff8
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 8) = arg2
*(arg1 + 0xc) = arg3
int32_t eax_9
eax_9.b = 1
*(arg1 + 0x20) = 0x100
return eax_9
