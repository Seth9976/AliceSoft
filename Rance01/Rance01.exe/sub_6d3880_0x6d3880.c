// 函数: sub_6d3880
// 地址: 0x6d3880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[0xf] == 0)
    arg1[8] = arg3
    arg1[5] = arg2
    arg1[4] = arg2
    arg1[6] = arg2 + arg3
else
    arg1[8] = 0x1000
    arg1[5] = &arg1[0x10]
    arg1[4] = &arg1[0x10]
    arg1[6] = &arg1[0x410]

*arg1 = 0
arg1[1] = 0
arg1[3] = 0
return arg1
