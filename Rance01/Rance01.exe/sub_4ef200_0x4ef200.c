// 函数: sub_4ef200
// 地址: 0x4ef200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
    fconvert.t(fconvert.s(fconvert.t(arg3) - fconvert.t(*(arg1 + 0x228)))) * fconvert.t(30.0)
    / fconvert.t(1000.0)))))
float var_20 = fconvert.s(x87_r7_6 * x87_r7_6)
long double x87_r6_2 = float.t(0)
long double temp1 = fconvert.t(*(arg1 + 0x74))
x87_r6_2 - temp1

if ((((x87_r6_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, temp1) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
    long double x87_r5_4 =
        fconvert.t(fconvert.s(fneg(fconvert.t(*(arg1 + 0x70))) / fconvert.t(*(arg1 + 0x74))))
    x87_r5_4 - x87_r7_6
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r6_2 = x87_r5_4
    else
        var_20 = fconvert.s(x87_r7_6 * x87_r7_6)
        x87_r7_6 = fconvert.t(fconvert.s(x87_r7_6))

float var_24_4 = fconvert.s(
    fconvert.t(fconvert.s(x87_r7_6 * fconvert.t(*(arg1 + 0x70)) + fconvert.t(0.0)))
    + fconvert.t(*(arg1 + 0x74)) * fconvert.t(var_20) * fconvert.t(0.5))
x87_r6_2 - fconvert.t(*(arg1 + 0x78))
bool p_2 = unimplemented  {test ah, 0x44}
int32_t mxcsr
int16_t x87control

if (p_2)
    float.t(1) - fconvert.t(*(arg1 + 0x7c))
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        long double x87_r6_13 = fconvert.t(-1f)
        long double temp3_1 = fconvert.t(*(arg1 + 0x7c))
        x87_r6_13 - temp3_1
        
        if ((((x87_r6_13 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_13, temp3_1) ? 1 : 0) << 0xa
                | (x87_r6_13 == temp3_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
            float var_24_7 =
                fconvert.s(fconvert.t(*(arg1 + 0x78)) * fconvert.t(arg4) + fconvert.t(var_24_4))
        else
            x87control = sub_70cce0(mxcsr, x87control, fneg(fconvert.t(*(arg1 + 0x7c))), 
                fconvert.t(fconvert.s(float.t(1) - fconvert.t(arg4))))
            float var_24_6 = fconvert.s(
                (float.t(1) - fconvert.t(fconvert.s(x87_r6_2))) * fconvert.t(*(arg1 + 0x78))
                + fconvert.t(var_24_4))
    else
        x87control = sub_70cce0(mxcsr, x87control, fconvert.t(*(arg1 + 0x7c)), fconvert.t(arg4))
        float var_24_5 = fconvert.s(fconvert.t(fconvert.s(x87_r6_2)) * fconvert.t(*(arg1 + 0x78))
            + fconvert.t(var_24_4))

bool cond:0 = *(arg1 + 0x80) == 0
unimplemented  {fld st0, dword [esi+0x234]}
unimplemented  {fld st0, dword [esp+0x4]}
unimplemented  {fld st0, st0}
unimplemented  {fmulp st2, st0}
unimplemented  {fmulp st2, st0}
unimplemented  {fxch st0, st1}
unimplemented  {fxch st0, st1}
*arg2 = fconvert.s(unimplemented  {fstp dword [edi], st0})
unimplemented  {fstp dword [edi], st0}
unimplemented  {fld st0, dword [esi+0x238]}
unimplemented  {fmul st0, st1}
float var_20_4 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fld st0, dword [esp+0x8]}
arg2[1] = fconvert.s(unimplemented  {fst dword [edi+0x4], st0})
unimplemented  {fld st0, dword [esi+0x23c]}
unimplemented  {fmulp st2, st0}
unimplemented  {fmulp st2, st0}
unimplemented  {fxch st0, st1}
unimplemented  {fxch st0, st1}
arg2[2] = fconvert.s(unimplemented  {fstp dword [edi+0x8], st0})
unimplemented  {fstp dword [edi+0x8], st0}

if (cond:0)
    unimplemented  {fstp st1, st0}
    unimplemented  {fstp st1, st0}
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}
    return arg2

unimplemented  {fld st0, dword [esp+0xc]}
float var_1c_2 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
unimplemented  {fstp dword [esp+0xc], st0}
unimplemented  {fld st0, dword [esp+0xc]}
unimplemented  {fld st0, st0}
unimplemented  {fmul st0, st0}
float var_24_8 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
unimplemented  {fstp dword [esp+0x4], st0}
unimplemented  {fld st0, dword [esi+0x84]}
float var_1c_3 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
unimplemented  {fstp dword [esp+0xc], st0}
unimplemented  {fld st0, dword [esi+0x88]}
float var_20_5 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
unimplemented  {fstp dword [esp+0x8], st0}
unimplemented  {fld st0, dword [esp+0xc]}
unimplemented  {fld st0, st0}
unimplemented  {fld st0, st4}
unimplemented  {fucompp } f- unimplemented  {fucompp }
unimplemented  {fucompp } f< unimplemented  {fucompp }
is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
unimplemented  {fucompp } f== unimplemented  {fucompp }
unimplemented  {fucompp }
unimplemented  {fucompp }
bool p_4 = unimplemented  {test ah, 0x44}

if (p_4)
    unimplemented  {fld st0, dword [esp+0x8]}
    unimplemented  {fld st0, st0}
    unimplemented  {fucomp st0, st5} f- unimplemented  {fucomp st0, st5}
    unimplemented  {fucomp st0, st5} f< unimplemented  {fucomp st0, st5}
    is_unordered.t(unimplemented  {fucomp st0, st5}, unimplemented  {fucomp st0, st5})
    unimplemented  {fucomp st0, st5} f== unimplemented  {fucomp st0, st5}
    unimplemented  {fucomp st0, st5}
    unimplemented  {fstp st4, st0}
    unimplemented  {fstp st4, st0}
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        double var_18 = fconvert.d(unimplemented  {fst qword [esp+0x10], st0})
        unimplemented  {fxch st0, st2}
        unimplemented  {fxch st0, st2}
        double var_10 = fconvert.d(unimplemented  {fstp qword [esp+0x18], st0})
        unimplemented  {fstp qword [esp+0x18], st0}
        unimplemented  {fdivp st2, st0}
        unimplemented  {fdivp st2, st0}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fchs }
        float var_24_9 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
        unimplemented  {fstp dword [esp+0x4], st0}
        unimplemented  {fld st0, dword [esp+0x4]}
        sub_70d0bc(mxcsr, x87control)
        float var_24_10 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
        unimplemented  {fstp dword [esp+0x4], st0}
        unimplemented  {fld st0, dword [esp+0x4]}
        unimplemented  {fld1 }
        unimplemented  {fsubrp st1, st0}
        unimplemented  {fsubrp st1, st0}
        unimplemented  {fld st0, dword [esp+0xc]}
        unimplemented  {fld st0, st0}
        unimplemented  {fld st0, dword [esp+0x8]}
        unimplemented  {fld st0, st0}
        unimplemented  {fdivp st2, st0}
        unimplemented  {fdivp st2, st0}
        unimplemented  {fxch st0, st3}
        unimplemented  {fxch st0, st3}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fsubr st0, qword [esp+0x10]}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        unimplemented  {fmul st0, qword [0x75bda8]}
        unimplemented  {fdivrp st2, st0}
        unimplemented  {fdivrp st2, st0}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fsubr st0, qword [esp+0x18]}
        arg2[1] = fconvert.s(unimplemented  {fstp dword [edi+0x4], st0})
        unimplemented  {fstp dword [edi+0x4], st0}
        return arg2

unimplemented  {fstp st0, st0}
unimplemented  {fstp st0, st0}
unimplemented  {fstp st2, st0}
unimplemented  {fstp st2, st0}
unimplemented  {fstp st1, st0}
unimplemented  {fstp st1, st0}
unimplemented  {fld st0, dword [esp+0x4]}
unimplemented  {fmul st0, qword [0x75bda8]}
unimplemented  {fmul st0, qword [0x75baa0]}
unimplemented  {fsubp st1, st0}
unimplemented  {fsubp st1, st0}
arg2[1] = fconvert.s(unimplemented  {fstp dword [edi+0x4], st0})
unimplemented  {fstp dword [edi+0x4], st0}
return arg2
