// 函数: sub_6aa300
// 地址: 0x6aa300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** lpSubKey = arg1 + 0x70
int32_t data = 1
HKEY phkResult = nullptr

if (lpSubKey[5] u>= 0x10)
    lpSubKey = *lpSubKey

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)
HKEY hKey = phkResult
void** lpValueName = arg1 + 0xfc
uint32_t var_8
uint32_t var_4

if (hKey != 0)
    var_4 = 4
    var_8 = 4
    
    if (lpValueName[5] u>= 0x10)
        lpValueName = *lpValueName
    
    RegQueryValueExA(hKey, lpValueName, nullptr, &var_4, &data, &var_8)
    hKey = phkResult

lpValueName.b = data == 1
*(arg1 + 0x2a4) = lpValueName.b
void* lpValueName_1 = arg1 + 0x118

if (hKey != 0)
    var_8 = 4
    var_4 = 4
    
    if (*(lpValueName_1 + 0x14) u>= 0x10)
        lpValueName_1 = *lpValueName_1
    
    RegQueryValueExA(hKey, lpValueName_1, nullptr, &var_8, &data, &var_4)
    hKey = phkResult

lpValueName_1.b = data == 1
*(arg1 + 0x2a5) = lpValueName_1.b
void* lpValueName_2 = arg1 + 0x134

if (hKey != 0)
    var_8 = 4
    var_4 = 4
    
    if (*(lpValueName_2 + 0x14) u>= 0x10)
        lpValueName_2 = *lpValueName_2
    
    RegQueryValueExA(hKey, lpValueName_2, nullptr, &var_8, &data, &var_4)
    hKey = phkResult

lpValueName_2.b = data == 1
*(arg1 + 0x2a6) = lpValueName_2.b
void* lpValueName_3 = arg1 + 0x150

if (hKey != 0)
    var_8 = 4
    var_4 = 4
    
    if (*(lpValueName_3 + 0x14) u>= 0x10)
        lpValueName_3 = *lpValueName_3
    
    RegQueryValueExA(hKey, lpValueName_3, nullptr, &var_8, &data, &var_4)
    hKey = phkResult

lpValueName_3.b = data == 1
*(arg1 + 0x2a7) = lpValueName_3.b
void* lpValueName_4 = arg1 + 0x16c

if (hKey != 0)
    var_8 = 4
    var_4 = 4
    
    if (*(lpValueName_4 + 0x14) u>= 0x10)
        lpValueName_4 = *lpValueName_4
    
    RegQueryValueExA(hKey, lpValueName_4, nullptr, &var_8, &data, &var_4)
    hKey = phkResult

lpValueName_4.b = data == 1
*(arg1 + 0x2a8) = lpValueName_4.b
PSTR lpValueName_5 = arg1 + 0x188

if (hKey != 0)
    var_8 = 4
    var_4 = 4
    
    if (*(lpValueName_5 + 0x14) u>= 0x10)
        lpValueName_5 = *lpValueName_5
    
    RegQueryValueExA(hKey, lpValueName_5, nullptr, &var_8, &data, &var_4)
    hKey = phkResult

lpValueName_5.b = data == 1
*(arg1 + 0x2a9) = lpValueName_5.b
void* lpValueName_6 = arg1 + 0x1a4

if (hKey != 0)
    var_8 = 4
    var_4 = 4
    
    if (*(lpValueName_6 + 0x14) u>= 0x10)
        lpValueName_6 = *lpValueName_6
    
    RegQueryValueExA(hKey, lpValueName_6, nullptr, &var_8, &data, &var_4)
    hKey = phkResult

lpValueName_6.b = data == 1
*(arg1 + 0x2aa) = lpValueName_6.b

if (hKey == 0)
    return hKey

return RegCloseKey(hKey)
