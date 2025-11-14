// 函数: sub_5c5a90
// 地址: 0x5c5a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_2
int32_t i_1 = i_2
int32_t ebx = 0

if (arg1 != 0)
    sub_5b4f70(&arg1[0x25])
    sub_5b5350(&arg1[0x1e])
    sub_5b9710(arg1 + 0x78)
    
    if (*(arg1 + 0x48) != 0)
        int32_t eax_2 = *(arg1 + 0x34)
        
        if (eax_2 != 0)
            i_1 = 0
            
            if (eax_2 s> 0)
                int32_t ebp_1 = 0
                int32_t i
                
                do
                    sub_5ba0b0(*(arg1 + 0x48) + ebx)
                    sub_5ba040(*(arg1 + 0x4c) + ebp_1)
                    i = i_1 + 1
                    ebx += 0x20
                    ebp_1 += 0x10
                    i_1 = i
                while (i s< *(arg1 + 0x34))
            
            __free_base(*(arg1 + 0x48))
            __free_base(*(arg1 + 0x4c))
    
    int32_t eax_5 = *(arg1 + 0x3c)
    
    if (eax_5 != 0)
        __free_base(eax_5)
    
    int32_t eax_6 = *(arg1 + 0x44)
    
    if (eax_6 != 0)
        __free_base(eax_6)
    
    int32_t eax_7 = arg1[4].d
    
    if (eax_7 != 0)
        __free_base(eax_7)
    
    int32_t eax_8 = *(arg1 + 0x38)
    
    if (eax_8 != 0)
        __free_base(eax_8)
    
    if (arg1 != 0xffffffe8)
        int32_t eax_9 = *(arg1 + 0x18)
        
        if (eax_9 != 0)
            __free_base(eax_9)
        
        __builtin_memset(arg1 + 0x18, 0, 0x1c)
    
    int32_t ecx_2 = *arg1
    
    if (ecx_2 != 0)
        int32_t eax_10 = *(arg1 + 0x2c8)
        
        if (eax_10 != 0)
            eax_10(ecx_2)
    
    sub_6bc670(arg1, 0, 0x2d0)

return 0
