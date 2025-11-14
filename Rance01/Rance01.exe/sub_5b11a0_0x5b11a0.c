// 函数: sub_5b11a0
// 地址: 0x5b11a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71424b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &decodecg::CCGSurface::`vftable'{for `ICGSurface'}
int32_t var_4 = 0
int32_t* ecx = arg1[4]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[4] = 0

CRITICAL_SECTION* lpCriticalSection = arg1[2]
arg1[1] = &thread::CRefCounter::`vftable'

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    sub_6b4d5b()

struct ICGSurface::decodecg::CCGSurface::VTable** var_1c_2 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
