// 函数: sub_4c8d50
// 地址: 0x4c8d50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* ebp = arg1
int32_t ebx_2 = (ebp[1] - *ebp) s>> 2
int32_t* esi_1 = arg2 + 4
arg1.b = ebx_2.b
sub_54e400(&arg1, esi_1)
arg1.b = (ebx_2 u>> 8).b
sub_54e400(&arg1, esi_1)
arg1.b = (ebx_2 u>> 0x10).b
sub_54e400(&arg1, esi_1)
arg1.b = (ebx_2 u>> 0x18).b
sub_54e400(&arg1, esi_1)
void** i = *ebp
void** i_1 = i

while (i != ebp[1])
    int32_t eax_6 = esi_1[1]
    
    if (*i != 0)
        arg1.b = 1
        int32_t edx_8
        
        if (&arg1 u< eax_6)
            edx_8 = *esi_1
        
        if (&arg1 u>= eax_6 || edx_8 u> &arg1)
            int32_t ecx_10 = esi_1[2]
            
            if (eax_6 == ecx_10)
                int32_t edx_12 = *esi_1
                int32_t eax_16 = eax_6 - edx_12
                
                if (eax_16 u> 0xfffffffe)
                    goto label_4c8f82
                
                int32_t ecx_11 = ecx_10 - edx_12
                
                if (eax_16 + 1 u> ecx_11)
                    uint32_t edx_14 = ecx_11 u>> 1
                    uint32_t ecx_12
                    
                    if (0xffffffff - edx_14 u>= ecx_11)
                        ecx_12 = ecx_11 + edx_14
                    else
                        ecx_12 = 0
                    
                    if (ecx_12 u< eax_16 + 1)
                        ecx_12 = eax_16 + 1
                    
                    sub_424860(esi_1, ecx_12)
            
            char* eax_18 = esi_1[1]
            
            if (eax_18 != 0)
                *eax_18 = 1
        else
            int32_t ecx_8 = esi_1[2]
            
            if (eax_6 == ecx_8)
                int32_t eax_13 = eax_6 - edx_8
                
                if (eax_13 u> 0xfffffffe)
                    goto label_4c8f82
                
                ecx_8 -= edx_8
                
                if (eax_13 + 1 u> ecx_8)
                    uint32_t edx_10 = ecx_8 u>> 1
                    uint32_t ecx_9
                    
                    if (0xffffffff - edx_10 u>= ecx_8)
                        ecx_9 = ecx_8 + edx_10
                    else
                        ecx_9 = 0
                    
                    if (ecx_9 u< eax_13 + 1)
                        ecx_9 = eax_13 + 1
                    
                    sub_424860(esi_1, ecx_9)
                    i = i_1
            
            char* eax_15 = esi_1[1]
            
            if (eax_15 != 0)
                ecx_8.b = *(&arg1 - edx_8 + *esi_1)
                *eax_15 = ecx_8.b
        
        esi_1[1] += 1
        
        if (sub_4c59b0(arg2, *i) == 0)
            return 0
    else
        arg1.b = 0
        int32_t edx_1
        
        if (&arg1 u< eax_6)
            edx_1 = *esi_1
        
        if (&arg1 u>= eax_6 || edx_1 u> &arg1)
            int32_t ecx_5 = esi_1[2]
            
            if (eax_6 == ecx_5)
                int32_t edx_5 = *esi_1
                int32_t eax_10 = eax_6 - edx_5
                
                if (eax_10 u> 0xfffffffe)
                    goto label_4c8f82
                
                int32_t ecx_6 = ecx_5 - edx_5
                
                if (eax_10 + 1 u> ecx_6)
                    uint32_t edx_7 = ecx_6 u>> 1
                    uint32_t ecx_7
                    
                    if (0xffffffff - edx_7 u>= ecx_6)
                        ecx_7 = ecx_6 + edx_7
                    else
                        ecx_7 = 0
                    
                    if (ecx_7 u< eax_10 + 1)
                        ecx_7 = eax_10 + 1
                    
                    sub_424860(esi_1, ecx_7)
            
            char* eax_12 = esi_1[1]
            
            if (eax_12 != 0)
                *eax_12 = 0
            
            esi_1[1] += 1
        else
            int32_t ecx_3 = esi_1[2]
            
            if (eax_6 == ecx_3)
                int32_t eax_7 = eax_6 - edx_1
                
                if (eax_7 u> 0xfffffffe)
                    goto label_4c8f82
                
                ecx_3 -= edx_1
                
                if (eax_7 + 1 u> ecx_3)
                    uint32_t edx_3 = ecx_3 u>> 1
                    uint32_t ecx_4
                    
                    if (0xffffffff - edx_3 u>= ecx_3)
                        ecx_4 = ecx_3 + edx_3
                    else
                        ecx_4 = 0
                    
                    if (ecx_4 u< eax_7 + 1)
                        ecx_4 = eax_7 + 1
                    
                    sub_424860(esi_1, ecx_4)
                    i = i_1
            
            char* eax_9 = esi_1[1]
            
            if (eax_9 != 0)
                ecx_3.b = *(&arg1 - edx_1 + *esi_1)
                *eax_9 = ecx_3.b
            
            esi_1[1] += 1
    
    i = &i[1]
    i_1 = i

int32_t eax_20 = esi_1[1]
i.b = ebp[5].b != 0
arg2.b = i.b
int32_t edx_16

if (&arg2 u< eax_20)
    edx_16 = *esi_1

char* result

if (&arg2 u>= eax_20 || edx_16 u> &arg2)
    int32_t ecx_18 = esi_1[2]
    
    if (eax_20 == ecx_18)
        int32_t edx_20 = *esi_1
        int32_t eax_23 = eax_20 - edx_20
        
        if (eax_23 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_19 = ecx_18 - edx_20
        
        if (eax_23 + 1 u> ecx_19)
            uint32_t edx_22 = ecx_19 u>> 1
            uint32_t ecx_20
            
            if (0xffffffff - edx_22 u>= ecx_19)
                ecx_20 = ecx_19 + edx_22
            else
                ecx_20 = 0
            
            if (ecx_20 u< eax_23 + 1)
                ecx_20 = eax_23 + 1
            
            sub_424860(esi_1, ecx_20)
    
    result = esi_1[1]
    
    if (result != 0)
        *result = i.b
    
label_4c901b:
    esi_1[1] += 1
    result.b = 1
    return result

int32_t ecx_14 = esi_1[2]

if (eax_20 != ecx_14)
label_4c8fb7:
    result = esi_1[1]
    
    if (result == 0)
        goto label_4c901b
    
    ecx_14.b = *(&arg2 - edx_16 + *esi_1)
    *result = ecx_14.b
    esi_1[1] += 1
    result.b = 1
    return result

int32_t eax_21 = eax_20 - edx_16

if (eax_21 u> 0xfffffffe)
label_4c8f82:
    sub_6b47bf("vector<T> too long")
    noreturn

ecx_14 -= edx_16

if (eax_21 + 1 u> ecx_14)
    uint32_t edx_18 = ecx_14 u>> 1
    uint32_t ecx_16
    
    if (0xffffffff - edx_18 u>= ecx_14)
        ecx_16 = ecx_14 + edx_18
    else
        ecx_16 = 0
    
    if (ecx_16 u< eax_21 + 1)
        ecx_16 = eax_21 + 1
    
    sub_424860(esi_1, ecx_16)

goto label_4c8fb7
