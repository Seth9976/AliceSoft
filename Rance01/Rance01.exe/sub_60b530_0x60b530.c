// 函数: sub_60b530
// 地址: 0x60b530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** esi = &arg1[0xc]
*arg1 = 0
arg1[1] = 0
esi[5] = 0xf
esi[4] = 0
*esi = nullptr
sub_401270(esi, 0x1b, "DPAnalysis_BalloonHelpClass")
arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x23] = 0
arg1[0x24] = 0x14
arg1[0x25] = 0x14
arg1[0x26] = 0xc
arg1[0x27] = 2
arg1[2] = 3
arg1[3] = sub_60bb10
arg1[4] = 0
arg1[5] = 0
arg1[7] = 0
arg1[8] = LoadCursorA(nullptr, 0x7f00)
arg1[9] = 0
arg1[0xa] = 0

if (esi[5] u>= 0x10)
    esi = *esi

arg1[0xb] = esi
return arg1
