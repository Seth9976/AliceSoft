// 函数: sub_4d9dc0
// 地址: 0x4d9dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x80)
int32_t* eax

if (ecx != 0 && (*(*ecx + 0x10))().b != 0)
    sub_4ce490(arg1 + 0x28, arg5)
    bool ecx_2 = *(arg1 + 0x10c) == (arg2[1] - *arg2) s>> 6
    
    if (ecx_2 != 0)
        sub_4da170(arg1, arg2)
    
    if (ecx_2 == 0 || *(arg1 + 0x120) != 0)
        int32_t* ecx_3 = *(arg1 + 0x80)
        
        if (ecx_3 != 0 && (*(*ecx_3 + 0x34))() == 0)
            char eax_7 = sub_4d9cc0(arg1)
            
            if (eax_7 == 0)
                return eax_7
    else if (sub_4d9d20(arg1, arg1 + 0x124).b == 0)
        eax.b = 0
        return eax
    
    int32_t* ecx_4 = *(arg1 + 0x84)
    
    if (ecx_4 != 0 && (*(*ecx_4 + 0x10))() == 0 && sub_4d9d80(arg1).b == 0)
        eax.b = 0
        return eax
    
    float var_84[0x10]
    __builtin_memcpy(arg1 + 0x8c, sub_4da610(arg1, &var_84), 0x40)
    float* eax_12 = sub_4b65f0(&var_84, arg1 + 0x8c, arg3, &var_84)
    float var_94[0x4]
    float var_44[0x11]
    int32_t ecx_8
    eax, ecx_8 = sub_51e1c0(
        __builtin_memcpy(arg1 + 0xcc, sub_4b65f0(eax_12, eax_12, arg4, &var_44), 0x40), &var_94, 
        arg3, arg1 + 0x58)
    bool cond:0_1 = *(arg1 + 0x137) == 0
    *(arg1 + 0x7c) = fconvert.s(fconvert.t(eax[2]))
    
    if (cond:0_1)
        long double x87_r7_3 = float.t(0)
        *(arg1 + 0x144) = fconvert.s(x87_r7_3)
        *(arg1 + 0x148) = fconvert.s(x87_r7_3)
        *(arg1 + 0x14c) = fconvert.s(x87_r7_3)
        *(arg1 + 0x150) = fconvert.s(x87_r7_3)
    else
        int32_t var_b0_8 = ecx_8
        float* eax_16 = sub_4d9fb0(arg1, &var_94, arg2, fconvert.s(fconvert.t(arg6)))
        *(arg1 + 0x144) = *eax_16
        *(arg1 + 0x148) = eax_16[1]
        *(arg1 + 0x14c) = eax_16[2]
        *(arg1 + 0x150) = eax_16[3]
    
    if (*(arg1 + 0x139) != 0 && ecx_2 != 0
            && sub_4b8330(*(arg1 + 0x10), arg1 + 0x13c, arg1 + 0x124).b == 0)
        eax.b = 0
        return eax

eax.b = 1
return eax
