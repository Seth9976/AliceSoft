// 函数: sub_4d7580
// 地址: 0x4d7580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x14)
int32_t eax_7 = ((eax_4 - edx_2) s>> 1) * 5
int32_t* i = &arg2[eax_7]
sub_4d84f0(eax_7, edx_2, arg2, i, arg3 - 0x14)
void* i_5 = &i[5]

for (; arg2 u< i; i = &i[-5])
    int32_t eax_8 = i[-5]
    int32_t ecx_4 = *i
    
    if (ecx_4 s> eax_8)
        break
    
    if (ecx_4 s< eax_8)
        break

if (i_5 u< arg3)
    int32_t ecx_5 = *i
    
    do
        int32_t eax_9 = *i_5
        
        if (ecx_5 s> eax_9)
            break
        
        if (ecx_5 s< eax_9)
            break
        
        i_5 += 0x14
    while (i_5 u< arg3)

int32_t* i_3 = i
void* i_1 = i_5
int32_t* i_6 = i_3

while (true)
    if (i_1 u< arg3)
        if ((arg3 - i_1 + 0x13) s/ 0x14 s>= 4)
            do
                int32_t ebp_1 = *i_1
                int32_t eax_14 = *i
                
                if (ebp_1 s<= eax_14)
                    if (ebp_1 s< eax_14)
                        goto label_4d7842
                    
                    void* i_7 = i_5
                    int32_t edx_8 = *i_7
                    float var_84_1 = fconvert.s(fconvert.t(*(i_7 + 0xc)))
                    int32_t edx_9 = *(i_7 + 4)
                    char edx_10 = *(i_7 + 0x10)
                    *i_7 = ebp_1
                    *(i_7 + 4) = *(i_1 + 4)
                    i_5 += 0x14
                    *(i_7 + 0xc) = fconvert.s(fconvert.t(*(i_1 + 0xc)))
                    *(i_7 + 0x10) = *(i_1 + 0x10)
                    *i_1 = edx_8
                    int32_t eax_15
                    eax_15.b = edx_10
                    *(i_1 + 4) = edx_9
                    *(i_1 + 0xc) = fconvert.s(fconvert.t(var_84_1))
                    *(i_1 + 0x10) = eax_15.b
                
                int32_t ebp_2 = *(i_1 + 0x14)
                int32_t eax_16 = *i
                
                if (ebp_2 s<= eax_16)
                    if (ebp_2 s< eax_16)
                        i_1 += 0x14
                        goto label_4d7842
                    
                    void* i_8 = i_5
                    int32_t edx_14 = *i_8
                    float var_84_2 = fconvert.s(fconvert.t(*(i_8 + 0xc)))
                    int32_t edx_15 = *(i_8 + 4)
                    char edx_16 = *(i_8 + 0x10)
                    *i_8 = ebp_2
                    *(i_8 + 4) = *(i_1 + 0x18)
                    i_5 += 0x14
                    *(i_8 + 0xc) = fconvert.s(fconvert.t(*(i_1 + 0x20)))
                    *(i_8 + 0x10) = *(i_1 + 0x24)
                    *(i_1 + 0x14) = edx_14
                    int32_t eax_17
                    eax_17.b = edx_16
                    *(i_1 + 0x18) = edx_15
                    *(i_1 + 0x20) = fconvert.s(fconvert.t(var_84_2))
                    *(i_1 + 0x24) = eax_17.b
                
                int32_t ebp_3 = *(i_1 + 0x28)
                int32_t eax_18 = *i
                
                if (ebp_3 s<= eax_18)
                    if (ebp_3 s< eax_18)
                        i_1 += 0x28
                        goto label_4d7842
                    
                    void* i_9 = i_5
                    int32_t edx_20 = *i_9
                    float var_84_3 = fconvert.s(fconvert.t(*(i_9 + 0xc)))
                    int32_t edx_21 = *(i_9 + 4)
                    char edx_22 = *(i_9 + 0x10)
                    *i_9 = ebp_3
                    *(i_9 + 4) = *(i_1 + 0x2c)
                    i_5 += 0x14
                    *(i_9 + 0xc) = fconvert.s(fconvert.t(*(i_1 + 0x34)))
                    *(i_9 + 0x10) = *(i_1 + 0x38)
                    *(i_1 + 0x28) = edx_20
                    int32_t eax_19
                    eax_19.b = edx_22
                    *(i_1 + 0x2c) = edx_21
                    *(i_1 + 0x34) = fconvert.s(fconvert.t(var_84_3))
                    *(i_1 + 0x38) = eax_19.b
                
                int32_t ebp_4 = *(i_1 + 0x3c)
                int32_t eax_20 = *i
                
                if (ebp_4 s<= eax_20)
                    if (ebp_4 s< eax_20)
                        i_1 += 0x3c
                        goto label_4d7842
                    
                    void* i_10 = i_5
                    int32_t ebx_1 = *(i_10 + 4)
                    int32_t edx_26 = *i_10
                    float var_84_4 = fconvert.s(fconvert.t(*(i_10 + 0xc)))
                    char ebx_2 = *(i_10 + 0x10)
                    *i_10 = ebp_4
                    *(i_10 + 4) = *(i_1 + 0x40)
                    i_5 += 0x14
                    *(i_10 + 0xc) = fconvert.s(fconvert.t(*(i_1 + 0x48)))
                    *(i_10 + 0x10) = *(i_1 + 0x4c)
                    i_10.b = ebx_2
                    i_3 = i_6
                    *(i_1 + 0x3c) = edx_26
                    *(i_1 + 0x40) = ebx_1
                    *(i_1 + 0x48) = fconvert.s(fconvert.t(var_84_4))
                    *(i_1 + 0x4c) = i_10.b
                
                i_1 += 0x50
            while (i_1 s< arg3 - 0x3c)
        
        for (; i_1 u< arg3; i_1 += 0x14)
            int32_t ebp_5 = *i_1
            int32_t eax_21 = *i
            
            if (ebp_5 s<= eax_21)
                if (ebp_5 s< eax_21)
                    break
                
                int32_t* i_11 = i_5
                int32_t ebx_5 = i_11[1]
                int32_t edx_30 = *i_11
                float var_84_5 = fconvert.s(fconvert.t(i_11[3]))
                char ebx_6 = i_11[4].b
                *i_11 = ebp_5
                i_11[1] = *(i_1 + 4)
                i_5 += 0x14
                i_11[3] = fconvert.s(fconvert.t(*(i_1 + 0xc)))
                i_11[4].b = *(i_1 + 0x10)
                i_3 = i_6
                *i_1 = edx_30
                edx_30.b = ebx_6
                *(i_1 + 4) = ebx_5
                *(i_1 + 0xc) = fconvert.s(fconvert.t(var_84_5))
                *(i_1 + 0x10) = edx_30.b
    
