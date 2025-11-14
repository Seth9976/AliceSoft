// 函数: sub_5f5290
// 地址: 0x5f5290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 u> 3)
    return 

int32_t edi_1 = *(*(arg2 + 0xc) + 0x50)
int32_t* ebx_1 = *(*(arg2 + 0xb4) + (arg1 << 2))
void* eax

if (edi_1 != 0)
    eax = sub_5f7370(*(arg2 + 0x48), edi_1)

int16_t top

if (edi_1 != 0 && eax != 0)
    sub_5f2dc0(eax)
else
    top = 0xffff

void* eax_1 = *(arg2 + 0xc)
float var_30_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fld st0, dword [eax+0x1a4]}
unimplemented  {fmul st0, dword [esp+0x8]}
float var_2c_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
unimplemented  {fstp dword [esp+0xc], st0}
unimplemented  {fldz }
float var_1c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
unimplemented  {fstp dword [esp+0x1c], st0}
int16_t top_5 = top + 1
void* eax_2

if (*(eax_1 + 0x50) != 0)
    eax_2 = sub_5f7370(*(arg2 + 0x48), *(eax_1 + 0x50))

if (*(eax_1 + 0x50) != 0 && eax_2 != 0)
    sub_5f2d70(eax_2)
else
    top_5 -= 1
    unimplemented  {fld1 }

void* eax_3 = *(arg2 + 0xc)
float var_30_2 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fld st0, dword [eax+0x1a0]}
unimplemented  {fmul st0, dword [esp+0x8]}
float var_30_3 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fldz }
float var_18_1 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
unimplemented  {fstp dword [esp+0x20], st0}
int16_t top_10 = top_5 + 1
void* eax_4

if (*(eax_3 + 0x50) != 0)
    eax_4 = sub_5f7370(*(arg2 + 0x48), *(eax_3 + 0x50))

if (*(eax_3 + 0x50) != 0 && eax_4 != 0)
    sub_5f2eb0(eax_4)
else
    top_10 -= 1
    unimplemented  {fldz }

void* eax_5 = *(arg2 + 0xc)
float var_28_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
unimplemented  {fstp dword [esp+0x10], st0}
unimplemented  {fld st0, dword [eax+0x1b0]}
float var_14_1 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
unimplemented  {fstp dword [esp+0x24], st0}
int16_t top_13 = top_10 + 1
void* eax_6

if (*(eax_5 + 0x50) != 0)
    eax_6 = sub_5f7370(*(arg2 + 0x48), *(eax_5 + 0x50))

if (*(eax_5 + 0x50) != 0 && eax_6 != 0)
    sub_5f2e60(eax_6)
else
    top_13 -= 1
    unimplemented  {fldz }

void* eax_7 = *(arg2 + 0xc)
float var_24_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
unimplemented  {fstp dword [esp+0x14], st0}
unimplemented  {fld st0, dword [eax+0x1ac]}
float var_10_1 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
unimplemented  {fstp dword [esp+0x28], st0}
int16_t top_16 = top_13 + 1

if (*(eax_7 + 0x50) == 0)
    top_16 -= 1
    unimplemented  {fldz }
else
    eax_7 = sub_5f7370(*(arg2 + 0x48), *(eax_7 + 0x50))
    
    if (eax_7 != 0)
        sub_5f2e10(eax_7)
    else
        top_16 -= 1
        unimplemented  {fldz }

