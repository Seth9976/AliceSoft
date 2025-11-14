// 函数: sub_53b430
// 地址: 0x53b430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = 0

while (true)
    while (arg1[0xa8].b == 0)
        if (arg1[0x8f] s<= 0 && (**arg1[7])() == 0)
            goto label_53b4d7
    
    edi += 1
    
    if (edi s>= 0x20)
        if (arg1[0x8f] s<= 0 && (**arg1[7])() == 0)
            break
        
        edi = 0
    
    if (arg1[0xa6].b != 0)
        int16_t* eax_5 = arg1[0xa3]
        int16_t ecx_3 = *eax_5
        arg1[0xa3] = &eax_5[1]
        sub_53b4f0(arg1, ecx_3)
    
    (**arg1[0x8a])(arg1[0xa3] - arg1[0xa4])
    
    if (*(arg1 + 0x2a1) != 0)
        arg1[0xa8].b = 0

label_53b4d7:
arg1[0xa7] = 2
arg1[0xa7] = 2
return 2
