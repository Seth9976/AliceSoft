// 函数: sub_60c140
// 地址: 0x60c140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 s>= 0 && arg3 s< (*(*arg1 + 0x8c))())
    int32_t ecx = arg1[0x30]
    int32_t eax_4 = arg3 * 0x2c
    char** esi = ecx + eax_4 + 0x10
    
    if (*(ecx + eax_4 + 0x20) == 0)
        return 0
    
    if (arg1[0x35] == arg3)
        SetBkColor(arg2, arg1[0x36])
        sub_616380(arg1[0x37], arg1)
    
    char* edx_3
    
    if (esi[5] u< 0x10)
        edx_3 = esi
    else
        edx_3 = *esi
    
    sub_616930(arg4, edx_3, arg1, arg2, arg4, arg5)
    
    if (arg1[0x35] == arg3)
        SetBkColor(arg2, 0xffffff)
        
        if (arg1[0x2c] != 0)
            SetTextColor(arg1[0x29], 0)
            arg1[0x2c] = 0
    
    return esi[4]

return 0