float var_20_1 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
unimplemented  {fstp dword [esp+0x18], st0}
unimplemented  {fld st0, dword [edi+0x1a8]}
float var_c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
unimplemented  {fstp dword [esp+0x2c], st0}
unimplemented  {fld st0, dword [esp+0xc]}
unimplemented  {fldz }
unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
bool c2_1 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
eax_7.w =
    (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | ((top_16 - 1) & 7) << 0xb
unimplemented  {fstp st1, st0}
unimplemented  {fstp st1, st0}
unimplemented  {test ah, 0x5}
unimplemented  {fld st0, dword [esp+0x8]}
unimplemented  {fcompp } f- unimplemented  {fcompp }
bool c0_2 = unimplemented  {fcompp } f< unimplemented  {fcompp }
bool c2_2 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
bool c3_2 = unimplemented  {fcompp } f== unimplemented  {fcompp }
unimplemented  {fcompp }
unimplemented  {fcompp }
eax_7.w =
    (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | ((top_16 + 1) & 7) << 0xb
unimplemented  {fld st0, dword [esp+0x24]}
unimplemented  {fadd dword [esp+0x24]}
int32_t eax_8 = *(*(arg2 + 0xc) + 0x48)
void* edi_7 = *ebx_1
float var_14_2 = fconvert.s(unimplemented  {fstp dword [esp+0x38], st0})
unimplemented  {fstp dword [esp+0x38], st0}
unimplemented  {fld st0, dword [esp+0x38]}
float var_3c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
unimplemented  {fstp dword [esp+0x10], st0}
unimplemented  {fld st0, dword [esp+0x3c]}
unimplemented  {fadd dword [esp+0x28]}
float var_10_2 = fconvert.s(unimplemented  {fstp dword [esp+0x3c], st0})
unimplemented  {fstp dword [esp+0x3c], st0}
unimplemented  {fld st0, dword [esp+0x3c]}
float var_40_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
unimplemented  {fstp dword [esp+0xc], st0}
unimplemented  {fld st0, dword [esp+0x40]}
unimplemented  {fadd dword [esp+0x2c]}
float var_c_2 = fconvert.s(unimplemented  {fstp dword [esp+0x40], st0})
unimplemented  {fstp dword [esp+0x40], st0}
unimplemented  {fld st0, dword [esp+0x40]}
float var_44_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fld st0, dword [edx]}
float var_48_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
unimplemented  {fstp dword [esp+0x4], st0}
unimplemented  {fld st0, dword [ecx]}
float var_4c_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
unimplemented  {fstp dword [esp], st0}
int32_t eax_9 = sub_5f29b0(arg2)
(*(edi_7 + 0x14))(sub_5f2950(arg2), eax_9, eax_8, var_4c_1, var_48_1, var_44_1, var_40_1, var_3c_1)
(*(*ebx_1 + 0x18))(sub_5f2a10(arg2))
int32_t edi_9 = *(*(arg2 + 0xc) + 0x50)
void* eax_13

if (edi_9 != 0)
    eax_13 = sub_5f7370(*(arg2 + 0x48), edi_9)

int32_t eax_14

if (edi_9 != 0 && eax_13 != 0)
    eax_14 = sub_5f2b10(eax_13)
else
    eax_14 = 0xff

(*(*ebx_1 + 0x20))(*(*(arg2 + 0xc) + 0x28) * eax_14 s/ 0xff)
(*(*ebx_1 + 0x24))(*(*(arg2 + 0xc) + 0x44))
void* edi_11 = *ebx_1
int32_t eax_21 = sub_5f2c20(arg2)
int32_t eax_22 = sub_5f2bc0(arg2)
(*(edi_11 + 0x2c))(sub_5f2b60(arg2), eax_22, eax_21)
int32_t edi_12 = *(*(arg2 + 0xc) + 0x50)
void* eax_25

if (edi_12 != 0)
    eax_25 = sub_5f7370(*(arg2 + 0x48), edi_12)

int32_t var_24_2

if (edi_12 != 0 && eax_25 != 0)
    var_24_2 = sub_5f2d20(eax_25)
else
    var_24_2 = 0xff

void* eax_27 = *(arg2 + 0xc)
int32_t ecx_31 = *(eax_27 + 0x40)
void* eax_28

if (*(eax_27 + 0x50) != 0)
    eax_28 = sub_5f7370(*(arg2 + 0x48), *(eax_27 + 0x50))

int32_t var_28_2

if (*(eax_27 + 0x50) != 0 && eax_28 != 0)
    var_28_2 = sub_5f2cd0(eax_28)
else
    var_28_2 = 0xff

void* eax_30 = *(arg2 + 0xc)
int32_t ecx_34 = *(eax_30 + 0x3c)
void* eax_31

if (*(eax_30 + 0x50) != 0)
    eax_31 = sub_5f7370(*(arg2 + 0x48), *(eax_30 + 0x50))

int32_t var_2c_2

if (*(eax_30 + 0x50) != 0 && eax_31 != 0)
    var_2c_2 = sub_5f2c80(eax_31)
else
    var_2c_2 = 0xff

(*(*ebx_1 + 0x30))(*(*(arg2 + 0xc) + 0x38) * var_2c_2 s/ 0xff, ecx_34 * var_28_2 s/ 0xff, 
    ecx_31 * var_24_2 s/ 0xff)
(*(*ebx_1 + 0x10))()
