// 函数: sub_40f950
// 地址: 0x40f950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg4

if (*(arg1 + 8) == 0)
    sub_58f8d0(*(arg1 + 4), arg1, arg2, 1, ebp)
    return arg2

int32_t* ecx = *(arg1 + 4)
int32_t* var_8

if (arg3 == *ecx)
    if (sub_40f4a0(&ebp[3], &arg3[3]) == 0)
        *arg2 = *sub_40fab0(arg1, &var_8, ebp)
        return arg2
    
    sub_58f8d0(arg3, arg1, arg2, 1, ebp)
    return arg2

if (arg3 == ecx)
    int32_t** ebx = ecx[2]
    
    if (sub_40f4a0(&ebx[3], &ebp[3]) == 0)
        *arg2 = *sub_40fab0(arg1, &var_8, ebp)
        return arg2
    
    sub_58f8d0(ebx, arg1, arg2, 0, ebp)
    return arg2

char eax_8 = sub_40f4a0(&ebp[3], &arg3[3])
char eax_10

if (eax_8 != 0)
    arg4 = arg3
    sub_58d1e0(&arg4)
    eax_10 = sub_40f4a0(&arg4[3], &ebp[3])

if (eax_8 != 0 && eax_10 != 0)
    int32_t** eax_11 = arg4
    
    if (*(eax_11[2] + 0x21) != 0)
        sub_58f8d0(eax_11, arg1, arg2, 0, ebp)
        return arg2
    
    sub_58f8d0(arg3, arg1, arg2, 1, ebp)
    return arg2

if (sub_40f4a0(&arg3[3], &ebp[3]) == 0)
    *arg2 = *sub_40fab0(arg1, &var_8, ebp)
    return arg2

arg4 = arg3
sub_58bba0(&arg4)
int32_t** eax_15 = arg4

if (eax_15 != *(arg1 + 4))
    if (sub_40f4a0(&ebp[3], &eax_15[3]) == 0)
        *arg2 = *sub_40fab0(arg1, &var_8, ebp)
        return arg2
    
    eax_15 = arg4

if (*(arg3[2] + 0x21) == 0)
    sub_58f8d0(eax_15, arg1, arg2, 1, ebp)
    return arg2

sub_58f8d0(arg3, arg1, arg2, 0, ebp)
return arg2
