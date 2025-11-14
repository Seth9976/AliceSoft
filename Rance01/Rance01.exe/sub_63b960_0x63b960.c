// 函数: sub_63b960
// 地址: 0x63b960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718d2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t var_a0 = data_78c474 ^ &__saved_edi
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

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)

if (var_18 u>= 0x10)
    int32_t var_a4_3 = var_2c.d
    sub_6b4d5b()

int32_t data_10 = 1
int32_t data_15 = 1
int32_t data_17 = 1
int32_t data_2 = 1
int32_t data_12 = 1
int32_t data_4 = 1
int32_t data_19 = 0
int32_t data_14 = 0
int32_t data_18 = 0
int32_t data = 0
int32_t data_16 = 0
int32_t data_1 = 0
int32_t data_3 = 0
int32_t data_5
__builtin_memset(&data_5, 0, 0x14)
int32_t data_11 = 0
int32_t data_13 = 0
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_401270(&var_2c, 0x12, "CListWindowShowsNo")
HKEY hKey_1 = phkResult
enum REG_VALUE_TYPE var_88

if (hKey_1 != 0)
    var_88 = REG_DWORD
    var_8c = 4
    char* lpValueName_18 = var_2c.d
    
    if (var_18_1 u< 0x10)
        lpValueName_18 = &var_2c
    
    RegQueryValueExA(hKey_1, lpValueName_18, nullptr, &var_88, &data_10, &var_8c)

if (var_18_1 u>= 0x10)
    int32_t var_a4_5 = var_2c.d
    sub_6b4d5b()

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_401270(&var_2c, 0x14, "CListWindowShowsType")
HKEY hKey_3 = phkResult

