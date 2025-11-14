// 函数: sub_402f40
// 地址: 0x402f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bafe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IAFAFile::afafactory::CAFAFile::VTable** var_18 = arg1
*arg1 = &afafactory::CAFAFile::`vftable'{for `IAFAFile'}
int32_t var_4 = 0
int32_t* eax_3 = arg1[0x25]

if (eax_3 != 0)
    sub_405780(eax_3, arg1[0x26])
    int32_t var_30_1 = arg1[0x25]
    sub_6b4d5b()

arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 0
int32_t* eax_5 = arg1[0x21]

if (eax_5 != 0)
    sub_405780(eax_5, arg1[0x22])
    int32_t var_30_2 = arg1[0x21]
    sub_6b4d5b()

arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x23] = 0
void* var_14 = &arg1[0x1d]
var_4.b = 2
int32_t** eax_7 = arg1[0x1e]
void var_10
sub_405510(&arg1[0x1d], &var_10, *eax_7, eax_7)
int32_t var_30_4 = arg1[0x1e]
int32_t result = sub_6b4d5b()

if (arg1[0xd] u>= 0x10)
    int32_t var_30_5 = arg1[8]
    result = sub_6b4d5b()

arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0

if (arg1[6] u>= 0x10)
    int32_t var_30_6 = arg1[1]
    result = sub_6b4d5b()

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
