// 函数: sub_597350
// 地址: 0x597350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &surfacefactory::CSurface::`vftable'{for `ISurface'}
arg1[1] = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg1[2] = lpCriticalSection
__builtin_memset(&arg1[3], 0, 0x16)
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xd] = 0
return arg1
