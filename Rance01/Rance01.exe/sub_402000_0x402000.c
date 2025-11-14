// 函数: sub_402000
// 地址: 0x402000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2[4]
void* ebx = arg4

if (eax u< arg3)
    sub_6b480c("invalid string position")
    noreturn

void* eax_1 = eax - arg3

if (eax_1 u< ebx)
    ebx = eax_1

void* eax_2 = arg1[4]

if (0xffffffff - eax_2 u<= ebx)
    sub_6b47bf("string too long")
    noreturn

if (ebx != 0)
    void* edi_1 = eax_2 + ebx
    
    if (edi_1 u> 0xfffffffe)
        sub_6b47bf("string too long")
        noreturn
    
    int32_t ecx_2 = arg1[5]
    
    if (ecx_2 u>= edi_1)
        if (edi_1 != 0)
            goto label_40206a
        
        arg1[4] = edi_1
        
        if (ecx_2 u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_401470(arg1, edi_1, eax_2)
    
    if (edi_1 != 0)
    label_40206a:
        void** ecx_3 = arg2
        
        if (ecx_3[5] u>= 0x10)
            ecx_3 = *ecx_3
        
        int32_t* eax_3
        
        if (arg1[5] u< 0x10)
            eax_3 = arg1
        else
            eax_3 = *arg1
        
        sub_6c02a0(arg1[4] + eax_3, ecx_3 + arg3, ebx)
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi_1
        
        if (not(cond:0_1))
            *(*arg1 + edi_1) = 0
            return arg1
        
        *(arg1 + edi_1) = 0

return arg1
