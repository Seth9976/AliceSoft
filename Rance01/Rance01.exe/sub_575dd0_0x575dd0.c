// 函数: sub_575dd0
// 地址: 0x575dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg3 * 2 + 2
int32_t edi = arg3
bool cond:0 = eax != arg2

while (eax s< arg2)
    if (*(*(*(arg4 + (eax << 2)) + 0x40) + 4) s> *(*(*(arg4 + (eax << 2) - 4) + 0x40) + 4))
        eax -= 1
    
    *(arg4 + (arg3 << 2)) = *(arg4 + (eax << 2))
    arg3 = eax
    eax = eax * 2 + 2
    cond:0 = eax != arg2

if (not(cond:0))
    eax = *(arg4 + (arg2 << 2) - 4)
    *(arg4 + (arg3 << 2)) = eax
    arg3 = arg2 - 1

int32_t __saved_ebx = arg6
return sub_575e30(eax, arg6, arg3, arg4, arg5, edi)
