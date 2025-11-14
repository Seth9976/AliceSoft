// 函数: sub_572940
// 地址: 0x572940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax_7 = *(arg1 + 0xc)
int128_t* ebp = *(arg1 + 8)

if (ebp != eax_7)
    void* ebx_2 = 0
    sub_6b49d0(ebp, eax_7, ebx_2)
    *(arg1 + 0xc) = ebx_2 + ebp

*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0

if (arg2 s<= 0 || arg3 s<= 0)
    int32_t eax
    eax.b = 0
    return 0

int32_t eax_2 = (arg2 + 0xf) & 0xfffffff0
*(arg1 + 0x24) = eax_2
sub_404f60(eax_2 * arg3 + 0x28, arg1 + 8)
int32_t result = (*(arg1 + 8) + 7) & 0xfffffff8
*(arg1 + 0x1c) = arg2
*(arg1 + 0x18) = result
*(arg1 + 0x20) = arg3
result.b = 1
return result
