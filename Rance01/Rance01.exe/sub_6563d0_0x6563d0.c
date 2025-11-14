// 函数: sub_6563d0
// 地址: 0x6563d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = data_78c474 ^ &var_88
int32_t __saved_edi
int32_t var_9c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78
int32_t edx
sub_5e6a60(&var_78, edx, arg1)
int32_t ecx_1 = *(arg1 + 0x50)
int32_t edx_1 = *(arg1 + 0x54)
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x1b, 0x7325c8)
int32_t var_4 = 0
sub_405220(&var_48, arg2)
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_a0_1 = var_48.d
    sub_6b4d5b()

int32_t var_a0_2 = *(arg1 + 0x1c)
int32_t var_4_2 = 1
sub_405150(sub_4104a0(0x7325e4), arg2)
int32_t var_4_3 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_a0_4 = var_48.d
    sub_6b4d5b()

int32_t var_a0_5 = *(arg1 + 0x20)
int32_t var_4_4 = 2
sub_405150(sub_4104a0(0x7325f4), arg2)
int32_t var_4_5 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_a0_7 = var_48.d
    sub_6b4d5b()

void* eax_11 = arg1 + 0x88

if (*(eax_11 + 0x14) u>= 0x10)
    eax_11 = *eax_11

void* var_a0_8 = eax_11
int32_t var_4_6 = 3
sub_405150(sub_4104a0(0x732604), arg2)
int32_t var_4_7 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    char var_2c
    int32_t var_a0_10 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
char var_2c_1 = 0
int32_t var_74
int32_t var_70
int32_t var_68
float var_60
float var_5c
int32_t var_58
int32_t var_54
int32_t var_50
int32_t* result = sub_653810(arg2, var_74, var_70, var_68, fconvert.s(fconvert.t(var_60)), 
    fconvert.s(fconvert.t(var_5c)), var_58, var_54, var_50, ecx_1, edx_1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_88)
return result
