// 函数: sub_5d9730
// 地址: 0x5d9730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 8) == 0xffffffff || arg2 u>= *(arg1 + 0x1c))
    int32_t eax
    eax.b = 0
    return eax

int32_t lDistanceToMove = *(arg1 + 0x20) + arg2
HANDLE hFile = *(arg1 + 8)

if (hFile == 0xffffffff || lDistanceToMove u>= *(arg1 + 0x10))
    hFile.b = 0
    return hFile

SetFilePointer(hFile, lDistanceToMove, nullptr, FILE_BEGIN)
*(arg1 + 0xc) = lDistanceToMove
*(arg1 + 0x38) = lDistanceToMove
uint32_t eax_1
eax_1.b = 1
return eax_1
