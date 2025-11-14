// 函数: sub_6026f0
// 地址: 0x6026f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t numberOfBytesWritten = arg3
uint32_t nNumberOfBytesToWrite = *(arg1 + 0x10)

if (nNumberOfBytesToWrite s> 0)
    if (*(arg1 + 0x14) u>= 0x10)
        arg1 = *arg1
    
    HANDLE hFile = *arg4
    
    if (hFile == 0xffffffff)
        arg1.b = 0
        return arg1
    
    if (WriteFile(hFile, arg1, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr) == 0
            || nNumberOfBytesToWrite != numberOfBytesWritten)
        arg1.b = 0
        return arg1
    
    arg4[1] += nNumberOfBytesToWrite

uint8_t buffer

if (buffer == 0)
    arg1.b = 1
    return arg1

arg1 = *arg4
buffer = 0

if (arg1 == 0xffffffff)
    arg1.b = 0
    return arg1

if (WriteFile(arg1, &buffer, 1, &numberOfBytesWritten, nullptr) == 0 || numberOfBytesWritten != 1)
    arg1.b = 0
    return arg1

arg4[1] += 1
arg1.b = 1
return arg1
