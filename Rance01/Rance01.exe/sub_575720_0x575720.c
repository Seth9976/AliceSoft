// 函数: sub_575720
// 地址: 0x575720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
void** ebp = arg2
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg3 - ebp) s>> 2)
int32_t* esi = &ebp[(eax_3 - edx) s>> 1]
int32_t var_18 = arg4
sub_5759a0(arg4, edx, ebp, esi, arg3 - 4)
int32_t* eax_7 = esi
void* edi = &esi[1]

if (ebp u< esi)
    do
        int32_t ecx_4 = *(*(eax_7[-1] + 0x40) + 4)
        int32_t edx_4 = *(*(*eax_7 + 0x40) + 4)
        
        if (edx_4 s< ecx_4)
            break
        
        if (edx_4 s> ecx_4)
            break
        
        eax_7 = &eax_7[-1]
    while (ebp u< eax_7)

if (edi u< arg3)
    int32_t edx_6 = *(*(*eax_7 + 0x40) + 4)
    
    do
        int32_t ecx_8 = *(*(*edi + 0x40) + 4)
        
        if (edx_6 s< ecx_8)
            break
        
        if (edx_6 s> ecx_8)
            break
        
        edi += 4
    while (edi u< arg3)

void* ecx_9 = edi
int32_t* edx_7 = eax_7

while (true)
    if (ecx_9 u< arg3)
        do
            void* ebx_2 = *ecx_9
            int32_t esi_3 = *(*(*eax_7 + 0x40) + 4)
            int32_t ebp_2 = *(*(ebx_2 + 0x40) + 4)
            
            if (ebp_2 s>= esi_3)
                if (ebp_2 s> esi_3)
                    break
                
                int32_t ebp_3 = *edi
                *edi = ebx_2
                edi += 4
                *ecx_9 = ebp_3
            
            ecx_9 += 4
        while (ecx_9 u< arg3)
        
        ebp = arg2
    
    bool cond:2_1 = edx_7 != ebp
    
    if (edx_7 u> ebp)
        do
            int32_t esi_7 = *(*(edx_7[-1] + 0x40) + 4)
            int32_t ebx_5 = *(*(*eax_7 + 0x40) + 4)
            
            if (ebx_5 s>= esi_7)
                if (ebx_5 s> esi_7)
                    break
                
                int32_t esi_8 = eax_7[-1]
                eax_7 -= 4
                *eax_7 = edx_7[-1]
                edx_7[-1] = esi_8
            
            edx_7 = &edx_7[-1]
        while (ebp u< edx_7)
        
        cond:2_1 = edx_7 != ebp
    
    if (cond:2_1)
        edx_7 -= 4
        
        if (ecx_9 != arg3)
            int32_t esi_13 = *ecx_9
            *ecx_9 = *edx_7
            *edx_7 = esi_13
            ecx_9 += 4
        else
            eax_7 -= 4
            
            if (edx_7 != eax_7)
                int32_t esi_11 = *edx_7
                *edx_7 = *eax_7
                *eax_7 = esi_11
            
            int32_t ebx_11 = *(edi - 4)
            int32_t esi_12 = *eax_7
            edi -= 4
            *eax_7 = ebx_11
            *edi = esi_12
    else
        if (ecx_9 == arg3)
            break
        
        if (edi != ecx_9)
            int32_t esi_9 = *eax_7
            *eax_7 = *edi
            *edi = esi_9
        
        void* esi_10 = ecx_9
        var_4 = *eax_7
        *eax_7 = *esi_10
        ebp = arg2
        edi += 4
        eax_7 = &eax_7[1]
        ecx_9 += 4
        *esi_10 = var_4

arg1[1] = edi
*arg1 = eax_7
return arg1
