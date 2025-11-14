// 函数: sub_5f4cc0
// 地址: 0x5f4cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0xc)

if (*(result + 0x58) != 0)
    result.b = 0
    return result

int32_t eax = *(result + 0x50)
void* eax_1

if (eax != 0)
    eax_1 = sub_5f7370(*(arg1 + 0x48), eax)

int16_t top

if (eax != 0 && eax_1 != 0)
    sub_5f2dc0(eax_1)
else
    top = 0xffff

void* eax_2 = *(arg1 + 0xc)
float var_38 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fld st0, dword [eax+0x1a4]}
unimplemented  {fmul st0, dword [esp+0x8]}
float var_34 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
unimplemented  {fstp dword [esp+0xc], st0}
unimplemented  {fldz }
float var_20 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
unimplemented  {fstp dword [esp+0x20], st0}
int16_t top_5 = top + 1
void* eax_3

if (*(eax_2 + 0x50) != 0)
    eax_3 = sub_5f7370(*(arg1 + 0x48), *(eax_2 + 0x50))

if (*(eax_2 + 0x50) != 0 && eax_3 != 0)
    sub_5f2d70(eax_3)
else
    top_5 -= 1
    unimplemented  {fld1 }

float var_38_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fld st0, dword [ecx+0x1a0]}
unimplemented  {fmul st0, dword [esp+0x8]}
float var_38_2 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fldz }
float var_1c = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
unimplemented  {fstp dword [esp+0x24], st0}
int16_t top_10 = top_5 + 1
int32_t eax_6

if ((*(**(*(arg1 + 0xb4) + (arg4 << 2)) + 0x34))() != 0)
    eax_6 = arg4
else if (arg4 != 3)
    eax_6 = 1
else
    eax_6 = arg4 - 1
    
    if ((*(**(*(arg1 + 0xb4) + 8) + 0x34))() == 0)
        eax_6 = 1

int32_t* edx_3 = *(*(arg1 + 0xb4) + (eax_6 << 2))
void* eax_10 = *(arg1 + 0xc)
int32_t ecx_7
ecx_7.b = *(eax_10 + 0x218)
void* eax_11

if (*(eax_10 + 0x50) != 0)
    eax_11 = sub_5f7370(*(arg1 + 0x48), *(eax_10 + 0x50))

if (*(eax_10 + 0x50) != 0 && eax_11 != 0)
    sub_5f2eb0(eax_11)
else
    top_10 -= 1
    unimplemented  {fldz }

void* eax_12 = *(arg1 + 0xc)
float var_30 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
unimplemented  {fstp dword [esp+0x10], st0}
unimplemented  {fld st0, dword [eax+0x1b0]}
float var_14 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
unimplemented  {fstp dword [esp+0x2c], st0}
int16_t top_13 = top_10 + 1
void* eax_13

if (*(eax_12 + 0x50) != 0)
    eax_13 = sub_5f7370(*(arg1 + 0x48), *(eax_12 + 0x50))

if (*(eax_12 + 0x50) != 0 && eax_13 != 0)
    sub_5f2e60(eax_13)
else
    top_13 -= 1
    unimplemented  {fldz }

void* eax_14 = *(arg1 + 0xc)
float var_2c = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
unimplemented  {fstp dword [esp+0x14], st0}
unimplemented  {fld st0, dword [eax+0x1ac]}
float var_10 = fconvert.s(unimplemented  {fstp dword [esp+0x30], st0})
unimplemented  {fstp dword [esp+0x30], st0}
int16_t top_16 = top_13 + 1

if (*(eax_14 + 0x50) == 0)
    top_16 -= 1
    unimplemented  {fldz }
else
    eax_14 = sub_5f7370(*(arg1 + 0x48), *(eax_14 + 0x50))
    
    if (eax_14 != 0)
        sub_5f2e10(eax_14)
    else
        top_16 -= 1
        unimplemented  {fldz }

float var_28 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
unimplemented  {fstp dword [esp+0x18], st0}
unimplemented  {fld st0, dword [edx+0x1a8]}
float var_c = fconvert.s(unimplemented  {fstp dword [esp+0x34], st0})
unimplemented  {fstp dword [esp+0x34], st0}
unimplemented  {fld st0, dword [esp+0xc]}
unimplemented  {fldz }
unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
bool c0 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
bool c2 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
bool c3 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
eax_14.w = (c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | ((top_16 - 1) & 7) << 0xb
unimplemented  {fstp st1, st0}
unimplemented  {fstp st1, st0}
unimplemented  {test ah, 0x5}
unimplemented  {fld st0, dword [esp+0x8]}
unimplemented  {fcompp } f- unimplemented  {fcompp }
bool c0_1 = unimplemented  {fcompp } f< unimplemented  {fcompp }
bool c2_1 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
bool c3_1 = unimplemented  {fcompp } f== unimplemented  {fcompp }
unimplemented  {fcompp }
unimplemented  {fcompp }
eax_14.w =
    (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | ((top_16 + 1) & 7) << 0xb
int32_t eax_15 = *(*(arg1 + 0xc) + 0x48)
unimplemented  {fld st0, dword [esp+0x2c]}
unimplemented  {fadd dword [esp+0x10]}
void* edi_6 = *edx_3
float var_14_1 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
unimplemented  {fstp dword [esp+0x2c], st0}
int32_t var_44 = ecx_7.b.d
unimplemented  {fld st0, dword [esp+0x30]}
float var_48 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
unimplemented  {fstp dword [esp+0x10], st0}
unimplemented  {fld st0, dword [esp+0x48]}
unimplemented  {fadd dword [esp+0x2c]}
float var_10_1 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
unimplemented  {fstp dword [esp+0x48], st0}
unimplemented  {fld st0, dword [esp+0x48]}
float var_4c = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
unimplemented  {fstp dword [esp+0xc], st0}
unimplemented  {fld st0, dword [esp+0x4c]}
unimplemented  {fadd dword [esp+0x30]}
float var_c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4c], st0})
unimplemented  {fstp dword [esp+0x4c], st0}
unimplemented  {fld st0, dword [esp+0x4c]}
float var_50 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fld st0, dword [ebx]}
float var_54 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
unimplemented  {fstp dword [esp+0x4], st0}
unimplemented  {fld st0, dword [ecx]}
float var_58 = fconvert.s(unimplemented  {fstp dword [esp], st0})
unimplemented  {fstp dword [esp], st0}
int32_t eax_16 = sub_5f29b0(arg1)
return (*(edi_6 + 0x40))(arg2, arg3, sub_5f2950(arg1), eax_16, eax_15, var_58, var_54, var_50, 
    var_4c)
