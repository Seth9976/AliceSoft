// 函数: sub_65f350
// 地址: 0x65f350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(arg1 + 0x18)
HWND hWnd

if (esi != 0 && *(esi + 0x34) != 0)
    hWnd = *(esi + 0x34)
    
    if (hWnd != 0 && *(esi + 0x38) != 0)
        DestroyWindow(hWnd)
        HINSTANCE hInstance = *(esi + 0x18)
        PSTR lpClassName = *(esi + 0x2c)
        *(esi + 0x34) = 0
        
        if (UnregisterClassA(lpClassName, hInstance) != 0)
            *(esi + 0x38) = 0
    
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx != 0)
        (*(*ecx + 4))(1)
    
    *(arg1 + 0x18) = 0

hWnd.b = 1
return hWnd
