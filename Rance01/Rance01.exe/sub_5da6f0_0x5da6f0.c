// 函数: sub_5da6f0
// 地址: 0x5da6f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 4)

if (eax != 0)
    void* esi_1 = *(eax + 0x3c)
    
    if (*(esi_1 + 8) != 0)
        HWND hWnd = *(esi_1 + 8)
        
        if (hWnd != 0 && DestroyWindow(hWnd) != 0)
            *(esi_1 + 8) = 0
    
    *(arg1 + 4) = 0

return 0
