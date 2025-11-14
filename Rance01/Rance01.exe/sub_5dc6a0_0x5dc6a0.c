// 函数: sub_5dc6a0
// 地址: 0x5dc6a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(data_797d9c + 0x3c)
BOOL hWnd

if (*(esi + 8) != 0)
    hWnd = *(esi + 8)
    
    if (hWnd != 0)
        if (DestroyWindow(hWnd) == 0)
            hWnd.b = 0
            return hWnd
        
        *(esi + 8) = 0

hWnd.b = 1
return hWnd
