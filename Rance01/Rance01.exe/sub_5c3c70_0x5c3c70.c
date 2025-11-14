// 函数: sub_5c3c70
// 地址: 0x5c3c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg2 + 4)
int32_t ecx = arg4
int32_t var_18 = 1
int32_t var_1c = ecx

if (result s> 0)
    void* var_14_1 = arg2 + (result << 2) + 4
    void* var_c_1 = result
    void* i
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(ecx), *var_14_1)
        int32_t temp0_2 = divs.dp.d(sx.q(arg4), ecx)
        int32_t edx_4 = 1 - var_18
        var_18 = edx_4
        void* eax_7 = temp0_2 * temp0_1
        var_1c -= (*var_14_1 - 1) * temp0_2
        int32_t eax_13 = *var_14_1
        
        if (eax_13 == 4)
            int32_t var_2c_5 = arg6 + ((temp0_2 * 2 + var_1c) << 2) - 4
            float* eax_32
            float* edx_21
            
            if (var_18 == 0)
                edx_21 = arg5
                eax_32 = arg3
            else
                edx_21 = arg3
                eax_32 = arg5
            
            result = sub_5c1df0(eax_32, edx_21, temp0_2, temp0_2, temp0_1, 
                arg6 + (var_1c << 2) - 4, arg6 + ((var_1c + temp0_2) << 2) - 4)
        else if (eax_13 != 2)
            if (temp0_2 == 1)
                int32_t eax_15 = temp0_2 - edx_4
                int32_t var_18_1 = eax_15
                edx_4 = eax_15
            
            int16_t top
            
            if (edx_4 == 0)
                result = sub_5c26f0(arg5, eax_7, arg3, temp0_2, *var_14_1, temp0_1, eax_7, arg3, 
                    arg3, arg5, arg6 + (var_1c << 2) - 4)
                top -= 1
                unimplemented  {call 0x5c26f0}
                var_18 = 1
            else
                result = sub_5c26f0(arg3, var_14_1, arg5, temp0_2, *var_14_1, temp0_1, eax_7, arg5, 
                    arg5, arg3, arg6 + (var_1c << 2) - 4)
                top -= 1
                unimplemented  {call 0x5c26f0}
                var_18 = 0
        else if (edx_4 == 0)
            result = sub_5c1ae0(arg3, var_1c, temp0_2, temp0_1, arg5, arg6 + (var_1c << 2) - 4)
        else
            result = sub_5c1ae0(arg5, arg6 + (var_1c << 2) - 4, temp0_2, temp0_1, arg3, 
                arg6 + (var_1c << 2) - 4)
        
        var_14_1 -= 4
        i = var_c_1
        var_c_1 -= 1
        ecx = temp0_1
    while (i != 1)
    
    if (var_18 != 1)
        int32_t edx_22 = arg4
        int32_t ecx_4 = 0
        
        if (edx_22 s>= 4)
            int32_t var_c_2 = arg5 - arg3
            int32_t i_3 = ((edx_22 - 4) u>> 2) + 1
            int32_t edi_4 = i_3 << 2
            void* ecx_5 = &arg5[3]
            result = &arg3[1]
            int32_t i_1
            
            do
                unimplemented  {fld st0, dword [ecx-0xc]}
                result += 0x10
                *(result - 0x14) = fconvert.s(unimplemented  {fstp dword [eax-0x14], st0})
                unimplemented  {fstp dword [eax-0x14], st0}
                ecx_5 += 0x10
                i_1 = i_3
                i_3 -= 1
                unimplemented  {fld st0, dword [edi+eax-0x10]}
                *(result - 0x10) = fconvert.s(unimplemented  {fstp dword [eax-0x10], st0})
                unimplemented  {fstp dword [eax-0x10], st0}
                unimplemented  {fld st0, dword [ecx-0x14]}
                *(result - 0xc) = fconvert.s(unimplemented  {fstp dword [eax-0xc], st0})
                unimplemented  {fstp dword [eax-0xc], st0}
                unimplemented  {fld st0, dword [ecx-0x10]}
                *(result - 8) = fconvert.s(unimplemented  {fstp dword [eax-0x8], st0})
                unimplemented  {fstp dword [eax-0x8], st0}
            while (i_1 != 1)
            edx_22 = arg4
            ecx_4 = edi_4
        
        if (ecx_4 s< edx_22)
            result = &arg3[ecx_4]
            int32_t i_4 = edx_22 - ecx_4
            int32_t i_2
            
            do
                unimplemented  {fld st0, dword [eax+ebx]}
                result += 4
                i_2 = i_4
                i_4 -= 1
                *(result - 4) = fconvert.s(unimplemented  {fstp dword [eax-0x4], st0})
                unimplemented  {fstp dword [eax-0x4], st0}
            while (i_2 != 1)

return result
