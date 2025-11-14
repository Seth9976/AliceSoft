// 函数: sub_4b4bf0
// 地址: 0x4b4bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
void* ebp = arg3
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((ebp - arg2) s>> 2)
int32_t* esi = &arg2[(eax_3 - edx) s>> 1]
sub_4b4d30(ebp - 4, edx, arg2, esi, ebp - 4)
int32_t* eax_7 = esi
void* i_2 = &esi[1]

if (arg2 u< esi)
    do
        int32_t ecx_2 = eax_7[-1]
        int32_t edx_1 = *eax_7
        
        if (edx_1 s> ecx_2)
            break
        
        if (edx_1 s< ecx_2)
            break
        
        eax_7 = &eax_7[-1]
    while (arg2 u< eax_7)

if (i_2 u< ebp)
    int32_t edx_2 = *eax_7
    
    do
        int32_t ecx_3 = *i_2
        
        if (edx_2 s> ecx_3)
            break
        
        if (edx_2 s< ecx_3)
            break
        
        i_2 += 4
    while (i_2 u< ebp)

void* i = i_2
int32_t* edx_3 = eax_7

while (true)
    for (; i u< ebp; i += 4)
        int32_t ebx_1 = *i
        int32_t esi_1 = *eax_7
        
        if (ebx_1 s<= esi_1)
            if (ebx_1 s< esi_1)
                break
            
            int32_t ebp_1 = *i_2
            *i_2 = ebx_1
            *i = ebp_1
            ebp = arg3
            i_2 += 4
    
    bool cond:1_1 = edx_3 != arg2
    
    if (edx_3 u> arg2)
        do
            int32_t esi_3 = edx_3[-1]
            int32_t ebx_2 = *eax_7
            
            if (ebx_2 s<= esi_3)
                if (ebx_2 s< esi_3)
                    break
                
                int32_t esi_4 = eax_7[-1]
                eax_7 -= 4
                *eax_7 = edx_3[-1]
                edx_3[-1] = esi_4
            
            edx_3 = &edx_3[-1]
        while (arg2 u< edx_3)
        
        cond:1_1 = edx_3 != arg2
    
    if (cond:1_1)
        edx_3 -= 4
        
        if (i != ebp)
            int32_t esi_8 = *i
            *i = *edx_3
            *edx_3 = esi_8
            i += 4
        else
            eax_7 -= 4
            
            if (edx_3 != eax_7)
                int32_t esi_6 = *edx_3
                *edx_3 = *eax_7
                *eax_7 = esi_6
            
            int32_t ebx_8 = *(i_2 - 4)
            int32_t esi_7 = *eax_7
            i_2 -= 4
            *eax_7 = ebx_8
            *i_2 = esi_7
    else
        if (i == ebp)
            break
        
        if (i_2 != i)
            int32_t esi_5 = *eax_7
            *eax_7 = *i_2
            *i_2 = esi_5
        
        void* i_1 = i
        var_4 = *eax_7
        *eax_7 = *i_1
        ebp = arg3
        i_2 += 4
        eax_7 = &eax_7[1]
        i += 4
        *i_1 = var_4

arg1[1] = i_2
*arg1 = eax_7
return arg1
