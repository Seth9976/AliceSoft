// 函数: sub_64b9b0
// 地址: 0x64b9b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg3 * 2 + 2
int32_t ebp = arg3
bool cond:0 = eax != arg4

while (eax s< arg4)
    int32_t esi_1 = eax * 5
    
    if (*(arg2 + (esi_1 << 3)) s< *(arg2 + (esi_1 << 3) - 0x28))
        eax -= 1
    
    __builtin_memcpy(arg2 + arg3 * 0x28, arg2 + eax * 0x28, 0x28)
    arg3 = eax
    eax = eax * 2 + 2
    cond:0 = eax != arg4

if (not(cond:0))
    __builtin_memcpy(arg2 + arg3 * 0x28, arg2 + arg4 * 0x28 - 0x28, 0x28)
    arg3 = arg4 - 1

int32_t var_14 = arg6
return sub_64c680(arg5, arg2, arg3, arg2, ebp, arg5)
