// 函数: sub_410780
// 地址: 0x410780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1

if (arg2 == 0)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x22) = 0
    return 

char eax = sub_40d760(&arg2)
*(arg1 + 0x20) = eax
char eax_1

if (eax != 0)
    eax_1 = sub_40d7b0(&arg2)

char eax_2

if (eax == 0 || eax_1 == 0)
    eax_2 = 0
else
    eax_2 = 1

*(arg1 + 0x21) = eax_2

if (sub_40d7b0(&arg2) != 0 && sub_40d800(&arg2) != 0)
    *(arg1 + 0x22) = 1
    return 

*(arg1 + 0x22) = 0
