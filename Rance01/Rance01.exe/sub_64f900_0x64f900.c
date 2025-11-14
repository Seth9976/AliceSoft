// 函数: sub_64f900
// 地址: 0x64f900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
phkResult = nullptr
int32_t var_4 = 0
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_401270(&var_58, 0x1a, "Software\AliceSoft\DPParts")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = var_58.d

if (var_44 u< 0x10)
    lpSubKey = &var_58

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_44 u>= 0x10)
    int32_t var_78_2 = var_58.d
    sub_6b4d5b()

int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
var_58 = 0
sub_401270(&var_58, 0x15, "CMainWindowWindowPosX")
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
HKEY hKey_1 = phkResult
int32_t data = lpwndpl.rcNormalPosition.left

if (hKey_1 != 0)
    char* lpValueName = var_58.d
    
    if (var_44_1 u< 0x10)
        lpValueName = &var_58
    
    RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)

if (var_44_1 u>= 0x10)
    int32_t var_78_4 = var_58.d
    sub_6b4d5b()

int32_t var_44_2 = 0xf
int32_t var_48_2 = 0
var_58 = 0
sub_401270(&var_58, 0x15, "CMainWindowWindowPosY")
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
data = lpwndpl.rcNormalPosition.top
HKEY hKey_2 = phkResult

if (hKey_2 != 0)
    char* lpValueName_1 = var_58.d
    
    if (var_44_2 u< 0x10)
        lpValueName_1 = &var_58
    
    RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)

if (var_44_2 u>= 0x10)
    int32_t var_78_6 = var_58.d
    sub_6b4d5b()

int32_t var_44_3 = 0xf
int32_t var_48_3 = 0
var_58 = 0
sub_401270(&var_58, 0x16, "CMainWindowWindowWidth")
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
HKEY hKey_3 = phkResult

if (hKey_3 != 0)
    char* lpValueName_2 = var_58.d
    
    if (var_44_3 u< 0x10)
        lpValueName_2 = &var_58
    
    RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)

if (var_44_3 u>= 0x10)
    int32_t var_78_8 = var_58.d
    sub_6b4d5b()

int32_t var_44_4 = 0xf
int32_t var_48_4 = 0
var_58 = 0
sub_401270(&var_58, 0x17, "CMainWindowWindowHeight")
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
data = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
HKEY hKey_4 = phkResult

if (hKey_4 != 0)
    PSTR lpValueName_3 = var_58.d
    
    if (var_44_4 u< 0x10)
        lpValueName_3 = &var_58
    
    RegSetValueExA(hKey_4, lpValueName_3, 0, REG_DWORD, &data, 4)
    hKey_4 = phkResult

if (var_44_4 u>= 0x10)
    int32_t var_78_10 = var_58.d
    sub_6b4d5b()
    hKey_4 = phkResult

if (hKey_4 != 0)
    hKey_4 = RegCloseKey(hKey_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey_4
