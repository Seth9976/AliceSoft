// 函数: sub_4ed1e0
// 地址: 0x4ed1e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3
int32_t* edx
edx:eax_3 = sx.q((arg3 - arg2) s>> 2)
int32_t* i = &arg2[(eax_3 - edx) s>> 1]
int32_t var_2c = arg4
int32_t* var_30 = arg3 - 4
sub_4ed4e0(arg2, edx, arg3 - 4, i)
int32_t* i_1 = &i[1]
int32_t* i_2 = i_1
double var_18
int32_t ecx_2
int16_t top

for (; arg2 u< i; i = &i[-1])
    int32_t* ebx_1 = *i
    (*(*i[-1] + 4))()
    var_18 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
    unimplemented  {fstp qword [esp+0x10], st0}
    int32_t eax_10
    eax_10, ecx_2 = (*(*ebx_1 + 4))()
    long double temp0_1 = fconvert.t(var_18)
    unimplemented  {fcomp st0, qword [esp+0x10]} f- temp0_1
    bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp0_1
    bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp0_1)
    bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp0_1
    unimplemented  {fcomp st0, qword [esp+0x10]}
    top += 2
    eax_10.w =
        (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        break
    
    int32_t* ebx_2 = i[-1]
    (*(**i + 4))()
    var_18 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
    unimplemented  {fstp qword [esp+0x10], st0}
    int32_t eax_13
    eax_13, ecx_2 = (*(*ebx_2 + 4))()
    long double temp2_1 = fconvert.t(var_18)
    unimplemented  {fcomp st0, qword [esp+0x10]} f- temp2_1
    bool c0_2 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp2_1
    bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp2_1)
    bool c3_2 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp2_1
    unimplemented  {fcomp st0, qword [esp+0x10]}
    top += 2
    eax_13.w =
        (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        break

if (i_1 u< arg3)
    do
        int32_t* ebx_3 = *i
        (*(**i_1 + 4))()
        var_18 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
        unimplemented  {fstp qword [esp+0x10], st0}
        int32_t eax_16
        eax_16, ecx_2 = (*(*ebx_3 + 4))()
        long double temp1_1 = fconvert.t(var_18)
        unimplemented  {fcomp st0, qword [esp+0x10]} f- temp1_1
        bool c0_3 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp1_1
        bool c2_3 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp1_1)
        bool c3_3 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp1_1
        unimplemented  {fcomp st0, qword [esp+0x10]}
        top += 2
        eax_16.w =
            (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe | (top & 7) << 0xb
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            break
        
        int32_t* ebx_4 = *i_1
        (*(**i + 4))()
        var_18 = fconvert.d(unimplemented  {fstp qword [esp+0x10], st0})
        unimplemented  {fstp qword [esp+0x10], st0}
        int32_t eax_19
        eax_19, ecx_2 = (*(*ebx_4 + 4))()
        long double temp3_1 = fconvert.t(var_18)
        unimplemented  {fcomp st0, qword [esp+0x10]} f- temp3_1
        bool c0_4 = unimplemented  {fcomp st0, qword [esp+0x10]} f< temp3_1
        bool c2_4 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x10]}, temp3_1)
        bool c3_4 = unimplemented  {fcomp st0, qword [esp+0x10]} f== temp3_1
        unimplemented  {fcomp st0, qword [esp+0x10]}
        top += 2
        eax_19.w =
            (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe | (top & 7) << 0xb
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (not(p_4))
            break
        
        i_1 = &i_1[1]
    while (i_1 u< arg3)
    
    i_2 = i_1

int32_t* i_4 = i

while (true)
    for (; i_1 u< arg3; i_1 = &i_1[1])
        var_18.d = *i_1
        (*(**i + 4))()
        double var_10_1 = fconvert.d(unimplemented  {fstp qword [esp+0x18], st0})
        unimplemented  {fstp qword [esp+0x18], st0}
        (*(*var_18.d + 4))()
        long double temp6_1 = fconvert.t(var_10_1)
        unimplemented  {fcomp st0, qword [esp+0x18]} f- temp6_1
        bool c0_5 = unimplemented  {fcomp st0, qword [esp+0x18]} f< temp6_1
        bool c2_5 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x18]}, temp6_1)
        bool c3_5 = unimplemented  {fcomp st0, qword [esp+0x18]} f== temp6_1
        unimplemented  {fcomp st0, qword [esp+0x18]}
        top += 2
        int32_t eax_22
        eax_22.w =
            (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top & 7) << 0xb
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (p_5)
            var_18.d = *i
            (*(**i_1 + 4))()
            double var_10_2 = fconvert.d(unimplemented  {fstp qword [esp+0x18], st0})
            unimplemented  {fstp qword [esp+0x18], st0}
            (*(*var_18.d + 4))()
            long double temp8_1 = fconvert.t(var_10_2)
            unimplemented  {fcomp st0, qword [esp+0x18]} f- temp8_1
            bool c0_6 = unimplemented  {fcomp st0, qword [esp+0x18]} f< temp8_1
            bool c2_6 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x18]}, temp8_1)
            bool c3_6 = unimplemented  {fcomp st0, qword [esp+0x18]} f== temp8_1
            unimplemented  {fcomp st0, qword [esp+0x18]}
            top += 2
            int32_t eax_25
            eax_25.w = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | (top & 7) << 0xb
            bool p_6 = unimplemented  {test ah, 0x5}
            
            if (not(p_6))
                break
            
            int32_t* i_5 = i_2
            i_2 = &i_2[1]
            int32_t ecx_20 = *i_5
            *i_5 = *i_1
            *i_1 = ecx_20
    
    bool cond:0_1 = i_4 != arg2
    
    if (i_4 u> arg2)
        do
            var_18.d = *i
            (*(*i_4[-1] + 4))()
            double var_10_3 = fconvert.d(unimplemented  {fstp qword [esp+0x18], st0})
            unimplemented  {fstp qword [esp+0x18], st0}
            (*(*var_18.d + 4))()
            long double temp5_1 = fconvert.t(var_10_3)
            unimplemented  {fcomp st0, qword [esp+0x18]} f- temp5_1
            bool c0_7 = unimplemented  {fcomp st0, qword [esp+0x18]} f< temp5_1
            bool c2_7 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x18]}, temp5_1)
            bool c3_7 = unimplemented  {fcomp st0, qword [esp+0x18]} f== temp5_1
            unimplemented  {fcomp st0, qword [esp+0x18]}
            top += 2
            int32_t eax_29
            eax_29.w = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                | (top & 7) << 0xb
            bool p_7 = unimplemented  {test ah, 0x5}
            
            if (p_7)
                var_18.d = i_4[-1]
                (*(**i + 4))()
                double var_10_4 = fconvert.d(unimplemented  {fstp qword [esp+0x18], st0})
                unimplemented  {fstp qword [esp+0x18], st0}
                (*(*var_18.d + 4))()
                long double temp7_1 = fconvert.t(var_10_4)
                unimplemented  {fcomp st0, qword [esp+0x18]} f- temp7_1
                bool c0_8 = unimplemented  {fcomp st0, qword [esp+0x18]} f< temp7_1
                bool c2_8 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x18]}, temp7_1)
                bool c3_8 = unimplemented  {fcomp st0, qword [esp+0x18]} f== temp7_1
                unimplemented  {fcomp st0, qword [esp+0x18]}
                top += 2
                int32_t eax_32
                eax_32.w = (c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_8 = unimplemented  {test ah, 0x5}
                
                if (not(p_8))
                    break
                
                int32_t eax_33 = i[-1]
                i -= 4
                *i = i_4[-1]
                i_4[-1] = eax_33
            
            i_4 = &i_4[-1]
        while (arg2 u< i_4)
        
        cond:0_1 = i_4 != arg2
    
    if (cond:0_1)
        i_4 -= 4
        
        if (i_1 != arg3)
            int32_t eax_38 = *i_1
            *i_1 = *i_4
            *i_4 = eax_38
            i_1 = &i_1[1]
        else
            i -= 4
            
            if (i_4 != i)
                int32_t eax_36 = *i_4
                *i_4 = *i
                *i = eax_36
            
            ecx_2 = *i
            void* i_6 = i_2 - 4
            *i = i_2[-1]
            i_2 = i_6
            *i_6 = ecx_2
    else
        if (i_1 == arg3)
            break
        
        if (i_2 != i_1)
            int32_t ecx_27 = *i
            *i = *i_2
            *i_2 = ecx_27
        
        i_2 = &i_2[1]
        int32_t* i_3 = i_1
        var_18.d = *i
        *i = *i_3
        i = &i[1]
        i_1 = &i_1[1]
        *i_3 = var_18.d

*arg1 = i
arg1[1] = i_2
return arg1
