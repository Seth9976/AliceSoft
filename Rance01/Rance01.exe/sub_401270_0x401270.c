// 函数: sub_401270
// 地址: 0x401270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 != 0)
    int32_t ecx_1 = arg1[5]
    int32_t* eax_1
    
    if (ecx_1 u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (arg3 u>= eax_1)
        int32_t* eax_2
        
        if (ecx_1 u< 0x10)
            eax_2 = arg1
        else
            eax_2 = *arg1
        
        if (arg1[4] + eax_2 u> arg3)
            if (ecx_1 u< 0x10)
                return sub_401180(arg1, arg2, arg1, arg3 - arg1)
            
            return sub_401180(arg1, arg2, arg1, arg3 - *arg1)

if (arg2 u> 0xfffffffe)
    sub_6b47bf("string too long")
    noreturn

int32_t eax_9 = arg1[5]

if (eax_9 u>= arg2)
    if (arg2 != 0)
        goto label_4012f3
    
    arg1[4] = arg2
    
    if (eax_9 u< 0x10)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_401470(arg1, arg2, arg1[4])

if (arg2 != 0)
label_4012f3:
    int128_t* eax_11
    
    if (arg1[5] u< 0x10)
        eax_11 = arg1
    else
        eax_11 = *arg1
    
    sub_6c02a0(eax_11, arg3, arg2)
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = arg2
    
    if (not(cond:0_1))
        *(*arg1 + arg2) = 0
        return arg1
    
    *(arg1 + arg2) = 0

return arg1
