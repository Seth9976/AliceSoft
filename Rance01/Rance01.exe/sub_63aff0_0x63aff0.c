// 函数: sub_63aff0
// 地址: 0x63aff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718d68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t data
int32_t eax_2 = data_78c474 ^ &data
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HKEY phkResult = nullptr
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

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_18 u>= 0x10)
    int32_t var_50_2 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_401270(&var_2c, 0x12, "CListWindowShowsNo")
int32_t data_1
data_1.b = *(arg1 + 0x4e4) != 0
data = data_1
HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    char* lpValueName = var_2c.d
    
    if (var_18_1 u< 0x10)
        lpValueName = &var_2c
    
    RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)

if (var_18_1 u>= 0x10)
    int32_t var_50_3 = var_2c.d
    sub_6b4d5b()

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_401270(&var_2c, 0x14, "CListWindowShowsType")
HKEY hKey_2 = phkResult
int32_t data_2
data_2.b = *(arg1 + 0x4e5) != 0
data = data_2

if (hKey_2 != 0)
    char* lpValueName_1 = var_2c.d
    
    if (var_18_2 u< 0x10)
        lpValueName_1 = &var_2c
    
    RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)

if (var_18_2 u>= 0x10)
    int32_t var_50_4 = var_2c.d
    sub_6b4d5b()

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_401270(&var_2c, 0x13, "CListWindowShowsPos")
HKEY hKey_3 = phkResult
int32_t data_3
data_3.b = *(arg1 + 0x4e6) != 0
data = data_3

if (hKey_3 != 0)
    char* lpValueName_2 = var_2c.d
    
    if (var_18_3 u< 0x10)
        lpValueName_2 = &var_2c
    
    RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)

if (var_18_3 u>= 0x10)
    int32_t var_50_5 = var_2c.d
    sub_6b4d5b()

int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_401270(&var_2c, 0x14, "CListWindowShowsSize")
HKEY hKey_4 = phkResult
int32_t data_4
data_4.b = *(arg1 + 0x4e7) != 0
data = data_4

if (hKey_4 != 0)
    char* lpValueName_3 = var_2c.d
    
    if (var_18_4 u< 0x10)
        lpValueName_3 = &var_2c
    
    RegSetValueExA(hKey_4, lpValueName_3, 0, REG_DWORD, &data, 4)

if (var_18_4 u>= 0x10)
    int32_t var_50_6 = var_2c.d
    sub_6b4d5b()

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CListWindowShowsAlpha")
HKEY hKey_5 = phkResult
int32_t data_5
data_5.b = *(arg1 + 0x4e8) != 0
data = data_5

if (hKey_5 != 0)
    char* lpValueName_4 = var_2c.d
    
    if (var_18_5 u< 0x10)
        lpValueName_4 = &var_2c
    
    RegSetValueExA(hKey_5, lpValueName_4, 0, REG_DWORD, &data, 4)

if (var_18_5 u>= 0x10)
    int32_t var_50_7 = var_2c.d
    sub_6b4d5b()

int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_401270(&var_2c, 0x11, "CListWindowShowsZ")
HKEY hKey_6 = phkResult
int32_t data_6
data_6.b = *(arg1 + 0x4e9) != 0
data = data_6

if (hKey_6 != 0)
    char* lpValueName_5 = var_2c.d
    
    if (var_18_6 u< 0x10)
        lpValueName_5 = &var_2c
    
    RegSetValueExA(hKey_6, lpValueName_5, 0, REG_DWORD, &data, 4)

if (var_18_6 u>= 0x10)
    int32_t var_50_8 = var_2c.d
    sub_6b4d5b()

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_401270(&var_2c, 0x18, "CListWindowShowsAddColor")
HKEY hKey_7 = phkResult
int32_t data_7
data_7.b = *(arg1 + 0x4ea) != 0
data = data_7

if (hKey_7 != 0)
    char* lpValueName_6 = var_2c.d
    
    if (var_18_7 u< 0x10)
        lpValueName_6 = &var_2c
    
    RegSetValueExA(hKey_7, lpValueName_6, 0, REG_DWORD, &data, 4)

if (var_18_7 u>= 0x10)
    int32_t var_50_9 = var_2c.d
    sub_6b4d5b()

