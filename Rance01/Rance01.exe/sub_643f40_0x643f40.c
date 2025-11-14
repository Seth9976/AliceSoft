// 函数: sub_643f40
// 地址: 0x643f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x80) += 1

if (*(arg1 + 0x5c) u>= *(arg1 + 0x80))
    *(arg1 + 0xa4) = 0
else
    *(arg1 + 0xa4) = 1
    sub_650340(arg1 + 0x94)
    *(arg1 + 0x80) = 0

sub_6598f0(*(arg1 + 0x88))
sub_639ff0(*(arg1 + 0x8c))
void* esi_1 = *(arg1 + 0x90)
int32_t* edi_2 = *(*(arg1 + 0x8c) + 0x4bc)
sub_6598f0(*(esi_1 + 0x80))
sub_6359f0(*(esi_1 + 0x88))
return sub_652600(*(esi_1 + 0x84), edi_2)
