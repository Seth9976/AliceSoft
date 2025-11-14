// 函数: sub_595240
// 地址: 0x595240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg2 + 4
int32_t i_2 = 8
int32_t i

do
    *eax ^= *(eax + 0x7a4)
    *(eax + 4) ^= *(eax + 0x7a8)
    *(eax + 8) ^= *(eax + 0x7ac)
    *(eax + 0xc) ^= *(eax + 0x7b0)
    eax += 0x10
    i = i_2
    i_2 -= 1
while (i != 1)
void* result = arg2 + 0x84
int32_t i_3 = 0xa3
int32_t i_1

do
    *result ^= *(result - 0x80)
    *(result + 4) ^= *(result - 0x7c)
    *(result + 8) ^= *(result - 0x78)
    result += 0xc
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return result
