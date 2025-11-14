// 函数: sub_6553a0
// 地址: 0x6553a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_13 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c558
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = arg1
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x11, 0x73226c)
int32_t var_4 = 0
sub_405220(&var_48, arg2)
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_1 = var_48.d
    sub_6b4d5b()

void* esi_1 = var_4c
int32_t var_64_2 = *(esi_1 + 0x2c)
int32_t var_4_2 = 1
sub_405150(sub_4104a0(0x732280), arg2)
int32_t var_4_3 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_4 = var_48.d
    sub_6b4d5b()

int32_t var_64_5 = *(esi_1 + 0x30)
int32_t var_4_4 = 2
sub_405150(sub_4104a0(0x732290), arg2)
int32_t var_4_5 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_64_7 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0
sub_401270(&var_48, 0xe, 0x7322a0)
int32_t var_4_6 = 3
sub_405220(&var_48, arg2)
int32_t var_4_7 = 0xffffffff

if (var_34_1 u>= 0x10)
    int32_t var_64_8 = var_48.d
    sub_6b4d5b()

int32_t var_34_2 = 0xf
int32_t var_38_2 = 0
var_48 = 0
sub_401270(&var_48, 0xe, 0x7322b0)
int32_t var_4_8 = 4
sub_405220(&var_48, arg2)
int32_t var_4_9 = 0xffffffff

if (var_34_2 u>= 0x10)
    int32_t var_64_9 = var_48.d
    sub_6b4d5b()

int32_t var_34_3 = 0xf
int32_t var_38_3 = 0
var_48 = 0
sub_401270(&var_48, 0xe, 0x7322c0)
int32_t var_4_10 = 5
sub_405220(&var_48, arg2)
int32_t var_4_11 = 0xffffffff

if (var_34_3 u>= 0x10)
    int32_t var_64_10 = var_48.d
    sub_6b4d5b()

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x10, 0x7322d0)
int32_t var_4_12 = 6
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_405220(&var_2c, arg2)

if (var_18 u>= 0x10)
    int32_t var_64_11 = var_2c.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
