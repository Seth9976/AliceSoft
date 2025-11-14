// 函数: sub_5508b0
// 地址: 0x5508b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg4
int32_t edx = 0
arg4 = 0
char* eax

if (arg2[1] != 0)
    eax = *arg2
else
    eax = nullptr

char* ebp = nullptr
char* edi = nullptr

if (*eax != 0)
    do
        if (edx == ebx)
            ebp = eax
        
        if (edx == arg1 + ebx)
            edi = eax
            break
        
        int32_t ecx
        ecx.b = *eax
        
        if (ecx.b u< 0x81)
            if (ecx.b u>= 0xe0)
                eax = &eax[1]
        else if (ecx.b u<= 0x9f || ecx.b u>= 0xe0)
            eax = &eax[1]
        
        eax = &eax[1]
        edx += 1
    while (*eax != 0)
    
    if (ebp != 0)
        if (edi == 0)
            edi = eax
        
        arg3[5] = 0xf
        arg3[4] = 0
        *arg3 = 0
        
        if (ebp u< edi)
            sub_401270(arg3, edi - ebp, ebp)
        
        return arg3

arg3[5] = 0xf
arg3[4] = 0
*arg3 = 0
return arg3
