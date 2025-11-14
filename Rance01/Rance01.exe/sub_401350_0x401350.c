// 函数: sub_401350
// 地址: 0x401350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1
int32_t eax = arg4[4]

if (eax u< arg3)
    sub_6b480c("invalid string position")
    noreturn

int32_t eax_1 = eax - arg3

if (eax_1 u< edi)
    edi = eax_1

if (edi != 0)
    int32_t edx = arg4[5]
    int32_t* ebx_1
    
    if (edx u< 0x10)
        ebx_1 = arg4
    else
        ebx_1 = *arg4
    
    int32_t* edx_1
    
    if (edx u< 0x10)
        edx_1 = arg4
    else
        edx_1 = *arg4
    
    sub_6b49d0(edx_1 + arg3, ebx_1 + arg3 + edi, eax_1 - edi)
    int32_t eax_4 = arg4[4] - edi
    bool cond:0_1 = arg4[5] u< 0x10
    arg4[4] = eax_4
    
    if (not(cond:0_1))
        (*arg4)[eax_4] = 0
        return arg4
    
    *(arg4 + eax_4) = 0

return arg4