label_4d7842:
    bool cond:2_1 = i_3 != arg2
    
    if (i_3 u> arg2)
        void* eax_23 = &i_3[-2]
        
        do
            int32_t edx_31 = *(eax_23 - 0xc)
            int32_t ebp_6 = *i
            
            if (ebp_6 s<= edx_31)
                if (ebp_6 s< edx_31)
                    break
                
                int32_t edx_32 = i[-4]
                int32_t ebp_7 = i[-5]
                float var_58_1 = fconvert.s(fconvert.t(i[-2]))
                i -= 0x14
                char edx_33 = i[4].b
                *i = *(eax_23 - 0xc)
                i[1] = *(eax_23 - 8)
                i[3] = fconvert.s(fconvert.t(*eax_23))
                i[4].b = *(eax_23 + 4)
                *(eax_23 - 8) = edx_32
                *(eax_23 - 0xc) = ebp_7
                *eax_23 = fconvert.s(fconvert.t(var_58_1))
                *(eax_23 + 4) = edx_33
            
            i_3 -= 0x14
            eax_23 -= 0x14
        while (arg2 u< i_3)
        
        cond:2_1 = i_3 != arg2
        i_6 = i_3
    
    if (cond:2_1)
        i_3 -= 0x14
        i_6 = i_3
        
        if (i_1 != arg3)
            char edx_60 = *(i_1 + 0x10)
            int32_t ebp_11 = *i_1
            float var_8_1 = fconvert.s(fconvert.t(*(i_1 + 0xc)))
            int32_t eax_27 = *(i_1 + 4)
            *i_1 = *i_3
            *(i_1 + 4) = i_3[1]
            i_1 += 0x14
            *(i_1 - 8) = fconvert.s(fconvert.t(i_3[3]))
            *(i_1 - 4) = i_3[4].b
            i_3[1] = eax_27
            eax_27.b = edx_60
            *i_3 = ebp_11
            i_3[3] = fconvert.s(fconvert.t(var_8_1))
            i_3[4].b = eax_27.b
        else
            i -= 0x14
            
            if (i_3 != i)
                char edx_52 = i_3[4].b
                int32_t ebp_9 = *i_3
                float var_44_1 = fconvert.s(fconvert.t(i_3[3]))
                int32_t eax_25 = i_3[1]
                *i_3 = *i
                i_3[1] = i[1]
                i_3[3] = fconvert.s(fconvert.t(i[3]))
                i_3[4].b = i[4].b
                i[1] = eax_25
                eax_25.b = edx_52
                *i = ebp_9
                i[3] = fconvert.s(fconvert.t(var_44_1))
                i[4].b = eax_25.b
            
            char edx_56 = i[4].b
            int32_t ebp_10 = *i
            float var_30_1 = fconvert.s(fconvert.t(i[3]))
            int32_t eax_26 = i[1]
            i_5 -= 0x14
            *i = *i_5
            i[1] = *(i_5 + 4)
            i[3] = fconvert.s(fconvert.t(*(i_5 + 0xc)))
            i[4].b = *(i_5 + 0x10)
            *(i_5 + 4) = eax_26
            eax_26.b = edx_56
            *i_5 = ebp_10
            *(i_5 + 0xc) = fconvert.s(fconvert.t(var_30_1))
            *(i_5 + 0x10) = eax_26.b
    else
        if (i_1 == arg3)
            break
        
        if (i_5 != i_1)
            char edx_39 = i[4].b
            int32_t ebp_8 = *i
            float var_1c_1 = fconvert.s(fconvert.t(i[3]))
            int32_t eax_24 = i[1]
            *i = *i_5
            i[1] = *(i_5 + 4)
            i[3] = fconvert.s(fconvert.t(*(i_5 + 0xc)))
            i[4].b = *(i_5 + 0x10)
            *(i_5 + 4) = eax_24
            eax_24.b = edx_39
            *i_5 = ebp_8
            *(i_5 + 0xc) = fconvert.s(fconvert.t(var_1c_1))
            *(i_5 + 0x10) = eax_24.b
        
        int32_t* i_4 = i
        int32_t edx_43 = *i_4
        float var_6c_1 = fconvert.s(fconvert.t(i_4[3]))
        int32_t edx_44 = i_4[1]
        char edx_45 = i_4[4].b
        void* i_2 = i_1
        *i_4 = *i_2
        i_4[1] = *(i_2 + 4)
        i_5 += 0x14
        i = &i[5]
        i_4[3] = fconvert.s(fconvert.t(*(i_2 + 0xc)))
        i_4[4].b = *(i_2 + 0x10)
        *i_2 = edx_43
        *(i_2 + 4) = edx_44
        *(i_2 + 0xc) = fconvert.s(fconvert.t(var_6c_1))
        i_1 += 0x14
        *(i_2 + 0x10) = edx_45

arg1[1] = i_5
*arg1 = i
return arg1
