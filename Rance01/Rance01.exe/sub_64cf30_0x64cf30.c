// 函数: sub_64cf30
// 地址: 0x64cf30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x80) += 1

if (*(arg1 + 0x5c) u>= *(arg1 + 0x80))
    *(arg1 + 0x94) = 0
else
    *(arg1 + 0x94) = 1
    *(arg1 + 0x80) = 0

sub_6598f0(*(arg1 + 0x9c))
sub_645940(*(arg1 + 0xa0))
int32_t edi = *(*(arg1 + 0xa0) + 0x2f8)
void* ebx = *(arg1 + 0xa4)

if (*(ebx + 0x5c) != edi)
    sub_65c190(ebx, edi)

*(ebx + 0x5c) = edi
void* esi_1 = *(arg1 + 0xa4)
sub_65bd20(esi_1)
InvalidateRect(*(esi_1 + 0x34), nullptr, 0)
return UpdateWindow(*(esi_1 + 0x34))
