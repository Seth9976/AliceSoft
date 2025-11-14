// 函数: sub_614cf0
// 地址: 0x614cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x11c)
void* eax_6 = *(arg1 + 0x120)

if (ecx != eax_6)
    HINSTANCE var_58_1 = arg3
    int32_t* eax_7 = sub_621520(eax_6, arg3, ecx, eax_6)
    HINSTANCE var_60_1 = arg3
    sub_630680(eax_7, *(arg1 + 0x120))
    *(arg1 + 0x120) = eax_7

sub_401270(arg1 + 4, 0x14, "DPAnalysis_TabWindow")
*(arg1 + 0x58) = 0
*(arg1 + 0x64) = 0
*(arg1 + 0x68) = 0x52000000
*(arg1 + 0x7c) = arg2
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0xa0
*(arg1 + 0x78) = 0x190
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

bool var_3d = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR

if (var_18 u>= 0x10)
    int32_t var_58_4 = var_2c.d
    sub_6b4d5b()

if (var_3d != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_401270(&var_2c, 0xb, "TabWndWidth")
    HKEY hKey_2 = phkResult
    
    if (hKey_2 != 0)
        PSTR lpValueName = var_2c.d
        enum REG_VALUE_TYPE type = REG_DWORD
        uint32_t lpcbData = 4
        
        if (var_18_1 u< 0x10)
            lpValueName = &var_2c
        
        RegQueryValueExA(hKey_2, lpValueName, nullptr, &type, arg1 + 0x74, &lpcbData)
    
    if (var_18_1 u>= 0x10)
        int32_t var_58_6 = var_2c.d
        sub_6b4d5b()

char result = sub_6181c0(arg1, arg3)
HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
