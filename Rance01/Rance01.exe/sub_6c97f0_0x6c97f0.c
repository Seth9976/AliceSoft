// 函数: sub_6c97f0
// 地址: 0x6c97f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMODULE hModule = *(arg1 + 8)

if (hModule == 0)
    hModule = LoadLibraryA("advapi32")
    *(arg1 + 8) = hModule
    
    if (hModule != 0)
        goto label_6c9802
else
label_6c9802:
    hModule = GetProcAddress(hModule, "RegOpenKeyExA")
    *(arg1 + 0xc) = hModule
    
    if (hModule != 0)
        hModule = GetProcAddress(*(arg1 + 8), "RegQueryValueExA")
        *(arg1 + 0x10) = hModule
        
        if (hModule != 0)
            hModule = GetProcAddress(*(arg1 + 8), "RegCloseKey")
            *(arg1 + 0x14) = hModule

return hModule
