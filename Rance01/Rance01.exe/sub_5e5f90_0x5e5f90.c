// 函数: sub_5e5f90
// 地址: 0x5e5f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71731a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t ecx = arg2[1]
int32_t eax_3

if (esi u< ecx)
    eax_3 = *arg2

struct partsengine::CConstructionSpriteData::VTable** result

if (esi u>= ecx || eax_3 u> esi)
    if (ecx == arg2[2])
        sub_5e60a0(arg2)
    
    result = arg2[1]
    int32_t var_4_1 = 1
else
    if (ecx == arg2[2])
        sub_5e60a0(arg2)
    
    result = arg2[1]
    esi = (esi - eax_3) s/ 0xc4 * 0xc4 + *arg2
    int32_t var_4 = 0

if (result != 0)
    result = sub_5e5e40(result, esi)

arg2[1] += 0xc4
fsbase->NtTib.ExceptionList = ExceptionList
return result
