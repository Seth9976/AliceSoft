// 函数: __fileno
// 地址: 0x100085c9
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 != 0)
    return *(arg1 + 0x10)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0xffffffff
