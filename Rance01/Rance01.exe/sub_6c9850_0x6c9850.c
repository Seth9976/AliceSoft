// 函数: sub_6c9850
// 地址: 0x6c9850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

HMODULE hLibModule = *(arg1 + 8)

if (hLibModule != 0)
    FreeLibrary(hLibModule)
    *(arg1 + 8) = 0

*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
