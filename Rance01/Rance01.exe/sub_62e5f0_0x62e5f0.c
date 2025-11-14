// 函数: sub_62e5f0
// 地址: 0x62e5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hWnd = *(arg1 + 8)

if (hWnd == 0)
    hWnd.b = 1
else
    bool cond:0_1 = DestroyWindow(hWnd) == 0
    hWnd.b = 1
    
    if (not(cond:0_1))
        *(arg1 + 8) = 0

return hWnd
