// 函数: sub_516710
// 地址: 0x516710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714891
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CSkeleton::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CSkeleton::VTable** var_10_1 = arg1
*arg1 = &sealengine::CSkeleton::`vftable'
int32_t var_4 = 2
sub_5169c0(arg1)

if (arg1[0x15] u>= 0x10)
    int32_t var_1c_1 = arg1[0x10]
    sub_6b4d5b()

arg1[0x14] = 0
arg1[0x15] = 0xf
arg1[0x10].b = 0
var_4.b = 0
arg1[0xb] = &sealengine::CBoneCollisionShapeList::`vftable'
sub_4b52e0(&arg1[0xc])
int32_t var_4_1 = 0xffffffff
int32_t result = sub_4b5820(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
