// 函数: sub_61d260
// 地址: 0x61d260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND var_54 = arg2
BOOL eax_5 = IsIconic(arg2)

if (eax_5 != 0)
    *(arg1 + 0x88) = 0
else
    phkResult = nullptr
    int32_t var_4 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char rect = 0
    sub_401270(&rect, eax_5 + 0x26, "Software\Alicesoft\Sys42IDE\DPVariable")
    HKEY hKey = phkResult
    
    if (hKey != 0)
        RegCloseKey(hKey)
        phkResult = nullptr
    
    char* lpSubKey = rect.d
    
    if (var_18_1 u< 0x10)
        lpSubKey = &rect
    
    bool var_55_1 = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, 
        KEY_ALL_ACCESS, nullptr, &phkResult, nullptr) == NO_ERROR
    
    if (var_18_1 u>= 0x10)
        int32_t var_74_2 = rect.d
        sub_6b4d5b()
    
    if (var_55_1 != 0)
        GetWindowRect(arg2, &rect)
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        sub_401270(&var_48, 7, "WindowX")
        HKEY hKey_1 = phkResult
        int32_t data = rect.d
        
        if (hKey_1 != 0)
            char* lpValueName_1 = var_48.d
            
            if (var_34_1 u< 0x10)
                lpValueName_1 = &var_48
            
            RegSetValueExA(hKey_1, lpValueName_1, 0, REG_DWORD, &data, 4)
        
        if (var_34_1 u>= 0x10)
            int32_t var_74_4 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
        sub_401270(&var_48, 7, "WindowY")
        HKEY hKey_2 = phkResult
        int32_t data_1
        data = data_1
        
        if (hKey_2 != 0)
            char* lpValueName_2 = var_48.d
            
            if (var_34_2 u< 0x10)
                lpValueName_2 = &var_48
            
            RegSetValueExA(hKey_2, lpValueName_2, 0, REG_DWORD, &data, 4)
        
        if (var_34_2 u>= 0x10)
            int32_t var_74_5 = var_48.d
            sub_6b4d5b()
        
        GetClientRect(var_54, &rect)
        int32_t var_34_3 = 0xf
        int32_t var_38_3 = 0
        var_48 = 0
        sub_401270(&var_48, 0xb, "WindowWidth")
        int32_t var_24
        var_54 = var_24 - rect.d
        HKEY hKey_3 = phkResult
        
        if (hKey_3 != 0)
            char* lpValueName_3 = var_48.d
            
            if (var_34_3 u< 0x10)
                lpValueName_3 = &var_48
            
            RegSetValueExA(hKey_3, lpValueName_3, 0, REG_DWORD, &var_54, 4)
        
        if (var_34_3 u>= 0x10)
            int32_t var_74_7 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_4 = 0xf
        int32_t var_38_4 = 0
        var_48 = 0
        sub_401270(&var_48, 0xc, "WindowHeight")
        int32_t var_20
        var_54 = var_20 - data_1
        HKEY hKey_5 = phkResult
        
        if (hKey_5 != 0)
            PSTR lpValueName = var_48.d
            
            if (var_34_4 u< 0x10)
                lpValueName = &var_48
            
            RegSetValueExA(hKey_5, lpValueName, 0, REG_DWORD, &var_54, 4)
        
        if (var_34_4 u>= 0x10)
            int32_t var_74_8 = var_48.d
            sub_6b4d5b()
    
    HKEY hKey_4 = phkResult
    
    if (hKey_4 == 0)
        *(arg1 + 0x88) = 0
    else
        RegCloseKey(hKey_4)
        *(arg1 + 0x88) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return 0
