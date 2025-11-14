// 函数: sub_65de80
// 地址: 0x65de80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718b58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t data_2 = *(arg1 + 0x1d8)
int32_t data = 3
int32_t data_1 = data_2
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
    int32_t var_58_3 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_401270(&var_2c, 0x13, "CViewWindowDrawType")
HKEY hKey_1 = phkResult
enum REG_VALUE_TYPE var_38
uint32_t var_34

if (hKey_1 != 0)
    var_38 = REG_DWORD
    var_34 = 4
    char* lpValueName_1 = var_2c.d
    
    if (var_18_1 u< 0x10)
        lpValueName_1 = &var_2c
    
    RegQueryValueExA(hKey_1, lpValueName_1, nullptr, &var_38, &data, &var_34)

if (var_18_1 u>= 0x10)
    int32_t var_58_5 = var_2c.d
    sub_6b4d5b()

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_401270(&var_2c, 0x12, "CViewWindowBGColor")
HKEY hKey_4 = phkResult

if (hKey_4 != 0)
    var_34 = 4
    var_38 = REG_DWORD
    PSTR lpValueName = var_2c.d
    
    if (var_18_2 u< 0x10)
        lpValueName = &var_2c
    
    RegQueryValueExA(hKey_4, lpValueName, nullptr, &var_34, &data_1, &var_38)

if (var_18_2 u>= 0x10)
    int32_t var_58_7 = var_2c.d
    sub_6b4d5b()

HKEY hKey_2 = phkResult

if (hKey_2 != 0)
    RegCloseKey(hKey_2)
    phkResult = nullptr

if ((data.b & 1) == 0)
    HWND hWnd_1 = *(arg1 + 0x14c)
    *(arg1 + 0x164) = 1
    SendMessageA(hWnd_1, 0x402, 0x9c97, 0)

if ((data.b & 2) == 0)
    HWND hWnd_2 = *(arg1 + 0x14c)
    *(arg1 + 0x164) = 1
    SendMessageA(hWnd_2, 0x402, 0x9c98, 0)

if ((data.b & 4) == 0)
    HWND hWnd = *(arg1 + 0x14c)
    *(arg1 + 0x164) = 1
    SendMessageA(hWnd, 0x402, 0x9ca0, 0)

HKEY hKey_3 = phkResult
*(arg1 + 0x1d8) = data_1

if (hKey_3 != 0)
    hKey_3 = RegCloseKey(hKey_3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey_3
