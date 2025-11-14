// 函数: sub_6b2660
// 地址: 0x6b2660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*arg2 != 0)
    goto label_6b267a

BOOL result = OpenClipboard(nullptr)

if (result != 0)
    *arg2 = 1
label_6b267a:
    EmptyClipboard()
    result = GlobalAlloc(GHND, arg1[4] + 1)
    BOOL hMem = result
    
    if (hMem != 0)
        char* eax_3 = GlobalLock(hMem)
        
        if (eax_3 != 0)
            int32_t* ecx_1
            
            if (arg1[5] u< 0x10)
                ecx_1 = arg1
            else
                ecx_1 = *arg1
            
            sub_6b5353(eax_3, arg1[4] + 1, ecx_1)
            GlobalUnlock(hMem)
            result = SetClipboardData(1, hMem)
        
        if (eax_3 == 0 || result == 0)
            result = GlobalFree(hMem)
    
    if (*arg2 != 0)
        result = CloseClipboard()
        *arg2 = 0

return result
