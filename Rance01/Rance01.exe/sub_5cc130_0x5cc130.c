// 函数: sub_5cc130
// 地址: 0x5cc130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void arg_4
sub_42e070(arg2, &var_10, &arg_4)
int32_t* ecx_1 = var_10

if (ecx_1 != arg2[1])
    fsbase->NtTib.ExceptionList = ExceptionList
    return ecx_1[4]

int32_t* eax_5 = operator new(0x40)
var_10 = eax_5
char* result = nullptr
int32_t var_4 = 0

if (eax_5 != 0)
    result = sub_5cc2a0(eax_5)

int32_t var_4_1 = 0xffffffff
*sub_5cc1d0(arg2, &arg_4) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
