// 函数: sub_60fd50
// 地址: 0x60fd50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg4
void** eax = arg1[1]
int32_t* var_18

if (arg1[2] != 0)
    void* var_8
    
    if (arg3 == *eax)
        if (sub_405dd0(&arg3[3], &ebx[3]) == 0)
            *arg2 = *sub_60fec0(arg1, &var_8, ebx)
            return arg2
        
        sub_610030(arg3, arg1, arg2, 1, ebx)
        return arg2
    
    if (arg3 == eax)
        if (sub_405dd0(&ebx[3], eax[2] + 0xc) != 0)
            sub_610030(*(arg1[1] + 8), arg1, arg2, 0, ebx)
            return arg2
        
        *arg2 = *sub_60fec0(arg1, &var_8, ebx)
        return arg2
    
    char eax_12 = sub_405dd0(&arg3[3], &ebx[3])
    char eax_15
    
    if (eax_12 != 0)
        arg4 = arg3
        sub_610210(&arg4)
        eax_15 = sub_405dd0(&ebx[3], &arg4[3])
    
    if (eax_12 != 0 && eax_15 != 0)
        void** eax_16 = arg4
        
        if (*(eax_16[2] + 0xa5) != 0)
            sub_610030(eax_16, arg1, arg2, 0, ebx)
            return arg2
        
        sub_610030(arg3, arg1, arg2, 1, ebx)
        return arg2
    
    if (sub_405dd0(&ebx[3], &arg3[3]) == 0)
        *arg2 = *sub_60fec0(arg1, &var_8, ebx)
        return arg2
    
    arg4 = arg3
    sub_60fcf0(&arg4)
    eax = arg4
    
    if (eax != arg1[1])
        if (sub_405dd0(&eax[3], &ebx[3]) == 0)
            *arg2 = *sub_60fec0(arg1, &var_8, ebx)
            return arg2
        
        eax = arg4
    
    var_18 = ebx
    
    if (*(arg3[2] + 0xa5) != 0)
        sub_610030(arg3, arg1, arg2, 0, var_18)
        return arg2
else
    var_18 = ebx

sub_610030(eax, arg1, arg2, 1, var_18)
return arg2
