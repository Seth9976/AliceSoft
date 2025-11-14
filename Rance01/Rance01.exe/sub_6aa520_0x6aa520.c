// 函数: sub_6aa520
// 地址: 0x6aa520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t data_4 = *arg3
int32_t data = *arg2
int32_t data_6 = *arg4
int32_t data_1 = data_4
int32_t data_5 = *arg5
void** lpSubKey = arg1 + 0x70
int32_t data_2 = data_6
int32_t data_3 = data_5
HKEY phkResult = nullptr

if (lpSubKey[5] u>= 0x10)
    lpSubKey = *lpSubKey

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)
HKEY hKey = phkResult
void** lpValueName = arg1 + 0x8c
uint32_t var_8
enum REG_VALUE_TYPE var_4

if (hKey != 0)
    var_4 = REG_DWORD
    var_8 = 4
    
    if (lpValueName[5] u>= 0x10)
        lpValueName = *lpValueName
    
    RegQueryValueExA(hKey, lpValueName, nullptr, &var_4, &data, &var_8)
    hKey = phkResult

void** lpValueName_1 = arg1 + 0xa8

if (hKey != 0)
    var_8 = 4
    var_4 = REG_DWORD
    
    if (lpValueName_1[5] u>= 0x10)
        lpValueName_1 = *lpValueName_1
    
    RegQueryValueExA(hKey, lpValueName_1, nullptr, &var_8, &data_1, &var_4)
    hKey = phkResult

PSTR lpValueName_2 = arg1 + 0xc4

if (hKey != 0)
    var_8 = 4
    var_4 = REG_DWORD
    
    if (*(lpValueName_2 + 0x14) u>= 0x10)
        lpValueName_2 = *lpValueName_2
    
    RegQueryValueExA(hKey, lpValueName_2, nullptr, &var_8, &data_2, &var_4)
    hKey = phkResult

void* lpValueName_3 = arg1 + 0xe0

if (hKey != 0)
    var_8 = 4
    var_4 = REG_DWORD
    
    if (*(lpValueName_3 + 0x14) u>= 0x10)
        lpValueName_3 = *lpValueName_3
    
    RegQueryValueExA(hKey, lpValueName_3, nullptr, &var_8, &data_3, &var_4)
    hKey = phkResult
    
    if (hKey != 0)
        RegCloseKey(hKey)
        hKey = nullptr
        phkResult = nullptr

*arg2 = data
*arg3 = data_1
*arg4 = data_2
*arg5 = data_3

if (hKey == 0)
    return hKey

return RegCloseKey(hKey)
