// 函数: sub_4d96d0
// 地址: 0x4d96d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10 = &arg1[2]
EnterCriticalSection(arg1[2])
char var_14 = 1
int32_t var_4 = 0
arg1[1] -= 1
int32_t result = arg1[1]

if (result != 0)
    LeaveCriticalSection(arg1[2])
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

char var_14_1 = 0
LeaveCriticalSection(arg1[2])
sub_4d9580(arg1)
struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** var_28_3 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return 0
