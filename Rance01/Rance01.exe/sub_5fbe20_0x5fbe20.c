// 函数: sub_5fbe20
// 地址: 0x5fbe20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg2
int32_t ecx = *(eax + 0x54)
int32_t* ebx = *(eax + 0x50)

if (ebx != ecx)
    do
        int32_t edi_1 = **ebx
        int32_t eax_2 = arg1[1]
        int32_t var_8 = edi_1
        int32_t edx_1
        
        if (&var_8 u< eax_2)
            edx_1 = *arg1
        
        if (&var_8 u>= eax_2 || edx_1 u> &var_8)
            int32_t ecx_6 = arg1[2]
            
            if (eax_2 == ecx_6)
                int32_t edx_5 = *arg1
                int32_t eax_8 = (eax_2 - edx_5) s>> 2
                
                if (eax_8 u> 0x3ffffffe)
                    goto label_5fbf5b
                
                int32_t ecx_8 = (ecx_6 - edx_5) s>> 2
                
                if (eax_8 + 1 u> ecx_8)
                    uint32_t edx_7 = ecx_8 u>> 1
                    int32_t ecx_9
                    
                    if (0x3fffffff - edx_7 u>= ecx_8)
                        ecx_9 = ecx_8 + edx_7
                    else
                        ecx_9 = 0
                    
                    if (ecx_9 u< eax_8 + 1)
                        ecx_9 = eax_8 + 1
                    
                    sub_6b0560(arg1, ecx_9)
            
            int32_t* eax_10 = arg1[1]
            
            if (eax_10 != 0)
                *eax_10 = edi_1
        else
            int32_t ecx_1 = arg1[2]
            
            if (eax_2 == ecx_1)
                int32_t eax_4 = (eax_2 - edx_1) s>> 2
                
                if (eax_4 u> 0x3ffffffe)
                    goto label_5fbf5b
                
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
                    
                    sub_6b0560(arg1, ecx_4)
            
            int32_t* eax_6 = arg1[1]
            
            if (eax_6 != 0)
                *eax_6 = *(*arg1 + ((&var_8 - edx_1) s>> 2 << 2))
        
        arg1[1] += 4
        ebx = &ebx[1]
    while (ebx != ecx)
    
    eax = arg2

void* edi_4 = *(eax + 0x74)
int32_t eax_11 = arg1[1]
arg2 = edi_4
int32_t edx_8

if (&arg2 u< eax_11)
    edx_8 = *arg1

void** result

if (&arg2 u>= eax_11 || edx_8 u> &arg2)
    int32_t ecx_15 = arg1[2]
    
    if (eax_11 == ecx_15)
        int32_t edx_12 = *arg1
        int32_t eax_16 = (eax_11 - edx_12) s>> 2
        
        if (eax_16 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_17 = (ecx_15 - edx_12) s>> 2
        
        if (eax_16 + 1 u> ecx_17)
            uint32_t edx_14 = ecx_17 u>> 1
            int32_t ecx_18
            
            if (0x3fffffff - edx_14 u>= ecx_17)
                ecx_18 = ecx_17 + edx_14
            else
                ecx_18 = 0
            
            if (ecx_18 u< eax_16 + 1)
                ecx_18 = eax_16 + 1
            
            sub_6b0560(arg1, ecx_18)
    
    result = arg1[1]
    
    if (result != 0)
        *result = edi_4
    
    arg1[1] += 4
    return result

int32_t ecx_10 = arg1[2]

if (eax_11 != ecx_10)
label_5fbf8b:
    result = arg1[1]
    
    if (result == 0)
        arg1[1] += 4
        return result
    
    *result = *(*arg1 + ((&arg2 - edx_8) s>> 2 << 2))
    arg1[1] += 4
    return result

int32_t eax_13 = (eax_11 - edx_8) s>> 2

if (eax_13 u> 0x3ffffffe)
label_5fbf5b:
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t ecx_12 = (ecx_10 - edx_8) s>> 2

if (eax_13 + 1 u> ecx_12)
    uint32_t edx_10 = ecx_12 u>> 1
    int32_t ecx_13
    
    if (0x3fffffff - edx_10 u>= ecx_12)
        ecx_13 = ecx_12 + edx_10
    else
        ecx_13 = 0
    
    if (ecx_13 u< eax_13 + 1)
        ecx_13 = eax_13 + 1
    
    sub_6b0560(arg1, ecx_13)

goto label_5fbf8b
