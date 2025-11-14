// 函数: sub_616cc0
// 地址: 0x616cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1

if ((*(*ebp + 0x14))() s> 0)
    char eax_6 = (*(ebp[0x10] + 8))((*(*ebp + 0x14))())
    
    if (eax_6 == 0)
        return eax_6
    
    sub_6c02a0((*(ebp[0x10] + 0x18))((*(*ebp + 0x18))((*(*ebp + 0x14))())))
else
    (*(ebp[0x10] + 0x10))()

int32_t eax_13 = *(*ebp + 0x18)
ebp[8] = 0
char* ebx = eax_13()
int32_t eax_15 = *(*ebp + 0x14)
char* var_c = ebx
void* edi_2 = &ebx[eax_15()]
void* var_8 = edi_2
int32_t eax_16

if (ebx u< edi_2)
    void* esi_1 = &ebp[4]
    
    do
        int32_t eax_17 = *(esi_1 + 4)
        char* var_4_1 = ebx
        int32_t edx_8
        
        if (&var_c u< eax_17)
            edx_8 = *esi_1
        
        int32_t* eax_24
        int32_t ecx_9
        
        if (&var_c u>= eax_17 || edx_8 u> &var_c)
            ecx_9 = *(esi_1 + 8)
            
            if (eax_17 == ecx_9)
                int32_t edx_12 = *esi_1
                int32_t eax_22 = (eax_17 - edx_12) s>> 2
                
                if (eax_22 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                ecx_9 = (ecx_9 - edx_12) s>> 2
                
                if (eax_22 + 1 u> ecx_9)
                    uint32_t edx_14 = ecx_9 u>> 1
                    int32_t ecx_13
                    
                    if (0x3fffffff - edx_14 u>= ecx_9)
                        ecx_13 = ecx_9 + edx_14
                    else
                        ecx_13 = 0
                    
                    if (ecx_13 u< eax_22 + 1)
                        ecx_13 = eax_22 + 1
                    
                    ecx_9 = sub_6b0560(esi_1, ecx_13)
                    edi_2 = var_8
            
            eax_24 = *(esi_1 + 4)
            
            if (eax_24 != 0)
                *eax_24 = ebx
        else
            ecx_9 = *(esi_1 + 8)
            
            if (eax_17 == ecx_9)
                int32_t eax_19 = (eax_17 - edx_8) s>> 2
                
                if (eax_19 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                ecx_9 = (ecx_9 - edx_8) s>> 2
                
                if (eax_19 + 1 u> ecx_9)
                    uint32_t edx_10 = ecx_9 u>> 1
                    int32_t ecx_11
                    
                    if (0x3fffffff - edx_10 u>= ecx_9)
                        ecx_11 = ecx_9 + edx_10
                    else
                        ecx_11 = 0
                    
                    if (ecx_11 u< eax_19 + 1)
                        ecx_11 = eax_19 + 1
                    
                    ecx_9 = sub_6b0560(esi_1, ecx_11)
                    ebp = arg1
            
            eax_24 = *(esi_1 + 4)
            
            if (eax_24 != 0)
                ecx_9 = *(*esi_1 + ((&var_c - edx_8) s>> 2 << 2))
                *eax_24 = ecx_9
            
            edi_2 = var_8
        
        *(esi_1 + 4) += 4
        
        if (ebx u< edi_2)
            do
                eax_24.b = *ebx
                
                if (eax_24.b u< 0x81)
                    if (eax_24.b u< 0xe0)
                        goto label_616e55
                    
                    ebx = &ebx[2]
                else if (eax_24.b u<= 0x9f || eax_24.b u>= 0xe0)
                    ebx = &ebx[2]
                else
                label_616e55:
                    
                    if (eax_24.b == 0xd)
                        *ebx = 0
                    else if (eax_24.b == 0xa)
                        *ebx = 0
                        ebx = &ebx[1]
                        break
                    
                    ebx = &ebx[1]
            while (ebx u< edi_2)
            
            var_c = ebx
        
        eax_16 = sub_616ea0(ecx_9, var_4_1)
        
        if (eax_16 s> ebp[8])
            ebp[8] = eax_16
    while (ebx u< edi_2)

eax_16.b = 1
return eax_16
