// 函数: sub_4ed590
// 地址: 0x4ed590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = (arg3 - arg4) s>> 2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx_1)
int32_t* result = eax_1 - edx
int32_t ebx_1 = result s>> 1
int32_t var_24 = ecx_1

if (ebx_1 s> 0)
    int32_t esi_1 = ebx_1 * 2 + 2
    
    while (true)
        int32_t eax_2 = arg4[ebx_1 - 1]
        edx.b = arg5
        ebx_1 -= 1
        int32_t esi_2 = esi_1 - 2
        int32_t var_20_1 = esi_2
        int32_t var_14 = eax_2
        char var_18_1 = edx.b
        int32_t var_28_1 = ebx_1
        bool cond:0_1 = esi_2 != ecx_1
        
        if (esi_2 s< ecx_1)
            do
                int32_t* eax_3 = arg4[esi_2 - 1]
                (*(*arg4[esi_2] + 4))()
                double var_10_1 = fconvert.d(unimplemented  {fstp qword [esp+0x20], st0})
                unimplemented  {fstp qword [esp+0x20], st0}
                (*(*eax_3 + 4))()
                long double temp0_1 = fconvert.t(var_10_1)
                unimplemented  {fcomp st0, qword [esp+0x20]} f- temp0_1
                bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x20]} f< temp0_1
                bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x20]}, temp0_1)
                bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x20]} f== temp0_1
                unimplemented  {fcomp st0, qword [esp+0x20]}
                int16_t top = top + 2
                int32_t eax_6
                eax_6.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    esi_2 -= 1
                
                edx = var_28_1
                int32_t ecx_4 = arg4[esi_2]
                var_28_1 = esi_2
                esi_2 = esi_2 * 2 + 2
                arg4[edx] = ecx_4
            while (esi_2 s< var_24)
            
            ecx_1 = var_24
            cond:0_1 = esi_2 != ecx_1
        
        if (not(cond:0_1))
            int32_t eax_7 = arg4[ecx_1 - 1]
            edx = var_28_1
            ecx_1 -= 1
            arg4[edx] = eax_7
            var_28_1 = ecx_1
        
        int32_t var_34_1 = var_18_1.d
        int32_t* var_38_1 = &var_14
        int32_t var_3c_1 = ebx_1
        result, edx = sub_4ed7f0(var_28_1, edx, ecx_1, arg4)
        
        if (ebx_1 s<= 0)
            break
        
        ecx_1 = var_24
        esi_1 = var_20_1

return result
