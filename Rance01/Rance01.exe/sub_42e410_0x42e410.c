// 函数: sub_42e410
// 地址: 0x42e410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724e8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatSpriteView::`vftable'{for `IInterface'}
int32_t var_4 = 0
sub_42e580(arg1)
int32_t eax_3 = arg1[7]

if (eax_3 != 0)
    int32_t var_1c_1 = eax_3
    sub_6b4d5b()

struct IInterface::partsengine::CFlatSpriteView::VTable** var_1c_2 = arg1
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
