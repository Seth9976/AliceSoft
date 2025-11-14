// 函数: sub_66c530
// 地址: 0x66c530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_727860
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_669750(arg1 + 8)
sub_401270(arg1 + 0x1c, nullptr, 0x72d42f)
sub_401270(arg1 + 0x38, nullptr, 0x72d457)
sub_401270(arg1 + 0x54, nullptr, 0x72d487)
int128_t* result_3 = nullptr
int32_t var_4c = 0
int32_t var_48 = 0
sub_404f60(arg3, &result_3)
int32_t var_c_1 = 0
sub_6c02a0(result_3, arg2, arg3, eax_4)
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_401270(&var_38, nullptr, 0x72d4f9)
var_c_1.b = 1
void var_3c
int128_t* result

if (sub_66bc80(arg1 + 8, &var_3c, &result_3) != 0)
    if (var_24 u>= 0x10)
        int32_t var_70_4 = var_38.d
        sub_6b4d5b()
    
    result = result_3
    int32_t var_24_2 = 0xf
    int32_t var_28_2 = 0
    var_38 = 0
    
    if (result != 0)
        int128_t* result_2 = result
        sub_6b4d5b()
    
    result.b = 1
else
    char* eax_9 = var_38.d
    
    if (var_24 u< 0x10)
        eax_9 = &var_38
    
    char* var_70_2 = eax_9
    sub_604c90(0x7305f0)
    
    if (var_24 u>= 0x10)
        int32_t var_70_3 = var_38.d
        sub_6b4d5b()
    
    result = result_3
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    var_38 = 0
    
    if (result != 0)
        int128_t* result_1 = result
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
