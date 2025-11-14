// 函数: sub_60ec50
// 地址: 0x60ec50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 s>= 0 && arg3 s< (arg1[0x31] - arg1[0x30]) s/ 0x38)
    COLORREF color
    
    if (arg3 != arg1[0x34])
        color = arg1[0x35]
    else
        color = arg1[0x36]
    
    SetBkColor(arg2, color)
    void* edi_1 = arg1[0x30] + arg3 * 0x38
    int32_t* eax_7 = edi_1 + 0x1c
    
    if (*(edi_1 + 0x30) u>= 0x10)
        eax_7 = *eax_7
    
    sub_616930(arg4, eax_7, arg1, arg2, arg4, arg5)
    return *(edi_1 + 0x2c)

return 0
