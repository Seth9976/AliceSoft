// 函数: sub_677c10
// 地址: 0x677c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = arg2
arg2 = i

if (i == 0)
    return 

int32_t ecx = *(arg1 + 0x20)
int32_t* eax = *(arg1 + 0x1c)

if (eax == ecx)
    sub_61b5a0(&arg2, arg1 + 0x1c)
    return 

while (*eax != i)
    eax = &eax[1]
    
    if (eax == ecx)
        break

if (eax == ecx)
    sub_61b5a0(&arg2, arg1 + 0x1c)
