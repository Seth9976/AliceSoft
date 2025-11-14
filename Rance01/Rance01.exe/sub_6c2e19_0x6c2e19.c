// 函数: sub_6c2e19
// 地址: 0x6c2e19
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t numberOfCharsWritten = arg1

if (data_78d580 == 0xfffffffe)
    ___initconout()

HANDLE hConsoleOutput = data_78d580
int16_t buffer

if (hConsoleOutput != 0xffffffff
        && WriteConsoleW(hConsoleOutput, &buffer, 1, &numberOfCharsWritten, nullptr) != 0)
    BOOL result
    result.w = buffer
    return result

return 0xffff
