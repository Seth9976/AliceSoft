// 函数: sub_56afe0
// 地址: 0x56afe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

RECT rect
int32_t eax_1 = data_78c474 ^ &rect
BOOL hWnd = *(arg1 + 8)

if (hWnd != 0)
    hWnd = IsIconic(hWnd)
    
    if (hWnd == 0 && *(arg1 + 0x2a1) == 0)
        HWND hWnd_1 = *(arg1 + 8)
        __builtin_memset(&rect, 0, 0x10)
        hWnd = GetWindowRect(hWnd_1, &rect)
        
        if (hWnd != 0)
            int32_t top = rect.top
            *(arg1 + 0xf4) = rect.left
            *(arg1 + 0xf8) = top
            hWnd = *(arg1 + 0xe0)
            *(arg1 + 0xfc) = *(arg1 + 0xdc)
            *(arg1 + 0x100) = hWnd

sub_6b4885(eax_1 ^ &rect)
return hWnd
