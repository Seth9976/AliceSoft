// 函数: sub_4269c0
// 地址: 0x4269c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b668
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* esi = (**arg1)(data_78c474 ^ &__saved_edi)
char* ecx_1 = esi
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int128_t* eax_6

do
    eax_6.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_6.b != 0)
sub_401270(&var_2c, ecx_1 - &ecx_1[1], esi)
int32_t var_4 = 0
HKEY hKey
HKEY phkResult
char var_48

if (sub_402680(0x756be8, &var_2c) == 0)
    if (sub_402680(0x756c3c, &var_2c).b != 0)
        int32_t var_34_3 = 0xf
        int32_t var_38_3 = 0
        var_48 = 0
        sub_401270(&var_48, 0x22, "SOFTWARE\AliceSoftGames\RanceQuest")
        PSTR lpSubKey_2 = var_48.d
        phkResult = nullptr
        
        if (var_34_3 u< 0x10)
            lpSubKey_2 = &var_48
        
        bool cond:1_1 = RegOpenKeyExA(0x80000002, lpSubKey_2, 0, KEY_READ, &phkResult) == NO_ERROR
        hKey = phkResult
        
        if (hKey != 0)
            RegCloseKey(hKey)
            phkResult = nullptr
        
        if (var_34_3 u>= 0x10)
            int32_t var_68_11 = var_48.d
            sub_6b4d5b()
        
        if (cond:1_1 == 0)
            sub_402be0(&var_48, "SOFTWARE\AliceSoftGames\DLSDRanceQuest")
            phkResult = nullptr
            char eax_14 = sub_6b32e0(&phkResult, &var_48, 0x80000002)
            HKEY hKey_1 = phkResult
            
            if (hKey_1 != 0)
                RegCloseKey(hKey_1)
                phkResult = nullptr
            
            if (var_34_3 u>= 0x10)
                int32_t var_68_14 = var_48.d
                sub_6b4d5b()
            
            if (eax_14 == 0)
                sub_402be0(&var_48, "SOFTWARE\AliceSoftGames\BDLRanceQuest")
                phkResult = nullptr
                char eax_16 = sub_6b32e0(&phkResult, &var_48, 0x80000002)
                HKEY hKey_2 = phkResult
                
                if (hKey_2 != 0)
                    RegCloseKey(hKey_2)
                    phkResult = nullptr
                
                sub_401110(&var_48)
                sub_401110(&var_2c)
                
                if (eax_16 == 0)
                    hKey.b = 0
                else
                    hKey.b = 1
            else
                sub_401110(&var_2c)
                hKey.b = 1
        else if (var_18 u< 0x10)
            hKey.b = 1
        else
            int32_t var_68_12 = var_2c.d
            sub_6b4d5b()
            hKey.b = 1
    else if (var_18 u< 0x10)
        hKey.b = 0
    else
        int32_t var_68_16 = var_2c.d
        sub_6b4d5b()
        hKey.b = 0
else
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    sub_401270(&var_48, 0x22, "SOFTWARE\AliceSoftGames\Daiteikoku")
    char* lpSubKey = var_48.d
    phkResult = nullptr
    
    if (var_34_1 u< 0x10)
        lpSubKey = &var_48
    
    bool cond:0_1 = RegOpenKeyExA(0x80000002, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
    hKey = phkResult
    
    if (hKey != 0)
        RegCloseKey(hKey)
        phkResult = nullptr
    
    if (var_34_1 u>= 0x10)
        int32_t var_68_3 = var_48.d
        sub_6b4d5b()
    
    bool cond:2_1
    
    if (cond:0_1 == 0)
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
        sub_401270(&var_48, 0x24, "SOFTWARE\AliceSoftGames\DLDaiteikoku")
        PSTR lpSubKey_1 = var_48.d
        phkResult = nullptr
        
        if (var_34_2 u< 0x10)
            lpSubKey_1 = &var_48
        
        cond:2_1 = RegOpenKeyExA(0x80000002, lpSubKey_1, 0, KEY_READ, &phkResult) == NO_ERROR
        hKey = phkResult
        
        if (hKey != 0)
            RegCloseKey(hKey)
            phkResult = nullptr
        
        if (var_34_2 u>= 0x10)
            int32_t var_68_7 = var_48.d
            sub_6b4d5b()
    
    if (cond:0_1 != 0 || cond:2_1 != 0)
        if (var_18 u< 0x10)
            hKey.b = 1
        else
            int32_t var_68_4 = var_2c.d
            sub_6b4d5b()
            hKey.b = 1
    else if (var_18 u< 0x10)
        hKey.b = 0
    else
        int32_t var_68_8 = var_2c.d
        sub_6b4d5b()
        hKey.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return hKey
