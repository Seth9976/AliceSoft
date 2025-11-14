// 函数: sub_50d1a0
// 地址: 0x50d1a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7173b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CResourceCacheManager<class sealengine::CPolyData>::`vftable'
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg1[1] = lpCriticalSection
int32_t var_4 = 0
arg1[4] = 0
int32_t* eax_4 = operator new(0x30)

if (eax_4 == 0)
    int32_t var_28 = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_28)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

arg1[3] = eax_4
*eax_4 = eax_4
void* eax_5 = arg1[3]
*(eax_5 + 4) = eax_5
void* eax_6 = arg1[3]
*(eax_6 + 8) = eax_6
arg1[3][0xb].vFunc_0.b = 1
*(arg1[3] + 0x2d) = 1
var_4.b = 1
arg1[8] = 0
int32_t* eax_8 = operator new(0x2c)

if (eax_8 == 0)
    int32_t var_2c = 0
    struct std::exception::VTable* var_24
    std::exception::exception(&var_24, &var_2c)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

arg1[7] = eax_8
*eax_8 = eax_8
void* eax_9 = arg1[7]
*(eax_9 + 4) = eax_9
void* eax_10 = arg1[7]
*(eax_10 + 8) = eax_10
arg1[7][0xa].vFunc_0.b = 1
*(arg1[7] + 0x29) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
