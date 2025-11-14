// 函数: sub_5b98d0
// 地址: 0x5b98d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3[1] s>= 0)
    void* eax = arg3[3]
    
    if (eax != 0)
        arg3[2] -= eax
        void* edx = arg3[2]
        
        if (edx s> 0)
            int128_t* ecx = *arg3
            sub_6b49d0(ecx, eax + ecx, edx)
        
        arg3[3] = 0
    
    int32_t eax_2 = arg3[2]
    
    if (arg1 s<= arg3[1] - eax_2)
        return arg3[2] + *arg3
    
    int32_t eax_3 = *arg3
    int32_t eax_4
    
    if (eax_3 == 0)
        eax_4 = sub_6b5c43(eax_2 + arg1 + 0x1000)
    else
        eax_4 = _realloc(eax_3, eax_2 + arg1 + 0x1000)
    
    if (eax_4 != 0)
        *arg3 = eax_4
        arg3[1] = eax_2 + arg1 + 0x1000
        return arg3[2] + *arg3
    
    sub_5b98a0(arg3)

return 0
