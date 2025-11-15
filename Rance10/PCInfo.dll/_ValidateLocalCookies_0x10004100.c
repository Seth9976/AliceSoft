// 函数: _ValidateLocalCookies
// 地址: 0x10004100
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t eax = *arg1

if (eax != 0xfffffffe)
    @__security_check_cookie@4((arg1[1] + arg2) ^ *(eax + arg2))

return @__security_check_cookie@4((arg1[3] + arg2) ^ *(arg1[2] + arg2)) __tailcall
