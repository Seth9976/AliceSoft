// 函数: sub_61b9c0
// 地址: 0x61b9c0
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
HINSTANCE hInstance = *(arg1 + 0x84)
*(arg1 + 0x58) = 0
HICON eax_5 = LoadIconA(hInstance, 0x75)
HINSTANCE hInstance_1 = *(arg1 + 0x84)
*(arg1 + 0x50) = eax_5
*(arg1 + 0x80) = LoadMenuA(hInstance_1, 0x7b)
sub_401270(arg1 + 4, 0x14, "Sys40DPAnalysisClass")
sub_401270(arg1 + 0x20, 0x12, 0x7344fc)
*(arg1 + 0x74) = 0x320
*(arg1 + 0x78) = 0x258
phkResult = nullptr
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

bool var_2d = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR

if (var_18 u>= 0x10)
    int32_t var_54_3 = var_2c.d
    sub_6b4d5b()

if (var_2d != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_401270(&var_2c, 7, "WindowX")
    HKEY hKey_1 = phkResult
    uint32_t var_38
    uint32_t var_34
    
    if (hKey_1 != 0)
        var_34 = 4
        var_38 = 4
        char* lpValueName_1 = var_2c.d
        
        if (var_18_1 u< 0x10)
            lpValueName_1 = &var_2c
        
        RegQueryValueExA(hKey_1, lpValueName_1, nullptr, &var_34, arg1 + 0x6c, &var_38)
    
    if (var_18_1 u>= 0x10)
        int32_t var_54_5 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_401270(&var_2c, 7, "WindowY")
    HKEY hKey_3 = phkResult
    
    if (hKey_3 != 0)
        var_38 = 4
        var_34 = 4
        char* lpValueName = var_2c.d
        
        if (var_18_2 u< 0x10)
            lpValueName = &var_2c
        
        RegQueryValueExA(hKey_3, lpValueName, nullptr, &var_38, arg1 + 0x70, &var_34)
    
    if (var_18_2 u>= 0x10)
        int32_t var_54_7 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_3 = 0xf
    int32_t var_1c_3 = 0
    var_2c = 0
    sub_401270(&var_2c, 0xb, "WindowWidth")
    HKEY hKey_4 = phkResult
    
    if (hKey_4 != 0)
        PSTR lpValueName_2 = var_2c.d
        var_38 = 4
        var_34 = 4
        
        if (var_18_3 u< 0x10)
            lpValueName_2 = &var_2c
        
        RegQueryValueExA(hKey_4, lpValueName_2, nullptr, &var_38, arg1 + 0x74, &var_34)
    
    if (var_18_3 u>= 0x10)
        int32_t var_54_9 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_4 = 0xf
    int32_t var_1c_4 = 0
    var_2c = 0
    sub_401270(&var_2c, 0xc, "WindowHeight")
    HKEY hKey_5 = phkResult
    
    if (hKey_5 != 0)
        char* lpValueName_3 = var_2c.d
        var_38 = 4
        var_34 = 4
        
        if (var_18_4 u< 0x10)
            lpValueName_3 = &var_2c
        
        RegQueryValueExA(hKey_5, lpValueName_3, nullptr, &var_38, arg1 + 0x78, &var_34)
    
    if (var_18_4 u>= 0x10)
        int32_t var_54_11 = var_2c.d
        sub_6b4d5b()

HKEY hKey_2 = phkResult
*(arg1 + 0x68) = 0xcf0000

if (hKey_2 != 0)
    hKey_2 = RegCloseKey(hKey_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey_2
