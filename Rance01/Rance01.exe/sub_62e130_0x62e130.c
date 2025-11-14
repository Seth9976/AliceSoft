// 函数: sub_62e130
// 地址: 0x62e130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7214a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(arg1 + 8)
BOOL hKey

if (hWnd == 0)
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    sub_401270(&var_38, 0xc, 0x733b30)
    int32_t var_c_1 = 0
    sub_401180(arg1 + 0x54, 0xffffffff, &var_38, 0)
    int32_t var_c_2 = 0xffffffff
    
    if (var_24_1 u>= 0x10)
        int32_t var_88_2 = var_38.d
        sub_6b4d5b()
    
    int32_t var_28_2 = 0
    int32_t var_24_2 = 0xf
    var_38 = 0
    sub_401270(&var_38, 0x10, "DPLogViewerClass")
    int32_t var_c_3 = 1
    sub_401180(arg1 + 0x38, 0xffffffff, &var_38, 0)
    
    if (var_24_2 u>= 0x10)
        int32_t var_88_3 = var_38.d
        sub_6b4d5b()
    
    HINSTANCE hInstance = *(arg1 + 0x98)
    *(arg1 + 0x70) = hInstance
    *(arg1 + 0x78) = 0x2cf0000
    HICON eax_6 = LoadIconA(hInstance, 0x66)
    HINSTANCE hInstance_1 = *(arg1 + 0x98)
    *(arg1 + 0x20) = eax_6
    *(arg1 + 0x90) = LoadMenuA(hInstance_1, 0x9c92)
    int32_t data_1 = 0
    int32_t data_3 = 0
    int32_t data = 0x320
    int32_t data_2 = 0x258
    phkResult = nullptr
    int32_t var_c_4 = 2
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0xf
    char var_54 = 0
    sub_401270(&var_54, 0x27, "Software\Alicesoft\Sys42IDE\DPLogViewer")
    HKEY hKey_1 = phkResult
    
    if (hKey_1 != 0)
        RegCloseKey(hKey_1)
        phkResult = nullptr
    
    char* lpSubKey = var_54.d
    
    if (var_40_1 u< 0x10)
        lpSubKey = &var_54
    
    bool var_69_1 = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
    
    if (var_40_1 u>= 0x10)
        int32_t var_88_6 = var_54.d
        sub_6b4d5b()
    
    void** i_1
    
    if (var_69_1 != 0)
        int32_t var_44_2 = 0
        int32_t var_40_2 = 0xf
        var_54 = 0
        sub_401270(&var_54, 7, "WindowX")
        HKEY hKey_2 = phkResult
        uint32_t var_68
        
        if (hKey_2 != 0)
            var_68 = 4
            i_1 = 4
            char* lpValueName_3 = var_54.d
            
            if (var_40_2 u< 0x10)
                lpValueName_3 = &var_54
            
            RegQueryValueExA(hKey_2, lpValueName_3, nullptr, &var_68, &data_1, &i_1)
        
        if (var_40_2 u>= 0x10)
            int32_t var_88_8 = var_54.d
            sub_6b4d5b()
        
        int32_t var_40_3 = 0xf
        int32_t var_44_3 = 0
        var_54 = 0
        sub_401270(&var_54, 7, "WindowY")
        HKEY hKey_3 = phkResult
        
        if (hKey_3 != 0)
            i_1 = 4
            var_68 = 4
            char* lpValueName = var_54.d
            
            if (var_40_3 u< 0x10)
                lpValueName = &var_54
            
            RegQueryValueExA(hKey_3, lpValueName, nullptr, &i_1, &data_3, &var_68)
        
        if (var_40_3 u>= 0x10)
            int32_t var_88_10 = var_54.d
            sub_6b4d5b()
        
        int32_t var_40_4 = 0xf
        int32_t var_44_4 = 0
        var_54 = 0
        sub_401270(&var_54, 0xb, "WindowWidth")
        HKEY hKey_4 = phkResult
        
        if (hKey_4 != 0)
            i_1 = 4
            var_68 = 4
            PSTR lpValueName_1 = var_54.d
            
            if (var_40_4 u< 0x10)
                lpValueName_1 = &var_54
            
            RegQueryValueExA(hKey_4, lpValueName_1, nullptr, &i_1, &data, &var_68)
        
        if (var_40_4 u>= 0x10)
            int32_t var_88_12 = var_54.d
            sub_6b4d5b()
        
        int32_t var_40_5 = 0xf
        int32_t var_44_5 = 0
        var_54 = 0
        sub_401270(&var_54, 0xc, "WindowHeight")
        HKEY hKey_5 = phkResult
        
        if (hKey_5 != 0)
            i_1 = 4
            var_68 = 4
            PSTR lpValueName_2 = var_54.d
            
            if (var_40_5 u< 0x10)
                lpValueName_2 = &var_54
            
            RegQueryValueExA(hKey_5, lpValueName_2, nullptr, &i_1, &data_2, &var_68)
        
        if (var_40_5 u>= 0x10)
            int32_t var_88_14 = var_54.d
            sub_6b4d5b()
    
    int32_t data_6 = data_3
    int32_t data_4 = data
    *(arg1 + 0x7c) = data_1
    int32_t data_5 = data_2
    *(arg1 + 0x80) = data_6
    *(arg1 + 0x84) = data_4
    *(arg1 + 0x88) = data_5
    *(arg1 + 0x94) = arg1 - 4
    
    if (sub_6b3860(arg1 + 8) != 0)
        HWND hWnd_1 = *(arg1 + 8)
        
        if (hWnd_1 != 0)
            ShowWindow(hWnd_1, SW_SHOW)
        
        SetForegroundWindow(*(arg1 + 8))
        void** i = *(arg1 + 0x250)
        i_1 = i
        
        while (i != *(arg1 + 0x254))
            void* esi_8 = *i
            
            if (*(esi_8 + 4) == 0)
                if (sub_630880(esi_8, *(arg1 + 0xa0), *(arg1 + 0x98)) == 0)
                    goto label_62e51c
                
                int128_t* ecx_5
                
                if (*(esi_8 + 0x174) u< 0x10)
                    ecx_5 = esi_8 + 0x160
                else
                    ecx_5 = *(esi_8 + 0x160)
                
                sub_630310(ecx_5, arg1 + 0x9c, *(esi_8 + 4))
                i = i_1
            
            i = &i[1]
            i_1 = i
        
        hKey = phkResult
        
        if (hKey != 0)
            RegCloseKey(hKey)
        
        hKey.b = 1
    else
    label_62e51c:
        hKey = phkResult
        
        if (hKey != 0)
            RegCloseKey(hKey)
        
        hKey.b = 0
else
    SetForegroundWindow(hWnd)
    hKey.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey
