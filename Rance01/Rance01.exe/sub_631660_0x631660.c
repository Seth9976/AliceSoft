// 函数: sub_631660
// 地址: 0x631660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713c5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &cgmanager::CCGCache::`vftable'{for `IInterface'}
int32_t var_4 = 0
int32_t* edi = arg1[4]

for (void** i = *edi; i != edi; i = *i)
    (*(*i[9] + 4))(eax_2)

sub_631a60(&arg1[4])
int32_t var_20_1 = arg1[4]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
