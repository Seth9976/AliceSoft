// 函数: sub_4261f0
// 地址: 0x4261f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
ebx.b = arg2

if (*(arg1 + 0x3a) == ebx.b)
    return 

if (ebx.b == 0)
    if (*(arg1 + 0x38) == 0 && *(arg1 + 0x21) == 0 && *(arg1 + 0x3b) == 0)
        ShowCursor(1)
        *(arg1 + 0x3b) = 1
    
    sub_425ba0(arg1)
else if (*(arg1 + 0x3b) != 0)
    ShowCursor(0)
    *(arg1 + 0x3a) = ebx.b
    *(arg1 + 0x3b) = 0
    return 

*(arg1 + 0x3a) = ebx.b
