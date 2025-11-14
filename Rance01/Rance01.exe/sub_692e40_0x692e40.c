// 函数: sub_692e40
// 地址: 0x692e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    return 

int32_t ecx = *(arg1 + 0xa4)
int32_t* eax = *(arg1 + 0xa0)

if (eax == ecx)
    return 

while (*eax != arg2)
    eax = &eax[1]
    
    if (eax == ecx)
        break

if (eax != ecx)
    sub_6b49d0(eax, &eax[1], ((ecx - &eax[1]) s>> 2) * 4)
    *(arg1 + 0xa4) -= 4
