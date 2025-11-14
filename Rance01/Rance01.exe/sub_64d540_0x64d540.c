// 函数: sub_64d540
// 地址: 0x64d540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HKEY phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
phkResult = nullptr
int32_t var_4 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x1a, "Software\AliceSoft\DPParts")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = var_2c.d

if (var_18 u< 0x10)
    lpSubKey = &var_2c

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)

if (var_18 u>= 0x10)
    int32_t var_44_3 = var_2c.d
    sub_6b4d5b()

HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey_1
