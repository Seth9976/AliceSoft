// 函数: sub_4d7a90
// 地址: 0x4d7a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x14)
int32_t eax_7 = ((eax_4 - edx_2) s>> 1) * 5
int32_t* esi = &arg2[eax_7]
sub_4d87b0(eax_7, edx_2, arg2, esi, arg3 - 0x14)
int32_t* eax_8 = esi
void* i_2 = &esi[5]

if (arg2 u< esi)
    do
        int32_t ecx_4 = eax_8[-5]
        int32_t edx_3 = *eax_8
        
        if (edx_3 s> ecx_4)
            break
        
        if (edx_3 s< ecx_4)
            break
        
        eax_8 = &eax_8[-5]
    while (arg2 u< eax_8)

if (i_2 u< arg3)
    int32_t edx_4 = *eax_8
    
    do
        int32_t ecx_5 = *i_2
        
        if (edx_4 s> ecx_5)
            break
        
        if (edx_4 s< ecx_5)
            break
        
        i_2 += 0x14
    while (i_2 u< arg3)

void* i = i_2
int32_t* ebp_1 = eax_8

while (true)
    for (; i u< arg3; i += 0x14)
        int32_t edx_5 = *i
        int32_t esi_1 = *eax_8
        
        if (edx_5 s<= esi_1)
            if (edx_5 s< esi_1)
                break
            
            int32_t ebx_1 = *i_2
            *i_2 = edx_5
            int32_t ebx_2 = *(i_2 + 4)
            *(i_2 + 4) = *(i + 4)
            int32_t var_6c_1 = *(i_2 + 0xc)
            int32_t ebx_3
            ebx_3.b = *(i_2 + 0x10)
            *(i_2 + 0xc) = *(i + 0xc)
            int32_t edx_7
            edx_7.b = *(i + 0x10)
            *(i_2 + 0x10) = edx_7.b
            *i = ebx_1
            *(i + 4) = ebx_2
            *(i + 0xc) = var_6c_1
            i_2 += 0x14
            *(i + 0x10) = ebx_3.b
    
    bool cond:2_1 = ebp_1 != arg2
    
    if (ebp_1 u> arg2)
        void* esi_3 = &ebp_1[-2]
        
        do
            int32_t edx_11 = *(esi_3 - 0xc)
            int32_t ebx_4 = *eax_8
            
            if (ebx_4 s<= edx_11)
                if (ebx_4 s< edx_11)
                    break
                
                int32_t ebx_5 = eax_8[-4]
                int32_t edx_12 = eax_8[-5]
                eax_8 -= 0x14
                int32_t ebx_6 = eax_8[3]
                char ebx_7 = eax_8[4].b
                *eax_8 = *(esi_3 - 0xc)
                eax_8[1] = *(esi_3 - 8)
                eax_8[3] = *esi_3
                eax_8[4].b = *(esi_3 + 4)
                *(esi_3 - 0xc) = edx_12
                *(esi_3 - 8) = ebx_5
                *esi_3 = ebx_6
                int32_t edx_14
                edx_14.b = ebx_7
                *(esi_3 + 4) = edx_14.b
            
            ebp_1 -= 0x14
            esi_3 -= 0x14
        while (arg2 u< ebp_1)
        
        cond:2_1 = ebp_1 != arg2
    
    if (cond:2_1)
        ebp_1 -= 0x14
        
        if (i != arg3)
            int32_t ebx_38 = *(i + 0xc)
            int32_t esi_7 = *i
            int32_t edx_25 = *(i + 4)
            char ebx_39 = *(i + 0x10)
            *i = *ebp_1
            *(i + 4) = ebp_1[1]
            *(i + 0xc) = ebp_1[3]
            *(i + 0x10) = ebp_1[4].b
            ebp_1[1] = edx_25
            *ebp_1 = esi_7
            ebp_1[3] = ebx_38
            int32_t edx_26
            edx_26.b = ebx_39
            ebp_1[4].b = edx_26.b
            i += 0x14
        else
            eax_8 -= 0x14
            
            if (ebp_1 != eax_8)
                int32_t ebx_26 = ebp_1[3]
                int32_t esi_5 = *ebp_1
                int32_t edx_21 = ebp_1[1]
                char ebx_27 = ebp_1[4].b
                *ebp_1 = *eax_8
                ebp_1[1] = eax_8[1]
                ebp_1[3] = eax_8[3]
                ebp_1[4].b = eax_8[4].b
                eax_8[1] = edx_21
                *eax_8 = esi_5
                eax_8[3] = ebx_26
                int32_t edx_22
                edx_22.b = ebx_27
                eax_8[4].b = edx_22.b
            
            int32_t ebx_32 = eax_8[3]
            int32_t esi_6 = *eax_8
            int32_t edx_23 = eax_8[1]
            char ebx_33 = eax_8[4].b
            i_2 -= 0x14
            *eax_8 = *i_2
            eax_8[1] = *(i_2 + 4)
            eax_8[3] = *(i_2 + 0xc)
            eax_8[4].b = *(i_2 + 0x10)
            *(i_2 + 4) = edx_23
            *i_2 = esi_6
            *(i_2 + 0xc) = ebx_32
            int32_t edx_24
            edx_24.b = ebx_33
            *(i_2 + 0x10) = edx_24.b
    else
        if (i == arg3)
            break
        
        if (i_2 != i)
            int32_t ebx_12 = eax_8[3]
            int32_t esi_4 = *eax_8
            int32_t edx_15 = eax_8[1]
            char ebx_13 = eax_8[4].b
            *eax_8 = *i_2
            eax_8[1] = *(i_2 + 4)
            eax_8[3] = *(i_2 + 0xc)
            eax_8[4].b = *(i_2 + 0x10)
            *(i_2 + 4) = edx_15
            *i_2 = esi_4
            *(i_2 + 0xc) = ebx_12
            int32_t edx_16
            edx_16.b = ebx_13
            *(i_2 + 0x10) = edx_16.b
        
        int32_t ebx_18 = *eax_8
        int32_t ebx_19 = eax_8[1]
        int32_t ebx_20 = eax_8[3]
        char ebx_21 = eax_8[4].b
        void* i_1 = i
        *eax_8 = *i_1
        eax_8[1] = *(i_1 + 4)
        eax_8[3] = *(i_1 + 0xc)
        eax_8[4].b = *(i_1 + 0x10)
        *i_1 = ebx_18
        *(i_1 + 4) = ebx_19
        *(i_1 + 0xc) = ebx_20
        int32_t edx_20
        edx_20.b = ebx_21
        i_2 += 0x14
        eax_8 = &eax_8[5]
        i += 0x14
        *(i_1 + 0x10) = edx_20.b

arg1[1] = i_2
*arg1 = eax_8
return arg1
