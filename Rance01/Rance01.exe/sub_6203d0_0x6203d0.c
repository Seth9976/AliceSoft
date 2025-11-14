// 函数: sub_6203d0
// 地址: 0x6203d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719318
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char rect = 0
sub_401270(&rect, 0x26, "Software\Alicesoft\Sys42IDE\DPVariable")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = rect.d

if (var_34 u< 0x10)
    lpSubKey = &rect

bool var_55 = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, 
    KEY_ALL_ACCESS, nullptr, &phkResult, nullptr) == NO_ERROR

if (var_34 u>= 0x10)
    int32_t var_70_2 = rect.d
    sub_6b4d5b()

if (var_55 != 0)
    GetWindowRect(arg2, &rect)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401270(&var_2c, 0xb, "TabWndWidth")
    HKEY hKey_2 = phkResult
    int32_t var_40
    int32_t data = var_40 - rect.d
    
    if (hKey_2 != 0)
        char* lpValueName = var_2c.d
        
        if (var_18_1 u< 0x10)
            lpValueName = &var_2c
        
        RegSetValueExA(hKey_2, lpValueName, 0, REG_DWORD, &data, 4)
    
    if (var_18_1 u>= 0x10)
        int32_t var_70_4 = var_2c.d
        sub_6b4d5b()

uint32_t uIDEvent = *(arg1 + 0x1d4)

if (uIDEvent != 0)
    KillTimer(arg2, uIDEvent)
    *(arg1 + 0x1d4) = 0

HKEY hKey_1 = phkResult
*(arg1 + 0x1dc) = 0

if (hKey_1 != 0)
    RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return 0
