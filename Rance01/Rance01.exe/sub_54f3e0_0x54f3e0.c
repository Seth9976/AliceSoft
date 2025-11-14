// 函数: sub_54f3e0
// 地址: 0x54f3e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710d16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    *(arg1 + 8) = 0

int32_t* ecx_1 = *(arg1 + 4)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 4) = 0

var_4.b = 0
int32_t* ecx_2 = *(arg1 + 8)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))(eax_2)
    *(arg1 + 8) = 0

int32_t var_4_1 = 0xffffffff
int32_t* ecx_3 = *(arg1 + 4)

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))(eax_2)
    *(arg1 + 4) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