if (hKey_3 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName = var_2c.d
    
    if (var_18_2 u< 0x10)
        lpValueName = &var_2c
    
    RegQueryValueExA(hKey_3, lpValueName, nullptr, &var_8c, &data_15, &var_88)

if (var_18_2 u>= 0x10)
    int32_t var_a4_7 = var_2c.d
    sub_6b4d5b()

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_401270(&var_2c, 0x13, "CListWindowShowsPos")
HKEY hKey_4 = phkResult

if (hKey_4 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_1 = var_2c.d
    
    if (var_18_3 u< 0x10)
        lpValueName_1 = &var_2c
    
    RegQueryValueExA(hKey_4, lpValueName_1, nullptr, &var_8c, &data_17, &var_88)

if (var_18_3 u>= 0x10)
    int32_t var_a4_9 = var_2c.d
    sub_6b4d5b()

int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_401270(&var_2c, 0x14, "CListWindowShowsSize")
HKEY hKey_5 = phkResult

if (hKey_5 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_2 = var_2c.d
    
    if (var_18_4 u< 0x10)
        lpValueName_2 = &var_2c
    
    RegQueryValueExA(hKey_5, lpValueName_2, nullptr, &var_8c, &data_2, &var_88)

if (var_18_4 u>= 0x10)
    int32_t var_a4_11 = var_2c.d
    sub_6b4d5b()

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CListWindowShowsAlpha")
HKEY hKey_6 = phkResult

if (hKey_6 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_3 = var_2c.d
    
    if (var_18_5 u< 0x10)
        lpValueName_3 = &var_2c
    
    RegQueryValueExA(hKey_6, lpValueName_3, nullptr, &var_8c, &data_12, &var_88)

if (var_18_5 u>= 0x10)
    int32_t var_a4_13 = var_2c.d
    sub_6b4d5b()

int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_401270(&var_2c, 0x11, "CListWindowShowsZ")
HKEY hKey_7 = phkResult

if (hKey_7 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_4 = var_2c.d
    
    if (var_18_6 u< 0x10)
        lpValueName_4 = &var_2c
    
    RegQueryValueExA(hKey_7, lpValueName_4, nullptr, &var_8c, &data_4, &var_88)

if (var_18_6 u>= 0x10)
    int32_t var_a4_15 = var_2c.d
    sub_6b4d5b()

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_401270(&var_2c, 0x18, "CListWindowShowsAddColor")
HKEY hKey_8 = phkResult

if (hKey_8 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_5 = var_2c.d
    
    if (var_18_7 u< 0x10)
        lpValueName_5 = &var_2c
    
    RegQueryValueExA(hKey_8, lpValueName_5, nullptr, &var_8c, &data_19, &var_88)

if (var_18_7 u>= 0x10)
    int32_t var_a4_17 = var_2c.d
    sub_6b4d5b()

int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_401270(&var_2c, 0x18, "CListWindowShowsMulColor")
HKEY hKey_9 = phkResult
int32_t data_6

if (hKey_9 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_6 = var_2c.d
    
    if (var_18_8 u< 0x10)
        lpValueName_6 = &var_2c
    
    RegQueryValueExA(hKey_9, lpValueName_6, nullptr, &var_8c, &data_6, &var_88)

if (var_18_8 u>= 0x10)
    int32_t var_a4_19 = var_2c.d
    sub_6b4d5b()

int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_401270(&var_2c, 0x16, "CListWindowShowsFilter")
HKEY hKey_10 = phkResult

if (hKey_10 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_7 = var_2c.d
    
    if (var_18_9 u< 0x10)
        lpValueName_7 = &var_2c
    
    RegQueryValueExA(hKey_10, lpValueName_7, nullptr, &var_8c, &data_14, &var_88)

if (var_18_9 u>= 0x10)
    int32_t var_a4_21 = var_2c.d
    sub_6b4d5b()

int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_401270(&var_2c, 0x1a, "CListWindowShowsPassCursor")
HKEY hKey_11 = phkResult
int32_t data_8

if (hKey_11 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_8 = var_2c.d
    
    if (var_18_10 u< 0x10)
        lpValueName_8 = &var_2c
    
    RegQueryValueExA(hKey_11, lpValueName_8, nullptr, &var_8c, &data_8, &var_88)

if (var_18_10 u>= 0x10)
    int32_t var_a4_23 = var_2c.d
    sub_6b4d5b()

int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CListWindowShowsClick")
HKEY hKey_12 = phkResult

if (hKey_12 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_9 = var_2c.d
    
    if (var_18_11 u< 0x10)
        lpValueName_9 = &var_2c
    
    RegQueryValueExA(hKey_12, lpValueName_9, nullptr, &var_8c, &data_18, &var_88)

if (var_18_11 u>= 0x10)
    int32_t var_a4_25 = var_2c.d
    sub_6b4d5b()

int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0
sub_401270(&var_2c, 0x16, "CListWindowShowsOrigin")
HKEY hKey_13 = phkResult

if (hKey_13 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_10 = var_2c.d
    
    if (var_18_12 u< 0x10)
        lpValueName_10 = &var_2c
    
    RegQueryValueExA(hKey_13, lpValueName_10, nullptr, &var_8c, &data, &var_88)

if (var_18_12 u>= 0x10)
    int32_t var_a4_27 = var_2c.d
    sub_6b4d5b()

int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_401270(&var_2c, 0x1c, "CListWindowShowsLinkOnCursor")
HKEY hKey_14 = phkResult

if (hKey_14 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_11 = var_2c.d
    
    if (var_18_13 u< 0x10)
        lpValueName_11 = &var_2c
    
    RegQueryValueExA(hKey_14, lpValueName_11, nullptr, &var_8c, &data_16, &var_88)

if (var_18_13 u>= 0x10)
    int32_t var_a4_29 = var_2c.d
    sub_6b4d5b()

int32_t var_18_14 = 0xf
int32_t var_1c_14 = 0
var_2c = 0
sub_401270(&var_2c, 0x21, "CListWindowShowsLinkMessageWindow")
HKEY hKey_15 = phkResult

if (hKey_15 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_12 = var_2c.d
    
    if (var_18_14 u< 0x10)
        lpValueName_12 = &var_2c
    
    RegQueryValueExA(hKey_15, lpValueName_12, nullptr, &var_8c, &data_1, &var_88)

if (var_18_14 u>= 0x10)
    int32_t var_a4_31 = var_2c.d
    sub_6b4d5b()

int32_t var_18_15 = 0xf
int32_t var_1c_15 = 0
var_2c = 0
sub_401270(&var_2c, 0x1d, "CListWindowShowsOnCursorSound")
HKEY hKey_16 = phkResult

if (hKey_16 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_13 = var_2c.d
    
    if (var_18_15 u< 0x10)
        lpValueName_13 = &var_2c
    
    RegQueryValueExA(hKey_16, lpValueName_13, nullptr, &var_8c, &data_3, &var_88)

if (var_18_15 u>= 0x10)
    int32_t var_a4_33 = var_2c.d
    sub_6b4d5b()

int32_t var_18_16 = 0xf
int32_t var_1c_16 = 0
var_2c = 0
sub_401270(&var_2c, 0x1a, "CListWindowShowsClickSound")
HKEY hKey_17 = phkResult

if (hKey_17 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_14 = var_2c.d
    
    if (var_18_16 u< 0x10)
        lpValueName_14 = &var_2c
    
    RegQueryValueExA(hKey_17, lpValueName_14, nullptr, &var_8c, &data_5, &var_88)

if (var_18_16 u>= 0x10)
    int32_t var_a4_35 = var_2c.d
    sub_6b4d5b()

int32_t var_18_17 = 0xf
int32_t var_1c_17 = 0
var_2c = 0
sub_401270(&var_2c, 0x19, "CListWindowShowsAlphaClip")
HKEY hKey_18 = phkResult
int32_t data_7

if (hKey_18 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_15 = var_2c.d
    
    if (var_18_17 u< 0x10)
        lpValueName_15 = &var_2c
    
    RegQueryValueExA(hKey_18, lpValueName_15, nullptr, &var_8c, &data_7, &var_88)

if (var_18_17 u>= 0x10)
    int32_t var_a4_37 = var_2c.d
    sub_6b4d5b()

int32_t var_18_18 = 0xf
int32_t var_1c_18 = 0
var_2c = 0
sub_401270(&var_2c, 0x18, "CListWindowShowsHitPixel")
HKEY hKey_19 = phkResult
int32_t data_9

if (hKey_19 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    char* lpValueName_16 = var_2c.d
    
    if (var_18_18 u< 0x10)
        lpValueName_16 = &var_2c
    
    RegQueryValueExA(hKey_19, lpValueName_16, nullptr, &var_8c, &data_9, &var_88)

if (var_18_18 u>= 0x10)
    int32_t var_a4_39 = var_2c.d
    sub_6b4d5b()

int32_t var_18_19 = 0xf
int32_t var_1c_19 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CListWindowShowsScale")
HKEY hKey_20 = phkResult

if (hKey_20 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    PSTR lpValueName_17 = var_2c.d
    
    if (var_18_19 u< 0x10)
        lpValueName_17 = &var_2c
    
    RegQueryValueExA(hKey_20, lpValueName_17, nullptr, &var_8c, &data_11, &var_88)

if (var_18_19 u>= 0x10)
    int32_t var_a4_41 = var_2c.d
    sub_6b4d5b()

int32_t var_18_20 = 0xf
int32_t var_1c_20 = 0
var_2c = 0
sub_401270(&var_2c, 0x15, "CListWindowShowsAngle")
HKEY hKey_2 = phkResult

if (hKey_2 != 0)
    var_8c = 4
    var_88 = REG_DWORD
    PSTR lpValueName_19 = var_2c.d
    
    if (var_18_20 u< 0x10)
        lpValueName_19 = &var_2c
    
    RegQueryValueExA(hKey_2, lpValueName_19, nullptr, &var_8c, &data_13, &var_88)
    hKey_2 = phkResult

if (var_18_20 u>= 0x10)
    int32_t var_a4_43 = var_2c.d
    sub_6b4d5b()
    hKey_2 = phkResult

bool cond:20 = data_15 == 1
*(arg1 + 0x4e4) = data_10 == 1
bool cond:21 = data_17 == 1
*(arg1 + 0x4e5) = cond:20
bool cond:22 = data_2 == 1
*(arg1 + 0x4e6) = cond:21
bool cond:23 = data_12 == 1
*(arg1 + 0x4e7) = cond:22
bool cond:24 = data_4 == 1
*(arg1 + 0x4e8) = cond:23
bool cond:25 = data_19 == 1
*(arg1 + 0x4e9) = cond:24
bool cond:26 = data_6 == 1
*(arg1 + 0x4ea) = cond:25
bool cond:27 = data_14 == 1
*(arg1 + 0x4eb) = cond:26
bool cond:28 = data_8 == 1
*(arg1 + 0x4ec) = cond:27
bool cond:29 = data_18 == 1
*(arg1 + 0x4ed) = cond:28
bool cond:30 = data == 1
*(arg1 + 0x4ee) = cond:29
bool cond:31 = data_16 == 1
*(arg1 + 0x4ef) = cond:30
bool cond:32 = data_1 == 1
*(arg1 + 0x4f0) = cond:31
bool cond:33 = data_3 == 1
*(arg1 + 0x4f1) = cond:32
bool cond:34 = data_5 == 1
*(arg1 + 0x4f2) = cond:33
bool cond:35 = data_7 == 1
*(arg1 + 0x4f3) = cond:34
bool cond:36 = data_9 == 1
*(arg1 + 0x4f4) = cond:35
bool cond:37 = data_11 == 1
*(arg1 + 0x4f5) = cond:36
bool cond:38 = data_13 == 1
*(arg1 + 0x4f6) = cond:37
*(arg1 + 0x4f7) = cond:38

if (hKey_2 != 0)
    hKey_2 = RegCloseKey(hKey_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return hKey_2
