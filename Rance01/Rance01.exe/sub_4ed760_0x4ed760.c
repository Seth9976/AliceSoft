// 函数: sub_4ed760
// 地址: 0x4ed760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg3
int32_t ebx = arg2
int32_t esi = ebx * 2 + 2
int32_t var_14 = ebx
bool cond:0 = esi != eax

if (esi s< eax)
    do
        int32_t* eax_1 = arg1[esi - 1]
        (*(*arg1[esi] + 4))()
        double var_10_1 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
        unimplemented  {fstp qword [esp+0x10], st0}
        (*(*eax_1 + 4))()
        long double temp0_1 = fconvert.t(var_10_1)
        unimplemented  {fcomp st0, qword [esp+0x10]} f- temp0_1
        bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp0_1
        bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp0_1)
        bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp0_1
        unimplemented  {fcomp st0, qword [esp+0x10]}
        int16_t top = top + 2
        int32_t eax_4
        eax_4.w =
            (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            esi -= 1
        
        arg1[ebx] = arg1[esi]
        ebx = esi
        esi = esi * 2 + 2
    while (esi s< arg3)
    
    eax = arg3
    cond:0 = esi != eax

if (not(cond:0))
    arg1[ebx] = arg1[eax - 1]
    ebx = eax - 1

int32_t var_24 = arg5
int32_t var_28 = arg4
int32_t var_2c = var_14
return sub_4ed7f0(ebx, var_14, arg4, arg1)
