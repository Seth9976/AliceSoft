// 函数: sub_5973e0
// 地址: 0x5973e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(arg1[2])
int32_t temp0 = arg1[1]
arg1[1] -= 1
int32_t result = arg1[1]

if (temp0 != 1)
    LeaveCriticalSection(arg1[2])
    return result

LeaveCriticalSection(arg1[2])
sub_597420(arg1)
return 0
