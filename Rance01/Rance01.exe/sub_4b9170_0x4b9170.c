// 函数: sub_4b9170
// 地址: 0x4b9170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* result = arg2
int32_t* edi = arg1

if (edi != result)
    int32_t* ebx_1 = &edi[1]
    
    if (ebx_1 != result)
        void* var_18_1 = ebx_1 - edi
        
        do
            int32_t* esi_1 = *ebx_1
            int32_t* eax_2 = *edi
            int32_t* var_1c_1 = ebx_1
            (*(*esi_1 + 4))()
            double var_10_1 = fconvert.d(unimplemented  {fstp qword [esp+0x18], st0})
            unimplemented  {fstp qword [esp+0x18], st0}
            (*(*eax_2 + 4))()
            long double temp0_1 = fconvert.t(var_10_1)
            unimplemented  {fcomp st0, qword [esp+0x18]} f- temp0_1
            bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x18]} f< temp0_1
            bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x18]}, temp0_1)
            bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x18]} f== temp0_1
            unimplemented  {fcomp st0, qword [esp+0x18]}
            int16_t top = top + 2
            
            if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb):1.b & 0x41) != 0)
                int32_t* edi_1 = ebx_1
                
                while (true)
                    int32_t* edx_3 = edi_1[-1]
                    edi_1 -= 4
                    (*(*esi_1 + 4))()
                    double var_10_2 = fconvert.d(unimplemented  {fstp qword [esp+0x18], st0})
                    unimplemented  {fstp qword [esp+0x18], st0}
                    (*(*edx_3 + 4))()
                    long double temp1_1 = fconvert.t(var_10_2)
                    unimplemented  {fcomp st0, qword [esp+0x18]} f- temp1_1
                    bool c0_2 = unimplemented  {fcomp st0, qword [esp+0x18]} f< temp1_1
                    bool c2_2 =
                        is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x18]}, temp1_1)
                    bool c3_2 = unimplemented  {fcomp st0, qword [esp+0x18]} f== temp1_1
                    unimplemented  {fcomp st0, qword [esp+0x18]}
                    top += 2
                    result.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    
                    if ((result:1.b & 0x41) != 0)
                        break
                    
                    *var_1c_1 = *edi_1
                    var_1c_1 = edi_1
                
                edi = arg1
                *var_1c_1 = esi_1
            else
                int32_t eax_9 = (var_18_1 s>> 2) * 4
                result = sub_6b49d0(ebx_1 - eax_9 + 4, edi, eax_9)
                *edi = esi_1
            
            var_18_1 += 4
            ebx_1 = &ebx_1[1]
        while (ebx_1 != arg2)

return result
