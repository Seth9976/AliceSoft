// 函数: sub_6aa040
// 地址: 0x6aa040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t data
int32_t eax_1 = data_78c474 ^ &data
void** lpSubKey = arg1 + 0x70
HKEY phkResult = nullptr

if (lpSubKey[5] u>= 0x10)
    lpSubKey = *lpSubKey

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
data = lpwndpl.rcNormalPosition.left
HKEY hKey_1 = phkResult
void* lpValueName = arg1 + 0x8c

if (hKey_1 != 0)
    if (*(lpValueName + 0x14) u>= 0x10)
        lpValueName = *lpValueName
    
    RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
HKEY hKey_2 = phkResult
data = lpwndpl.rcNormalPosition.top
void* lpValueName_1 = arg1 + 0xa8

if (hKey_2 != 0)
    if (*(lpValueName_1 + 0x14) u>= 0x10)
        lpValueName_1 = *lpValueName_1
    
    RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
HKEY hKey_3 = phkResult
data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
void* lpValueName_2 = arg1 + 0xc4

if (hKey_3 != 0)
    if (*(lpValueName_2 + 0x14) u>= 0x10)
        lpValueName_2 = *lpValueName_2
    
    RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
HKEY hKey = phkResult
data = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
void* lpValueName_3 = arg1 + 0xe0

if (hKey != 0)
    if (*(lpValueName_3 + 0x14) u>= 0x10)
        lpValueName_3 = *lpValueName_3
    
    RegSetValueExA(hKey, lpValueName_3, 0, REG_DWORD, &data, 4)
    hKey = phkResult

int32_t data_1
data_1.b = *(arg1 + 0x2a4) != 0
data = data_1
void* lpValueName_4 = arg1 + 0xfc

if (hKey != 0)
    if (*(lpValueName_4 + 0x14) u>= 0x10)
        lpValueName_4 = *lpValueName_4
    
    RegSetValueExA(hKey, lpValueName_4, 0, REG_DWORD, &data, 4)
    hKey = phkResult

int32_t data_2
data_2.b = *(arg1 + 0x2a5) != 0
data = data_2
void* lpValueName_5 = arg1 + 0x118

if (hKey != 0)
    if (*(lpValueName_5 + 0x14) u>= 0x10)
        lpValueName_5 = *lpValueName_5
    
    RegSetValueExA(hKey, lpValueName_5, 0, REG_DWORD, &data, 4)
    hKey = phkResult

int32_t data_3
data_3.b = *(arg1 + 0x2a6) != 0
data = data_3
void* lpValueName_6 = arg1 + 0x134

if (hKey != 0)
    if (*(lpValueName_6 + 0x14) u>= 0x10)
        lpValueName_6 = *lpValueName_6
    
    RegSetValueExA(hKey, lpValueName_6, 0, REG_DWORD, &data, 4)
    hKey = phkResult

int32_t data_4
data_4.b = *(arg1 + 0x2a7) != 0
data = data_4
void* lpValueName_7 = arg1 + 0x150

if (hKey != 0)
    if (*(lpValueName_7 + 0x14) u>= 0x10)
        lpValueName_7 = *lpValueName_7
    
    RegSetValueExA(hKey, lpValueName_7, 0, REG_DWORD, &data, 4)
    hKey = phkResult

int32_t data_5
data_5.b = *(arg1 + 0x2a8) != 0
data = data_5
void* lpValueName_8 = arg1 + 0x16c

if (hKey != 0)
    if (*(lpValueName_8 + 0x14) u>= 0x10)
        lpValueName_8 = *lpValueName_8
    
    RegSetValueExA(hKey, lpValueName_8, 0, REG_DWORD, &data, 4)
    hKey = phkResult

int32_t data_6
data_6.b = *(arg1 + 0x2a9) != 0
data = data_6
void* lpValueName_9 = arg1 + 0x188

if (hKey != 0)
    if (*(lpValueName_9 + 0x14) u>= 0x10)
        lpValueName_9 = *lpValueName_9
    
    RegSetValueExA(hKey, lpValueName_9, 0, REG_DWORD, &data, 4)
    hKey = phkResult

int32_t data_7
data_7.b = *(arg1 + 0x2aa) != 0
data = data_7
void* lpValueName_10 = arg1 + 0x1a4

if (hKey != 0)
    if (*(lpValueName_10 + 0x14) u>= 0x10)
        lpValueName_10 = *lpValueName_10
    
    RegSetValueExA(hKey, lpValueName_10, 0, REG_DWORD, &data, 4)
    hKey = phkResult
    
    if (hKey != 0)
        hKey = RegCloseKey(hKey)

sub_6b4885(eax_1 ^ &data)
return hKey
