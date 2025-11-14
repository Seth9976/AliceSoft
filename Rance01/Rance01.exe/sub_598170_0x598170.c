// 函数: sub_598170
// 地址: 0x598170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg3
int32_t eax = *ebp
*ebp = eax + 1
int32_t edi = *(*arg2 + (eax << 2))
int32_t __saved_ecx
int32_t ecx_3
int32_t edx_1
ecx_3, edx_1 = sub_405410(arg1, &__saved_ecx, *arg1, arg1[1])
sub_4bc7e0(edi, edx_1, ecx_3, arg1)
int32_t ebx = 0

if (edi s> 0)
    int32_t ebp_1 = 0
    
    do
        if (sub_59a0b0(arg2, arg3, *arg1 + ebp_1) == 0)
            return 0
        
        ebx += 1
        ebp_1 += 0x1c
    while (ebx s< edi)
    
    ebp = arg3

int32_t eax_7 = *ebp
*ebp = eax_7 + 1
int32_t eax_8 = *(*arg2 + (eax_7 << 2))
int128_t* edi_2 = arg1[4]
void* result = arg1[5]

if (edi_2 != result)
    void* ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi_2, result, ebx_1)
    arg1[5] = ebx_1 + edi_2

arg3 = nullptr

if (eax_8 s> 0)
    do
        int32_t eax_9 = *ebp
        *ebp = eax_9 + 1
        int32_t* edi_3 = *arg2 + (eax_9 << 2)
        int32_t eax_10 = arg1[5]
        int32_t edx_5
        
        if (edi_3 u< eax_10)
            edx_5 = arg1[4]
        
        if (edi_3 u>= eax_10 || edx_5 u> edi_3)
            int32_t ecx_16 = arg1[6]
            
            if (eax_10 == ecx_16)
                int32_t edx_9 = arg1[4]
                int32_t eax_16 = (eax_10 - edx_9) s>> 2
                
                if (eax_16 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_18 = (ecx_16 - edx_9) s>> 2
                
                if (eax_16 + 1 u> ecx_18)
                    uint32_t edx_11 = ecx_18 u>> 1
                    int32_t ecx_19
                    
                    if (0x3fffffff - edx_11 u>= ecx_18)
                        ecx_19 = ecx_18 + edx_11
                    else
                        ecx_19 = 0
                    
                    if (ecx_19 u< eax_16 + 1)
                        ecx_19 = eax_16 + 1
                    
                    sub_6b0560(&arg1[4], ecx_19)
            
            int32_t* eax_18 = arg1[5]
            
            if (eax_18 != 0)
                *eax_18 = *edi_3
        else
            int32_t ecx_11 = arg1[6]
            
            if (eax_10 == ecx_11)
                int32_t eax_12 = (eax_10 - edx_5) s>> 2
                
                if (eax_12 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_13 = (ecx_11 - edx_5) s>> 2
                
                if (eax_12 + 1 u> ecx_13)
                    uint32_t edx_7 = ecx_13 u>> 1
                    int32_t ecx_14
                    
                    if (0x3fffffff - edx_7 u>= ecx_13)
                        ecx_14 = ecx_13 + edx_7
                    else
                        ecx_14 = 0
                    
                    if (ecx_14 u< eax_12 + 1)
                        ecx_14 = eax_12 + 1
                    
                    sub_6b0560(&arg1[4], ecx_14)
            
            int32_t* eax_14 = arg1[5]
            
            if (eax_14 != 0)
                *eax_14 = *(arg1[4] + ((edi_3 - edx_5) s>> 2 << 2))
        
        arg1[5] += 4
        result = arg3 + 1
        arg3 = result
    while (result s< eax_8)

result.b = 1
return result
