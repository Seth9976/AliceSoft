// 函数: sub_6ab740
// 地址: 0x6ab740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x28)
int32_t* var_18 = arg4
void* i = arg2 + ((eax_4 - edx_2) s>> 1) * 0x28
int32_t* var_1c = arg3 - 0x28
void* i_2 = i
sub_6ac200(arg2, arg3 - 0x28, arg4)
int32_t* i_3 = i + 0x28
int32_t* i_7 = i_3

for (; arg2 u< i; i -= 0x28)
    int32_t eax_9 = *(i - 0x20)
    int32_t edx_4 = *(i + 8)
    
    if (edx_4 s> eax_9)
        break
    
    if (edx_4 s< eax_9)
        break

if (i_3 u< arg3)
    int32_t edx_5 = *(i + 8)
    
    do
        int32_t eax_10 = i_3[2]
        
        if (edx_5 s> eax_10)
            break
        
        if (edx_5 s< eax_10)
            break
        
        i_3 = &i_3[0xa]
    while (i_3 u< arg3)
    
    i_7 = i_3

int32_t* i_1 = i_3
void* i_5 = i

while (true)
    for (; i_1 u< arg3; i_1 = &i_1[0xa])
        int32_t eax_11 = i_1[2]
        int32_t edx_6 = *(i + 8)
        
        if (eax_11 s<= edx_6)
            if (eax_11 s< edx_6)
                break
            
            i_7 = &i_3[0xa]
            sub_6ad4d0(i_1, i_3)
            i_3 = i_7
    
    void* edi_2 = arg2
    bool cond:2_1 = i_5 != edi_2
    
    if (i_5 u> edi_2)
        do
            int32_t eax_12 = *(i_5 - 0x20)
            int32_t edx_7 = *(i + 8)
            
            if (edx_7 s<= eax_12)
                if (edx_7 s< eax_12)
                    break
                
                i -= 0x28
                sub_6ad4d0(i_5 - 0x28, i)
                i_3 = i_7
            
            edi_2 = arg2
            i_5 -= 0x28
        while (edi_2 u< i_5)
        
        cond:2_1 = i_5 != edi_2
    
    if (cond:2_1)
        i_5 -= 0x28
        
        if (i_1 != arg3)
            sub_6ad4d0(i_5, i_1)
            i_3 = i_7
            i_1 = &i_1[0xa]
        else
            i -= 0x28
            
            if (i_5 != i)
                sub_6ad4d0(i, i_5)
                i_3 = i_7
            
            i_7 = i_3 - 0x28
            sub_6ad4d0(i_3 - 0x28, i)
            i_3 = i_7
    else
        if (i_1 == arg3)
            break
        
        if (i_3 != i_1)
            sub_6ad4d0(i_3, i)
            i_3 = i_7
        
        i_7 = &i_3[0xa]
        int32_t* i_4 = i_1
        void* i_6 = i
        i += 0x28
        i_1 = &i_1[0xa]
        sub_6ad4d0(i_4, i_6)
        i_3 = i_7

*arg1 = i
arg1[1] = i_3
return arg1
