// 函数: sub_6c0144
// 地址: 0x6c0144
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg4 != 0)
    if (arg1 == 0)
    label_6c0162:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    if (arg3 == 0 || arg2 u< arg4)
        sub_6bc670(arg1, 0, arg2)
        
        if (arg3 == 0)
            goto label_6c0162
        
        if (arg2 u>= arg4)
            return 0x16
        
        *__errno() = 0x22
        __invalid_parameter_noinfo()
        return 0x22
    
    sub_6c02a0(arg1, arg3, arg4)

return 0
