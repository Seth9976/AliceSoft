// 函数: sub_62eb50
// 地址: 0x62eb50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
phkResult = nullptr
int32_t var_4 = 0
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_401270(&var_58, 0x27, "Software\Alicesoft\Sys42IDE\DPLogViewer")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = var_58.d

if (var_44 u< 0x10)
    lpSubKey = &var_58

bool var_5d = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, 
    KEY_ALL_ACCESS, nullptr, &phkResult, nullptr) == NO_ERROR

if (var_44 u>= 0x10)
    int32_t var_80_2 = var_58.d
    sub_6b4d5b()

if (var_5d != 0)
    WINDOWPLACEMENT lpwndpl
    lpwndpl.length = 0x2c
    
    if (GetWindowPlacement(arg2, &lpwndpl) != 0)
        int32_t var_44_1 = 0xf
        int32_t var_48_1 = 0
        var_58 = 0
        sub_401270(&var_58, 7, "WindowX")
        HKEY hKey_1 = phkResult
        int32_t data = lpwndpl.rcNormalPosition.left
        
        if (hKey_1 != 0)
            char* lpValueName_2 = var_58.d
            
            if (var_44_1 u< 0x10)
                lpValueName_2 = &var_58
            
            RegSetValueExA(hKey_1, lpValueName_2, 0, REG_DWORD, &data, 4)
        
        if (var_44_1 u>= 0x10)
            int32_t var_80_4 = var_58.d
            sub_6b4d5b()
        
        int32_t var_44_2 = 0xf
        int32_t var_48_2 = 0
        var_58 = 0
        sub_401270(&var_58, 7, "WindowY")
        HKEY hKey_2 = phkResult
        data = lpwndpl.rcNormalPosition.top
        
        if (hKey_2 != 0)
            char* lpValueName_3 = var_58.d
            
            if (var_44_2 u< 0x10)
                lpValueName_3 = &var_58
            
            RegSetValueExA(hKey_2, lpValueName_3, 0, REG_DWORD, &data, 4)
        
        if (var_44_2 u>= 0x10)
            int32_t var_80_5 = var_58.d
            sub_6b4d5b()
        
        int32_t var_44_3 = 0xf
        int32_t var_48_3 = 0
        var_58 = 0
        sub_401270(&var_58, 0xb, "WindowWidth")
        data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
        HKEY hKey_4 = phkResult
        
        if (hKey_4 != 0)
            char* lpValueName = var_58.d
            
            if (var_44_3 u< 0x10)
                lpValueName = &var_58
            
            RegSetValueExA(hKey_4, lpValueName, 0, REG_DWORD, &data, 4)
        
        if (var_44_3 u>= 0x10)
            int32_t var_80_6 = var_58.d
            sub_6b4d5b()
        
        int32_t var_44_4 = 0xf
        int32_t var_48_4 = 0
        var_58 = 0
        sub_401270(&var_58, 0xc, "WindowHeight")
        data = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
        HKEY hKey_5 = phkResult
        
        if (hKey_5 != 0)
            PSTR lpValueName_1 = var_58.d
            
            if (var_44_4 u< 0x10)
                lpValueName_1 = &var_58
            
            RegSetValueExA(hKey_5, lpValueName_1, 0, REG_DWORD, &data, 4)
        
        if (var_44_4 u>= 0x10)
            int32_t var_80_7 = var_58.d
            sub_6b4d5b()
        
        int32_t var_44_5 = 0xf
        int32_t var_48_5 = 0
        var_58 = 0

int32_t var_4_1 = 0xffffffff
HKEY hKey_3 = phkResult

if (hKey_3 != 0)
    RegCloseKey(hKey_3)
    phkResult = nullptr

int32_t* i_1 = *(arg1 + 0x254)

if (i_1 != *(arg1 + 0x258))
    int32_t* i = i_1
    
    do
        void* esi_5 = *i
        sub_62b300(esi_5 + 0xdc)
        HWND hWnd = *(esi_5 + 4)
        
        if (hWnd != 0 && DestroyWindow(hWnd) != 0)
            *(esi_5 + 4) = 0
        
        if (*(esi_5 + 0x30) != 0 && UnregisterClassA(*(esi_5 + 0x2c), *(esi_5 + 0x6c)) != 0)
            *(esi_5 + 0x30) = 0
        
        i = &i[1]
    while (i != *(arg1 + 0x258))

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return 0
