// 函数: sub_61f4c0
// 地址: 0x61f4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719051
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_164 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
phkResult = nullptr
int32_t var_4 = 0
int32_t var_134 = 0xf
int32_t var_138 = 0
char var_148 = 0
sub_401270(&var_148, 0x26, "Software\Alicesoft\Sys42IDE\DPVariable")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = var_148.d

if (var_134 u< 0x10)
    lpSubKey = &var_148

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)

if (var_134 u>= 0x10)
    int32_t var_168_3 = var_148.d
    sub_6b4d5b()

for (int32_t i = 0; i s< 0x10; i += 1)
    int32_t i_1 = i
    void var_110
    _swprintf(&var_110, 0x100, "Search%02d")
    int32_t var_134_1 = 0xf
    int32_t var_138_1 = 0
    var_148 = 0
    var_4.b = 1
    int32_t var_118_1 = 0xf
    void* eax_6 = &var_110
    int32_t var_11c_1 = 0
    char var_12c = 0
    char j
    
    do
        j = *eax_6
        eax_6 += 1
    while (j != 0)
    void var_10f
    sub_401270(&var_12c, eax_6 - &var_10f, &var_110)
    var_4.b = 2
    sub_6b3370(&phkResult, &var_12c)
    
    if (var_118_1 u>= 0x10)
        int32_t var_168_6 = var_12c.d
        sub_6b4d5b()
    
    if (var_138_1 != 0)
        char* lParam = var_148.d
        
        if (var_134_1 u< 0x10)
            lParam = &var_148
        
        SendMessageA(*(arg1 + 8), 0x143, 0, lParam)
        
        if (i == 0)
            char* lpString = var_148.d
            
            if (var_134_1 u< 0x10)
                lpString = &var_148
            
            SetWindowTextA(*(arg1 + 8), lpString)
            SendMessageA(*(arg1 + 8), 0x142, 0, 0xffffffff)
        
        var_4.b = 0
        
        if (var_134_1 u>= 0x10)
            int32_t var_168_10 = var_148.d
            sub_6b4d5b()
    else
        var_4.b = 0
        
        if (var_134_1 u>= 0x10)
            int32_t var_168_7 = var_148.d
            sub_6b4d5b()

HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey_1
