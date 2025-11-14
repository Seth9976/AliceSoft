// 函数: sub_40d850
// 地址: 0x40d850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t eax_1 = data_78c474 ^ &var_38
struct PROCESS_MEMORY_COUNTERS ppsmemCounters
ppsmemCounters.PageFaultCount = 0
ppsmemCounters.PeakWorkingSetSize = 0
ppsmemCounters.WorkingSetSize = 0
ppsmemCounters.QuotaPeakPagedPoolUsage = 0
ppsmemCounters.QuotaPagedPoolUsage = 0
ppsmemCounters.QuotaPeakNonPagedPoolUsage = 0
ppsmemCounters.QuotaNonPagedPoolUsage = 0
ppsmemCounters.PagefileUsage = 0
ppsmemCounters.PeakPagefileUsage = 0
ppsmemCounters.cb = 0x28
BOOL eax_3 = GetProcessMemoryInfo(GetCurrentProcess(), &ppsmemCounters, 0x28)

if (eax_3 == 0)
    sub_6b4885(eax_1 ^ &var_38)
    return eax_3

uint32_t eax_5 = ppsmemCounters.WorkingSetSize u>> 0x14
sub_6b4885(eax_1 ^ &var_38)
return eax_5
