// 函数: sub_436740
// 地址: 0x436740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg3
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((esi - arg2) s>> 2)
int32_t** edi = &arg2[(eax_3 - edx) s>> 1]
sub_4369b0(esi - 4, edx, arg2, edi, arg4)
int32_t* ebp = &edi[1]
int32_t* var_8 = ebp

if (arg2 u< edi)
    do
        void* eax_8 = **edi
        void* ecx_2 = *edi[-1]
        int32_t edx_2 = *(ecx_2 + 0x10)
        int32_t esi_1 = *(eax_8 + 0x10)
        
        if (edx_2 s< esi_1)
            break
        
        if (edx_2 s<= esi_1)
            int32_t edx_3 = *(ecx_2 + 0xc)
            int32_t esi_2 = *(eax_8 + 0xc)
            
            if (edx_3 s< esi_2)
                break
            
            if (edx_3 s<= esi_2 && *(ecx_2 + 8) s< *(eax_8 + 8))
                break
        
        int32_t edx_5 = *(eax_8 + 0x10)
        int32_t esi_3 = *(ecx_2 + 0x10)
        
        if (edx_5 s< esi_3)
            break
        
        if (edx_5 s<= esi_3)
            int32_t edx_6 = *(eax_8 + 0xc)
            int32_t esi_4 = *(ecx_2 + 0xc)
            
            if (edx_6 s< esi_4)
                break
            
            if (edx_6 s<= esi_4 && *(eax_8 + 8) s< *(ecx_2 + 8))
                break
        
        edi = &edi[-1]
    while (arg2 u< edi)
    
    esi = arg3

if (ebp u< esi)
    void* ecx_4 = **edi
    
    do
        void* eax_10 = **ebp
        int32_t edx_8 = *(eax_10 + 0x10)
        int32_t esi_5 = *(ecx_4 + 0x10)
        
        if (edx_8 s< esi_5)
            break
        
        if (edx_8 s<= esi_5)
            int32_t edx_9 = *(eax_10 + 0xc)
            int32_t esi_6 = *(ecx_4 + 0xc)
            
            if (edx_9 s< esi_6)
                break
            
            if (edx_9 s<= esi_6 && *(eax_10 + 8) s< *(ecx_4 + 8))
                break
        
        int32_t edx_11 = *(ecx_4 + 0x10)
        int32_t esi_7 = *(eax_10 + 0x10)
        
        if (edx_11 s< esi_7)
            break
        
        if (edx_11 s<= esi_7)
            int32_t edx_12 = *(ecx_4 + 0xc)
            int32_t esi_8 = *(eax_10 + 0xc)
            
            if (edx_12 s< esi_8)
                break
            
            if (edx_12 s<= esi_8 && *(ecx_4 + 8) s< *(eax_10 + 8))
                break
        
        ebp = &ebp[1]
    while (ebp u< arg3)
    
    var_8 = ebp

int32_t* ebx_1 = edi
void* var_4 = ebx_1

while (true)
    if (ebp u< arg3)
        do
            int32_t* ebx_2 = *ebp
            void* eax_11 = *ebx_2
            void* ecx_6 = **edi
            int32_t edx_14 = *(ecx_6 + 0x10)
            int32_t esi_9 = *(eax_11 + 0x10)
            
            if (edx_14 s>= esi_9)
                if (edx_14 s> esi_9)
                label_436869:
                    int32_t edx_17 = *(eax_11 + 0x10)
                    int32_t esi_11 = *(ecx_6 + 0x10)
                    
                    if (edx_17 s< esi_11)
                        break
                    
                    if (edx_17 s<= esi_11)
                        int32_t edx_18 = *(eax_11 + 0xc)
                        int32_t esi_12 = *(ecx_6 + 0xc)
                        
                        if (edx_18 s< esi_12)
                            break
                        
                        if (edx_18 s<= esi_12 && *(eax_11 + 8) s< *(ecx_6 + 8))
                            break
                    
                    int32_t* eax_13 = var_8
                    var_8 = &var_8[1]
                    int32_t ecx_9 = *eax_13
                    *eax_13 = ebx_2
                    *ebp = ecx_9
                else
                    int32_t edx_15 = *(ecx_6 + 0xc)
                    int32_t esi_10 = *(eax_11 + 0xc)
                    
                    if (edx_15 s>= esi_10 && (edx_15 s> esi_10 || *(ecx_6 + 8) s>= *(eax_11 + 8)))
                        goto label_436869
            
            ebp = &ebp[1]
        while (ebp u< arg3)
        
        ebx_1 = var_4
    
    bool cond:2_1 = ebx_1 != arg2
    
    if (ebx_1 u> arg2)
        void* eax_17
        
        do
            void* eax_14 = **edi
            void* ecx_11 = *ebx_1[-1]
            int32_t edx_20 = *(ecx_11 + 0x10)
            int32_t esi_13 = *(eax_14 + 0x10)
            
            if (edx_20 s>= esi_13)
                if (edx_20 s> esi_13)
                label_4368d9:
                    int32_t edx_23 = *(eax_14 + 0x10)
                    int32_t esi_15 = *(ecx_11 + 0x10)
                    
                    if (edx_23 s< esi_15)
                        break
                    
                    if (edx_23 s<= esi_15)
                        int32_t edx_24 = *(eax_14 + 0xc)
                        int32_t esi_16 = *(ecx_11 + 0xc)
                        
                        if (edx_24 s< esi_16)
                            break
                        
                        if (edx_24 s<= esi_16 && *(eax_14 + 8) s< *(ecx_11 + 8))
                            break
                    
                    int32_t eax_16 = edi[-1]
                    edi -= 4
                    *edi = ebx_1[-1]
                    ebx_1[-1] = eax_16
                else
                    int32_t edx_21 = *(ecx_11 + 0xc)
                    int32_t esi_14 = *(eax_14 + 0xc)
                    
                    if (edx_21 s>= esi_14 && (edx_21 s> esi_14 || *(ecx_11 + 8) s>= *(eax_14 + 8)))
                        goto label_4368d9
            
            eax_17 = &ebx_1[-1]
            var_4 = eax_17
            ebx_1 = eax_17
        while (arg2 u< eax_17)
        cond:2_1 = ebx_1 != arg2
    
    if (cond:2_1)
        ebx_1 -= 4
        var_4 = ebx_1
        
        if (ebp != arg3)
            int32_t eax_22 = *ebp
            *ebp = *ebx_1
            *ebx_1 = eax_22
            ebp = &ebp[1]
        else
            edi -= 4
            
            if (ebx_1 != edi)
                int32_t* eax_20 = *ebx_1
                *ebx_1 = *edi
                *edi = eax_20
            
            int32_t* eax_21 = *edi
            void* ecx_18 = var_8 - 4
            *edi = var_8[-1]
            var_8 = ecx_18
            *ecx_18 = eax_21
    else
        if (ebp == arg3)
            break
        
        if (var_8 != ebp)
            int32_t* eax_18 = *edi
            *edi = *var_8
            *var_8 = eax_18
        
        int32_t* eax_19 = ebp
        var_8 = &var_8[1]
        int32_t** ecx_15 = edi
        int32_t* edx_26 = *ecx_15
        edi = &edi[1]
        *ecx_15 = *eax_19
        ebp = &ebp[1]
        *eax_19 = edx_26

*arg1 = edi
arg1[1] = var_8
return arg1
