// 函数: sub_6021b0
// 地址: 0x6021b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t numberOfBytesWritten = arg1
BOOL hFile = *arg2
uint8_t buffer

if (hFile != 0xffffffff && WriteFile(hFile, &buffer, 4, &numberOfBytesWritten, nullptr) != 0
        && numberOfBytesWritten == 4)
    arg2[1] += 4
    hFile.b = 1
    return hFile

hFile.b = 0
return hFile
