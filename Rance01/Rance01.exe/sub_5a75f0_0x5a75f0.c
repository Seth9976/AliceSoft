// 函数: sub_5a75f0
// 地址: 0x5a75f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg4 == 0)
    return 

*(arg4 + 0x58) = arg3

if (arg1 == 0)
    *(arg4 + 0x54) = sub_5a75b0
else
    *(arg4 + 0x54) = arg1

if (*(arg4 + 0x50) != 0)
    *(arg4 + 0x50) = 0
    sub_5a5de0("Can't set both read_data_fn and write_data_fn in the same structure", arg4)

*(arg4 + 0x168) = 0