int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_401270(&var_2c, 0x18, "CListWindowShowsMulColor")
HKEY hKey_8 = phkResult
int32_t data_8
data_8.b = *(arg1 + 0x4eb) != 0
data = data_8

if (hKey_8 != 0)
    char* lpValueName_7 = var_2c.d
    
    if (var_18_8 u< 0x10)
        lpValueName_7 = &var_2c
    
    RegSetValueExA(hKey_8, lpValueName_7, 0, REG_DWORD, &data, 4)

if (var_18_8 u>= 0x10)
    int32_t var_50_10 = var_2c.d
    sub_6b4d5b()

int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_401270(&var_2c, 0x16, "CListWindowShowsFilter")
HKEY hKey_9 = phkResult
int32_t data_9
data_9.b = *(arg1 + 0x4ec) != 0
data = data_9

if (hKey_9 != 0)
    char* lpValueName_8 = var_2c.d
    
    if (var_18_9 u< 0x10)
        lpValueName_8 = &var_2c
    
    RegSetValueExA(hKey_9, lpValueName_8, 0, REG_DWORD, &data, 4)

if (var_18_9 u>= 0x10)
    int32_t var_50_11 = var_2c.d
    sub_6b4d5b()

int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_401270(&var_2c, 0x1a, "CListWindowShowsPassCursor")
HKEY hKey_10 = phkResult
int32_t data_10
data_10.b = *(arg1 + 0x4ed) != 0
data = data_10

if (hKey_10 != 0)
    char* lpValueName_9 = var_2c.d
    
    if (var_18_10 u< 0x10)
        lpValueName_9 = &var_2c
    
    RegSetValueExA(hKey_10, lpValueName_9, 0, REG_DWORD, &data, 4)

if (var_18_10 u>= 0x10)
    int32_t var_50_12 = var_2c.d
    sub_6b4d5b()

int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CListWindowShowsClick")
HKEY hKey_11 = phkResult
int32_t data_11
data_11.b = *(arg1 + 0x4ee) != 0
data = data_11

if (hKey_11 != 0)
    char* lpValueName_10 = var_2c.d
    
    if (var_18_11 u< 0x10)
        lpValueName_10 = &var_2c
    
    RegSetValueExA(hKey_11, lpValueName_10, 0, REG_DWORD, &data, 4)

if (var_18_11 u>= 0x10)
    int32_t var_50_13 = var_2c.d
    sub_6b4d5b()

int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0
sub_401270(&var_2c, 0x16, "CListWindowShowsOrigin")
HKEY hKey_12 = phkResult
int32_t data_12
data_12.b = *(arg1 + 0x4ef) != 0
data = data_12

if (hKey_12 != 0)
    char* lpValueName_11 = var_2c.d
    
    if (var_18_12 u< 0x10)
        lpValueName_11 = &var_2c
    
    RegSetValueExA(hKey_12, lpValueName_11, 0, REG_DWORD, &data, 4)

if (var_18_12 u>= 0x10)
    int32_t var_50_14 = var_2c.d
    sub_6b4d5b()

int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_401270(&var_2c, 0x1c, "CListWindowShowsLinkOnCursor")
HKEY hKey_13 = phkResult
int32_t data_13
data_13.b = *(arg1 + 0x4f0) != 0
data = data_13

if (hKey_13 != 0)
    char* lpValueName_12 = var_2c.d
    
    if (var_18_13 u< 0x10)
        lpValueName_12 = &var_2c
    
    RegSetValueExA(hKey_13, lpValueName_12, 0, REG_DWORD, &data, 4)

if (var_18_13 u>= 0x10)
    int32_t var_50_15 = var_2c.d
    sub_6b4d5b()

int32_t var_18_14 = 0xf
int32_t var_1c_14 = 0
var_2c = 0
sub_401270(&var_2c, 0x21, "CListWindowShowsLinkMessageWindow")
HKEY hKey_14 = phkResult
int32_t data_14
data_14.b = *(arg1 + 0x4f1) != 0
data = data_14

if (hKey_14 != 0)
    char* lpValueName_13 = var_2c.d
    
    if (var_18_14 u< 0x10)
        lpValueName_13 = &var_2c
    
    RegSetValueExA(hKey_14, lpValueName_13, 0, REG_DWORD, &data, 4)

if (var_18_14 u>= 0x10)
    int32_t var_50_16 = var_2c.d
    sub_6b4d5b()

