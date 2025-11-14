// 函数: sub_5d1940
// 地址: 0x5d1940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ebx = *(arg1 + 0x28)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(arg1 + 0x20) + 7)
int128_t* eax_2 = *(arg1 + 0x2c)

if (ebx != eax_2)
    void* edi_2 = 0
    sub_6b49d0(ebx, eax_2, edi_2)
    *(arg1 + 0x2c) = edi_2 + ebx

return sub_5d1ea0(((edx & 7) + eax_1) s>> 3, arg1 + 0x28)
