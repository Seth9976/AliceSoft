// 函数: sub_408e50
// 地址: 0x408e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = data_797d2c
char* eax_5 = arg1
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(&var_2c, eax_5 - &eax_5[1], arg1)
int32_t var_4 = 0
sub_402cb0(&var_2c, 0x757914, 1)
void* eax_8 = *(ebp + 0x38)

if (*(eax_8 + 8) != 0)
    int32_t* eax_12 = (*(**(eax_8 + 8) + 0x10))(0x757fb4)
    char* ecx_1 = var_2c.d
    
    if (var_18 u< 0x10)
        ecx_1 = &var_2c
    
    (**eax_12)(ecx_1)
else
    char* eax_9 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_9 = &var_2c
    
    sub_604c90(eax_9)

if (var_18 u>= 0x10)
    int32_t var_40_3 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return 0
