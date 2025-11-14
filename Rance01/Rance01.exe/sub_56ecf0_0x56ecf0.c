// 函数: sub_56ecf0
// 地址: 0x56ecf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e908
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char var_48
int32_t* eax_5
int32_t ecx
eax_5, ecx = sub_405c90(&var_48, arg1 + 4, "InstallInfo")
int32_t var_4 = 0
char var_64
int32_t* var_7c = sub_401800(ecx, eax_5, &var_64)
var_4.b = 1
int32_t var_2c
sub_402c60(&var_2c, "SaveFolderSetting.ini", nullptr)
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_7c_1 = var_64.d
    sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
var_4.b = 4
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_7c_2 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
var_68 = 0
sub_56b7b0(&var_68, &var_2c)
int32_t eax_8 = var_68
int32_t* result

if (eax_8 == 0)
    result = sub_56ee30(arg1, arg2)
else if (eax_8 == 1)
    result = sub_56ef70(arg1, arg2)
else if (eax_8 != 2)
    result = sub_56ee30(arg1, arg2)
else
    result = sub_401180(arg1 + 0x3c, 0xffffffff, arg1 + 4, eax_8 - 2)

int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_7c_6 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
