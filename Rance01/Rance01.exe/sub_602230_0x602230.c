// 函数: sub_602230
// 地址: 0x602230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hFile = *arg1

if (hFile != 0xffffffff && arg1[1] + 4 u<= arg1[2] && ReadFile(hFile, arg2, 4, &arg2, nullptr) != 0
        && arg2 == 4)
    arg1[1] += 4
    hFile.b = 1
    return hFile

hFile.b = 0
return hFile
