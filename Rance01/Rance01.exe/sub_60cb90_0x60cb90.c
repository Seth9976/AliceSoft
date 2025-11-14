// 函数: sub_60cb90
// 地址: 0x60cb90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
char* lParam

if (arg2 == 1)
    sub_401270(&var_2c, 0xe, 0x73527c)
    SendMessageA(arg1, 0x466, 1, arg3)
label_60cc3e:
    lParam = var_2c.d
    
    if (var_18 u< 0x10)
        lParam = &var_2c
else
    if (arg2 == 2)
        sub_401270(&var_2c, 0x14, 0x73528c)
        goto label_60cc3e
    
    if (arg2 == 3)
        sub_401270(&var_2c, arg2 + 0xb, 0x7352a4)
        goto label_60cc3e
    
    lParam = &var_2c

SendMessageA(arg1, 0x464, 0, lParam)

if (var_18 u>= 0x10)
    int32_t var_44_3 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return 0
