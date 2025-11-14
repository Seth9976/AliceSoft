// 函数: sub_6b3560
// 地址: 0x6b3560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bbb1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND hWnd
int32_t eax_2 = data_78c474 ^ &hWnd
int32_t __saved_edi
int32_t var_478 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
hWnd = arg1
int32_t result

if (arg2 != 0x4e || arg3 == 0 || *(arg3 + 8) != 0xfffffda1)
    result = 0
else
    char lParam = 0
    int128_t var_40f[0x3f]
    sub_6bc670(&var_40f, 0, 0x3ff)
    SendMessageA(GetParent(arg1), 0x465, 0x400, &lParam)
    int32_t var_4 = 0
    LPARAM lParam_2
    char var_448
    int32_t edx_3 = sub_401ab0(&lParam_2, sub_402be0(&var_448, &lParam), &var_448)
    var_4.b = 2
    int32_t var_434
    
    if (var_434 u>= 0x10)
        int32_t var_47c_2 = var_448.d
        edx_3 = sub_6b4d5b()
    
    int32_t var_434_1 = 0xf
    int32_t var_438_1 = 0
    var_448 = 0
    char var_42c
    sub_401940(&var_42c, edx_3, &lParam_2)
    var_4.b = 3
    sub_401ef0(&lParam_2, &var_42c)
    var_4.b = 2
    int32_t var_418
    
    if (var_418 u>= 0x10)
        int32_t var_47c_3 = var_42c.d
        sub_6b4d5b()
    
    void* edx_5 = *(arg3 + 0xc)
    int32_t var_418_1 = 0xf
    int32_t var_41c_1 = 0
    var_42c = 0
    int32_t eax_11 = *(edx_5 + 0x18)
    
    if (eax_11 == 1)
        int32_t var_47c_5 = 4
        sub_402cb0(&lParam_2, ".bmp", 4)
    else if (eax_11 == 2)
        int32_t var_47c_4 = 4
        sub_402cb0(&lParam_2, ".jpg", 4)
    
    LPARAM lParam_1 = lParam_2
    int32_t var_450
    
    if (var_450 u< 0x10)
        lParam_1 = &lParam_2
    
    SendMessageA(GetParent(hWnd), 0x468, 0x480, lParam_1)
    
    if (var_450 u>= 0x10)
        LPARAM lParam_3 = lParam_2
        sub_6b4d5b()
    
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &hWnd)
return result
