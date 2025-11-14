// 函数: sub_6b3320
// 地址: 0x6b3320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HKEY hKey = *arg2

if (hKey == 0)
    hKey.b = 0
    return hKey

bool cond:0 = arg1[5] u< 0x10
enum REG_VALUE_TYPE type = REG_DWORD
uint32_t lpcbData = 4

if (not(cond:0))
    arg1 = *arg1

enum WIN32_ERROR eax
eax.b = RegQueryValueExA(hKey, arg1, nullptr, &type, arg3, &lpcbData) == NO_ERROR
return eax
