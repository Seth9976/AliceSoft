// 函数: sub_70f02a
// 地址: 0x70f02a
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_1 = fabs(fconvert.t(arg1))

if (arg3 == 0x7ff00000)
    if (arg2 != 0)
        goto label_70f0c9
    
    long double x87_r6_1 = float.t(1)
    x87_r6_1 - x87_r7_1
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r6_1 - x87_r7_1
        
        if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
            x87_r7_1 = float.t(0)
        
        *arg4 = fconvert.d(x87_r7_1)
    else
    label_70f05c:
        *arg4 = fconvert.d(fconvert.t(data_78ced0))
else if (arg3 != 0xfff00000 || arg2 != 0)
label_70f0c9:
    
    if (arg1:4.d != 0x7ff00000)
        if (arg1:4.d == 0xfff00000 && arg1.d == 0)
            int32_t var_c_1 = 0xfff00000
            x87_r7_1 = float.t(0)
            long double temp1_1 = fconvert.t(arg2.q)
            x87_r7_1 - temp1_1
            int32_t ecx_1 = sub_70efc0(0x7ff00000, 0, 0xfff00000, -nanf)
            int32_t eax_3
            eax_3.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (p_4)
                long double temp3_1 = fconvert.t(arg2.q)
                x87_r7_1 - temp3_1
                eax_3.w = (x87_r7_1 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_3:1.b & 0x41) != 0)
                    x87_r7_1 = float.t(1)
                else if (ecx_1 == 1)
                    x87_r7_1 = fconvert.t(data_78cef0)
            else
                x87_r7_1 = fconvert.t(data_78ced0)
                
                if (ecx_1 == 1)
                    x87_r7_1 = fneg(x87_r7_1)
            
            *arg4 = fconvert.d(x87_r7_1)
    else if (arg1.d == 0)
        x87_r7_1 = float.t(0)
        x87_r7_1 - fconvert.t(arg2.q)
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            goto label_70f05c
        
        long double temp2_1 = fconvert.t(arg2.q)
        x87_r7_1 - temp2_1
        
        if ((((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
            x87_r7_1 = float.t(1)
        
        *arg4 = fconvert.d(x87_r7_1)
else
    long double x87_r6_2 = float.t(1)
    x87_r6_2 - x87_r7_1
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        x87_r6_2 - x87_r7_1
        
        if ((((x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
            x87_r7_1 = fconvert.t(data_78ced8)
        else
            x87_r7_1 = fconvert.t(data_78ced0)
        
        *arg4 = fconvert.d(x87_r7_1)
    else
        *arg4 = fconvert.d(float.t(0))
