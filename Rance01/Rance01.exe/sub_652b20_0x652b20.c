// 函数: sub_652b20
// 地址: 0x652b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728d00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_2c
sub_6504c0(arg1, &var_2c, arg2)
int32_t var_4 = 0
int32_t eax_6 = sub_650b10(arg1, arg2)
int32_t eax_7 = sub_650610(arg1, arg2)
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
sub_401270(&var_64, nullptr, 0x72d63f)
var_4.b = 1
void* const var_88_3
void* edi_1

if (eax_7 u> 5)
    var_88_3 = &data_731ab4
    edi_1 = 6
else
    switch (eax_7)
        case 0
            var_88_3 = &data_731a50
            edi_1 = 4
        case 1
            var_88_3 = &data_731a58
            edi_1 = 8
        case 2
            var_88_3 = &data_731a64
            edi_1 = 8
        case 3
            var_88_3 = &data_731a70
            edi_1 = 0xa
        case 4
            var_88_3 = &data_731a7c
            edi_1 = 0x16
        case 5
            var_88_3 = &data_731a94
            edi_1 = 0x1c

sub_401270(&var_64, edi_1, var_88_3)
*(arg3 + 0x68) = 1
*(arg3 + 0x204) = eax_6
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x18, 0x731abc)
var_4.b = 2
sub_405220(&var_48, arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_88_4 = var_48.d
    sub_6b4d5b()

int32_t* eax_9 = var_2c
int32_t var_18

if (var_18 u< 0x10)
    eax_9 = &var_2c

int32_t* var_88_5 = eax_9
var_4.b = 3
sub_405150(sub_4104a0(0x731ad8), arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_88_7 = var_48.d
    sub_6b4d5b()

int32_t var_88_8 = eax_6
var_4.b = 4
sub_405150(sub_4104a0(0x731af0), arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_88_10 = var_48.d
    sub_6b4d5b()

char* eax_13 = var_64.d

if (var_50 u< 0x10)
    eax_13 = &var_64

char* var_88_11 = eax_13
var_4.b = 5
int32_t* result = sub_405150(sub_4104a0(0x731b08), arg4)

if (var_34 u>= 0x10)
    int32_t var_88_13 = var_48.d
    result = sub_6b4d5b()

if (var_50 u>= 0x10)
    int32_t var_88_14 = var_64.d
    result = sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54_1 = 0
var_64 = 0

if (var_18 u>= 0x10)
    int32_t* var_88_15 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
