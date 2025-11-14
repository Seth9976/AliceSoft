// 函数: sub_599160
// 地址: 0x599160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4ec4ec4f, ebx[1] - *ebx)
int32_t edx_1 = edx s>> 5
arg2 = (edx_1 u>> 0x1f) + edx_1
sub_416780(&arg2, arg1)

for (int32_t* i = *ebx; i != ebx[1]; i = &i[0x1a])
    if (sub_599ce0(arg1, i) == 0)
        return 0

return 1
