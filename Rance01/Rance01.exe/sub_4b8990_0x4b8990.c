// 函数: sub_4b8990
// 地址: 0x4b8990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3
char eax_5
int80_t st0
st0, eax_5 = sub_4b4150(arg1, arg2 + 4, ebx, (*(*ebx + 0x1c))((*(*ebx + 0x20))()))

if (eax_5 != 0)
    (*(*arg1 + 0x94))(0)
    (*(*arg1 + 0x98))(0)
    (*(*arg1 + 0xa0))(0)
    (*(*arg1 + 0x84))(0)
    (*(*arg1 + 0x8c))(0, 1)
    (*(*arg1 + 0x90))(0, 0)
    (*(*arg1 + 0x7c))(0, 0, 0)
    (*(*arg1 + 0x80))(0, 1)
    (*(*arg1 + 0x7c))(1, 1, 0)
    (*(*arg1 + 0x80))(1, 1)
    (*(*arg1 + 0x7c))(2, 0, 0)
    (*(*arg1 + 0x80))(2, 1)
    (*(*ebx + 0x24))(0)
    (*(**(arg2 + 0x20) + 0x24))(1)
    (*(*arg4 + 0x24))(2)
    
    if ((*(**(arg2 + 0x8c) + 0x10))() != 0)
        long double x87_r7_1 = fconvert.t(arg6)
        long double x87_r6_2 = x87_r7_1 * fconvert.t(arg7)
        float.t(0) - x87_r6_2
        long double x87_r5_2 = float.t(0)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            long double x87_r4_2 = fconvert.t(arg8)
            long double x87_r4_3 = x87_r4_2 * x87_r4_2
            x87_r6_2 = x87_r5_2
            arg3 = fconvert.s(x87_r4_3 / x87_r4_3 * fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x74))
                / fconvert.t(0.036000000400235876))))
        else
            x87_r7_1 = x87_r5_2
            arg3 = fconvert.s(x87_r6_2)
        
        if ((*(**(arg2 + 0x8c) + 0x20))(0, fconvert.s(fconvert.t(arg5)), fconvert.s(x87_r7_1), 
                fconvert.s(fconvert.t(arg3)), fconvert.s(x87_r6_2)) != 0)
            int32_t* ecx_19 = *(arg2 + 0x68)
            
            if (ecx_19 != 0 && (*(*ecx_19 + 0x20))() != 0 && (*(**(arg2 + 0x68) + 0x2c))() != 0)
                return (*(**(arg2 + 0x8c) + 0x14))() != 0

return 0
