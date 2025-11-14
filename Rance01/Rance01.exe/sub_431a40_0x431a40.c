// 函数: sub_431a40
// 地址: 0x431a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72075b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_1c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r7 = fconvert.t(30f)
*arg1 = &partsengine::CFlatView::`vftable'{for `partsengine::IFlatGraphicLayer'}
arg1[1] = 1
arg1[2] = 0
arg1[3] = 0f
__builtin_memset(&arg1[4], 0, 0x3c)
sub_5f7cc0(&arg1[3], 0x400, 0x300, fconvert.s(fconvert.t(10f)), fconvert.s(x87_r7), 
    fconvert.s(x87_r7))
long double x87_r7_2 = float.t(1)
arg1[0x26] = fconvert.s(x87_r7_2)
arg1[0x27] = fconvert.s(x87_r7_2)
long double x87_r7_3 = float.t(0)
arg1[0x1d] = arg2
arg1[0x2c] = fconvert.s(x87_r7_3)
arg1[0x2d] = fconvert.s(x87_r7_3)
arg1[0x20] = arg5
arg1[0x2e] = fconvert.s(x87_r7_3)
arg1[0x1c] = 0
arg1[0x1e] = arg3
arg1[0x1f] = arg4
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x24] = 0
arg1[0x25].b = 1
arg1[0x28] = 0
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31].w = 0
arg1[0x32] = 0xff
arg1[0x33] = 0xff
arg1[0x34] = 0xff
arg1[0x35] = 0
arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x39] = 0xff
arg1[0x3a] = 0
arg1[0x3b] = 0
arg1[0x3c] = 0
arg1[0x3d].w = 1
*(arg1 + 0xf6) = 0
struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable** eax_5 = operator new(0x7c)
arg2 = eax_5
int32_t var_4 = 0

if (eax_5 == 0)
    arg1[0x21] = 0
else
    arg1[0x21] = sub_4307f0(eax_5)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
