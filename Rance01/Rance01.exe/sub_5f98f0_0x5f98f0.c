// 函数: sub_5f98f0
// 地址: 0x5f98f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710e16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSoundManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSoundManager::VTable** var_10_1 = arg1
*arg1 = &partsengine::CSoundManager::`vftable'
int32_t var_4 = 1
sub_5f9b30(&arg1[3])
sub_5f9b30(&arg1[7])
int32_t eax_3 = arg1[7]

if (eax_3 != 0)
    int32_t var_24_2 = eax_3
    sub_6b4d5b()

arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
int32_t result = arg1[3]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
