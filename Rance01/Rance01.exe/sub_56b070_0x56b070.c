// 函数: sub_56b070
// 地址: 0x56b070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return 0

uint32_t lpdwProcessId = 0
uint32_t lpdwProcessId_1 = 0
GetWindowThreadProcessId(arg1, &lpdwProcessId)
GetWindowThreadProcessId(arg2, &lpdwProcessId_1)
int32_t result
result.b = lpdwProcessId == lpdwProcessId_1
return result
