// 函数: __tosnan1
// 地址: 0x1000b2ff
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

*(arg1 - 0x9e) = arg2
long double result = *(arg1 - 0x9e)

if ((*(arg1 - 0x97) & 0x40) == 0)
    *(arg1 - 0x90) = 0
    return result + fconvert.t(1.0)

*(arg1 - 0x90) = 0
return result
