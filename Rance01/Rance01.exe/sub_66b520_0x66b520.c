// 函数: sub_66b520
// 地址: 0x66b520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_11 = arg1[4]

if (eax_11 u< arg2)
    sub_6b480c("invalid string position")
    noreturn

if (0xffffffff - eax_11 u<= 1)
    sub_6b47bf("string too long")
    noreturn

if (eax_11 + 1 u> 0xfffffffe)
    sub_6b47bf("string too long")
    noreturn

int32_t ecx_1 = arg1[5]

if (ecx_1 u>= eax_11 + 1)
    if (eax_11 != 0xffffffff)
        goto label_66b574
    
    arg1[4] = eax_11 + 1
    
    if (ecx_1 u< 0x10)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_401470(arg1, eax_11 + 1, eax_11)

if (eax_11 != 0xffffffff)
label_66b574:
    int32_t eax = arg1[5]
    int32_t* ecx_2
    
    if (eax u< 0x10)
        ecx_2 = arg1
    else
        ecx_2 = *arg1
    
    int32_t* eax_4
    
    if (eax u< 0x10)
        eax_4 = arg1
    else
        eax_4 = *arg1
    
    sub_6b49d0(eax_4 + arg2 + 1, ecx_2 + arg2, arg1[4] - arg2)
    int32_t* eax_6
    
    if (arg1[5] u< 0x10)
        eax_6 = arg1
    else
        eax_6 = *arg1
    
    *(eax_6 + arg2) = arg3
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = eax_11 + 1
    
    if (not(cond:0_1))
        *(*arg1 + eax_11 + 1) = 0
        return arg1
    
    *(arg1 + eax_11 + 1) = 0

return arg1
