// 函数: sub_6a6320
// 地址: 0x6a6320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t uIDEvent = *(arg1 + 0x118)
uint32_t uElapse = *(arg1 + 0x5c)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x11c), uIDEvent)
    *(arg1 + 0x118) = 0

*(arg1 + 0x11c) = arg2
*(arg1 + 0x118) = SetTimer(arg2, 1, uElapse, nullptr)

if (sub_6a66c0(arg1, arg2) == 0)
label_6a6380:
    HWND hWnd = *(arg1 + 0x34)
    
    if (hWnd != 0 && *(arg1 + 0x38) != 0)
        DestroyWindow(hWnd)
        HINSTANCE hInstance = *(arg1 + 0x18)
        PSTR lpClassName = *(arg1 + 0x2c)
        *(arg1 + 0x34) = 0
        
        if (UnregisterClassA(lpClassName, hInstance) != 0)
            *(arg1 + 0x38) = 0
else
    if (sub_6a68a0(arg1, arg2) == 0)
        goto label_6a6380
    
    if (sub_6a6a30(arg1, arg2) == 0)
        goto label_6a6380

return 0
