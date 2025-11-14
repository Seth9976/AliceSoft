// 函数: sub_518b80
// 地址: 0x518b80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
void* esi_1 = (*(*arg1 + 8))(0, 0)

if (esi_1 == 0)
    void* eax_1
    eax_1.b = 0
    return eax_1

int32_t eax_3 = (*(*arg1 + 0x10))()
int32_t var_24 = eax_3
int32_t eax_5 = (*(*arg1 + 0x14))()
int32_t eax_8 = (*(*arg1 + 0x1c))() - (eax_3 << 2)
int32_t var_14 = eax_8
int32_t var_30_1 = 0

if (eax_5 s> 0)
    float var_28_1 = fconvert.s(float.t(eax_5))
    int16_t top_1 = 0
    int32_t ecx_6
    
    do
        unimplemented  {fild st0, dword [esp+0x10]}
        int32_t edi_3 = 0
        int32_t var_34_1 = 0
        unimplemented  {fdiv st0, dword [esp+0x18]}
        unimplemented  {fmul st0, dword [ebp+0x8]}
        float var_1c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
        unimplemented  {fstp dword [esp+0x24], st0}
        
        if (eax_3 s> 0)
            unimplemented  {fild st0, dword [esp+0x1c]}
            float var_20_1 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
            unimplemented  {fstp dword [esp+0x20], st0}
            
            do
                unimplemented  {fild st0, dword [esp+0xc]}
                unimplemented  {fdiv st0, dword [esp+0x20]}
                float var_34_2 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
                unimplemented  {fstp dword [esp+0xc], st0}
                unimplemented  {fld st0, dword [esp+0xc]}
                unimplemented  {fld st0, dword [esp+0x24]}
                int32_t eax_9
                int32_t mxcsr
                int16_t x87control
                int16_t x87control_1
                eax_9, x87control_1 = sub_70cce0(mxcsr, x87control)
                float var_34_3 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
                unimplemented  {fstp dword [esp+0xc], st0}
                unimplemented  {fld st0, dword [esp+0xc]}
                int16_t var_34_4 = (fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})).w
                unimplemented  {fstp dword [esp+0xc], st0}
                unimplemented  {fldz }
                unimplemented  {fld st0, dword [esp+0xc]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                bool c2_1 =
                    is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                eax_9.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | ((top_1 - 1) & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x5}
                int16_t top_15
                
                if (p_1)
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fld1 }
                    unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                    bool c0_2 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                    bool c2_2 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                        unimplemented  {fcom st0, st1})
                    bool c3_2 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                    eax_9.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                        | ((top_1 - 1) & 7) << 0xb
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    bool p_2 = unimplemented  {test ah, 0x5}
                    
                    if (p_2)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top_15 = top_1 + 1
                    else
                        var_34_4 = (fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})).w
                        unimplemented  {fstp dword [esp+0xc], st0}
                        top_15 = top_1 + 1
                else
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    var_34_4 = (fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})).w
                    unimplemented  {fstp dword [esp+0xc], st0}
                    top_15 = top_1 + 1
                
                unimplemented  {fld st0, dword [esp+0xc]}
                edi_3 += 1
                unimplemented  {fmul st0, qword [0x75bbb0]}
                *(esi_1 + 3) = 0
                int16_t x87status_1
                int16_t temp0_1
                temp0_1, x87status_1 = __fnstcw_memmem16(x87control_1)
                esi_1 += 4
                int16_t x87control_2
                int16_t x87status_2
                x87control_2, x87status_2 = __fldcw_memmem16(temp0_1 | 0xc00)
                char var_18_2 = (int.d(unimplemented  {fistp dword [esp+0x28], st0})).b
                unimplemented  {fistp dword [esp+0x28], st0}
                top_1 = top_15
                int16_t eax_11
                eax_11.b = var_18_2
                *(esi_1 - 4) = eax_11.b
                *(esi_1 - 3) = eax_11.b
                int16_t x87status_3
                x87control, x87status_3 = __fldcw_memmem16(temp0_1)
                *(esi_1 - 2) = eax_11.b
                int32_t var_34_5 = edi_3
            while (edi_3 s< eax_3)
            
            eax_8 = var_14
        
        ecx_6 = var_30_1 + 1
        esi_1 += eax_8
        var_30_1 = ecx_6
    while (ecx_6 s< eax_5)

eax_8.b = 1
return eax_8
