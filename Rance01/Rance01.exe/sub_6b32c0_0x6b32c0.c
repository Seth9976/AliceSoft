// 函数: sub_6b32c0
// 地址: 0x6b32c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum WIN32_ERROR hKey = *arg1

if (hKey != NO_ERROR)
    hKey = RegCloseKey(hKey)
    *arg1 = 0

return hKey
