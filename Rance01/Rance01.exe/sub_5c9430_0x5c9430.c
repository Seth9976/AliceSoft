// 函数: sub_5c9430
// 地址: 0x5c9430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x14) != 0)
    goto label_5c944b

if (sub_5c9460(arg1) != 0)
    *(arg1 + 0x14) = 1
label_5c944b:
    
    if (arg2 u<= 4)
        return arg2 * 0x2c + *(arg1 + 4)

return 0
