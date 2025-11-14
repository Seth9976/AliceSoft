// 函数: sub_633ab0
// 地址: 0x633ab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_797dd0

if (ecx_1 != 0)
    int32_t __saved_esi
    (*(*ecx_1 + 8))(data_78c474 ^ &__saved_esi)
    data_797dd0 = 0

struct cgmanager::CCGManager::VTable** eax_4 = operator new(0x4c)
struct cgmanager::CCGManager::VTable** var_10_1 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    data_797dd0 = 0
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

*eax_4 = &cgmanager::CCGManager::`vftable'
eax_4[1] = 0x1000000
eax_4[2] = 1
eax_4[3].b = 0
__builtin_memset(&eax_4[4], 0, 0x14)
sub_632670(&eax_4[9])
eax_4[0x12].b = 0
data_797dd0 = eax_4
char* eax_6
eax_6.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
