// 函数: sub_654700
// 地址: 0x654700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* esi = arg2
char eax_7

if (esi s> 0)
    int32_t* var_74_1 = esi
    eax_7, arg1, arg2 = sub_418b70(data_797ddc + 0xa8, arg2, arg1)

void* var_58

if (esi s> 0 && eax_7 != 0)
    arg1 = esi
    void* eax_8
    eax_8, arg2 = sub_6833d0(arg1)
    var_58 = eax_8
else
    var_58 = nullptr

char eax_11

if (esi s> 0)
    int32_t* var_74_2 = esi
    eax_11 = sub_418b70(data_797ddc + 0xa8, arg2, arg1)

void* const var_54

if (esi s> 0 && eax_11 != 0)
    var_54 = sub_683430(esi)
else
    var_54 = nullptr

int32_t eax_13 = sub_650f70(esi, edi)
int32_t eax_14 = sub_650fd0(esi, edi)
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x17, 0x732028)
int32_t var_4 = 0
sub_405220(&var_48, arg3)
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_74_5 = var_48.d
    sub_6b4d5b()

void* var_74_6 = var_58
int32_t var_4_2 = 1
sub_405150(sub_4104a0(0x732040), arg3)
int32_t var_4_3 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_74_8 = var_48.d
    sub_6b4d5b()

void* const var_74_9 = var_54
int32_t var_4_4 = 2
sub_405150(sub_4104a0(0x732054), arg3)
int32_t var_4_5 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_74_11 = var_48.d
    sub_6b4d5b()

int32_t var_74_12 = eax_13
int32_t var_4_6 = 3
sub_405150(sub_4104a0(0x732068), arg3)
int32_t var_4_7 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_74_14 = var_48.d
    sub_6b4d5b()

int32_t var_74_15 = eax_14
int32_t var_4_8 = 4
int32_t* result = sub_405150(sub_4104a0(0x73207c), arg3)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_2c
    int32_t var_74_17 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
