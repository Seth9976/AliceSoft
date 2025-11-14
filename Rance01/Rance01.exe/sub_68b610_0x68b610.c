// 函数: sub_68b610
// 地址: 0x68b610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_4 = *(arg1 + 0x1c)

if (ecx_4 != 0)
    sub_4136b0(ecx_4, arg2)

void* ecx = *(arg1 + 0x20)

if (ecx != 0)
    sub_4136b0(ecx, arg2)

void* ecx_1 = *(arg1 + 0x24)

if (ecx_1 != 0)
    sub_4136b0(ecx_1, arg2)

void* ecx_2 = *(arg1 + 0x18)

if (ecx_2 != 0)
    sub_4136b0(ecx_2, arg2)

for (void** i = *(arg1 + 0x28); i != *(arg1 + 0x2c); i = &i[1])
    sub_4136b0(*i, arg2)
