// 函数: sub_605b30
// 地址: 0x605b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND hWnd = *(arg1 + 0x90)

if (hWnd != 0 && IsWindow(hWnd) != 0)
    SetActiveWindow(*(arg1 + 0x90))
    HWND eax_2
    eax_2.b = 1
    return eax_2

if (sub_60cdf0(arg1 + 0xa74) != 0)
    void* eax_4
    
    if (arg1 == 0)
        eax_4 = nullptr
    else
        eax_4 = arg1 + 4
    
    if (*(arg1 + 0xa7c) != 0)
        (***(arg1 + 0xa7c))(eax_4)
    
    sub_61ab90()
    data_797dbc = arg1 + 0x7e8
    
    if (sub_607520(arg1) != 0)
        HINSTANCE edi_1 = *(arg1 + 0xa8)
        *(arg1 + 0x6e8) = arg1 + 0xa64
        int32_t edx_3 = *(*(arg1 + 8) + 0x88)
        *(arg1 + 0x8c) = edi_1
        edx_3()
        
        if (sub_6181c0(arg1 + 8, edi_1) != 0
                && sub_618ab0(arg1 + 0xae0, arg1 + 0x984, arg1 + 0xa38, arg1 + 0x108, arg1 + 0x118)
                != 0)
            ShowWindow(*(arg1 + 0x90), SW_SHOW)
            BOOL eax_10
            eax_10.b = 1
            return eax_10

return false
