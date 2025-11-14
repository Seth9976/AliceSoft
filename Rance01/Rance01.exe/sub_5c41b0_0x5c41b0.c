// 函数: sub_5c41b0
// 地址: 0x5c41b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax
int32_t edx
eax, edx = __errno()
*eax = 0

if (arg1[0xb0] != 0)
    if (*arg1 == 0)
        return 0
    
    int32_t result = arg1[0xb0](sub_5b98d0(0x800, edx, &arg1[6]), 1, 0x800, *arg1)
    bool cond:0_1 = result != 0
    
    if (result s> 0)
        int32_t ecx_3 = arg1[7]
        
        if (ecx_3 s>= 0)
            int32_t eax_4 = arg1[8] + result
            
            if (eax_4 s<= ecx_3)
                arg1[8] = eax_4
        
        cond:0_1 = result != 0
    
    void* eax_5
    
    if (not(cond:0_1))
        eax_5 = __errno()
    
    if (cond:0_1 || *eax_5 == 0)
        return result

return 0xffffffff
