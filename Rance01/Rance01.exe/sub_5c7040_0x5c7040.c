// 函数: sub_5c7040
// 地址: 0x5c7040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &encodecg::CApp::`vftable'{for `IEncodeCG'}
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    arg1[1] = 0
    arg1[2] = 1
    return arg1

InitializeCriticalSection(lpCriticalSection)
arg1[1] = lpCriticalSection
arg1[2] = 1
return arg1
