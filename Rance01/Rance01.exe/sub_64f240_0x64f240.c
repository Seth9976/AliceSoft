// 函数: sub_64f240
// 地址: 0x64f240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_64f900(arg1)
void* edi = *(arg1 + 0x88)

if (edi != 0)
    HWND hWnd = *(edi + 0x34)
    
    if (hWnd != 0 && *(edi + 0x38) != 0)
        DestroyWindow(hWnd)
        HINSTANCE hInstance = *(edi + 0x18)
        PSTR lpClassName = *(edi + 0x2c)
        *(edi + 0x34) = 0
        
        if (UnregisterClassA(lpClassName, hInstance) != 0)
            *(edi + 0x38) = 0
    
    int32_t* ecx_1 = *(arg1 + 0x88)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(1)
    
    *(arg1 + 0x88) = 0

void* edi_1 = *(arg1 + 0x8c)

if (edi_1 != 0)
    HWND hWnd_1 = *(edi_1 + 0x34)
    
    if (hWnd_1 != 0 && *(edi_1 + 0x38) != 0)
        DestroyWindow(hWnd_1)
        HINSTANCE hInstance_2 = *(edi_1 + 0x18)
        PSTR lpClassName_2 = *(edi_1 + 0x2c)
        *(edi_1 + 0x34) = 0
        
        if (UnregisterClassA(lpClassName_2, hInstance_2) != 0)
            *(edi_1 + 0x38) = 0
    
    int32_t* ecx_2 = *(arg1 + 0x8c)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(1)
    
    *(arg1 + 0x8c) = 0

void* edi_2 = *(arg1 + 0x84)

if (edi_2 != 0)
    sub_6ae4d0(edi_2)
    void* var_10_6 = edi_2
    sub_6b4d5b()
    *(arg1 + 0x84) = 0

HWND hWnd_2 = *(arg1 + 0x34)

if (hWnd_2 != 0 && *(arg1 + 0x38) != 0)
    DestroyWindow(hWnd_2)
    HINSTANCE hInstance_1 = *(arg1 + 0x18)
    PSTR lpClassName_1 = *(arg1 + 0x2c)
    *(arg1 + 0x34) = 0
    
    if (UnregisterClassA(lpClassName_1, hInstance_1) != 0)
        *(arg1 + 0x38) = 0

return 0
