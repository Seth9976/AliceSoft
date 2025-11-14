// 函数: sub_5eabc0
// 地址: 0x5eabc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = 0
int32_t ebp_2 = (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2
void* var_4 = arg1
int32_t var_8 = ebp_2

if (ebp_2 s<= 0)
    return 

int32_t* esi_1 = arg2

while (true)
    int32_t eax_2 = esi_1[1]
    int32_t* edi_1 = **(*(arg1 + 8) + (ebx << 2))
    arg2 = edi_1
    int32_t edx_1
    
    if (&arg2 u< eax_2)
        edx_1 = *esi_1
    
    int32_t* eax
    
    if (&arg2 u>= eax_2 || edx_1 u> &arg2)
        int32_t ecx_6 = esi_1[2]
        
        if (eax_2 == ecx_6)
            int32_t edx_5 = *esi_1
            int32_t eax_7 = (eax_2 - edx_5) s>> 2
            
            if (eax_7 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_8 = (ecx_6 - edx_5) s>> 2
            
            if (eax_7 + 1 u> ecx_8)
                uint32_t edx_7 = ecx_8 u>> 1
                int32_t ecx_9
                
                if (0x3fffffff - edx_7 u>= ecx_8)
                    ecx_9 = ecx_8 + edx_7
                else
                    ecx_9 = 0
                
                if (ecx_9 u< eax_7 + 1)
                    ecx_9 = eax_7 + 1
                
                sub_6b0560(esi_1, ecx_9)
                ebp_2 = var_8
        
        eax = esi_1[1]
        
        if (eax != 0)
            *eax = edi_1
    else
        int32_t ecx_1 = esi_1[2]
        
        if (eax_2 == ecx_1)
            int32_t eax_4 = (eax_2 - edx_1) s>> 2
            
            if (eax_4 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_3 = (ecx_1 - edx_1) s>> 2
            
            if (eax_4 + 1 u> ecx_3)
                uint32_t edx_3 = ecx_3 u>> 1
                int32_t ecx_4
                
                if (0x3fffffff - edx_3 u>= ecx_3)
                    ecx_4 = ecx_3 + edx_3
                else
                    ecx_4 = 0
                
                if (ecx_4 u< eax_4 + 1)
                    ecx_4 = eax_4 + 1
                
                sub_6b0560(esi_1, ecx_4)
                ebp_2 = var_8
        
        eax = esi_1[1]
        
        if (eax != 0)
            *eax = *(*esi_1 + ((&arg2 - edx_1) s>> 2 << 2))
    esi_1[1] += 4
    ebx += 1
    
    if (ebx s>= ebp_2)
        break
    
    arg1 = var_4
