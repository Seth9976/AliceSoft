// 函数: sub_5090b0
// 地址: 0x5090b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* eax = *arg1
int32_t ebx = eax[0x11]

if (arg1[0x3f] s> 1 && ebx != 0 && arg1[0x40].b != 0)
    char eax_4
    
    if (arg1[0x4b] == arg1[0x4c] || arg1[0x4f] != eax[0x21])
        arg1[0x84] = arg1[0x1a6]
        int32_t ecx_4 = 1
        
        if (eax[0x12] == 1)
            ecx_4 = 3
        
        int32_t var_10_2 = arg1[1]
        eax_4 = sub_519900(eax[0x21], &arg1[0x4b], ecx_4)
    
    if ((arg1[0x4b] == arg1[0x4c] || arg1[0x4f] != eax[0x21]) && eax_4 == 0)
        sub_51ddc0(0x754630)
        eax.b = 0
        return eax
    
    if (sub_519b00(&arg1[0x4b]).b == 0)
        eax.b = 0
        return eax
    
    void* eax_5 = *arg1
    int32_t edx_3 = *(eax_5 + 0x140)
    int32_t ebp_1 = *(eax_5 + 0x144)
    
    if (arg1[0x85].b == 0 || arg1[0x4a] != ebx || edx_3 != arg1[0x86] || ebp_1 != arg1[0x87])
        int32_t eax_6
        
        if (ebx == 1)
            eax_6 = 2
        else
            if (ebx != 2 && ebx != 3)
                eax.b = 0
                return eax
            
            eax_6 = 1
        
        arg1[0xaf] = arg1[0x1a6]
        
        if (sub_514330(eax_6, &arg1[0x85], edx_3, ebp_1, arg1[1]) == 0)
            sub_51ddc0(0x754654)
            enum MESSAGEBOX_RESULT eax_8
            eax_8.b = 0
            return eax_8
        
        arg1[0x4a] = ebx
    
    if (sub_51a0a0(&arg1[0x8e]).b == 0)
        eax.b = 0
        return eax
    
    if (sub_51a0a0(&arg1[0xa4]).b == 0)
        eax.b = 0
        return eax
    
    arg1[0x49].b = 1
else if (arg1[0x49].b != 0)
    sub_519a40(&arg1[0x4b])
    sub_514400(&arg1[0x85])
    arg1[0x49].b = 0
    arg1[0x4a] = 0xffffffff
    int32_t eax_2
    eax_2.b = 1
    return eax_2

eax.b = 1
return eax
