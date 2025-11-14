// 函数: sub_687450
// 地址: 0x687450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = arg2
arg2 = i

if (i == 0)
    return 

int32_t ecx = *(arg1 + 0xac)
int32_t* eax = *(arg1 + 0xa8)

if (eax == ecx)
    sub_61b5a0(&arg2, arg1 + 0xa8)
    return 

while (*eax != i)
    eax = &eax[1]
    
    if (eax == ecx)
        break

if (eax == ecx)
    sub_61b5a0(&arg2, arg1 + 0xa8)
