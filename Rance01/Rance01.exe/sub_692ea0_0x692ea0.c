// 函数: sub_692ea0
// 地址: 0x692ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4136b0(*(arg1 + 0x10), arg2)
sub_4136b0(*(arg1 + 0x14), arg2)
sub_4136b0(*(arg1 + 0x1c), arg2)
int32_t result = sub_4136b0(*(arg1 + 0x18), arg2)
void* ecx_3 = *(arg1 + 0x20)

if (ecx_3 != 0)
    result = sub_4136b0(ecx_3, arg2)

void* ecx_4 = *(arg1 + 0x24)

if (ecx_4 == 0)
    return result

return sub_4136b0(ecx_4, arg2)
