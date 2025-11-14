// 函数: sub_5db640
// 地址: 0x5db640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho = *(arg2 + 0xdc)

if (ho != 0)
    DeleteObject(ho)
    *(arg2 + 0xdc) = 0

sub_5da740(arg2 + 0xa8)

if (sub_61ea10(arg2 + 0xdc) == 0)
    return 0xffffffff

int32_t* eax_2 = *(arg2 + 0x10c)

if (eax_2 != 0)
    *(arg2 + 0x9c) = eax_2[4]
    *(arg2 + 0xa4) = (eax_2[1] - *eax_2) s>> 2

char* eax_3 = *(arg2 + 0x110)

if (eax_3 != 0)
    sub_5dc480(arg2 + 4, 0x9c61, *eax_3)

sub_5dccb0(arg2 + 0x98, arg1)
sub_5dcde0(arg2 + 0xa0, arg1)
return 0
