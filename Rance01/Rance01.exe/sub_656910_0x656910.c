// 函数: sub_656910
// 地址: 0x656910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_15 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c3c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
sub_401270(&var_48, 0x11, 0x7326d0)
int32_t var_4 = 0
sub_405220(&var_48, arg2)
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_1 = var_48.d
    sub_6b4d5b()

int32_t var_60_2 = *(arg1 + 0x1c)
int32_t var_4_2 = 1
sub_405150(sub_4104a0(0x7326e4), arg2)
int32_t var_4_3 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_4 = var_48.d
    sub_6b4d5b()

int32_t var_60_5 = *(arg1 + 0x20)
int32_t var_4_4 = 2
sub_405150(sub_4104a0(0x7326f4), arg2)
int32_t var_4_5 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_7 = var_48.d
    sub_6b4d5b()

int32_t var_60_8 = *(arg1 + 0x2c)
int32_t var_4_6 = 3
sub_405150(sub_4104a0(0x732704), arg2)
int32_t var_4_7 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_10 = var_48.d
    sub_6b4d5b()

int32_t var_60_11 = *(arg1 + 0x30)
int32_t var_4_8 = 4
sub_405150(sub_4104a0(0x732714), arg2)
int32_t var_4_9 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_13 = var_48.d
    sub_6b4d5b()

int32_t var_60_14 = *(arg1 + 0x34)
int32_t var_4_10 = 5
sub_405150(sub_4104a0(0x732724), arg2)
int32_t var_4_11 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_16 = var_48.d
    sub_6b4d5b()

int32_t var_60_17 = *(arg1 + 0x38)
int32_t var_4_12 = 6
sub_405150(sub_4104a0(0x732734), arg2)
int32_t var_4_13 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_19 = var_48.d
    sub_6b4d5b()

int32_t var_60_20 = *(arg1 + 0x3c)
int32_t var_4_14 = 7
int32_t* result = sub_405150(sub_4104a0(0x732744), arg2)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_2c
    int32_t var_60_22 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
