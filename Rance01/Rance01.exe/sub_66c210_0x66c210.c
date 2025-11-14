// 函数: sub_66c210
// 地址: 0x66c210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7278a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_669750(arg1 + 8)
sub_401270(arg1 + 0x1c, nullptr, 0x72d3d7)
char* eax_5 = arg2
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(arg1 + 0x38, eax_5 - &eax_5[1], arg2)
sub_401270(arg1 + 0x54, nullptr, 0x72d40b)
int32_t var_40 = 0xf
int32_t var_44 = 0
char var_54 = 0
sub_401270(&var_54, nullptr, 0x72d4f9)
int32_t var_c_1 = 0
int32_t var_28 = 0
char var_38 = 0
int128_t* eax_7 = arg2
int32_t var_24 = 0xf
void* esi_7 = eax_7 + 1
char i_1

do
    i_1 = *eax_7
    eax_7 += 1
while (i_1 != 0)
sub_401270(&var_38, eax_7 - esi_7, arg2)
var_c_1.b = 1
void var_58
bool cond:0 = sub_66b790(arg1 + 8, &var_58, &var_38) == 0
var_c_1.b = 0

if (var_24 u>= 0x10)
    int32_t var_78_3 = var_38.d
    sub_6b4d5b()

char result

if (cond:0 == 0)
    if (var_40 u>= 0x10)
        int32_t var_78_6 = var_54.d
        sub_6b4d5b()
    
    result = 1
else
    char* eax_9 = var_54.d
    
    if (var_40 u< 0x10)
        eax_9 = &var_54
    
    char* var_78_4 = eax_9
    int128_t* var_7c_1 = arg2
    sub_604c90(0x730550)
    
    if (var_40 u>= 0x10)
        int32_t var_78_5 = var_54.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
