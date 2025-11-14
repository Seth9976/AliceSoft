// 函数: sub_6c9730
// 地址: 0x6c9730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMODULE hModule = *(arg1 + 4)

if (hModule == 0)
    hModule = LoadLibraryA("user32")
    *(arg1 + 4) = hModule
    
    if (hModule != 0)
        goto label_6c9742
else
label_6c9742:
    hModule = GetProcAddress(hModule, "MessageBoxA")
    data_797c54 = hModule
    
    if (hModule != 0)
        hModule = GetProcAddress(*(arg1 + 4), "PeekMessageA")
        data_797c50 = hModule
        
        if (hModule != 0)
            hModule = GetProcAddress(*(arg1 + 4), "PostQuitMessage")
            data_797c4c = hModule
            
            if (hModule != 0)
                hModule = GetProcAddress(*(arg1 + 4), "wsprintfA")
                data_797c58 = hModule

return hModule
