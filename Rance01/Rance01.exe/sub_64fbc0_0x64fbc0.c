// 函数: sub_64fbc0
// 地址: 0x64fbc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718bc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t data_5 = *arg1
int32_t data_6 = *arg2
int32_t data_1 = *arg3
int32_t data_4 = *arg4
int32_t data_3 = data_5
int32_t data_2 = data_6
int32_t data = data_4
phkResult = nullptr
int32_t var_4 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x1a, "Software\AliceSoft\DPParts")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = var_2c.d

if (var_18 u< 0x10)
    lpSubKey = &var_2c

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)

if (var_18 u>= 0x10)
    int32_t var_70_3 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CMainWindowWindowPosX")
HKEY hKey_1 = phkResult
uint32_t var_54
enum REG_VALUE_TYPE var_50

if (hKey_1 != 0)
    var_50 = REG_DWORD
    var_54 = 4
    char* lpValueName_2 = var_2c.d
    
    if (var_18_1 u< 0x10)
        lpValueName_2 = &var_2c
    
    RegQueryValueExA(hKey_1, lpValueName_2, nullptr, &var_50, &data_1, &var_54)

if (var_18_1 u>= 0x10)
    int32_t var_70_5 = var_2c.d
    sub_6b4d5b()

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CMainWindowWindowPosY")
HKEY hKey_3 = phkResult

if (hKey_3 != 0)
    var_54 = 4
    var_50 = REG_DWORD
    char* lpValueName = var_2c.d
    
    if (var_18_2 u< 0x10)
        lpValueName = &var_2c
    
    RegQueryValueExA(hKey_3, lpValueName, nullptr, &var_54, &data_3, &var_50)

if (var_18_2 u>= 0x10)
    int32_t var_70_7 = var_2c.d
    sub_6b4d5b()

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_401270(&var_2c, 0x16, "CMainWindowWindowWidth")
HKEY hKey_4 = phkResult

if (hKey_4 != 0)
    var_54 = 4
    var_50 = REG_DWORD
    PSTR lpValueName_1 = var_2c.d
    
    if (var_18_3 u< 0x10)
        lpValueName_1 = &var_2c
    
    RegQueryValueExA(hKey_4, lpValueName_1, nullptr, &var_54, &data_2, &var_50)

if (var_18_3 u>= 0x10)
    int32_t var_70_9 = var_2c.d
    sub_6b4d5b()

int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_401270(&var_2c, 0x17, "CMainWindowWindowHeight")
HKEY hKey_2 = phkResult

if (hKey_2 != 0)
    var_54 = 4
    var_50 = REG_DWORD
    PSTR lpValueName_3 = var_2c.d
    
    if (var_18_4 u< 0x10)
        lpValueName_3 = &var_2c
    
    RegQueryValueExA(hKey_2, lpValueName_3, nullptr, &var_54, &data, &var_50)
    hKey_2 = phkResult

if (var_18_4 u>= 0x10)
    int32_t var_70_11 = var_2c.d
    sub_6b4d5b()
    hKey_2 = phkResult

if (hKey_2 != 0)
    RegCloseKey(hKey_2)
    hKey_2 = nullptr
    phkResult = nullptr

*arg3 = data_1
*arg1 = data_3
*arg2 = data_2
*arg4 = data

if (hKey_2 != 0)
    hKey_2 = RegCloseKey(hKey_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey_2
