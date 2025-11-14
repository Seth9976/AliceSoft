// 函数: sub_697b10
// 地址: 0x697b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_720d28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_3c =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_401180(&var_38, 0xffffffff, arg2, 0)
int32_t var_c_1 = 0
int32_t** eax_6 = data_797d8c
int32_t* result

if (*eax_6 != 0)
    result = sub_5636d0(var_3c->data(0, eax_4), *eax_6, arg1)
else
    result = sub_597300(0x737314)
    
    if (result != 0)
        result = (**result)(0x737324)
        *eax_6 = result
        
        if (result != 0)
            result = sub_5636d0(var_3c->data(0, eax_4), *eax_6, arg1)

struct IString::common::CStringWrapper::VTable* const var_3c_1 =
    &common::CStringWrapper::`vftable'{for `IString'}

if (var_24 u>= 0x10)
    int32_t var_50_1 = var_38.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
