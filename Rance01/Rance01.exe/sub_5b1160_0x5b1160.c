// 函数: sub_5b1160
// 地址: 0x5b1160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(arg1[2])
arg1[3] -= 1
int32_t eax_1 = arg1[3]
int32_t ecx
ecx.b = eax_1 s<= 0
int32_t result = (ecx - 1) & eax_1
LeaveCriticalSection(arg1[2])

if (result s<= 0 && arg1 != 0)
    sub_5b11a0(arg1)

return result
