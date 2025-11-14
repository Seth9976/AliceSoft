// 函数: sub_514070
// 地址: 0x514070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg4
void** eax = *(arg1 + 4)
int32_t* var_18

if (*(arg1 + 8) != 0)
    void* var_8
    
    if (arg3 == *eax)
        if (sub_405dd0(&arg3[3], &ebx[3]) == 0)
            *arg2 = *sub_4c1db0(arg1, &var_8, ebx)
            return arg2
        
        sub_429fe0(arg3, arg1, arg2, 1, ebx)
        return arg2
    
    if (arg3 == eax)
        if (sub_405dd0(&ebx[3], eax[2] + 0xc) != 0)
            sub_429fe0(*(*(arg1 + 4) + 8), arg1, arg2, 0, ebx)
            return arg2
        
        *arg2 = *sub_4c1db0(arg1, &var_8, ebx)
        return arg2
    
    char eax_12 = sub_405dd0(&arg3[3], &ebx[3])
    char eax_15
    
    if (eax_12 != 0)
        arg4 = arg3
        sub_42a1c0(&arg4)
        eax_15 = sub_405dd0(&ebx[3], &arg4[3])
    
    if (eax_12 != 0 && eax_15 != 0)
        void** eax_16 = arg4
        
        if (*(eax_16[2] + 0x2d) != 0)
            sub_429fe0(eax_16, arg1, arg2, 0, ebx)
            return arg2
        
        sub_429fe0(arg3, arg1, arg2, 1, ebx)
        return arg2
    
    if (sub_405dd0(&ebx[3], &arg3[3]) == 0)
        *arg2 = *sub_4c1db0(arg1, &var_8, ebx)
        return arg2
    
    arg4 = arg3
    sub_4c1d20(&arg4)
    eax = arg4
    
    if (eax != *(arg1 + 4))
        if (sub_405dd0(&eax[3], &ebx[3]) == 0)
            *arg2 = *sub_4c1db0(arg1, &var_8, ebx)
            return arg2
        
        eax = arg4
    
    var_18 = ebx
    
    if (*(arg3[2] + 0x2d) != 0)
        sub_429fe0(arg3, arg1, arg2, 0, var_18)
        return arg2
else
    var_18 = ebx

sub_429fe0(eax, arg1, arg2, 1, var_18)
return arg2
