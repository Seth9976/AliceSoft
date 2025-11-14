// 函数: sub_657030
// 地址: 0x657030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_11 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bfe0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_5 = *(arg1 + 0xc0)
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
char* esi = &var_48

if (eax_5 == 0)
    sub_401270(esi, 0x19, 0x7328c4)
    int32_t var_4_2 = 1
    sub_405220(&var_48, arg2)
    int32_t var_4_3 = 0xffffffff
    
    if (var_34 u>= 0x10)
        int32_t var_60_2 = var_48.d
        sub_6b4d5b()
else
    sub_401270(esi, 0x1b, 0x7328a8)
    int32_t var_4 = 0
    sub_405220(&var_48, arg2)
    int32_t var_4_1 = 0xffffffff
    
    if (var_34 u>= 0x10)
        int32_t var_60_1 = var_48.d
        sub_6b4d5b()

int32_t var_60_3 = *(arg1 + 0x1c)
int32_t var_4_4 = 2
sub_405150(sub_4104a0(0x7328e0), arg2)
int32_t var_4_5 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_5 = var_48.d
    sub_6b4d5b()

int32_t var_60_6 = *(arg1 + 0x20)
int32_t var_4_6 = 3
sub_405150(sub_4104a0(0x7328f4), arg2)
int32_t var_4_7 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_8 = var_48.d
    sub_6b4d5b()

int32_t var_60_9 = *(arg1 + 0x2c)
int32_t var_4_8 = 4
sub_405150(sub_4104a0(0x732908), arg2)
int32_t var_4_9 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_60_11 = var_48.d
    sub_6b4d5b()

int32_t var_60_12 = *(arg1 + 0x30)
int32_t var_4_10 = 5
int32_t* result = sub_405150(sub_4104a0(0x73291c), arg2)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_2c
    int32_t var_60_14 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
