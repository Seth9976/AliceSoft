// 函数: sub_5729c0
// 地址: 0x5729c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 4) -= 1
int32_t result = *(arg1 + 4)

if (result s> 0)
    return result

int128_t* eax = *(arg1 + 0xc)
int128_t* ebx_1 = *(arg1 + 8)

if (ebx_1 != eax)
    void* edi_2 = 0
    sub_6b49d0(ebx_1, eax, edi_2)
    *(arg1 + 0xc) = edi_2 + ebx_1

*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
return 0
