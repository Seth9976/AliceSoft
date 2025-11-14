// 函数: sub_580ec0
// 地址: 0x580ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result_1
int32_t eax_1 = data_78c474 ^ &result_1
int32_t eax_2 = sub_70c710(fconvert.t(*arg1))
long double x87_r7_1 = fconvert.t(arg1[1])
int32_t var_1c = eax_2
int32_t i_10 = sub_70c710(x87_r7_1)
long double x87_r7_2 = fconvert.t(*arg3)
int32_t i_12 = i_10
int32_t var_18 = sub_70c710(x87_r7_2)
int32_t i_4 = sub_70c710(fconvert.t(arg3[1]))
int32_t i_8 = i_4
int32_t var_14 = sub_70c710(fconvert.t(*arg4))
int32_t i_5 = sub_70c710(fconvert.t(arg4[1]))
int32_t i = 0
int32_t i_9 = i_5

if (*(arg2 + 0x14) s> 0)
    do
        *(*(arg2 + 0x18) + (i << 2)) = 0x7fffffff
        *(*(arg2 + 0x28) + (i << 2)) = 0x80000000
        i += 1
    while (i s< *(arg2 + 0x14))

int32_t i_6 = i_10
int32_t i_11 = i_10
int32_t i_3 = i_6
int32_t i_7 = i_11

if (i_4 s< i_10)
    i_3 = i_4
    i_6 = i_4

if (i_4 s> i_10)
    i_7 = i_4
    i_11 = i_4

if (i_5 s< i_6)
    i_3 = i_5
    i_6 = i_5

if (i_5 s> i_11)
    i_7 = i_5
    i_11 = i_5

int32_t* result = *(arg2 + 0x14)

if (i_6 s< result && i_11 s>= 0)
    if (i_6 s< 0)
        i_3 = 0
    
    if (i_11 s> result - 1)
        i_7 = result - 1
    
    int32_t* result_2 = nullptr
    result_1 = nullptr
    int32_t var_10 = 1
    int32_t var_c_1 = 2
    int32_t var_8_1 = 0
    
    while (true)
        int32_t* result_4 = (&var_10)[result_2]
        int32_t ebp_1 = (&var_1c)[result_4]
        int32_t eax_6 = (&i_12)[result_4]
        int32_t edx_3 = (&i_12)[result_2]
        int32_t ebx_3 = ebp_1 - (&var_1c)[result_2]
        int32_t eax_7 = eax_6 - edx_3
        
        if (eax_6 == edx_3)
            int32_t eax_9 = (&var_1c)[result_1]
            
            if (ebp_1 s>= eax_9)
                if (edx_3 s>= 0 && edx_3 s< *(arg2 + 0x14))
                    int32_t ecx_2 = *(arg2 + 0x18)
                    
                    if (*(ecx_2 + (edx_3 << 2)) s> eax_9)
                        *(ecx_2 + (edx_3 << 2)) = eax_9
                    
                    int32_t eax_10 = *(arg2 + 0x28)
                    
                    if (*(eax_10 + (edx_3 << 2)) s< ebp_1)
                        *(eax_10 + (edx_3 << 2)) = ebp_1
            else if (edx_3 s>= 0 && edx_3 s< *(arg2 + 0x14))
                int32_t ecx = *(arg2 + 0x18)
                
                if (*(ecx + (edx_3 << 2)) s> ebp_1)
                    *(ecx + (edx_3 << 2)) = ebp_1
                
                result_2 = *(arg2 + 0x28)
                
                if (result_2[edx_3] s< eax_9)
                    result_2[edx_3] = eax_9
        else if (ebx_3 != 0)
            int32_t eax_11
            int32_t edx_8
            edx_8:eax_11 = sx.q(eax_7)
            int32_t eax_13
            int32_t edx_9
            edx_9:eax_13 = sx.q(ebx_3)
            int32_t* result_3 = result_1
            
            if ((eax_13 ^ edx_9) - edx_9 s<= (eax_11 ^ edx_8) - edx_8)
                if ((&i_12)[result_3] s> (&i_12)[result_4])
                    result_2 = result_4
                    result_4 = result_3
                
                int32_t ebp_7 = (&var_1c)[result_2]
                result_2 = (&i_12)[result_2]
                int32_t esi_4 = (&i_12)[result_4]
                int32_t ebp_8 = ebp_7 << 0xc
                
                while (result_2 s<= esi_4)
                    int32_t edx_18 = ebp_8 s>> 0xc
                    
                    if (result_2 s>= 0 && result_2 s< *(arg2 + 0x14))
                        int32_t ebx_10 = *(arg2 + 0x18)
                        
                        if (*(ebx_10 + (result_2 << 2)) s> edx_18)
                            *(ebx_10 + (result_2 << 2)) = edx_18
                        
                        int32_t ebx_12 = *(arg2 + 0x28)
                        
                        if (*(ebx_12 + (result_2 << 2)) s< edx_18)
                            *(ebx_12 + (result_2 << 2)) = edx_18
                    
                    result_2 += 1
                    ebp_8 += divs.dp.d(sx.q(ebx_3 << 0xc), eax_7)
            else
                if ((&var_1c)[result_3] s> (&var_1c)[result_4])
                    result_2 = result_4
                    result_4 = result_3
                
                int32_t ebp_5 = (&i_12)[result_2]
                result_2 = (&var_1c)[result_2]
                int32_t esi_3 = (&var_1c)[result_4]
                int32_t ebp_6 = ebp_5 << 0xc
                
                while (result_2 s<= esi_3)
                    int32_t edx_13 = ebp_6 s>> 0xc
                    
                    if (edx_13 s>= 0 && edx_13 s< *(arg2 + 0x14))
                        int32_t ebx_7 = *(arg2 + 0x18)
                        
                        if (*(ebx_7 + (edx_13 << 2)) s> result_2)
                            *(ebx_7 + (edx_13 << 2)) = result_2
                        
                        int32_t ebx_9 = *(arg2 + 0x28)
                        
                        if (*(ebx_9 + (edx_13 << 2)) s< result_2)
                            *(ebx_9 + (edx_13 << 2)) = result_2
                    
                    result_2 += 1
                    ebp_6 += divs.dp.d(sx.q(eax_7 << 0xc), ebx_3)
        else
            if (edx_3 s> (&i_12)[result_4])
                result_2 = result_4
                result_4 = result_1
            
            int32_t i_1 = (&i_12)[result_2]
            
            for (int32_t esi_2 = (&i_12)[result_4]; i_1 s< esi_2; i_1 += 1)
                if (i_1 s>= 0 && i_1 s< *(arg2 + 0x14))
                    int32_t* ebx_4 = *(arg2 + 0x18) + (i_1 << 2)
                    int32_t edx_7 = (&var_1c)[result_2]
                    
                    if (*ebx_4 s> edx_7)
                        *ebx_4 = edx_7
                    
                    int32_t ebx_5 = *(arg2 + 0x28)
                    
                    if (*(ebx_5 + (i_1 << 2)) s< edx_7)
                        *(ebx_5 + (i_1 << 2)) = edx_7
        
        result = result_1 + 1
        result_1 = result
        
        if (result s>= 3)
            break
        
        result_2 = result_1
    
    for (int32_t i_2 = i_3; i_2 s<= i_7; i_2 += 1)
        result =
            sub_5811d0(arg2, i_2, *(*(arg2 + 0x18) + (i_2 << 2)), *(*(arg2 + 0x28) + (i_2 << 2)))

sub_6b4885(eax_1 ^ &result_1)
return result
