// 函数: sub_4f2190
// 地址: 0x4f2190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4ec4ec4f, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_1 = edx s>> 5
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t edi = 0

if (result s> 0)
    int32_t var_c_1 = 0
    
    do
        int32_t ecx_2 = *(arg1 + 4)
        unimplemented  {fld1 }
        int32_t var_1c_1 = ecx_2
        float var_1c_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        char eax_3 = sub_4f0e80(arg1, var_c_1 + ecx_2 + 0x4c, var_1c_2)
        int16_t top = top - 1
        unimplemented  {call 0x4f0e80}
        
        if (eax_3 != 0)
            unimplemented  {fld st0, dword [ebx+0x8]}
            float var_1c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
            unimplemented  {fstp dword [esp+0x4], st0}
            unimplemented  {fld st0, dword [ebx]}
            float var_20_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_4f0870(arg1, var_20_2, var_1c_3)
            unimplemented  {call 0x4f0870}
            *(var_c_1 + ecx_2 + 0x50) = fconvert.s(unimplemented  {fstp dword [ebx+0x4], st0})
            unimplemented  {fstp dword [ebx+0x4], st0}
        
        var_c_1 += 0x68
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = muls.dp.d(0x4ec4ec4f, *(arg1 + 8) - *(arg1 + 4))
        int32_t edx_4 = edx_3 s>> 5
        edi += 1
        result = (edx_4 u>> 0x1f) + edx_4
    while (edi s< result)

return result
