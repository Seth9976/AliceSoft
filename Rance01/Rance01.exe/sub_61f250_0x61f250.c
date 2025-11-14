// 函数: sub_61f250
// 地址: 0x61f250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7190a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_184
int32_t eax_2 = data_78c474 ^ &var_184
int32_t __saved_edi
int32_t var_194 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HKEY phkResult = nullptr
int32_t var_c_1 = 0
int32_t var_160 = 0xf
int32_t var_164 = 0
char var_174 = 0
sub_401270(&var_174, 0x26, "Software\Alicesoft\Sys42IDE\DPVariable")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = var_174.d

if (var_160 u< 0x10)
    lpSubKey = &var_174

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_160 u>= 0x10)
    int32_t var_198_2 = var_174.d
    sub_6b4d5b()

WPARAM esi_1 = 0
WPARAM var_17c = 0

while (true)
    int32_t var_128_1 = 0xf
    int32_t var_12c_1 = 0
    char var_13c = 0
    var_c_1.b = 1
    sub_61e180(esi_1, arg1 + 8, &var_13c)
    WPARAM var_198_4 = esi_1
    void var_120
    _swprintf(&var_120, 0x100, "Search%02d")
    char* esi_2 = var_13c.d
    
    if (var_128_1 u< 0x10)
        esi_2 = &var_13c
    
    char* eax_8 = esi_2
    int32_t var_160_1 = 0xf
    int32_t var_164_1 = 0
    var_174 = 0
    char i
    
    do
        i = *eax_8
        eax_8 = &eax_8[1]
    while (i != 0)
    sub_401270(&var_174, eax_8 - &eax_8[1], esi_2)
    var_c_1.b = 2
    void* eax_10 = &var_120
    int32_t var_144_1 = 0xf
    int32_t var_148_1 = 0
    char var_158 = 0
    char i_1
    
    do
        i_1 = *eax_10
        eax_10 += 1
    while (i_1 != 0)
    void var_11f
    sub_401270(&var_158, eax_10 - &var_11f, &var_120)
    HKEY hKey_2 = phkResult
    
    if (hKey_2 != 0)
        char* lpData = var_174.d
        
        if (var_160_1 u< 0x10)
            lpData = &var_174
        
        char* lpValueName = var_158.d
        
        if (var_144_1 u< 0x10)
            lpValueName = &var_158
        
        RegSetValueExA(hKey_2, lpValueName, 0, REG_SZ, lpData, var_164_1 + 1)
    
    if (var_144_1 u>= 0x10)
        int32_t var_198_8 = var_158.d
        sub_6b4d5b()
    
    int32_t var_144_2 = 0xf
    int32_t var_148_2 = 0
    var_158 = 0
    
    if (var_160_1 u>= 0x10)
        int32_t var_198_9 = var_174.d
        sub_6b4d5b()
    
    var_c_1.b = 0
    
    if (var_128_1 u>= 0x10)
        int32_t var_198_10 = var_13c.d
        sub_6b4d5b()
    
    WPARAM eax_14 = var_17c + 1
    var_17c = eax_14
    
    if (eax_14 s>= 0x10)
        break
    
    esi_1 = var_17c

HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_184)
return hKey_1
