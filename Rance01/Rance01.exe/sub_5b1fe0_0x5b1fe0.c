// 函数: sub_5b1fe0
// 地址: 0x5b1fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg3[2] = zx.d(*(arg1 + 6))
arg3[5] = zx.d(*(arg1 + 8))
arg3[6] = zx.d(*(arg1 + 0xa))
arg3[3] = *(arg1 + 0x10)
arg3[4] = *(arg1 + 0x14)
*arg3 = *(arg1 + 0x18)
arg3[1] = *(arg1 + 0x1c)
arg3[7] = *(arg1 + 0x20) + arg1
bool cond:0 = arg3[2] != 0x10
arg3[8] = *(arg1 + 0x24) + arg1

if (not(cond:0) && *(arg1 + 0x24) != 0)
    arg1.b = 1
    arg3[9].b = 1
    return arg1

arg3[9].b = 0
arg1.b = 1
return arg1
