// 函数: sub_631490
// 地址: 0x631490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &common::CIMemory::`vftable'{for `IMemory'}
int32_t result = arg1[4]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[1] = &thread::CRefCounter::`vftable'
CRITICAL_SECTION* lpCriticalSection = arg1[2]

if (lpCriticalSection == 0)
    return result

DeleteCriticalSection(lpCriticalSection)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
return sub_6b4d5b()
