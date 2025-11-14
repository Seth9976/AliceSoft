// 函数: sub_654d60
// 地址: 0x654d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7289b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_2c
int32_t* ecx_1
int32_t edx
ecx_1, edx = sub_6512e0(&var_2c, arg1, arg2)
int32_t var_4 = 0
char eax_8

if (arg1 s> 0)
    int32_t* var_74_1 = arg1
    eax_8, ecx_1, edx = sub_418b70(data_797ddc + 0xa8, edx, nullptr)

void* var_58

if (arg1 s> 0 && eax_8 != 0)
    ecx_1 = arg1
    void* eax_9
    eax_9, edx = sub_6833d0(ecx_1)
    var_58 = eax_9
else
    var_58 = nullptr

char eax_12

if (arg1 s> 0)
    int32_t* var_74_2 = arg1
    eax_12 = sub_418b70(data_797ddc + 0xa8, edx, ecx_1)

void* const var_54

if (arg1 s> 0 && eax_12 != 0)
    var_54 = sub_683430(arg1)
else
    var_54 = nullptr

int32_t eax_14 = sub_651390(arg1, arg2)
int32_t eax_15 = sub_6513f0(arg1, arg2)
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x17, 0x7320ec)
var_4.b = 1
sub_405220(&var_48, arg3)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_74_5 = var_48.d
    sub_6b4d5b()

int32_t* eax_17 = var_2c
int32_t var_18

if (var_18 u< 0x10)
    eax_17 = &var_2c

int32_t* var_74_6 = eax_17
var_4.b = 2
sub_405150(sub_4104a0(0x732104), arg3)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_74_8 = var_48.d
    sub_6b4d5b()

void* var_74_9 = var_58
var_4.b = 3
sub_405150(sub_4104a0(0x732118), arg3)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_74_11 = var_48.d
    sub_6b4d5b()

void* const var_74_12 = var_54
var_4.b = 4
sub_405150(sub_4104a0(0x73212c), arg3)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_74_14 = var_48.d
    sub_6b4d5b()

int32_t var_74_15 = eax_14
var_4.b = 5
sub_405150(sub_4104a0(0x732140), arg3)
var_4.b = 0

if (var_34 u>= 0x10)
    int32_t var_74_17 = var_48.d
    sub_6b4d5b()

int32_t var_74_18 = eax_15
var_4.b = 6
int32_t* result = sub_405150(sub_4104a0(0x732154), arg3)

if (var_34 u>= 0x10)
    int32_t var_74_20 = var_48.d
    result = sub_6b4d5b()

if (var_18 u>= 0x10)
    int32_t* var_74_21 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
