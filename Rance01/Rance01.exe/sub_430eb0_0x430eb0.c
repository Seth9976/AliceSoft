// 函数: sub_430eb0
// 地址: 0x430eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720796
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = &partsengine::CFlatSprite::`vftable'{for `partsengine::CSprite'}
arg2[1] = 1
arg2[7] = 0xf
arg2[6] = 0
arg2[2].b = 0
sub_401180(&arg2[2], 0xffffffff, &data_7933e4, 0)
int32_t var_4 = 0
arg2[9] = arg1
arg2[0xa].b = 1
arg2[0xb] = 0
arg2[0xc] = 0
arg2[0xd] = 0
arg2[0xe] = 0
arg2[0xf] = arg6
struct partsengine::IFlatGraphicLayer::partsengine::CFlatView::VTable** eax_4 = operator new(0xf8)
arg6 = eax_4
var_4.b = 1

if (eax_4 == 0)
    arg2[0x10] = 0
else
    arg2[0x10] = sub_431a40(eax_4, arg1, arg3, arg4, arg5)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
