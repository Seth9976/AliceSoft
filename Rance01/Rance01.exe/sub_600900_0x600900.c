// 函数: sub_600900
// 地址: 0x600900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t edi
int32_t var_38 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* eax_6 = (**arg3)(data_78c474 ^ &var_38)
char ebx = 0
char* ecx = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_2c, ecx - &ecx[1], eax_6)
int32_t var_4 = 0
int128_t* result
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** ecx_3
result, ecx_3 = sub_5f7370(*data_797da0, arg4)

if (result != 0)
    result = sub_5f3610(ecx_3, result, arg5)
    
    if (result != 0)
        sub_5f0c20(result, &var_2c)
        ebx = 1

if (var_18 u>= 0x10)
    int32_t var_40_2 = var_2c.d
    sub_6b4d5b()

result.b = ebx
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
