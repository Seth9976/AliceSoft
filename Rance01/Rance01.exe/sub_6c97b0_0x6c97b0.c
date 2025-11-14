// 函数: sub_6c97b0
// 地址: 0x6c97b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

HMODULE hLibModule = *(arg1 + 4)

if (hLibModule != 0)
    FreeLibrary(hLibModule)
    *(arg1 + 4) = 0

data_797c54 = 0
data_797c50 = 0
data_797c4c = 0
data_797c58 = 0
