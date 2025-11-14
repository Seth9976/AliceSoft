// 函数: sub_53a460
// 地址: 0x53a460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1

while (true)
    eax_1 = arg1[0xa7]
    
    if (eax_1 == 0)
        do
            int16_t* eax_5 = arg1[0xa3]
            int16_t ecx = *eax_5
            arg1[0xa3] = &eax_5[1]
            sub_53b4f0(arg1, ecx)
        while (arg1[0xa7] == 0)
    else if (eax_1 == 1)
        sub_53b430(arg1)
    else
        if (eax_1 == 2)
            break

arg1[0xa6].b = (eax_1 - 1).b - 1
arg1[0xa7] = 2
return 1
