// 函数: sub_597f50
// 地址: 0x597f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
var_4 = (arg3[1] - *arg3) s/ 0x1c
int32_t ecx_2
int32_t edx_3
ecx_2, edx_3 = sub_416780(&var_4, arg2)

for (int32_t i = *arg3; i != arg3[1]; i += 0x1c)
    int32_t i_2 = i
    ecx_2, edx_3 = sub_599ed0(arg2, edx_3, ecx_2)

int32_t eax_6 = arg2[1]
int32_t edi_3 = (arg3[5] - arg3[4]) s>> 2
var_4 = edi_3
int32_t edx_4

if (&var_4 u< eax_6)
    edx_4 = *arg2

if (&var_4 u>= eax_6 || edx_4 u> &var_4)
    int32_t ecx_8 = arg2[2]
    
    if (eax_6 == ecx_8)
        int32_t edx_8 = *arg2
        int32_t eax_12 = (eax_6 - edx_8) s>> 2
        
        if (eax_12 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_10 = (ecx_8 - edx_8) s>> 2
        
        if (eax_12 + 1 u> ecx_10)
            uint32_t edx_10 = ecx_10 u>> 1
            int32_t ecx_11
            
            if (0x3fffffff - edx_10 u>= ecx_10)
                ecx_11 = ecx_10 + edx_10
            else
                ecx_11 = 0
            
            if (ecx_11 u< eax_12 + 1)
                ecx_11 = eax_12 + 1
            
            sub_6b0560(arg2, ecx_11)
    
    int32_t* eax_14 = arg2[1]
    
    if (eax_14 != 0)
        *eax_14 = edi_3
else
    int32_t ecx_3 = arg2[2]
    
    if (eax_6 == ecx_3)
        int32_t eax_8 = (eax_6 - edx_4) s>> 2
        
        if (eax_8 u> 0x3ffffffe)
        label_597fdd:
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_5 = (ecx_3 - edx_4) s>> 2
        
        if (eax_8 + 1 u> ecx_5)
            uint32_t edx_6 = ecx_5 u>> 1
            int32_t ecx_6
            
            if (0x3fffffff - edx_6 u>= ecx_5)
                ecx_6 = ecx_5 + edx_6
            else
                ecx_6 = 0
            
            if (ecx_6 u< eax_8 + 1)
                ecx_6 = eax_8 + 1
            
            sub_6b0560(arg2, ecx_6)
    
    int32_t* eax_10 = arg2[1]
    
    if (eax_10 != 0)
        *eax_10 = *(*arg2 + ((&var_4 - edx_4) s>> 2 << 2))

arg2[1] += 4
int32_t* i_1 = arg3[4]
int32_t result = arg2[1]

for (; i_1 != arg3[5]; i_1 = &i_1[1])
    int32_t edx_12
    
    if (i_1 u< result)
        edx_12 = *arg2
    
    if (i_1 u>= result || edx_12 u> i_1)
        int32_t ecx_17 = arg2[2]
        
        if (result == ecx_17)
            int32_t edx_16 = *arg2
            int32_t eax_20 = (result - edx_16) s>> 2
            
            if (eax_20 u> 0x3ffffffe)
                goto label_597fdd
            
            int32_t ecx_19 = (ecx_17 - edx_16) s>> 2
            
            if (eax_20 + 1 u> ecx_19)
                uint32_t edx_18 = ecx_19 u>> 1
                int32_t ecx_20
                
                if (0x3fffffff - edx_18 u>= ecx_19)
                    ecx_20 = ecx_19 + edx_18
                else
                    ecx_20 = 0
                
                if (ecx_20 u< eax_20 + 1)
                    ecx_20 = eax_20 + 1
                
                sub_6b0560(arg2, ecx_20)
        
        int32_t* eax_22 = arg2[1]
        
        if (eax_22 != 0)
            *eax_22 = *i_1
    else
        int32_t ecx_12 = arg2[2]
        
        if (result == ecx_12)
            int32_t eax_16 = (result - edx_12) s>> 2
            
            if (eax_16 u> 0x3ffffffe)
                goto label_597fdd
            
            int32_t ecx_14 = (ecx_12 - edx_12) s>> 2
            
            if (eax_16 + 1 u> ecx_14)
                uint32_t edx_14 = ecx_14 u>> 1
                int32_t ecx_15
                
                if (0x3fffffff - edx_14 u>= ecx_14)
                    ecx_15 = ecx_14 + edx_14
                else
                    ecx_15 = 0
                
                if (ecx_15 u< eax_16 + 1)
                    ecx_15 = eax_16 + 1
                
                sub_6b0560(arg2, ecx_15)
        
        int32_t* eax_18 = arg2[1]
        
        if (eax_18 != 0)
            *eax_18 = *(*arg2 + ((i_1 - edx_12) s>> 2 << 2))
    
    arg2[1] += 4
    result = arg2[1]

result.b = 1
return result
