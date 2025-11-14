// 函数: sub_5f7120
// 地址: 0x5f7120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_14
int32_t var_18 = data_78c474 ^ &var_14
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CParts::VTable** eax_3 = operator new(0xc4)
struct IInterface::partsengine::CParts::VTable** var_10 = eax_3
int32_t var_4 = 0

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t result
int80_t st0
st0, result = sub_5f2510(eax_3, arg2, *(arg1 + 0x24), *(arg1 + 0x28), *(arg1 + 0x2c), 
    *(arg1 + 0x30), *(arg1 + 0x34), *(arg1 + 0x38), arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
