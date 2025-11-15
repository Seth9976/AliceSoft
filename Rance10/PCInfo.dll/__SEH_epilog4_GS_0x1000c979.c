// 函数: __SEH_epilog4_GS
// 地址: 0x1000c979
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

@__security_check_cookie@4(arg1[-7] ^ arg1)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = __return_addr
