// 函数: sub_6fa7c0
// 地址: 0x6fa7c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[0xf] == 0)
    int32_t edx_2 = arg1[5]
    int32_t ecx_1 = arg1[8]
    arg1[4] = edx_2
    arg1[6] = edx_2 + ecx_1
    arg1[9] = ecx_1
else
    arg1[4] = &arg1[0x410]
    arg1[6] = &arg1[0x410]
    arg1[9] = 0

arg1[3] = 0
arg1[0xc].b = 0
*arg1 = 0
arg1[1] = 0
arg1[0xe] = 0
return arg1
