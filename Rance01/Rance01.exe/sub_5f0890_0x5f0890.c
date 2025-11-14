// 函数: sub_5f0890
// 地址: 0x5f0890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = 0
int32_t ebp_2 = (*(arg1 + 0x328) - *(arg1 + 0x324)) s>> 2
void* var_4 = arg1
int32_t var_8 = ebp_2

if (ebp_2 s<= 0)
    return 

int32_t* esi_1 = arg2

while (true)
    int32_t eax_1
    
    if (ebx s>= 0)
        eax_1 = *(arg1 + 0x324)
    
    int32_t* edi_1
    
    if (ebx s< 0 || ebx s>= (*(arg1 + 0x328) - eax_1) s>> 2)
        edi_1 = nullptr
    else
        edi_1 = **(eax_1 + (ebx << 2))
    
    int32_t eax_2 = esi_1[1]
    arg2 = edi_1
    int32_t edx_2
    
    if (&arg2 u< eax_2)
        edx_2 = *esi_1
    
    int32_t* eax
    
    if (&arg2 u>= eax_2 || edx_2 u> &arg2)
        int32_t ecx_8 = esi_1[2]
        
        if (eax_2 == ecx_8)
            int32_t edx_6 = *esi_1
            int32_t eax_7 = (eax_2 - edx_6) s>> 2
            
            if (eax_7 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_10 = (ecx_8 - edx_6) s>> 2
            
            if (eax_7 + 1 u> ecx_10)
                uint32_t edx_8 = ecx_10 u>> 1
                int32_t ecx_11
                
                if (0x3fffffff - edx_8 u>= ecx_10)
                    ecx_11 = ecx_10 + edx_8
                else
                    ecx_11 = 0
                
                if (ecx_11 u< eax_7 + 1)
                    ecx_11 = eax_7 + 1
                
                sub_6b0560(esi_1, ecx_11)
                ebp_2 = var_8
        
        eax = esi_1[1]
        
        if (eax != 0)
            *eax = edi_1
    else
        int32_t ecx_3 = esi_1[2]
        
        if (eax_2 == ecx_3)
            int32_t eax_4 = (eax_2 - edx_2) s>> 2
            
            if (eax_4 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_5 = (ecx_3 - edx_2) s>> 2
            
            if (eax_4 + 1 u> ecx_5)
                uint32_t edx_4 = ecx_5 u>> 1
                int32_t ecx_6
                
                if (0x3fffffff - edx_4 u>= ecx_5)
                    ecx_6 = ecx_5 + edx_4
                else
                    ecx_6 = 0
                
                if (ecx_6 u< eax_4 + 1)
                    ecx_6 = eax_4 + 1
                
                sub_6b0560(esi_1, ecx_6)
                ebp_2 = var_8
        
        eax = esi_1[1]
        
        if (eax != 0)
            *eax = *(*esi_1 + ((&arg2 - edx_2) s>> 2 << 2))
    esi_1[1] += 4
    ebx += 1
    
    if (ebx s>= ebp_2)
        break
    
    arg1 = var_4
