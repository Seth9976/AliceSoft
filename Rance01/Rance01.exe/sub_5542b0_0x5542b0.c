// 函数: sub_5542b0
// 地址: 0x5542b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 u< (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
    int32_t* ecx = *(*(arg2 + 8) + (arg1 << 2))
    
    if (ecx != 0)
        int32_t eax = ecx[1]
        
        if (arg3 + 1 u>= eax u>> 2)
            eax.b = 0
            return eax
        
        int32_t edx_4
        
        if (eax != 0)
            edx_4 = *ecx
        else
            edx_4 = 0
        
        *arg4 = *(edx_4 + (arg3 << 2))
        
        if (eax != 0)
            *arg5 = *(*ecx + (arg3 << 2) + 4)
            int32_t eax_2
            eax_2.b = 1
            return eax_2
        
        *arg5 = *((arg3 << 2) + 4)
        int32_t eax_1
        eax_1.b = 1
        return eax_1

arg2.b = 0
return arg2
