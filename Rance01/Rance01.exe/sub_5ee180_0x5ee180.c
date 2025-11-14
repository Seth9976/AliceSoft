// 函数: sub_5ee180
// 地址: 0x5ee180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4bda12f7, ebp[1] - *ebp)
int32_t edx_1 = edx s>> 5
int32_t ebx_2 = (edx_1 u>> 0x1f) + edx_1
arg1.b = ebx_2.b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_2 u>> 8).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_2 u>> 0x10).b
sub_54e400(&arg1, arg2 + 4)
arg1.b = (ebx_2 u>> 0x18).b
char* result = sub_54e400(&arg1, arg2 + 4)

for (int32_t* i = *ebp; i != ebp[1]; i = &i[0x1b])
    result = sub_5edd20(i, arg2)

return result
