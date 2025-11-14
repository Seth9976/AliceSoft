// 函数: sub_6a6c80
// 地址: 0x6a6c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t data
int32_t eax_1 = data_78c474 ^ &data
void** lpSubKey = arg1 + 0x60
HKEY phkResult = nullptr

if (lpSubKey[5] u>= 0x10)
    lpSubKey = *lpSubKey

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
data = lpwndpl.rcNormalPosition.left
HKEY hKey = phkResult
void* lpValueName = arg1 + 0x7c

if (hKey != 0)
    if (*(lpValueName + 0x14) u>= 0x10)
        lpValueName = *lpValueName
    
    RegSetValueExA(hKey, lpValueName, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
HKEY hKey_1 = phkResult
data = lpwndpl.rcNormalPosition.top
void* lpValueName_1 = arg1 + 0x98

if (hKey_1 != 0)
    if (*(lpValueName_1 + 0x14) u>= 0x10)
        lpValueName_1 = *lpValueName_1
    
    RegSetValueExA(hKey_1, lpValueName_1, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
HKEY hKey_2 = phkResult
data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
void* lpValueName_2 = arg1 + 0xb4

if (hKey_2 != 0)
    if (*(lpValueName_2 + 0x14) u>= 0x10)
        lpValueName_2 = *lpValueName_2
    
    RegSetValueExA(hKey_2, lpValueName_2, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
HKEY hKey_3 = phkResult
data = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
void* result = arg1 + 0xd0

if (hKey_3 != 0)
    if (*(result + 0x14) u>= 0x10)
        result = *result
    
    RegSetValueExA(hKey_3, result, 0, REG_DWORD, &data, 4)
    result = phkResult
    
    if (result != 0)
        result = RegCloseKey(result)

sub_6b4885(eax_1 ^ &data)
return result
