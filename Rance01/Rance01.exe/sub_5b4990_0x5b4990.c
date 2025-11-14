// 函数: sub_5b4990
// 地址: 0x5b4990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax_1 = *(arg1 + 0x18)
int128_t* ebx = *(arg1 + 0x14)

if (ebx != eax_1)
    void* edi_2 = 0
    sub_6b49d0(ebx, eax_1, edi_2)
    *(arg1 + 0x18) = edi_2 + ebx

int128_t* edi_4 = *(arg1 + 0x48)

if (edi_4 != 0)
    sub_5c5a90(edi_4)
    int32_t var_10_2 = *(arg1 + 0x48)
    sub_6b4d5b()
    *(arg1 + 0x48) = 0

*(arg1 + 0x4c) = 0
sub_5b4560(arg1 + 8)
void* result
result.b = 1
return result
