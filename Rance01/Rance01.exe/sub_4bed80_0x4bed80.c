// 函数: sub_4bed80
// 地址: 0x4bed80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* i

for (i = *arg2; i != arg2[1]; i += 0x114)
    **arg1 = *(i + 0x108)
    *(*arg1 + 4) = *(i + 0x10c)
    *(*arg1 + 8) = *(i + 0x110)
    *arg1 += 0xc

return i
