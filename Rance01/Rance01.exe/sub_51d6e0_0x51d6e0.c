// 函数: sub_51d6e0
// 地址: 0x51d6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg4
int32_t** eax = *(arg1 + 4)

if (*(arg1 + 8) == 0)
    sub_51d930(eax, arg1, arg2, 1, ebp)
    return arg2

int32_t* var_8
int32_t edx

if (arg3 == *eax)
    if (sub_51c740(&arg3[3], edx, &ebp[3]) == 0)
        *arg2 = *sub_51d840(arg1, &var_8, ebp)
        return arg2
    
    sub_51d930(arg3, arg1, arg2, 1, ebp)
    return arg2

if (arg3 == eax)
    int32_t** ebx = eax[2]
    
    if (sub_51c740(&ebp[3], edx, &ebx[3]) == 0)
        *arg2 = *sub_51d840(arg1, &var_8, ebp)
        return arg2
    
    sub_51d930(ebx, arg1, arg2, 0, ebp)
    return arg2

char eax_11
int32_t edx_1
eax_11, edx_1 = sub_51c740(&arg3[3], edx, &ebp[3])
char eax_14

if (eax_11 != 0)
    arg4 = arg3
    eax_14, edx_1 = sub_51c740(&ebp[3], sub_51db00(&arg4), &arg4[3])

if (eax_11 != 0 && eax_14 != 0)
    int32_t** eax_15 = arg4
    
    if (*(eax_15[2] + 0x69) != 0)
        sub_51d930(eax_15, arg1, arg2, 0, ebp)
        return arg2
    
    sub_51d930(arg3, arg1, arg2, 1, ebp)
    return arg2

if (sub_51c740(&ebp[3], edx_1, &arg3[3]) == 0)
    *arg2 = *sub_51d840(arg1, &var_8, ebp)
    return arg2

arg4 = arg3
int32_t edx_3 = sub_51d690(&arg4)
int32_t** eax_20 = arg4

if (eax_20 != *(arg1 + 4))
    if (sub_51c740(&eax_20[3], edx_3, &ebp[3]) == 0)
        *arg2 = *sub_51d840(arg1, &var_8, ebp)
        return arg2
    
    eax_20 = arg4

if (*(arg3[2] + 0x69) == 0)
    sub_51d930(eax_20, arg1, arg2, 1, ebp)
    return arg2

sub_51d930(arg3, arg1, arg2, 0, ebp)
return arg2
