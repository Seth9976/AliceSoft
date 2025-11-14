// 函数: sub_5a9130
// 地址: 0x5a9130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char ecx = *(arg2 + 9)
int32_t i_8 = *arg2

if (ecx u< 8)
    return 

char edx = arg2[2].b

if ((edx & 2) != 0)
    return 

if (edx != 0)
    if (edx == 4)
        if (ecx != 8)
            void* ecx_4 = &arg1[(i_8 << 2) - 1]
            arg1 = ecx_4 + (i_8 << 2)
            
            if (i_8 != 0)
                int32_t i_7 = i_8
                int32_t i
                
                do
                    *arg1 = *ecx_4
                    arg1[0xffffffff] = *(ecx_4 - 1)
                    arg1[0xfffffffe] = *(ecx_4 - 2)
                    arg1[0xfffffffd] = *(ecx_4 - 3)
                    arg1[0xfffffffc] = *(ecx_4 - 2)
                    arg1[0xfffffffb] = *(ecx_4 - 3)
                    arg1[0xfffffffa] = *(ecx_4 - 2)
                    arg1[0xfffffff9] = *(ecx_4 - 3)
                    arg1 -= 8
                    ecx_4 -= 4
                    i = i_7
                    i_7 -= 1
                while (i != 1)
        else
            void* ecx_3 = &arg1[(i_8 << 1) - 1]
            arg1 = ecx_3 + (i_8 << 1)
            
            if (i_8 != 0)
                int32_t i_6 = i_8
                int32_t i_1
                
                do
                    *arg1 = *ecx_3
                    arg1[0xffffffff] = *(ecx_3 - 1)
                    arg1[0xfffffffe] = *(ecx_3 - 1)
                    arg1[0xfffffffd] = *(ecx_3 - 1)
                    arg1 -= 4
                    ecx_3 -= 2
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
else if (ecx != 8)
    void* ecx_2 = &arg1[(i_8 << 1) - 1]
    arg1 = ecx_2 + (i_8 << 2)
    
    if (i_8 != 0)
        int32_t i_5 = i_8
        int32_t i_2
        
        do
            *arg1 = *ecx_2
            arg1[0xffffffff] = *(ecx_2 - 1)
            arg1[0xfffffffe] = *ecx_2
            arg1[0xfffffffd] = *(ecx_2 - 1)
            arg1[0xfffffffc] = *ecx_2
            arg1[0xfffffffb] = *(ecx_2 - 1)
            arg1 -= 6
            ecx_2 -= 2
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
else
    char* ecx_1 = &arg1[i_8 - 1]
    arg1 = &ecx_1[i_8 << 1]
    
    if (i_8 != 0)
        int32_t i_4 = i_8
        int32_t i_3
        
        do
            *arg1 = *ecx_1
            arg1[0xffffffff] = *ecx_1
            arg1[0xfffffffe] = *ecx_1
            arg1 -= 3
            ecx_1 -= 1
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)

arg1.b = *(arg2 + 9)
*(arg2 + 0xa) += 2
arg1.w = muls.dp.b(arg1.b, *(arg2 + 0xa))
arg2[2].b |= 2
*(arg2 + 0xb) = arg1.b
uint32_t eax = zx.d(arg1.b)

if (arg1.b u>= 8)
    arg2[1] = (eax u>> 3) * i_8
    return 

arg2[1] = (eax * i_8 + 7) u>> 3
