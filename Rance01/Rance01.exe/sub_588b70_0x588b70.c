// 函数: sub_588b70
// 地址: 0x588b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *(arg1 + 0x1e0)
int32_t* eax = *(arg1 + 0x1dc)

if (eax != edx)
    while (*eax != arg2)
        eax = &eax[1]
        
        if (eax == edx)
            break
    
    if (eax != edx)
        eax.b = 0
        return eax

sub_61b5a0(&arg2, arg1 + 0x1dc)
int32_t* eax_2
eax_2.b = 1
return eax_2
