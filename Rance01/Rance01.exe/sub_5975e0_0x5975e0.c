// 函数: sub_5975e0
// 地址: 0x5975e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(arg1[2])
int32_t temp0 = arg1[1]
arg1[1] -= 1
int32_t result = arg1[1]

if (temp0 != 1)
    LeaveCriticalSection(arg1[2])
    return result

LeaveCriticalSection(arg1[2])
CRITICAL_SECTION* lpCriticalSection = arg1[2]
*arg1 = &surfacefactory::CSurfaceFactory::`vftable'{for `ISurfaceFactory'}

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    sub_6b4d5b()

struct ISurfaceFactory::surfacefactory::CSurfaceFactory::VTable** var_c_3 = arg1
sub_6b4d5b()
return 0
