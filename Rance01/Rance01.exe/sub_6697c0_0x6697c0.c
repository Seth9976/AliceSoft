// 函数: sub_6697c0
// 地址: 0x6697c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* result_1 = arg1
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_2 = operator new(0x80)
result_1 = result_2
int32_t var_4 = 0
char* result_3

if (result_2 == 0)
    result_3 = nullptr
else
    result_3 = sub_668cd0(result_2)

int32_t var_4_1 = 0xffffffff
result_1 = result_3
sub_61b5a0(&result_1, arg1)
char* result = result_1
*(result + 4) = (arg1[1] - *arg1) s>> 2
fsbase->NtTib.ExceptionList = ExceptionList
return result
