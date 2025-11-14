// 函数: sub_4c5180
// 地址: 0x4c5180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b2e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = *(arg2 + 8) - 1
int32_t ebx

if (result u> 7)
    result.b = 0
else
    switch (result)
        case nullptr, 1
            if (*(arg2 + 0x298) == 0)
                result.b = 0
            else
                int32_t* eax_6 = sub_50c070(arg1, &var_48)
                int32_t var_4 = 0
                ebx.b = sub_50d0c0(*(arg2 + 0x298), eax_6)
                sub_401110(&var_48)
                result.b = ebx.b
        case 2, 4, 5, 6
            result.b = 0
        case 3
            result = *(arg2 + 0x298)
            
            if (result == 0)
                result.b = 0
            else
                result = sub_50d0c0(result, arg1)
        case 7
            if (*(arg2 + 0x298) == 0)
                result.b = 0
            else
                void var_2c
                int32_t* eax_9 = sub_50ceb0(arg1, &var_2c)
                int32_t var_4_1 = 1
                ebx.b = sub_50d0c0(*(arg2 + 0x298), eax_9)
                sub_401110(&var_2c)
                result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