int32_t var_18_15 = 0xf
int32_t var_1c_15 = 0
var_2c = 0
sub_401270(&var_2c, 0x1d, "CListWindowShowsOnCursorSound")
HKEY hKey_15 = phkResult
int32_t data_15
data_15.b = *(arg1 + 0x4f2) != 0
data = data_15

if (hKey_15 != 0)
    char* lpValueName_14 = var_2c.d
    
    if (var_18_15 u< 0x10)
        lpValueName_14 = &var_2c
    
    RegSetValueExA(hKey_15, lpValueName_14, 0, REG_DWORD, &data, 4)

if (var_18_15 u>= 0x10)
    int32_t var_50_17 = var_2c.d
    sub_6b4d5b()

int32_t var_18_16 = 0xf
int32_t var_1c_16 = 0
var_2c = 0
sub_401270(&var_2c, 0x1a, "CListWindowShowsClickSound")
HKEY hKey_16 = phkResult
int32_t data_16
data_16.b = *(arg1 + 0x4f3) != 0
data = data_16

if (hKey_16 != 0)
    char* lpValueName_15 = var_2c.d
    
    if (var_18_16 u< 0x10)
        lpValueName_15 = &var_2c
    
    RegSetValueExA(hKey_16, lpValueName_15, 0, REG_DWORD, &data, 4)

if (var_18_16 u>= 0x10)
    int32_t var_50_18 = var_2c.d
    sub_6b4d5b()

int32_t var_18_17 = 0xf
int32_t var_1c_17 = 0
var_2c = 0
sub_401270(&var_2c, 0x19, "CListWindowShowsAlphaClip")
HKEY hKey_17 = phkResult
int32_t data_17
data_17.b = *(arg1 + 0x4f4) != 0
data = data_17

if (hKey_17 != 0)
    char* lpValueName_16 = var_2c.d
    
    if (var_18_17 u< 0x10)
        lpValueName_16 = &var_2c
    
    RegSetValueExA(hKey_17, lpValueName_16, 0, REG_DWORD, &data, 4)

if (var_18_17 u>= 0x10)
    int32_t var_50_19 = var_2c.d
    sub_6b4d5b()

int32_t var_18_18 = 0xf
int32_t var_1c_18 = 0
var_2c = 0
sub_401270(&var_2c, 0x18, "CListWindowShowsHitPixel")
HKEY hKey_18 = phkResult
int32_t data_18
data_18.b = *(arg1 + 0x4f5) != 0
data = data_18

if (hKey_18 != 0)
    char* lpValueName_17 = var_2c.d
    
    if (var_18_18 u< 0x10)
        lpValueName_17 = &var_2c
    
    RegSetValueExA(hKey_18, lpValueName_17, 0, REG_DWORD, &data, 4)

if (var_18_18 u>= 0x10)
    int32_t var_50_20 = var_2c.d
    sub_6b4d5b()

int32_t var_18_19 = 0xf
int32_t var_1c_19 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CListWindowShowsScale")
HKEY hKey_19 = phkResult
int32_t data_19
data_19.b = *(arg1 + 0x4f6) != 0
data = data_19

if (hKey_19 != 0)
    char* lpValueName_18 = var_2c.d
    
    if (var_18_19 u< 0x10)
        lpValueName_18 = &var_2c
    
    RegSetValueExA(hKey_19, lpValueName_18, 0, REG_DWORD, &data, 4)

if (var_18_19 u>= 0x10)
    int32_t var_50_21 = var_2c.d
    sub_6b4d5b()

int32_t var_18_20 = 0xf
int32_t var_1c_20 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CListWindowShowsAngle")
HKEY hKey_20 = phkResult
int32_t data_20
data_20.b = *(arg1 + 0x4f7) != 0
data = data_20

if (hKey_20 != 0)
    char* lpValueName_19 = var_2c.d
    
    if (var_18_20 u< 0x10)
        lpValueName_19 = &var_2c
    
    RegSetValueExA(hKey_20, lpValueName_19, 0, REG_DWORD, &data, 4)
    hKey_20 = phkResult

if (var_18_20 u>= 0x10)
    int32_t var_50_22 = var_2c.d
    sub_6b4d5b()
    hKey_20 = phkResult

if (hKey_20 != 0)
    hKey_20 = RegCloseKey(hKey_20)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &data)
return hKey_20
