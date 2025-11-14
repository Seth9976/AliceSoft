// 函数: sub_4abb10
// 地址: 0x4abb10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t esi = arg3
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((esi - arg2) s>> 2)
int32_t* i_5 = &arg2[(eax_3 - edx) s>> 1]
sub_4abd60(esi - 4, edx, arg2, i_5, arg4)
int32_t* i = &i_5[1]
int32_t* i_1 = i
int32_t* i_3

if (arg2 u< i_5)
    do
        void* eax_8 = *i_5
        i_3 = i_5[-1]
        int32_t edx_1 = i_3[4]
        int32_t esi_1 = *(eax_8 + 0x10)
        
        if (edx_1 s< esi_1)
            break
        
        if (edx_1 s<= esi_1)
            int32_t edx_2 = i_3[3]
            int32_t esi_2 = *(eax_8 + 0xc)
            
            if (edx_2 s< esi_2)
                break
            
            if (edx_2 s<= esi_2 && i_3[2] s< *(eax_8 + 8))
                break
        
        int32_t edx_4 = *(eax_8 + 0x10)
        int32_t esi_3 = i_3[4]
        
        if (edx_4 s< esi_3)
            break
        
        if (edx_4 s<= esi_3)
            int32_t edx_5 = *(eax_8 + 0xc)
            int32_t esi_4 = i_3[3]
            
            if (edx_5 s< esi_4)
                break
            
            if (edx_5 s<= esi_4 && *(eax_8 + 8) s< i_3[2])
                break
        
        i_5 = &i_5[-1]
    while (arg2 u< i_5)
    
    esi = arg3

if (i u< esi)
    i_3 = *i_5
    
    do
        void* eax_10 = *i
        int32_t edx_6 = *(eax_10 + 0x10)
        int32_t esi_5 = i_3[4]
        
        if (edx_6 s< esi_5)
            break
        
        if (edx_6 s<= esi_5)
            int32_t edx_7 = *(eax_10 + 0xc)
            int32_t esi_6 = i_3[3]
            
            if (edx_7 s< esi_6)
                break
            
            if (edx_7 s<= esi_6 && *(eax_10 + 8) s< i_3[2])
                break
        
        int32_t edx_9 = i_3[4]
        int32_t esi_7 = *(eax_10 + 0x10)
        
        if (edx_9 s< esi_7)
            break
        
        if (edx_9 s<= esi_7)
            int32_t edx_10 = i_3[3]
            int32_t esi_8 = *(eax_10 + 0xc)
            
            if (edx_10 s< esi_8)
                break
            
            if (edx_10 s<= esi_8 && i_3[2] s< *(eax_10 + 8))
                break
        
        i = &i[1]
    while (i u< arg3)
    
    i_1 = i

int32_t* i_6 = i_5

while (true)
    for (; i u< arg3; i = &i[1])
        void* eax_11 = *i
        void* ecx_3 = *i_5
        int32_t edx_12 = *(ecx_3 + 0x10)
        int32_t esi_9 = *(eax_11 + 0x10)
        
        if (edx_12 s>= esi_9)
            if (edx_12 s> esi_9)
            label_4abc24:
                int32_t edx_15 = *(eax_11 + 0x10)
                int32_t esi_11 = *(ecx_3 + 0x10)
                
                if (edx_15 s< esi_11)
                    break
                
                if (edx_15 s<= esi_11)
                    int32_t edx_16 = *(eax_11 + 0xc)
                    int32_t esi_12 = *(ecx_3 + 0xc)
                    
                    if (edx_16 s< esi_12)
                        break
                    
                    if (edx_16 s<= esi_12 && *(eax_11 + 8) s< *(ecx_3 + 8))
                        break
                
                int32_t* i_4 = i_1
                i_1 = &i_1[1]
                int32_t edx_20 = *i_4
                *i_4 = eax_11
                *i = edx_20
            else
                int32_t edx_13 = *(ecx_3 + 0xc)
                int32_t esi_10 = *(eax_11 + 0xc)
                
                if (edx_13 s>= esi_10 && (edx_13 s> esi_10 || *(ecx_3 + 8) s>= *(eax_11 + 8)))
                    goto label_4abc24
    
    bool cond:2_1 = i_6 != arg2
    
    if (i_6 u> arg2)
        do
            void* eax_12 = *i_5
            void* ecx_4 = i_6[-1]
            int32_t edx_21 = *(ecx_4 + 0x10)
            int32_t esi_13 = *(eax_12 + 0x10)
            
            if (edx_21 s>= esi_13)
                if (edx_21 s> esi_13)
                label_4abc8b:
                    int32_t edx_24 = *(eax_12 + 0x10)
                    int32_t esi_15 = *(ecx_4 + 0x10)
                    
                    if (edx_24 s< esi_15)
                        break
                    
                    if (edx_24 s<= esi_15)
                        int32_t edx_25 = *(eax_12 + 0xc)
                        int32_t esi_16 = *(ecx_4 + 0xc)
                        
                        if (edx_25 s< esi_16)
                            break
                        
                        if (edx_25 s<= esi_16 && *(eax_12 + 8) s< *(ecx_4 + 8))
                            break
                    
                    int32_t eax_14 = i_5[-1]
                    i_5 -= 4
                    *i_5 = ecx_4
                    i_6[-1] = eax_14
                else
                    int32_t edx_22 = *(ecx_4 + 0xc)
                    int32_t esi_14 = *(eax_12 + 0xc)
                    
                    if (edx_22 s>= esi_14 && (edx_22 s> esi_14 || *(ecx_4 + 8) s>= *(eax_12 + 8)))
                        goto label_4abc8b
            
            i_6 = &i_6[-1]
        while (arg2 u< i_6)
        
        cond:2_1 = i_6 != arg2
    
    if (cond:2_1)
        i_6 -= 4
        
        if (i != arg3)
            int32_t eax_18 = *i
            *i = *i_6
            *i_6 = eax_18
            i = &i[1]
        else
            i_5 -= 4
            
            if (i_6 != i_5)
                int32_t eax_16 = *i_6
                *i_6 = *i_5
                *i_5 = eax_16
            
            int32_t eax_17 = *i_5
            i_3 = i_1 - 4
            *i_5 = i_1[-1]
            i_1 = i_3
            *i_3 = eax_17
    else
        if (i == arg3)
            break
        
        if (i_1 != i)
            int32_t eax_15 = *i_5
            *i_5 = *i_1
            *i_1 = eax_15
        
        int32_t* i_2 = i
        i_1 = &i_1[1]
        i_3 = i_5
        int32_t edx_27 = *i_3
        i_5 = &i_5[1]
        *i_3 = *i_2
        i = &i[1]
        *i_2 = edx_27

*arg1 = i_5
arg1[1] = i_1
return arg1
