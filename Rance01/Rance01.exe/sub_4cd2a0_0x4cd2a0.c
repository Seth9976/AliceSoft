// 函数: sub_4cd2a0
// 地址: 0x4cd2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717c68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CMesh::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 1
long double x87_r7 = float.t(0)
arg1[0x3c] = fconvert.s(x87_r7)
arg1[0x3d] = fconvert.s(x87_r7)
arg1[0x1f].b = 0
sub_4be9f0(&arg1[0xa])
arg1[1] = 0
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0
void* eax_3

if (cond:0)
    eax_3 = &arg1[2]
else
    eax_3 = arg1[2]

*eax_3 = 0
var_4.b = 0
int32_t result = sub_4be850(&arg1[0xa])

if (arg1[7] u>= 0x10)
    int32_t var_20_1 = arg1[2]
    result = sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
