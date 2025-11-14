// 函数: sub_4ceb40
// 地址: 0x4ceb40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** edx = *arg1
int32_t edi = arg1[1]

if (edx != edi)
    long double x87_r7_1 = float.t(1)
    long double x87_r6_1 = float.t(0)
    
    do
        void* ecx_1 = *edx
        bool cond:0_1
        
        if (arg2 u> 7)
        label_4cecb1:
            
            if (*(ecx_1 + 0x6a) == 0)
                long double x87_r5_8 = fconvert.t(*(ecx_1 + 0xb8))
                x87_r7_1 - x87_r5_8
                arg1.w = (x87_r7_1 < x87_r5_8 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, x87_r5_8) ? 1 : 0) << 0xa
                    | (x87_r7_1 == x87_r5_8 ? 1 : 0) << 0xe | 0x3000
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (not(p_8))
                    if (arg2 == 5)
                        goto label_4ceccd
                    
                    if (arg2 == 0)
                        goto label_4cece0
                    
                    if (arg2 == 1 && *(ecx_1 + 0xd1) != 0)
                        goto label_4ced10
                    
                    arg1.b = 1
                    return 
        else
            switch (arg2)
                case 0
                    if (*(ecx_1 + 0x6a) == 0)
                        long double x87_r5_1 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r7_1 - x87_r5_1
                        arg1.w = (x87_r7_1 < x87_r5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r5_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r5_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_1))
                        label_4cece0:
                            
                            if (*(ecx_1 + 0xd1) != 0 && (*(ecx_1 + 4))[0x12].b != 0)
                                arg1.b = 1
                                return 
                case 1
                    if (*(ecx_1 + 0x6a) == 0)
                        long double x87_r5_2 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r7_1 - x87_r5_2
                        arg1.w = (x87_r7_1 < x87_r5_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r5_2) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r5_2 ? 1 : 0) << 0xe | 0x3000
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            if (*(ecx_1 + 0xd1) == 0)
                                arg1.b = 1
                                return 
                            
                        label_4ced10:
                            cond:0_1 = *(*(ecx_1 + 4) + 0x48) == 0
                        label_4ced14:
                            
                            if (cond:0_1)
                                arg1.b = 1
                                return 
                case 2
                    bool p_7
                    
                    if (*(ecx_1 + 0x6a) == 0)
                        long double x87_r5_7 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r7_1 - x87_r5_7
                        arg1.w = (x87_r7_1 < x87_r5_7 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r5_7) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r5_7 ? 1 : 0) << 0xe | 0x3000
                        p_7 = unimplemented  {test ah, 0x44}
                    
                    if (*(ecx_1 + 0x6a) != 0 || p_7)
                        long double temp2_1 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r6_1 - temp2_1
                        arg1.w = (x87_r6_1 < temp2_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3000
                        
                        if ((arg1:1.b & 1) != 0 && *(ecx_1 + 0xf8) != 0)
                            arg1.b = 1
                            return 
                case 3
                    goto label_4cecb1
                case 4
                    if (*(ecx_1 + 0x6a) == 0)
                        long double x87_r5_3 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r7_1 - x87_r5_3
                        arg1.w = (x87_r7_1 < x87_r5_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r5_3) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r5_3 ? 1 : 0) << 0xe | 0x3000
                        bool p_3 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_3))
                            arg1.b = 1
                            return 
                case 5
                    if (*(ecx_1 + 0x6a) == 0)
                        long double x87_r5_4 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r7_1 - x87_r5_4
                        arg1.w = (x87_r7_1 < x87_r5_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r5_4) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r5_4 ? 1 : 0) << 0xe | 0x3000
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_4))
                        label_4ceccd:
                            
                            if (*(ecx_1 + 0xd1) != 0)
                                arg1.b = 1
                                return 
                case 6
                    bool p_5
                    
                    if (*(ecx_1 + 0x6a) == 0)
                        long double x87_r5_5 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r7_1 - x87_r5_5
                        arg1.w = (x87_r7_1 < x87_r5_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r5_5) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r5_5 ? 1 : 0) << 0xe | 0x3000
                        p_5 = unimplemented  {test ah, 0x44}
                    
                    if (*(ecx_1 + 0x6a) != 0 || p_5)
                        long double temp0_1 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r6_1 - temp0_1
                        arg1.w = (x87_r6_1 < temp0_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp0_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe | 0x3000
                        
                        if ((arg1:1.b & 1) != 0)
                            void* ecx_2 = *(ecx_1 + 4)
                            
                            if (ecx_2 == 0 || *(ecx_2 + 0x74) != 1)
                                arg1.b = 1
                                return 
                case 7
                    bool p_6
                    
                    if (*(ecx_1 + 0x6a) == 0)
                        long double x87_r5_6 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r7_1 - x87_r5_6
                        arg1.w = (x87_r7_1 < x87_r5_6 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r5_6) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r5_6 ? 1 : 0) << 0xe | 0x3000
                        p_6 = unimplemented  {test ah, 0x44}
                    
                    if (*(ecx_1 + 0x6a) != 0 || p_6)
                        long double temp1_1 = fconvert.t(*(ecx_1 + 0xb8))
                        x87_r6_1 - temp1_1
                        arg1.w = (x87_r6_1 < temp1_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp1_1 ? 1 : 0) << 0xe | 0x3000
                        
                        if ((arg1:1.b & 1) != 0)
                            int32_t ecx_3 = *(ecx_1 + 4)
                            
                            if (ecx_3 == 0)
                                arg1.b = 1
                                return 
                            
                            cond:0_1 = *(ecx_3 + 0x74) == 1
                            goto label_4ced14
        edx = &edx[1]
    while (edx != edi)

arg1.b = 0
