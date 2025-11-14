// 函数: sub_5f1300
// 地址: 0x5f1300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg2 + 0x314)
int32_t var_4 = 0
int32_t ecx_12

while (true)
    int32_t edi_3 = ebx s/ 0xa
    int32_t ebp_3
    
    if (ebx s>= 0)
        ebp_3 = ebx s% 0xa
    else
        ebp_3 = edi_3 * 0xa - ebx
    
    int32_t eax_2 = arg1[1]
    int32_t var_8 = ebp_3
    int32_t edx_3
    
    if (&var_8 u< eax_2)
        edx_3 = *arg1
    
    if (&var_8 u>= eax_2 || edx_3 u> &var_8)
        int32_t ecx_8 = arg1[2]
        
        if (eax_2 == ecx_8)
            int32_t edx_7 = *arg1
            int32_t eax_8 = (eax_2 - edx_7) s>> 2
            
            if (eax_8 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_10 = (ecx_8 - edx_7) s>> 2
            
            if (eax_8 + 1 u> ecx_10)
                uint32_t edx_9 = ecx_10 u>> 1
                int32_t ecx_11
                
                if (0x3fffffff - edx_9 u>= ecx_10)
                    ecx_11 = ecx_10 + edx_9
                else
                    ecx_11 = 0
                
                if (ecx_11 u< eax_8 + 1)
                    ecx_11 = eax_8 + 1
                
                sub_6b0560(arg1, ecx_11)
        
        int32_t* eax_10 = arg1[1]
        
        if (eax_10 != 0)
            *eax_10 = ebp_3
    else
        int32_t ecx_3 = arg1[2]
        
        if (eax_2 == ecx_3)
            int32_t eax_4 = (eax_2 - edx_3) s>> 2
            
            if (eax_4 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_5 = (ecx_3 - edx_3) s>> 2
            
            if (eax_4 + 1 u> ecx_5)
                uint32_t edx_5 = ecx_5 u>> 1
                int32_t ecx_6
                
                if (0x3fffffff - edx_5 u>= ecx_5)
                    ecx_6 = ecx_5 + edx_5
                else
                    ecx_6 = 0
                
                if (ecx_6 u< eax_4 + 1)
                    ecx_6 = eax_4 + 1
                
                sub_6b0560(arg1, ecx_6)
        
        int32_t* eax_6 = arg1[1]
        
        if (eax_6 != 0)
            *eax_6 = *(*arg1 + ((&var_8 - edx_3) s>> 2 << 2))
    
    arg1[1] += 4
    ecx_12 = arg1[1]
    ebx = edi_3
    
    if (ebx == 0)
        break
    
    void* const edi_4 = arg2
    
    if (*(edi_4 + 0x318) != 0)
        int32_t edx_11 = var_4 s/ 3 * 3
        int32_t ebp_6 = var_4 s% 3
        
        if (ebp_6 == 2)
            int32_t eax_15
            
            if (edi_4 + 8 u< ecx_12)
                eax_15 = *arg1
            
            if (edi_4 + 8 u>= ecx_12 || eax_15 u> edi_4 + 8)
                if (ecx_12 == arg1[2])
                    sub_40d3d0(arg1, edx_11, 1)
                
                int32_t* eax_19 = arg1[1]
                
                if (eax_19 != 0)
                    *eax_19 = *(edi_4 + 8)
            else
                if (ecx_12 == arg1[2])
                    sub_40d3d0(arg1, edx_11, ebp_6 - 1)
                
                int32_t* eax_17 = arg1[1]
                
                if (eax_17 != 0)
                    *eax_17 = *(*arg1 + ((edi_4 + 8 - eax_15) s>> 2 << 2))
                    arg1[1] += 4
                    var_4 += 1
                    continue
            
            arg1[1] += 4
    
    var_4 += 1

void* const ebp_7 = arg2
int32_t i = *(ebp_7 + 0x320)

if (i != 0)
    void** edx_15 = (ecx_12 - *arg1) s>> 2
    
    if (edx_15 u< i)
        arg2 = nullptr
        
        do
            int32_t eax_20
            
            if (&arg2 u< ecx_12)
                eax_20 = *arg1
                edx_15 = &arg2
            
            if (&arg2 u>= ecx_12 || eax_20 u> &arg2)
                if (ecx_12 == arg1[2])
                    edx_15 = sub_40d3d0(arg1, edx_15, 1)
                
                int32_t* eax_24 = arg1[1]
                
                if (eax_24 != 0)
                    *eax_24 = 0
            else
                if (ecx_12 == arg1[2])
                    edx_15 = sub_40d3d0(arg1, edx_15, 1)
                
                void*** eax_22 = arg1[1]
                
                if (eax_22 != 0)
                    edx_15 = *(*arg1 + ((&arg2 - eax_20) s>> 2 << 2))
                    *eax_22 = edx_15
            
            arg1[1] += 4
            ecx_12 = arg1[1]
        while ((ecx_12 - *arg1) s>> 2 u< i)

if (*(ebp_7 + 0x314) s< 0)
    sub_416780(ebp_7 + 4, arg1)

int32_t* result = arg1[1]
int32_t* esi_1 = *arg1

while (esi_1 != result)
    result -= 4
    
    if (esi_1 == result)
        break
    
    int32_t ecx_17 = *esi_1
    *esi_1 = *result
    esi_1 = &esi_1[1]
    *result = ecx_17

return result
