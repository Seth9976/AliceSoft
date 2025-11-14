// 函数: sub_591e40
// 地址: 0x591e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0xc)

if (eax != 0)
    (*(*eax + 8))(eax)
    *(arg1 + 0xc) = 0

int128_t* eax_1 = *(arg1 + 0x14)
int128_t* ebx = *(arg1 + 0x10)

if (ebx != eax_1)
    void* edi_2 = 0
    sub_6b49d0(ebx, eax_1, edi_2)
    *(arg1 + 0x14) = edi_2 + ebx

sub_58dec0(*(*(arg1 + 0x24) + 4))
void* eax_3 = *(arg1 + 0x24)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 0x24)
*eax_4 = eax_4
void* result = *(arg1 + 0x24)
*(result + 8) = result
*(arg1 + 0x28) = 0
return result
