// 函数: sub_5d6a20
// 地址: 0x5d6a20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = arg4
char* eax_6 = arg1
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *eax_6
    eax_6 = &eax_6[1]
while (i != 0)
sub_401270(&var_2c, eax_6 - &eax_6[1], arg1)
int32_t var_48_1 = arg2
int32_t var_4 = 0
int32_t eax_8 = sub_5d6870(&var_2c)
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_48_2 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
struct ISoundData::kiwi::CSoundDataWav::VTable** result_1

if (eax_8 == 0)
    result_1 = operator new(0x3c)
    
    if (result_1 == 0)
        result_1 = nullptr
    else
        *result_1 = &kiwi::CSoundDataWav::`vftable'{for `ISoundData'}
        result_1[1] = 1
        result_1[2] = 0xffffffff
        result_1[3] = 0
        result_1[4] = 0
        result_1[5] = 0
        result_1[6] = 0xffffffff
        result_1[7] = 0
        result_1[8] = 0xffffffff
        result_1[0xe] = 0
        __builtin_memset(&result_1[9], 0, 0x12)
    
    goto label_5d6b27

struct ISoundData::kiwi::CSoundDataWav::VTable** result

if (eax_8 != 1)
    result = nullptr
else
    result_1 = sub_5b4a00(0x736930)
label_5d6b27:
    
    if (result_1 == 0)
        result = nullptr
    else if ((*result_1)->vFunc_2(arg1, arg2, arg3) != 0)
        int32_t eax_13 = var_30
        
        if (eax_13 == 0)
            (*result_1)->vFunc_1(eax_4)
            result = nullptr
        else if ((*result_1)->vFunc_7(eax_13) == 0)
            (*result_1)->vFunc_1(eax_4)
            result = nullptr
        else
            result = result_1
    else
        (*result_1)->vFunc_1(eax_4)
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
