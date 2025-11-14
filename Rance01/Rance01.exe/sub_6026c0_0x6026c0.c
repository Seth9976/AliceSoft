// 函数: sub_6026c0
// 地址: 0x6026c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hFile = *arg2

if (hFile == 0xffffffff || arg1 u>= arg2[2])
    hFile.b = 0
    return hFile

SetFilePointer(hFile, arg1, nullptr, FILE_BEGIN)
arg2[1] = arg1
uint32_t eax
eax.b = 1
return eax
