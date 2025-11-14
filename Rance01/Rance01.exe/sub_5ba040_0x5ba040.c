// 函数: sub_5ba040
// 地址: 0x5ba040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

if (*arg1 != 0)
    int32_t i = 0
    
    if (arg1[2] s> 0)
        do
            int32_t eax_1 = *arg1
            
            if (*(eax_1 + (i << 2)) != 0)
                __free_base(*(eax_1 + (i << 2)))
            
            i += 1
        while (i s< arg1[2])
    
    __free_base(*arg1)

int32_t eax_3 = arg1[1]

if (eax_3 != 0)
    __free_base(eax_3)

int32_t eax_4 = arg1[3]

if (eax_4 != 0)
    __free_base(eax_4)

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
