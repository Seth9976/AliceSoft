// 函数: sub_637270
// 地址: 0x637270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = SendMessageA(*(arg2 + 0x20), 0xf0, 0, 0) == 1
LRESULT eax_1
eax_1.b = SendMessageA(*(arg2 + 0x30), 0xf0, 0, 0) == 1
arg1[1] = eax_1.b
arg1[2] = SendMessageA(*(arg2 + 0x40), 0xf0, 0, 0) == 1
arg1[3] = SendMessageA(*(arg2 + 0x50), 0xf0, 0, 0) == 1
LRESULT eax_5
eax_5.b = SendMessageA(*(arg2 + 0x60), 0xf0, 0, 0) == 1
arg1[4] = eax_5.b
arg1[5] = SendMessageA(*(arg2 + 0x70), 0xf0, 0, 0) == 1
arg1[6] = SendMessageA(*(arg2 + 0x80), 0xf0, 0, 0) == 1
LRESULT eax_9
eax_9.b = SendMessageA(*(arg2 + 0x90), 0xf0, 0, 0) == 1
arg1[7] = eax_9.b
arg1[8] = SendMessageA(*(arg2 + 0xa0), 0xf0, 0, 0) == 1
arg1[9] = SendMessageA(*(arg2 + 0xb0), 0xf0, 0, 0) == 1
LRESULT eax_13
eax_13.b = SendMessageA(*(arg2 + 0xc0), 0xf0, 0, 0) == 1
arg1[0xa] = eax_13.b
arg1[0xb] = SendMessageA(*(arg2 + 0xd0), 0xf0, 0, 0) == 1
arg1[0xc] = SendMessageA(*(arg2 + 0xe0), 0xf0, 0, 0) == 1
LRESULT eax_17
eax_17.b = SendMessageA(*(arg2 + 0xf0), 0xf0, 0, 0) == 1
arg1[0xd] = eax_17.b
arg1[0xe] = SendMessageA(*(arg2 + 0x100), 0xf0, 0, 0) == 1
arg1[0xf] = SendMessageA(*(arg2 + 0x110), 0xf0, 0, 0) == 1
LRESULT eax_21
eax_21.b = SendMessageA(*(arg2 + 0x120), 0xf0, 0, 0) == 1
arg1[0x10] = eax_21.b
arg1[0x11] = SendMessageA(*(arg2 + 0x130), 0xf0, 0, 0) == 1
arg1[0x12] = SendMessageA(*(arg2 + 0x140), 0xf0, 0, 0) == 1
LRESULT result
result.b = SendMessageA(*(arg2 + 0x150), 0xf0, 0, 0) == 1
arg1[0x13] = result.b
return result
