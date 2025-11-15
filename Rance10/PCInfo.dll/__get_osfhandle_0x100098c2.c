// 函数: __get_osfhandle
// 地址: 0x100098c2
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 != 0xfffffffe)
    if (arg1 s>= 0 && arg1 u< data_10017228)
        int32_t ecx_2 = (arg1 & 0x3f) * 0x30
        int32_t eax_5 = (&data_10017028)[arg1 s>> 6]
        
        if ((*(eax_5 + ecx_2 + 0x28) & 1) != 0)
            return *(eax_5 + ecx_2 + 0x18)
    
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
