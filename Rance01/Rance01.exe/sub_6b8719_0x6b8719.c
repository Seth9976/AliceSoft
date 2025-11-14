// 函数: sub_6b8719
// 地址: 0x6b8719
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg1

if (arg3 == eax)
    int32_t ecx_1 = *arg2
    
    if (ecx_1 != arg4)
        int32_t eax_4 = __recalloc_crt(ecx_1, eax, 2)
        
        if (eax_4 == 0)
            return 0
        
        *arg2 = eax_4
    else
        int32_t eax_1 = __calloc_crt(eax, 2)
        *arg2 = eax_1
        
        if (eax_1 == 0)
            return 0
        
        *arg5 = 1
        sub_6c02a0(*arg2, arg4, *arg1)
    
    *arg1 <<= 1

return 1
