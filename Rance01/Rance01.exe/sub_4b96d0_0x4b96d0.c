// 函数: sub_4b96d0
// 地址: 0x4b96d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg2
int32_t edi_2 = (arg1 - ecx) s>> 2

if (edi_2 s<= 0)
    return ecx

while (true)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(edi_2)
    int32_t* ebx_1 = *arg3
    int32_t esi_2 = (eax_2 - edx_1) s>> 1
    (*(**(ecx + (esi_2 << 2)) + 4))()
    double var_10_1 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
    unimplemented  {fstp qword [esp+0x10], st0}
    (*(*ebx_1 + 4))()
    long double temp0_1 = fconvert.t(var_10_1)
    unimplemented  {fcomp st0, qword [esp+0x10]} f- temp0_1
    bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp0_1
    bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp0_1)
    bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp0_1
    unimplemented  {fcomp st0, qword [esp+0x10]}
    int16_t top = top + 2
    
    if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb)
            :1.b & 0x41) != 0)
        edi_2 = esi_2
    else
        arg2 = arg2 + (esi_2 << 2) + 4
        edi_2 += 0xffffffff - esi_2
    
    if (edi_2 s<= 0)
        break
    
    ecx = arg2

return arg2
