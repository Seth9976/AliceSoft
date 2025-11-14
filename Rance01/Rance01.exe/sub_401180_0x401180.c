// 函数: sub_401180
// 地址: 0x401180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg3[4]

if (edi u< arg4)
    sub_6b480c("invalid string position")
    noreturn

void* edi_1 = edi - arg4

if (arg2 u< edi_1)
    edi_1 = arg2

if (arg1 == arg3)
    int32_t edx
    sub_401350(arg4, sub_401350(0xffffffff, edx, edi_1 + arg4, arg1), 0, arg1)
    return arg1

if (edi_1 u> 0xfffffffe)
    sub_6b47bf("string too long")
    noreturn

int32_t eax_2 = arg1[5]

if (eax_2 u>= edi_1)
    if (edi_1 != 0)
        goto label_4011f5
    
    arg1[4] = edi_1
    
    if (eax_2 u< 0x10)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_401470(arg1, edi_1, arg1[4])

if (edi_1 != 0)
label_4011f5:
    int32_t* ecx_1
    
    if (arg3[5] u< 0x10)
        ecx_1 = arg3
    else
        ecx_1 = *arg3
    
    int32_t* eax_7
    
    if (arg1[5] u< 0x10)
        eax_7 = arg1
    else
        eax_7 = *arg1
    
    sub_6c02a0(eax_7, ecx_1 + arg4, edi_1)
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = edi_1
    
    if (not(cond:0_1))
        *(*arg1 + edi_1) = 0
        return arg1
    
    *(arg1 + edi_1) = 0

return arg1
