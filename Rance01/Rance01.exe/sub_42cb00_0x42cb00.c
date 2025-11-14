// 函数: sub_42cb00
// 地址: 0x42cb00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71364b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t* ecx = *arg1

if (ecx != 0)
    int32_t __saved_esi
    result = (*(*ecx + 4))(data_78c474 ^ &__saved_esi)
    *arg1 = 0

if (arg1[7] u>= 0x10)
    int32_t var_18_1 = arg1[2]
    result = sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
