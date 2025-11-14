// 函数: sub_59cfe0
// 地址: 0x59cfe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719d83
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &xxi::CApp2::`vftable'{for `IXXILoader'}
int32_t var_4 = 0
void* var_14 = &arg1[9]
var_4.b = 1
int32_t* eax_3 = arg1[0xa]
void var_10
sub_429bc0(&arg1[9], &var_10, *eax_3, eax_3)
int32_t var_2c_1 = arg1[0xa]
sub_6b4d5b()
void* result = arg1[5]

if (result != 0)
    int32_t edx_1 = arg1[6]
    struct IXXILoader::xxi::CApp2::VTable** var_2c_2 = arg1
    int32_t var_30_1 = edx_1
    sub_59cce0(result, edx_1)
    int32_t var_34_1 = arg1[5]
    result = sub_6b4d5b()

arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
