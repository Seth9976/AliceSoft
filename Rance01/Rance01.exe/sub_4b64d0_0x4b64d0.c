// 函数: sub_4b64d0
// 地址: 0x4b64d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710d83
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
int32_t* ecx = arg1[0xf]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[0xf] = 0

int32_t* ecx_1 = arg1[6]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[6] = 0

arg1[0xe].b = 0
int32_t* ecx_2 = *arg1

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))(eax_2)
    *arg1 = 0

arg1[1] = 0
arg1[2] = 0
arg1[3].b = 0
arg1[4] = 0
arg1[5].b = 0
var_4.b = 0
int32_t* ecx_3 = arg1[6]

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))(eax_2)
    arg1[6] = 0

arg1[0xe].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_4 = *arg1

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))(eax_2)
    *arg1 = 0

arg1[1] = 0
arg1[2] = 0
arg1[3].b = 0
arg1[4] = 0
arg1[5].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
