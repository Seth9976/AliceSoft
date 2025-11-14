// 函数: sub_65c010
// 地址: 0x65c010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t data = *(arg1 + 0x60)
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
    int32_t var_54_3 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_401270(&var_2c, 0x17, "CThumbnailWindowBGColor")
HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    enum REG_VALUE_TYPE type = REG_DWORD
    uint32_t lpcbData = 4
    char* lpValueName = var_2c.d
    
    if (var_18_1 u< 0x10)
        lpValueName = &var_2c
    
    RegQueryValueExA(hKey_1, lpValueName, nullptr, &type, &data, &lpcbData)
    hKey_1 = phkResult

if (var_18_1 u>= 0x10)
    int32_t var_54_5 = var_2c.d
    sub_6b4d5b()
    hKey_1 = phkResult

if (hKey_1 != 0)
    RegCloseKey(hKey_1)
    hKey_1 = nullptr
    phkResult = nullptr

*(arg1 + 0x60) = data

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey_1
