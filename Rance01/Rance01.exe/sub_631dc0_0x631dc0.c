// 函数: sub_631dc0
// 地址: 0x631dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718efd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &cgmanager::CCGManager::`vftable'
int32_t var_4 = 0
int32_t* ecx = arg1[8]
arg1[0x12].b = 0

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[8] = 0

int32_t* ecx_1 = arg1[5]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[5] = 0

int32_t* ecx_2 = arg1[6]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[6] = 0

int32_t* ecx_3 = arg1[7]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    arg1[7] = 0

int32_t* ecx_4 = arg1[4]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))(eax_2)
    arg1[4] = 0

int32_t var_4_1 = 0xffffffff
int32_t result = sub_632770(&arg1[9])
fsbase->NtTib.ExceptionList = ExceptionList
return result
