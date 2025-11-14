// 函数: sub_65b030
// 地址: 0x65b030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723020
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 0xc4) = *(arg2 + 0x60)
int32_t eax_6 = *(arg2 + 0x64)
*(arg2 + 0xc0) = eax_6
*(arg2 + 0xdc) = eax_6
sub_64d730(arg2 + 0xc8)
*(arg2 + 0xd8) = 0xffffff
sub_64d730(arg2 + 0xc8)
*(arg2 + 0x98) = 0x646464
sub_65b5c0(arg2, arg1)
sub_65b7b0(arg2, arg1)
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 6, 0x731998)
int32_t var_4 = 0
sub_64e1b0(arg2 + 0x88, &var_48)
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_3 = var_48.d
    sub_6b4d5b()

int32_t var_1c = 0
int32_t var_18 = 0xf
char var_2c = 0
sub_401270(&var_2c, 8, 0x7319a0)
int32_t var_4_2 = 1
sub_64e1b0(arg2 + 0x88, &var_2c)

if (var_18 u>= 0x10)
    int32_t var_64_5 = var_2c.d
    sub_6b4d5b()

void* ebp_1 = *(arg2 + 0x10c)
HWND hWnd = *(ebp_1 + 0x34)

if (hWnd != 0)
    SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x87)
    *(ebp_1 + 0x58) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return 0
