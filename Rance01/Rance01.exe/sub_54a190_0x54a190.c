// 函数: sub_54a190
// 地址: 0x54a190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (*(**(arg1 + 0x38) + 0xc))(data_78c474 ^ &__saved_edi)
char* ecx_1 = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
int32_t var_4 = 0
int32_t* result
int32_t edx_2
result, edx_2 = sub_552d50(arg1 + 0x1dc, &var_2c, &var_30)

if (result.b != 0)
    **(arg1 + 0x2b0) = var_30
    *(arg1 + 0x2b0) += 4
    
    if (var_18 u>= 0x10)
        int32_t var_48_3 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1
else
    char ebx_1 = sub_53d1c0(result, edx_2, arg1, 0x7507d0).b
    
    if (var_18 u>= 0x10)
        int32_t var_48_2 = var_2c.d
        sub_6b4d5b()
    
    result.b = ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
