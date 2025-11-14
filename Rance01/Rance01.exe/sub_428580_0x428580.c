// 函数: sub_428580
// 地址: 0x428580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b639
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatData::VTable** ebx = arg1
*ebx = &partsengine::CFlatData::`vftable'{for `IInterface'}
int32_t var_4 = 4
sub_4286c0(ebx)
void* var_14 = &ebx[0x1a]
var_4.b = 5
int32_t* eax_3 = ebx[0x1b]
void* var_10
sub_429bc0(&ebx[0x1a], &var_10, *eax_3, eax_3)
int32_t var_28_1 = ebx[0x1b]
sub_6b4d5b()
var_10 = &ebx[0x16]
var_4.b = 6
int32_t* eax_4 = ebx[0x17]
sub_429bc0(&ebx[0x16], &var_14, *eax_4, eax_4)
int32_t var_28_3 = ebx[0x17]
sub_6b4d5b()
var_10 = &ebx[0x12]
var_4.b = 7
int32_t* eax_5 = ebx[0x13]
sub_429bc0(&ebx[0x12], &var_14, *eax_5, eax_5)
int32_t var_28_5 = ebx[0x13]
sub_6b4d5b()
var_10 = &ebx[0xe]
var_4.b = 8
int32_t* eax_6 = ebx[0xf]
sub_429bc0(&ebx[0xe], &var_14, *eax_6, eax_6)
int32_t var_28_7 = ebx[0xf]
sub_6b4d5b()
arg1 = &ebx[0xa]
int32_t var_4_1 = 9
int32_t* eax_7 = ebx[0xb]
sub_429bc0(&ebx[0xa], &var_10, *eax_7, eax_7)
int32_t var_28_9 = ebx[0xb]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
