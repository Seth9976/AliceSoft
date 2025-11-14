// 函数: sub_602180
// 地址: 0x602180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t numberOfBytesWritten = arg1
BOOL hFile = *arg4

if (hFile != 0xffffffff && WriteFile(hFile, arg2, arg3, &numberOfBytesWritten, nullptr) != 0
        && arg3 == numberOfBytesWritten)
    arg4[1] += arg3
    hFile.b = 1
    return hFile

hFile.b = 0
return hFile
