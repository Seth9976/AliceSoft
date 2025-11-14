// 函数: sub_4bf8f0
// 地址: 0x4bf8f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg1[1] = lpCriticalSection
arg1[2] = 0
arg1[3] = 0
arg1[4].w = 0
arg1[9] = 0
arg1[0xa] = 0xf
arg1[5].b = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = arg2
arg1[0xf] = 0
return arg1
