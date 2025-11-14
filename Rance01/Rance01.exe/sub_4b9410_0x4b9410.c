// 函数: sub_4b9410
// 地址: 0x4b9410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
int32_t* esi = arg1

while (edi != arg4)
    int32_t* eax = arg5
    
    if (eax == arg6)
        break
    
    int32_t* ecx = *edi
    (*(**eax + 4))()
    double var_10_1 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
    unimplemented  {fstp qword [esp+0x10], st0}
    (*(*ecx + 4))()
    long double temp0_1 = fconvert.t(var_10_1)
    unimplemented  {fcomp st0, qword [esp+0x10]} f- temp0_1
    bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp0_1
    bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp0_1)
    bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp0_1
    unimplemented  {fcomp st0, qword [esp+0x10]}
    int16_t top = top + 2
    
    if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb)
            :1.b & 0x41) != 0)
        *esi = *edi
        edi = &edi[1]
    else
        int32_t* eax_4 = arg5
        *esi = *eax_4
        arg5 = &eax_4[1]
    
    esi = &esi[1]

sub_6b49d0(esi, edi, ((arg4 - edi) s>> 2) * 4)
void* edi_1 = (arg6 - arg5) s>> 2 << 2
int128_t* esi_1 = &esi[(arg4 - edi) s>> 2]
sub_6b49d0(esi_1, arg5, edi_1)
return edi_1 + esi_1
