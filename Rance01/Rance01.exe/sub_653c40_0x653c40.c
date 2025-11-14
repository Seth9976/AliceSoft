// 函数: sub_653c40
// 地址: 0x653c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_2c
sub_6508f0(&var_2c, arg1, arg2)
int32_t var_4 = 0
int32_t eax_6 = sub_650b10(arg1, arg2)
float var_4c = fconvert.s(sub_6509a0(arg1, arg2))
float var_50 = fconvert.s(sub_650a00(arg1, arg2))
*(arg3 + 0x68) = 1
*(arg3 + 0x204) = eax_6
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x1e, 0x731d94)
var_4.b = 1
sub_405220(&var_48, arg4)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_70_4 = var_48.d
    sub_6b4d5b()

int32_t* eax_8 = var_2c
int32_t var_18

if (var_18 u< 0x10)
    eax_8 = &var_2c

int32_t* var_70_5 = eax_8
var_4.b = 2
sub_405150(sub_4104a0(0x731db4), arg4)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_70_7 = var_48.d
    sub_6b4d5b()

int32_t var_70_8 = eax_6
var_4.b = 3
sub_405150(sub_4104a0(0x731dcc), arg4)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_70_10 = var_48.d
    sub_6b4d5b()

var_4.b = 4
sub_405150(sub_4104a0(0x731de4), arg4)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_70_12 = var_48.d
    sub_6b4d5b()

var_4.b = 5
sub_405150(sub_4104a0(0x731dfc), arg4)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_70_14 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0
sub_401270(&var_48, 1, 0x731e14)
var_4.b = 6
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_405220(&var_48, arg4)

if (var_34_1 u>= 0x10)
    int32_t var_70_15 = var_48.d
    result = sub_6b4d5b()

if (var_18 u>= 0x10)
    int32_t* var_70_16 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
