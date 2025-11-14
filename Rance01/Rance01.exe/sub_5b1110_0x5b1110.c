// 函数: sub_5b1110
// 地址: 0x5b1110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &decodecg::CCGSurface::`vftable'{for `ICGSurface'}
arg1[1] = &thread::CRefCounter::`vftable'
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg1[2] = lpCriticalSection
arg1[3] = 1
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
return arg1
