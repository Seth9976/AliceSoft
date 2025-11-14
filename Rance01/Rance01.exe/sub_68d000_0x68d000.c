// 函数: sub_68d000
// 地址: 0x68d000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2
int32_t ebx_2 = (*(arg1 + 8) - *(arg1 + 4)) s>> 2
arg2.b = ebx_2.b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_2 u>> 8).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_2 u>> 0x10).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_2 u>> 0x18).b
sub_54e400(&arg2, ebp + 4)

for (int32_t** i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    if (sub_68b810(*i, ebp) == 0)
        return 0

return 1
