// 函数: sub_65dc60
// 地址: 0x65dc60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t var_3c = arg1
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT eax_6 = SendMessageA(*(arg2 + 0x14c), 0x40a, 0x9c97, 1)
LRESULT eax_8 = SendMessageA(*(arg2 + 0x14c), 0x40a, 0x9c98, 1)
int32_t eax_9 = neg.d(eax_8)
LRESULT eax_12 = SendMessageA(*(arg2 + 0x14c), 0x40a, 0x9ca0, 1)
int32_t eax_13 = neg.d(eax_12)
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

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_18 u>= 0x10)
    int32_t var_4c_2 = var_2c.d
    sub_6b4d5b()

int32_t var_1c_1 = 0
int32_t var_18_1 = 0xf
var_2c = 0
sub_401270(&var_2c, 0x13, "CViewWindowDrawType")
HKEY hKey_1 = phkResult
int32_t data = neg.d(sbb.d(arg1, arg1, eax_6 != 0)) | (sbb.d(eax_9, eax_9, eax_8 != 0) & 2)
    | (sbb.d(eax_13, eax_13, eax_12 != 0) & 4)

if (hKey_1 != 0)
    char* lpValueName = var_2c.d
    
    if (var_18_1 u< 0x10)
        lpValueName = &var_2c
    
    RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)

if (var_18_1 u>= 0x10)
    int32_t var_4c_3 = var_2c.d
    sub_6b4d5b()

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_401270(&var_2c, 0x12, "CViewWindowBGColor")
HKEY hKey_2 = phkResult
data = *(arg2 + 0x1d8)

if (hKey_2 != 0)
    char* lpValueName_1 = var_2c.d
    
    if (var_18_2 u< 0x10)
        lpValueName_1 = &var_2c
    
    RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)
    hKey_2 = phkResult

if (var_18_2 u>= 0x10)
    int32_t var_4c_4 = var_2c.d
    sub_6b4d5b()
    hKey_2 = phkResult

if (hKey_2 != 0)
    hKey_2 = RegCloseKey(hKey_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey_2
