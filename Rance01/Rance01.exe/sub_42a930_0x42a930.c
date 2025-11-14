// 函数: sub_42a930
// 地址: 0x42a930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715596
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatEmitterView::`vftable'{for `partsengine::IFlatGraphicLayer'}
int32_t var_4 = 1
sub_42aa80(arg1)
int32_t eax_3 = arg1[0x11]

if (eax_3 != 0)
    int32_t var_1c_1 = eax_3
    sub_6b4d5b()

arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0
int32_t eax_4 = arg1[9]

if (eax_4 != 0)
    int32_t var_1c_2 = eax_4
    sub_6b4d5b()

struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** var_1c_3 = arg1
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
