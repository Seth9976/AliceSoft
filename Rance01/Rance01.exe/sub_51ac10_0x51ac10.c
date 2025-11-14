// 函数: sub_51ac10
// 地址: 0x51ac10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    arg1[1] = 0
    arg1[2] = 0
    return arg1

InitializeCriticalSection(lpCriticalSection)
arg1[1] = lpCriticalSection
arg1[2] = 0
return arg1
