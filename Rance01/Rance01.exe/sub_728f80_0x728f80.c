// 函数: sub_728f80
// 地址: 0x728f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

data_797e08 = lpCriticalSection
return _atexit(sub_7292b0)
