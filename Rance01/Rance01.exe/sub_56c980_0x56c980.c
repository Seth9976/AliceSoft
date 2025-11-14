// 函数: sub_56c980
// 地址: 0x56c980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s< 0)
    return 

int32_t eax_1
int32_t edx_3
edx_3:eax_1 = muls.dp.d(0x66666667, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_4 = edx_3 s>> 4

if (arg2 s>= (edx_4 u>> 0x1f) + edx_4)
    return 

int128_t* eax_4 = arg3
void* ebx_1 = eax_4 + 1

do
    edx_4.b = *eax_4
    eax_4 += 1
while (edx_4.b != 0)

sub_401270(*(arg1 + 4) + arg2 * 0x28 + 0xc, eax_4 - ebx_1, arg3)
