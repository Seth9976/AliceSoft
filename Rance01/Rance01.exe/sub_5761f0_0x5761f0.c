// 函数: sub_5761f0
// 地址: 0x5761f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

CRITICAL_SECTION* lpCriticalSection = arg1[1]
*arg1 = &thread::CRefCounter::`vftable'

if (lpCriticalSection == 0)
    return 

DeleteCriticalSection(lpCriticalSection)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
sub_6b4d5b()
