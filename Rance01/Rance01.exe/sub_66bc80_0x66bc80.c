// 函数: sub_66bc80
// 地址: 0x66bc80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72721a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char var_48
char* esi = &var_48
var_58 = arg1
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
sub_401270(esi, nullptr, 0x72d35a)
void* var_2c = nullptr
void* var_28 = nullptr
int32_t var_24 = 0
int32_t var_1c = 0
int32_t var_14 = arg2 + 4
int32_t var_4 = 0
int32_t edx = sub_401270(esi, nullptr, 0x72d35b)
int32_t var_1c_1 = 0

if (var_2c != var_28)
    int32_t* eax_7 = sub_66fbe0(var_2c, edx, var_28, var_28)
    sub_668ba0(eax_7, var_28)
    int32_t* var_28_1 = eax_7

sub_401270(&var_48, nullptr, 0x72d373)
sub_670110(&var_48, arg3)
int32_t* result

if (sub_671560(&var_48) != 0)
    if (sub_671730(&var_48) != 0)
        int32_t* esi_3 = var_58
        int32_t var_4c_1 = arg2 + 4
        void var_50
        
        if (sub_663610(&var_48, &var_50, esi_3) == 0)
            goto label_66bd5f
        
        int32_t var_4_3 = 0xffffffff
        
        if (sub_6698f0(esi_3) != 0)
            sub_66ff30(&var_48)
            result.b = 0
        else
            sub_66ff30(&var_48)
            result.b = 1
    else
        int32_t var_4_2 = 0xffffffff
        sub_66ff30(&var_48)
        result.b = 0
else
label_66bd5f:
    int32_t var_4_1 = 0xffffffff
    sub_66ff30(&var_48)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
