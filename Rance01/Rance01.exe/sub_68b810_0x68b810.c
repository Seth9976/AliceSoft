// 函数: sub_68b810
// 地址: 0x68b810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t ebx = *ebp
arg1.b = ebx.b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx u>> 8).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx u>> 0x10).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx u>> 0x18).b
sub_54e400(&arg1, arg2 + 4)
int32_t ebx_2 = ebp[1]
arg1.b = ebx_2.b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_2 u>> 8).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_2 u>> 0x10).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_2 u>> 0x18).b
sub_54e400(&arg1, arg2 + 4)
int32_t eax_12
int32_t edx_2
edx_2:eax_12 = muls.dp.d(0x2e8ba2e9, ebp[3] - ebp[2])
int32_t edx_3 = edx_2 s>> 3
int32_t ebx_6 = (edx_3 u>> 0x1f) + edx_3
arg1.b = ebx_6.b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_6 u>> 8).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_6 u>> 0x10).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_6 u>> 0x18).b
sub_54e400(&arg1, arg2 + 4)

for (int32_t* i = ebp[2]; i != ebp[3]; i = &i[0xb])
    if (sub_68d170(i, arg2) == 0)
        return 0

return 1
