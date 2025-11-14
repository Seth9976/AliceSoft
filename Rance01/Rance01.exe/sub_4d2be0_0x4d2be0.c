// 函数: sub_4d2be0
// 地址: 0x4d2be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717b18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_6 = sub_4d3aa0(arg1, arg2)
char eax_8

if (eax_6 != arg1[1])
    eax_8 = sub_405dd0(&eax_6[3], arg2)

void* result

if (eax_6 != arg1[1] && eax_8 == 0)
    result = &eax_6[0xa]
else
    int32_t var_50 = 0
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    int32_t var_4 = 0
    int32_t var_30_1 = 0
    char var_40 = 0
    int32_t var_2c_1 = 0xf
    sub_401180(&var_40, 0xffffffff, arg2, 0)
    var_4.b = 1
    void var_24
    sub_4d3ed0(&var_24, &var_50)
    var_4.b = 2
    void* var_54
    sub_4d51f0(arg1, &var_54, eax_6, sub_4d6910(arg1, &var_40))
    void* edi_1 = var_54
    sub_4d32a0(&var_24)
    
    if (var_2c_1 u>= 0x10)
        int32_t var_6c_4 = var_40.d
        sub_6b4d5b()
    
    result = edi_1 + 0x28

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
