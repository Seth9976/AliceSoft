// 函数: sub_411a10
// 地址: 0x411a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(*arg6 + 0x10))()
int32_t eax_3 = (*(*arg6 + 0x14))()

if (sub_70c710(fconvert.t(arg7)) == 0 && sub_70c710(fconvert.t(arg8)) == 0)
    long double x87_r7_2 = fconvert.t(arg9)
    long double x87_r6_1 = float.t(eax_1)
    x87_r6_1 - x87_r7_2
    int32_t eax_5
    eax_5.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        long double x87_r7_3 = fconvert.t(arg10)
        long double x87_r6_2 = float.t(eax_3)
        x87_r6_2 - x87_r7_3
        eax_5.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2) && arg4 s> eax_1 && arg5 s> eax_3 && mods.dp.d(sx.q(arg4), eax_1) == 0
                && mods.dp.d(sx.q(arg5), eax_3) == 0)
            return sub_411c50(arg5, arg4, arg1, arg2, arg3, arg6, eax_1, eax_3)

int32_t* edi_1 = (*(*arg1 + 8))(arg2, arg3)
int32_t eax_20
int32_t edx_10
edx_10:eax_20 = sx.q((*(*arg1 + 0x1c))())
int32_t eax_22 = (*(*arg6 + 8))(0, 0)
long double x87_r7_4 = fconvert.t(arg8)
int32_t eax_25
int32_t edx_14
edx_14:eax_25 = sx.q((*(*arg6 + 0x1c))())
long double x87_r5 = fconvert.t(6755399441055744.0)
int32_t var_10 = (fconvert.d(x87_r7_4 + x87_r5)).d
long double x87_r5_3 = fconvert.t(-65536.0)
int32_t var_30 = (var_10 << 0x10) - sub_70c710((x87_r7_4 - float.t(var_10)) * x87_r5_3)
long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(arg9) / float.t(arg4)))
int32_t var_10_1 = (fconvert.d(x87_r5_7 + x87_r5)).d
int32_t esi_3 = (var_10_1 << 0x10) - sub_70c710((x87_r5_7 - float.t(var_10_1)) * x87_r5_3)
long double x87_r5_12 = fconvert.t(fconvert.s(fconvert.t(arg10) / float.t(arg5)))
int32_t var_10_2 = (fconvert.d(x87_r5_12 + x87_r5)).d
int32_t eax_30 = sub_70c710((x87_r5_12 - float.t(var_10_2)) * x87_r5_3)

if (arg5 s<= 0)
    return eax_30

long double x87_r5_15 = fconvert.t(arg7)
int32_t var_18 = (fconvert.d(x87_r5 + x87_r5_15)).d
int32_t ecx_16 = (var_18 << 0x10) - sub_70c710(x87_r5_3 * (x87_r5_15 - float.t(var_18)))
int32_t var_1c = ecx_16
int32_t i_1 = arg5
int32_t eax_38
int32_t i

do
    int32_t eax_34 = var_30 s>> 0x10
    
    if (eax_34 s>= eax_3)
        eax_34 = eax_3 - 1
    
    eax_38 = eax_34 * ((eax_25 + (edx_14 & 3)) s>> 2)
    int32_t ebx_5 = eax_22 + (eax_38 << 2)
    int32_t j_1 = arg4
    
    if (j_1 s> 0)
        int32_t j
        
        do
            int32_t eax_36 = ecx_16 s>> 0x10
            
            if (eax_36 s>= eax_1)
                eax_36 = eax_1 - 1
            
            eax_38 = *(ebx_5 + (eax_36 << 2))
            *edi_1 = eax_38
            edi_1 = &edi_1[1]
            ecx_16 += esi_3
            j = j_1
            j_1 -= 1
        while (j != 1)
        ecx_16 = var_1c
    
    edi_1 = &edi_1[(((edx_10 & 3) + eax_20) s>> 2) - arg4]
    var_30 += (var_10_2 << 0x10) - eax_30
    i = i_1
    i_1 -= 1
while (i != 1)
return eax_38
