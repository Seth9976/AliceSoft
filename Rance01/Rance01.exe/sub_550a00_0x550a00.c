// 函数: sub_550a00
// 地址: 0x550a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax

if (arg1[1] != 0)
    eax = *arg1
else
    eax = nullptr

while (*eax != 0)
    char ecx = *eax
    
    if (arg2 s< 1)
        if ((ecx u< 0x81 || ecx u> 0x9f) && ecx u< 0xe0)
            return zx.d(ecx)
        
        return zx.d(*eax)
    
    if (ecx u< 0x81)
        if (ecx u>= 0xe0)
            eax = &eax[1]
    else if (ecx u<= 0x9f || ecx u>= 0xe0)
        eax = &eax[1]
    
    eax = &eax[1]
    arg2 -= 1

return 0
