// 函数: sub_4c8450
// 地址: 0x4c8450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x1d0)

if (edi != 0)
    void* esi_1 = arg1 + 0x1d8
    
    if (*(arg1 + 0x1d8) != 0)
        goto label_4c849f
    
    int32_t ecx
    sub_4ac220(ecx, esi_1)
    
    if (edi != 0 && sub_4ac290(edi, esi_1).b != 0)
        int80_t st0_1
        st0_1, arg1 = sub_4ac2f0(esi_1)
        
        if (arg1.b != 0)
            *esi_1 = 1
        label_4c849f:
            unimplemented  {fld st0, dword [ebp+0x14]}
            float var_20 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
            unimplemented  {fstp dword [esp+0x18], st0}
            unimplemented  {fld st0, dword [ebp+0x18]}
            float var_2c = var_20
            float var_1c = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            unimplemented  {fld st0, dword [ebp+0x1c]}
            float var_18 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
            unimplemented  {fstp dword [esp+0x20], st0}
            unimplemented  {fld st0, dword [ebp+0x8]}
            float var_14 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
            unimplemented  {fstp dword [esp+0x28], st0}
            float var_40 = var_1c
            unimplemented  {fld st0, dword [ebp+0xc]}
            float var_28 = var_1c
            float var_10 = fconvert.s(unimplemented  {fstp dword [esp+0x30], st0})
            unimplemented  {fstp dword [esp+0x30], st0}
            unimplemented  {fld st0, dword [ebp+0x10]}
            float var_24 = var_18
            float var_c = fconvert.s(unimplemented  {fstp dword [esp+0x34], st0})
            unimplemented  {fstp dword [esp+0x34], st0}
            unimplemented  {fld st0, dword [ebp+0x2c]}
            float var_40_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t ecx_2 = sub_4ac8a0(esi_1, &var_14, &var_20, var_40_1, &var_2c)
            unimplemented  {call 0x4ac8a0}
            unimplemented  {fld st0, dword [ebp+0x2c]}
            int32_t var_3c_3 = ecx_2
            float var_3c_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_4acdd0(esi_1, &var_2c, var_3c_4)
            unimplemented  {call 0x4acdd0}
            unimplemented  {fld st0, dword [esp+0x14]}
            float var_3c_5 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
            unimplemented  {fstp dword [esp+0x4], st0}
            unimplemented  {fld st0, dword [esp+0x14]}
            float var_40_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_4ac790(esi_1, var_40_3, var_3c_5)
            unimplemented  {call 0x4ac790}
            float var_28_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
            unimplemented  {fstp dword [esp+0x10], st0}
            unimplemented  {fld st0, dword [esp+0xc]}
            *arg2 = fconvert.s(unimplemented  {fstp dword [ecx], st0})
            unimplemented  {fstp dword [ecx], st0}
            unimplemented  {fld st0, dword [esp+0x10]}
            *arg3 = fconvert.s(unimplemented  {fstp dword [edx], st0})
            unimplemented  {fstp dword [edx], st0}
            unimplemented  {fld st0, dword [esp+0xc]}
            *arg4 = fconvert.s(unimplemented  {fstp dword [eax], st0})
            unimplemented  {fstp dword [eax], st0}
            float* eax_3
            eax_3.b = 1
            return eax_3

arg1.b = 0
return arg1
