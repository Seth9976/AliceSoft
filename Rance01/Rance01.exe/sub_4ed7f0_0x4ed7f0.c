// 函数: sub_4ed7f0
// 地址: 0x4ed7f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi - 1)
int32_t esi_1 = (eax_1 - edx) s>> 1

if (arg3 s>= edi)
    *(arg2 + (edi << 2)) = *arg4
    return arg4

do
    int32_t* ecx_1 = *arg4
    (*(**(arg2 + (esi_1 << 2)) + 4))()
    double var_10_1 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
    unimplemented  {fstp qword [esp+0x10], st0}
    (*(*ecx_1 + 4))()
    long double temp0_1 = fconvert.t(var_10_1)
    unimplemented  {fcomp st0, qword [esp+0x10]} f- temp0_1
    bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp0_1
    bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp0_1)
    bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp0_1
    unimplemented  {fcomp st0, qword [esp+0x10]}
    int16_t top = top + 2
    int32_t eax_6
    eax_6.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        *(arg2 + (edi << 2)) = *arg4
        return eax_6
    
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(esi_1 - 1)
    *(arg2 + (edi << 2)) = *(arg2 + (esi_1 << 2))
    edi = esi_1
    esi_1 = (eax_8 - edx_3) s>> 1
while (arg3 s< edi)

int32_t eax_11 = *arg4
*(arg2 + (edi << 2)) = eax_11
return eax_11
