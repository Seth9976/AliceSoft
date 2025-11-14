// 函数: sub_6b32e0
// 地址: 0x6b32e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HKEY hKey = *arg1

if (hKey != 0)
    RegCloseKey(hKey)
    *arg1 = 0

int32_t* lpSubKey

if (arg2[5] u< 0x10)
    lpSubKey = arg2
else
    lpSubKey = *arg2

enum WIN32_ERROR result
result.b = RegOpenKeyExA(arg3, lpSubKey, 0, KEY_READ, arg1) == NO_ERROR
return result
