// 函数: sub_62ef50
// 地址: 0x62ef50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax_1 = *(arg1 + 0x28)
int128_t* ebx = *(arg1 + 0x24)

if (ebx != eax_1)
    void* edi_2 = 0
    sub_6b49d0(ebx, eax_1, edi_2)
    *(arg1 + 0x28) = edi_2 + ebx

int128_t* eax = *(arg1 + 0x38)
int128_t* ebx_1 = *(arg1 + 0x34)

if (ebx_1 != eax)
    void* edi_5 = 0
    sub_6b49d0(ebx_1, eax, edi_5)
    *(arg1 + 0x38) = edi_5 + ebx_1

*(arg1 + 0x44) = 0
*(arg1 + 0x48) = 0
__builtin_memset(arg1 + 8, 0, 0x14)
*(arg1 + 0x20) = 0
return 0
