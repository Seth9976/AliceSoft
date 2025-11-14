// 函数: sub_576210
// 地址: 0x576210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hHandle = *arg1

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(*arg1)
    *arg1 = 0

return hHandle
