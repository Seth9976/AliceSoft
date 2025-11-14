// 函数: sub_5d2a30
// 地址: 0x5d2a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *(arg1 + 0x8c)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    return sub_5d36c0(arg1, *(arg1 + 0x3c))

return 0
