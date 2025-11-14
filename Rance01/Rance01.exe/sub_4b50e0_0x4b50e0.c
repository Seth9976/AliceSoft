// 函数: sub_4b50e0
// 地址: 0x4b50e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71731a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
int32_t eax_3

if (arg1 u< ecx)
    eax_3 = *arg2

struct sealengine::CBoneCollisionShape::VTable** result

if (arg1 u>= ecx || eax_3 u> arg1)
    if (ecx == arg2[2])
        sub_4b5260(arg2)
    
    result = arg2[1]
    int32_t var_4_1 = 1
    
    if (result != 0)
        result = sub_4b5530(result, arg1)
else
    if (ecx == arg2[2])
        sub_4b5260(arg2)
    
    result = arg2[1]
    int32_t var_4 = 0
    
    if (result != 0)
        result = sub_4b5530(result, *arg2 + (arg1 - eax_3) s/ 0x3c * 0x3c)

arg2[1] += 0x3c
fsbase->NtTib.ExceptionList = ExceptionList
return result
