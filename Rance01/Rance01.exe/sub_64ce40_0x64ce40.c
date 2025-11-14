// 函数: sub_64ce40
// 地址: 0x64ce40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_64d460()
void* esi = *(arg1 + 0xa4)

if (esi != 0)
    HWND hWnd = *(esi + 0x34)
    
    if (hWnd != 0 && *(esi + 0x38) != 0)
        DestroyWindow(hWnd)
        HINSTANCE hInstance = *(esi + 0x18)
        PSTR lpClassName = *(esi + 0x2c)
        *(esi + 0x34) = 0
        
        if (UnregisterClassA(lpClassName, hInstance) != 0)
            *(esi + 0x38) = 0
    
    int32_t* ecx_1 = *(arg1 + 0xa4)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(1)
    
    *(arg1 + 0xa4) = 0

void* esi_1 = *(arg1 + 0xa0)

if (esi_1 != 0)
    HWND hWnd_1 = *(esi_1 + 0x34)
    
    if (hWnd_1 != 0 && *(esi_1 + 0x38) != 0)
        DestroyWindow(hWnd_1)
        HINSTANCE hInstance_2 = *(esi_1 + 0x18)
        PSTR lpClassName_2 = *(esi_1 + 0x2c)
        *(esi_1 + 0x34) = 0
        
        if (UnregisterClassA(lpClassName_2, hInstance_2) != 0)
            *(esi_1 + 0x38) = 0
    
    int32_t* ecx_2 = *(arg1 + 0xa0)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(1)
    
    *(arg1 + 0xa0) = 0

void* esi_2 = *(arg1 + 0x9c)

if (esi_2 != 0)
    sub_6ae4d0(esi_2)
    void* var_10_6 = esi_2
    sub_6b4d5b()
    *(arg1 + 0x9c) = 0

HWND hWnd_2 = *(arg1 + 0x34)

if (hWnd_2 != 0 && *(arg1 + 0x38) != 0)
    DestroyWindow(hWnd_2)
    HINSTANCE hInstance_1 = *(arg1 + 0x18)
    PSTR lpClassName_1 = *(arg1 + 0x2c)
    *(arg1 + 0x34) = 0
    
    if (UnregisterClassA(lpClassName_1, hInstance_1) != 0)
        *(arg1 + 0x38) = 0

return 0
