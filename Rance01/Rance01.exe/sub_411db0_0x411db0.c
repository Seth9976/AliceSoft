// 函数: sub_411db0
// 地址: 0x411db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = sub_70c710(fconvert.t(arg4))
int32_t eax_1 = sub_70c710(fconvert.t(arg5))
arg5 = sub_70c710(fconvert.t(arg7))
int32_t eax_3 = sub_70c710(fconvert.t(arg8))
int32_t eax_4 = sub_70c710(fconvert.t(arg9))
int32_t result_1 = sub_70c710(fconvert.t(arg10))
int32_t* esi = arg1
int32_t eax_6 = (*(*esi + 0x1c))()
int32_t* ebx = arg6
int32_t eax_8 = (*(*ebx + 0x1c))()
void* ebp = *esi
int32_t eax_9 = sub_70c710(fconvert.t(arg3))
int32_t esi_1 = eax
arg4 = (*(ebp + 8))(sub_70c710(fconvert.t(arg2)), eax_9)
int32_t edi_1 = eax_6 - (esi_1 << 2)
float eax_14 = (*(*ebx + 8))(arg5, eax_3)
long double x87_r7_10 = fconvert.t(fconvert.s(fconvert.t(arg7) - float.t(arg5)))
long double x87_r5 = fconvert.t(6755399441055744.0)
int32_t var_c = (fconvert.d(x87_r7_10 + x87_r5)).d
long double x87_r5_3 = fconvert.t(-256.0)
int32_t ecx_8 = (var_c << 8) - sub_70c710((x87_r7_10 - float.t(var_c)) * x87_r5_3)
long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(arg8) - float.t(eax_3)))
int32_t var_c_1 = (fconvert.d(x87_r5 + x87_r5_7)).d
int32_t result = sub_70c710(x87_r5_3 * (x87_r5_7 - float.t(var_c_1)))
int32_t ebp_1 = eax_1
int32_t ecx_11 = (var_c_1 << 8) - result
var_c_1 = ecx_11

if (ebp_1 s> 0)
    arg9 = 0f
    arg6 = ebp_1
    int32_t i
    
    do
        int32_t eax_20 = divs.dp.d(sx.q(arg9 << 8), ebp_1) + ecx_11
        int32_t edi_3 = eax_20 s>> 8
        float eax_21 = eax_20 & 0xff
        int32_t ebx_2
        
        if (edi_3 s< 0)
            edi_3 = 0
            ebx_2 = 0
        else if (edi_3 s< result_1 - 1)
            ebx_2 = 1
        else
            edi_3 = result_1 - 1
            ebx_2 = 0
        
        float edi_5 = edi_3 * eax_8 i+ eax_14
        float ebx_4 = ebx_2 * eax_8 i+ edi_5
        arg2 = edi_5
        arg7 = ebx_4
        
        if (esi_1 s> 0)
            arg5 = 0f
            arg1 = esi_1
            
            while (true)
                int32_t eax_29 = divs.dp.d(sx.q(arg5 << 8), esi_1) + ecx_8
                int32_t ecx_13 = eax_29 s>> 8
                int32_t eax_30 = eax_29 & 0xff
                void* const esi_2
                
                if (ecx_13 s< 0)
                    ecx_13 = 0
                    esi_2 = nullptr
                else if (ecx_13 s< eax_4 - 1)
                    esi_2 = 1
                else
                    ecx_13 = eax_4 - 1
                    esi_2 = nullptr
                
                int32_t eax_33 = ecx_13 << 2
                uint32_t ecx_14 = zx.d(*(eax_33 i+ edi_5))
                uint32_t ecx_15 = zx.d(*(eax_33 i+ edi_5 + 3))
                uint32_t ecx_16 = zx.d(*(eax_33 i+ ebx_4))
                uint32_t ecx_17 = zx.d(*(eax_33 i+ ebx_4 + 1))
                uint32_t ecx_18 = zx.d(*(eax_33 i+ ebx_4 + 2))
                arg10 = zx.d(*(eax_33 i+ edi_5 + 1))
                uint32_t edx_9 = zx.d(*(eax_33 i+ edi_5 + 2))
                uint32_t eax_34 = zx.d(*(eax_33 i+ ebx_4 + 3))
                void* esi_5 = (esi_2 + ecx_13) * 4
                int32_t ecx_23 = (((zx.d(*(esi_5 i+ edi_5 + 2)) - edx_9) * eax_30) s>> 8) + edx_9
                int32_t edx_14 = (((zx.d(*(esi_5 i+ edi_5 + 1)) i- arg10) * eax_30) s>> 8) i+ arg10
                arg10 = (((zx.d(*(esi_5 i+ edi_5)) - ecx_14) * eax_30) s>> 8) + ecx_14
                int32_t edi_10 = (((zx.d(*(esi_5 i+ edi_5 + 3)) - ecx_15) * eax_30) s>> 8) + ecx_15
                char ecx_33 = ((((((zx.d(*(esi_5 i+ arg7 + 1)) - ecx_17) * eax_30) s>> 8) - edx_14
                    + ecx_17) i* eax_21) s>> 8).b + edx_14.b
                char edx_24 = ((((((zx.d(*(esi_5 i+ arg7 + 3)) - eax_34) * eax_30) s>> 8) - edi_10
                    + eax_34) i* eax_21) s>> 8).b + edi_10.b
                char edx_33 = ((((((zx.d(*(esi_5 i+ arg7)) - ecx_16) * eax_30) s>> 8) i- arg10
                    + ecx_16) i* eax_21) s>> 8).b + arg10.b
                *(arg4 i+ 2) = ((((((zx.d(*(esi_5 i+ arg7 + 2)) - ecx_18) * eax_30) s>> 8) - ecx_23
                    + ecx_18) i* eax_21) s>> 8).b + ecx_23.b
                *(arg4 i+ 1) = ecx_33
                arg5 += eax_4
                *arg4 = edx_33
                *(arg4 i+ 3) = edx_24
                int32_t temp3_1 = arg1
                arg1 -= 1
                arg4 += 4
                esi_1 = eax
                
                if (temp3_1 == 1)
                    break
                
                edi_5 = arg2
                ebx_4 = arg7
            
            ebp_1 = eax_1
            ecx_11 = var_c_1
        
        result = result_1
        arg4 += edi_1
        arg9 += result
        i = arg6
        arg6 -= 1
    while (i != 1)

return result
