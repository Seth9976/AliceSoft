// 函数: sub_599ed0
// 地址: 0x599ed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int32_t* arg_4
int32_t* ebp = arg_4
int32_t i = 0

if (ebp[4] s> 0)
    do
        int32_t* eax
        
        if (ebp[5] u< 0x10)
            eax = ebp
        else
            eax = *ebp
        
        int32_t edi_1 = sx.d(*(eax + i))
        int32_t eax_1 = arg1[1]
        var_4 = edi_1
        int32_t edx
        
        if (&var_4 u< eax_1)
            edx = *arg1
        
        if (&var_4 u>= eax_1 || edx u> &var_4)
            int32_t ecx_5 = arg1[2]
            
            if (eax_1 == ecx_5)
                int32_t edx_4 = *arg1
                int32_t eax_7 = (eax_1 - edx_4) s>> 2
                
                if (eax_7 u> 0x3ffffffe)
                    goto label_59a000
                
                int32_t ecx_7 = (ecx_5 - edx_4) s>> 2
                
                if (eax_7 + 1 u> ecx_7)
                    uint32_t edx_6 = ecx_7 u>> 1
                    int32_t ecx_8
                    
                    if (0x3fffffff - edx_6 u>= ecx_7)
                        ecx_8 = ecx_7 + edx_6
                    else
                        ecx_8 = 0
                    
                    if (ecx_8 u< eax_7 + 1)
                        ecx_8 = eax_7 + 1
                    
                    sub_6b0560(arg1, ecx_8)
                    ebp = arg_4
            
            int32_t* eax_9 = arg1[1]
            
            if (eax_9 != 0)
                *eax_9 = edi_1
        else
            int32_t ecx = arg1[2]
            
            if (eax_1 == ecx)
                int32_t eax_3 = (eax_1 - edx) s>> 2
                
                if (eax_3 u> 0x3ffffffe)
                    goto label_59a000
                
                int32_t ecx_2 = (ecx - edx) s>> 2
                
                if (eax_3 + 1 u> ecx_2)
                    uint32_t edx_2 = ecx_2 u>> 1
                    int32_t ecx_3
                    
                    if (0x3fffffff - edx_2 u>= ecx_2)
                        ecx_3 = ecx_2 + edx_2
                    else
                        ecx_3 = 0
                    
                    if (ecx_3 u< eax_3 + 1)
                        ecx_3 = eax_3 + 1
                    
                    sub_6b0560(arg1, ecx_3)
                    ebp = arg_4
            
            int32_t* eax_5 = arg1[1]
            
            if (eax_5 != 0)
                *eax_5 = *(*arg1 + ((&var_4 - edx) s>> 2 << 2))
        
        arg1[1] += 4
        i += 1
    while (i s< ebp[4])

int32_t eax_10 = arg1[1]
arg_4 = nullptr
int32_t edx_7

if (&arg_4 u< eax_10)
    edx_7 = *arg1

int32_t* result

if (&arg_4 u>= eax_10 || edx_7 u> &arg_4)
    int32_t ecx_15 = arg1[2]
    
    if (eax_10 == ecx_15)
        int32_t edx_11 = *arg1
        int32_t eax_15 = (eax_10 - edx_11) s>> 2
        
        if (eax_15 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_17 = (ecx_15 - edx_11) s>> 2
        
        if (eax_15 + 1 u> ecx_17)
            uint32_t edx_13 = ecx_17 u>> 1
            int32_t ecx_18
            
            if (0x3fffffff - edx_13 u>= ecx_17)
                ecx_18 = ecx_17 + edx_13
            else
                ecx_18 = 0
            
            if (ecx_18 u< eax_15 + 1)
                ecx_18 = eax_15 + 1
            
            sub_6b0560(arg1, ecx_18)
    
    result = arg1[1]
    
    if (result != 0)
        *result = 0
    
    arg1[1] += 4
    return result

int32_t ecx_9 = arg1[2]

if (eax_10 != ecx_9)
label_59a030:
    result = arg1[1]
    
    if (result == 0)
        arg1[1] += 4
        return result
    
    *result = *(*arg1 + ((&arg_4 - edx_7) s>> 2 << 2))
    arg1[1] += 4
    return result

int32_t eax_12 = (eax_10 - edx_7) s>> 2

if (eax_12 u> 0x3ffffffe)
label_59a000:
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t ecx_11 = (ecx_9 - edx_7) s>> 2

if (eax_12 + 1 u> ecx_11)
    uint32_t edx_9 = ecx_11 u>> 1
    int32_t ecx_12
    
    if (0x3fffffff - edx_9 u>= ecx_11)
        ecx_12 = ecx_11 + edx_9
    else
        ecx_12 = 0
    
    if (ecx_12 u< eax_12 + 1)
        ecx_12 = eax_12 + 1
    
    sub_6b0560(arg1, ecx_12)

goto label_59a030
