// 函数: sub_597840
// 地址: 0x597840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_797d64

if (ecx_1 != 0)
    int32_t __saved_edi
    (*(*ecx_1 + 4))(data_78c474 ^ &__saved_edi)
    data_797d64 = 0

struct ISurfaceFactory::surfacefactory::CSurfaceFactory::VTable** eax_4 = operator new(0xc)
struct ISurfaceFactory::surfacefactory::CSurfaceFactory::VTable** var_10_1 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    data_797d64 = 0
    int32_t eax_6
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

*eax_4 = &surfacefactory::CSurfaceFactory::`vftable'{for `ISurfaceFactory'}
eax_4[1] = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    eax_4[2] = 0
    data_797d64 = eax_4
    lpCriticalSection.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return lpCriticalSection

InitializeCriticalSection(lpCriticalSection)
eax_4[2] = lpCriticalSection
data_797d64 = eax_4
int32_t eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
