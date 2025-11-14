// 函数: sub_401f60
// 地址: 0x401f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_1 = arg1[4]

if (0xffffffff - ecx_1 u<= 1)
    sub_6b47bf("string too long")
    noreturn

if (ecx_1 + 1 u> 0xfffffffe)
    sub_6b47bf("string too long")
    noreturn

int32_t eax_1 = arg1[5]

if (eax_1 u>= ecx_1 + 1)
    if (ecx_1 != 0xffffffff)
        goto label_401fa4
    
    arg1[4] = ecx_1 + 1
    
    if (eax_1 u< 0x10)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_401470(arg1, ecx_1 + 1, ecx_1)

if (ecx_1 != 0xffffffff)
label_401fa4:
    char* eax_2
    
    if (arg1[5] u< 0x10)
        eax_2 = arg1
    else
        eax_2 = *arg1
    
    eax_2[arg1[4]] = arg2
    bool cond:1_1 = arg1[5] u< 0x10
    arg1[4] = ecx_1 + 1
    
    if (not(cond:1_1))
        *(*arg1 + ecx_1 + 1) = 0
        return arg1
    
    *(arg1 + ecx_1 + 1) = 0

return arg1
