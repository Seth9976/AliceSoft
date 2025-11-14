// 函数: sub_593040
// 地址: 0x593040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *(arg1 + 0x88)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    return sub_593a50(arg1, *(arg1 + 0x30))

return 0
