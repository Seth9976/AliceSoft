// 函数: sub_4b94b0
// 地址: 0x4b94b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg6
void* esi = arg3
void* edi = arg1
void* eax_4
int128_t* ecx_3

if (arg4 == esi)
label_4b9516:
    ecx_3 = arg5
    eax_4 = (edi - ecx_3) s>> 2 << 2
else
    while (arg5 != edi)
        int32_t* eax = *(esi - 4)
        void* edx = **(edi - 4)
        edi -= 4
        esi -= 4
        (*(edx + 4))()
        double var_10_1 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
        unimplemented  {fstp qword [esp+0x10], st0}
        (*(*eax + 4))()
        long double temp0_1 = fconvert.t(var_10_1)
        unimplemented  {fcomp st0, qword [esp+0x10]} f- temp0_1
        bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp0_1
        bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp0_1)
        bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp0_1
        unimplemented  {fcomp st0, qword [esp+0x10]}
        int16_t top = top + 2
        ebx -= 4
        
        if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | (top & 7) << 0xb):1.b & 0x41) != 0)
            *ebx = *edi
            esi += 4
        else
            *ebx = *esi
            edi += 4
        
        if (arg4 == esi)
            goto label_4b9516
    
    ecx_3 = arg4
    eax_4 = (esi - ecx_3) s>> 2 << 2

void* result = ebx - eax_4
sub_6b49d0(result, ecx_3, eax_4)
return result
