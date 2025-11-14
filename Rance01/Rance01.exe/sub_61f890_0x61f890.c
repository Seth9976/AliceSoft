// 函数: sub_61f890
// 地址: 0x61f890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

RECT rect
int32_t eax_1 = data_78c474 ^ &rect
HWND hWnd = *(arg1 + 0x88)

if (hWnd != 0)
    MoveWindow(hWnd, arg3, arg2, arg4, arg5, 0)
    hWnd = *(arg1 + 0xb8)
    
    if (hWnd != 0)
        __builtin_memset(&rect, 0, 0x10)
        GetWindowRect(hWnd, &rect)
        int32_t nWidth = rect.right - rect.left
        
        if (nWidth s< 4)
            nWidth = 4
        
        hWnd = MoveWindow(*(arg1 + 0xb8), 0, 0, nWidth, arg5, 1)
        HWND hWnd_1 = *(arg1 + 0xbc)
        
        if (hWnd_1 != 0)
            hWnd = MoveWindow(hWnd_1, nWidth + 2, 0, arg4 - nWidth - 2, arg5, 1)

sub_6b4885(eax_1 ^ &rect)
return hWnd
