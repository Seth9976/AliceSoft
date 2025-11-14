// 函数: sub_631510
// 地址: 0x631510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(arg1[2])
arg1[3] -= 1
int32_t eax_1 = arg1[3]
int32_t ecx
ecx.b = eax_1 s<= 0
int32_t result = (ecx - 1) & eax_1
LeaveCriticalSection(arg1[2])

if (result s<= 0 && arg1 != 0)
    sub_631490(arg1)
    struct IMemory::common::CIMemory::VTable** var_c_2 = arg1
    sub_6b4d5b()

return result
