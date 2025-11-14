// 函数: sub_597420
// 地址: 0x597420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &surfacefactory::CSurface::`vftable'{for `ISurface'}
int32_t __saved_edi_2 = arg1[9]

if (__saved_edi_2 != 0)
    int32_t __saved_edi_1 = __saved_edi_2
    sub_6b4d5b()

arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
CRITICAL_SECTION* lpCriticalSection = arg1[2]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    sub_6b4d5b()

struct ISurface::surfacefactory::CSurface::VTable** var_8_2 = arg1
sub_6b4d5b()
return arg1
