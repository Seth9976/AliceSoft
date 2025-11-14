// 函数: sub_6b6ddb
// 地址: 0x6b6ddb
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMODULE hModule = GetModuleHandleW(u"mscoree.dll")

if (hModule != 0)
    hModule = GetProcAddress(hModule, "CorExitProcess")
    
    if (hModule != 0)
        return hModule(arg1)

return hModule
