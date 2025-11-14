// 函数: sub_5d2a60
// 地址: 0x5d2a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *(arg1 + 0x8c)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    return *(arg1 + 0x88)

return 0
