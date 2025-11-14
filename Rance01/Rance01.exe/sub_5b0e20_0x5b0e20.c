// 函数: sub_5b0e20
// 地址: 0x5b0e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
ebx.b = arg2[2].b

if ((ebx.b & 2) == 0)
    return 

int32_t i_8 = *arg2
arg2.b = *(arg2 + 9)

if (arg2.b != 8)
    if (arg2.b == 0x10)
        if (ebx.b != 2)
            if (ebx.b == 6 && i_8 != 0)
                arg1 = &arg1[1]
                int32_t i_7 = i_8
                int32_t i
                
                do
                    char ecx_1 = arg1[0xffffffff]
                    arg1[0xffffffff] = arg1[3]
                    char edx_3 = arg1[4]
                    arg1[3] = ecx_1
                    ecx_1 = *arg1
                    *arg1 = edx_3
                    arg1[4] = ecx_1
                    arg1 = &arg1[8]
                    i = i_7
                    i_7 -= 1
                while (i != 1)
        else if (i_8 != 0)
            void* eax = &arg1[1]
            int32_t i_6 = i_8
            int32_t i_1
            
            do
                i_8.b = *(eax - 1)
                *(eax - 1) = *(eax + 3)
                char edx_1 = *(eax + 4)
                *(eax + 3) = i_8.b
                i_8.b = *eax
                *eax = edx_1
                *(eax + 4) = i_8.b
                eax += 6
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
else if (ebx.b != 2)
    if (ebx.b == 6 && i_8 != 0)
        int32_t i_5 = i_8
        int32_t i_2
        
        do
            arg2.b = *arg1
            i_8.b = arg1[2]
            *arg1 = i_8.b
            arg1[2] = arg2.b
            arg1 = &arg1[4]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
else if (i_8 != 0)
    int32_t i_4 = i_8
    int32_t i_3
    
    do
        arg2.b = *arg1
        i_8.b = arg1[2]
        *arg1 = i_8.b
        arg1[2] = arg2.b
        arg1 = &arg1[3]
        i_3 = i_4
        i_4 -= 1
    while (i_3 != 1)
