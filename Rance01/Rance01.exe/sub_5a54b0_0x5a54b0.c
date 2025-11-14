// 函数: sub_5a54b0
// 地址: 0x5a54b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = 1 << (8 - arg3.b)
void* esi = arg1
int128_t* eax_4 = sub_5a6290(ebx << 2, arg3, esi)
int32_t edi = 0
*arg2 = eax_4

if (ebx == 0)
    return eax_4

uint32_t eax_10

while (true)
    int32_t ebx_1
    
    if (esi == 0)
        ebx_1 = 0
    else
        int32_t eax_5 = *(esi + 0x264)
        int32_t eax_6
        
        if (eax_5 == 0)
            eax_6 = sub_6b5c43(0x200)
        else
            eax_6 = eax_5(esi, 0x200)
        
        if (eax_6 == 0 && (*(esi + 0x70) & 0x100000) == 0)
            sub_5a5c60(esi, "Out of Memory")
            noreturn
        
        ebx_1 = eax_6
    
    int32_t i = 0
    *(eax_4 + (edi << 2)) = ebx_1
    
    if (arg4 - 0x17318 u<= 0x2710)
        do
            eax_10 = (i << (8 - arg3.b)) + edi
            
            if (arg3 != 0)
                eax_10 = divu.dp.d(0:(eax_10 * 0xffff + (1 << (0xf - arg3.b))), 
                    (1 << (0x10 - arg3.b)) - 1)
            
            *(ebx_1 + (i << 1)) = eax_10.w
            i += 1
        while (i u< 0x100)
    else
        unimplemented  {fild st0, dword [esp+0x14]}
        
        if ((1 << (0x10 - arg3.b)) - 1 s< 0)
            unimplemented  {fadd qword [0x75bba8]}
        
        double var_14_1 = fconvert.d(unimplemented  {fstp qword [esp+0x28], st0})
        unimplemented  {fstp qword [esp+0x28], st0}
        unimplemented  {fild st0, dword [esp+0x4c]}
        unimplemented  {fmul st0, qword [0x75bb98]}
        double var_c_1 = fconvert.d(unimplemented  {fstp qword [esp+0x30], st0})
        unimplemented  {fstp qword [esp+0x30], st0}
        
        do
            int32_t edx_3 = i << (8 - arg3.b)
            arg2 = edx_3 + edi
            unimplemented  {fild st0, dword [esp+0x44]}
            
            if (edx_3 + edi s< 0)
                unimplemented  {fadd qword [0x75bba8]}
            
            unimplemented  {fdiv st0, qword [esp+0x28]}
            unimplemented  {fld st0, qword [esp+0x30]}
            int32_t mxcsr
            int16_t x87control
            int16_t x87control_1 = sub_70cce0(mxcsr, x87control)
            unimplemented  {fmul st0, qword [0x75bba0]}
            unimplemented  {fadd qword [0x75baa0]}
            void* var_44
            var_44.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            int16_t x87control_2 = sub_70cb70(mxcsr, x87control_1, var_44)
            unimplemented  {call 0x70cb70}
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(x87control_2)
            arg2.w = temp0_1
            i += 1
            int16_t x87control_3
            int16_t x87status_2
            x87control_3, x87status_2 = __fldcw_memmem16((zx.d(arg2.w) | 0xc00).w)
            int16_t var_20_2 = (int.d(unimplemented  {fistp dword [esp+0x1c], st0})).w
            unimplemented  {fistp dword [esp+0x1c], st0}
            int16_t top = top + 1
            eax_10.w = var_20_2
            *(ebx_1 + (i << 1) - 2) = eax_10.w
            int16_t x87status_3
            x87control, x87status_3 = __fldcw_memmem16(arg2.w)
        while (i u< 0x100)
    
    edi += 1
    
    if (edi u>= ebx)
        break
    
    esi = arg1

return eax_10
