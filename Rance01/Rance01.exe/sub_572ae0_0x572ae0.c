// 函数: sub_572ae0
// 地址: 0x572ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax_1 = *(arg1 + 0x3c)
int128_t* ebx = *(arg1 + 0x38)

if (ebx != eax_1)
    void* edi_2 = 0
    sub_6b49d0(ebx, eax_1, edi_2)
    *(arg1 + 0x3c) = edi_2 + ebx

*(arg1 + 0x48) = fconvert.s(float.t(0))
int128_t* eax = *(arg1 + 0xc)
int128_t* ebx_1 = *(arg1 + 8)

if (ebx_1 != eax)
    void* edi_5 = 0
    sub_6b49d0(ebx_1, eax, edi_5)
    *(arg1 + 0xc) = edi_5 + ebx_1

__builtin_memset(arg1 + 0x18, 0, 0x1c)
return 0
