// 函数: sub_606d00
// 地址: 0x606d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718d68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_615f60(arg2, arg1 + 0x628)
sub_615f60(arg2, arg1 + 0x454)
sub_615f60(arg2, arg1 + 0x7e8)
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x26, "Software\Alicesoft\Sys42IDE\DPAnalysis")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = var_2c.d

if (var_18 u< 0x10)
    lpSubKey = &var_2c

bool var_35 = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, 
    KEY_ALL_ACCESS, nullptr, &phkResult, nullptr) == NO_ERROR

if (var_18 u>= 0x10)
    int32_t var_50_2 = var_2c.d
    sub_6b4d5b()

if (var_35 != 0)
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0xf
    var_2c = 0
    sub_401270(&var_2c, 8, "FontSize")
    HKEY hKey_2 = phkResult
    int32_t data = arg2
    
    if (hKey_2 != 0)
        char* lpValueName = var_2c.d
        
        if (var_18_1 u< 0x10)
            lpValueName = &var_2c
        
        RegSetValueExA(hKey_2, lpValueName, 0, REG_DWORD, &data, 4)
    
    if (var_18_1 u>= 0x10)
        int32_t var_50_3 = var_2c.d
        sub_6b4d5b()

if (arg2 == 0xc)
    int32_t var_50_6 = 0
    int32_t var_58_3 = 0x9c79
    int32_t var_5c_3 = 0x9c77
    CheckMenuRadioItem(*(arg1 + 0x88), 0x9c77, 0x9c79, 0x9c79, 0)
else if (arg2 == 0x10)
    int32_t var_50_5 = 0
    int32_t var_58_2 = 0x9c79
    int32_t var_5c_2 = 0x9c77
    CheckMenuRadioItem(*(arg1 + 0x88), 0x9c77, 0x9c79, 0x9c78, 0)
else if (arg2 == 0x14)
    int32_t var_50_4 = 0
    int32_t var_58_1 = 0x9c79
    int32_t var_5c_1 = 0x9c77
    CheckMenuRadioItem(*(arg1 + 0x88), 0x9c77, 0x9c79, 0x9c77, 0)

HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return hKey_1
