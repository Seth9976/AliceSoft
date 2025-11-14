// 函数: sub_600db0
// 地址: 0x600db0
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
struct IInterface::partsengine::CFlatData::VTable** result
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_3
result, ecx_3 = sub_5f7370(*data_797da0, arg4)

if (result != 0)
    struct IInterface::partsengine::CFlatData::VTable** esi_3 = sub_5f3910(ecx_3, result, arg5)
    
    if (esi_3 != 0 && sub_431030(&var_2c, esi_3).b != 0)
        ebx = 1
        *(esi_3[0x10] + 0xf5) = 1

if (var_18 u>= 0x10)
    int32_t var_40_2 = var_2c.d
    sub_6b4d5b()

result.b = ebx
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
