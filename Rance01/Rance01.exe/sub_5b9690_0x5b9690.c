// 函数: sub_5b9690
// 地址: 0x5b9690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 0xffffffff

sub_6bc670(arg1, 0, 0x168)
arg1[1] = 0x4000
arg1[6] = 0x400
int32_t eax = sub_6b5c43(0x4000)
*arg1 = eax
int32_t eax_1 = sub_6b5c43(0x1000)
arg1[4] = eax_1
int32_t eax_2 = sub_6b5c43(0x2000)
arg1[5] = eax_2

if (eax != 0 && eax_1 != 0 && eax_2 != 0)
    arg1[0x54] = arg2
    return 0

sub_5b9710(arg1)
return 0xffffffff
