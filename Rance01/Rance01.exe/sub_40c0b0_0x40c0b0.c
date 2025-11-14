// 函数: sub_40c0b0
// 地址: 0x40c0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg1
int32_t eax = arg3[4]

if (eax u< arg4)
    sub_6b480c("invalid string position")
    noreturn

void* eax_1 = eax - arg4

if (eax_1 u< edi)
    edi = eax_1

void* eax_2 = arg2[4]

if (0xffffffff - eax_2 u<= edi)
    sub_6b47bf("string too long")
    noreturn

if (edi != 0)
    void* edx_1 = eax_2 + edi
    
    if (edx_1 u> 0xfffffffe)
        sub_6b47bf("string too long")
        noreturn
    
    int32_t ecx_1 = arg2[5]
    
    if (ecx_1 u>= edx_1)
        if (edx_1 != 0)
            goto label_40c11f
        
        arg2[4] = edx_1
        
        if (ecx_1 u< 0x10)
            *arg2 = 0
            return arg2
        
        **arg2 = edx_1.b
        return arg2
    
    sub_401470(arg2, edx_1, eax_2)
    
    if (edx_1 != 0)
    label_40c11f:
        int32_t eax_3 = arg2[5]
        int128_t* ecx_2
        
        if (eax_3 u< 0x10)
            ecx_2 = arg2
        else
            ecx_2 = *arg2
        
        int32_t* eax_7
        
        if (eax_3 u< 0x10)
            eax_7 = arg2
        else
            eax_7 = *arg2
        
        sub_6b49d0(eax_7 + edi, ecx_2, arg2[4])
        
        if (arg2 != arg3)
            int32_t* ecx_6
            
            if (arg3[5] u< 0x10)
                ecx_6 = arg3
            else
                ecx_6 = *arg3
            
            int128_t* eax_12
            
            if (arg2[5] u< 0x10)
                eax_12 = arg2
            else
                eax_12 = *arg2
            
            sub_6c02a0(eax_12, ecx_6 + arg4, edi)
        else
            void* edx_4 = edi + arg4
            
            if (arg4 == 0)
                edx_4 = arg4
            
            int32_t eax_9 = arg2[5]
            int32_t* ecx_3
            
            if (eax_9 u< 0x10)
                ecx_3 = arg2
            else
                ecx_3 = *arg2
            
            if (eax_9 u< 0x10)
                sub_6b49d0(arg2, ecx_3 + edx_4, edi)
            else
                sub_6b49d0(*arg2, ecx_3 + edx_4, edi)
        
        bool cond:0_1 = arg2[5] u< 0x10
        arg2[4] = edx_1
        
        if (not(cond:0_1))
            *(*arg2 + edx_1) = 0
            return arg2
        
        *(arg2 + edx_1) = 0

return arg2
