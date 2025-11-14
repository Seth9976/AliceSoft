// 函数: sub_4f6de0
// 地址: 0x4f6de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x6c)
void* esi_3 = ((eax_4 - edx_2) s>> 1) * 0x6c + arg2
sub_4f7820(arg3 - 0x6c, edx_2, arg2, esi_3)
int32_t i_1 = esi_3 + 0x6c
void* var_320 = esi_3
int32_t i_2 = i_1
int32_t eax_7

if (arg2 u< esi_3)
    do
        long double x87_r7_1 = fconvert.t(*(esi_3 - 4))
        long double x87_r6_1 = fconvert.t(*(esi_3 + 0x68))
        x87_r6_1 - x87_r7_1
        eax_7.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        
        if ((eax_7:1.b & 0x41) == 0)
            break
        
        long double x87_r7_2 = fconvert.t(*(esi_3 + 0x68))
        long double x87_r6_2 = fconvert.t(*(esi_3 - 4))
        x87_r6_2 - x87_r7_2
        eax_7.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        
        if ((eax_7:1.b & 0x41) == 0)
            break
        
        esi_3 -= 0x6c
    while (arg2 u< esi_3)
    
    var_320 = esi_3

if (i_1 u< arg3)
    if ((arg3 - i_1 + 0x6b) s/ 0x6c s>= 4)
        while (true)
            long double x87_r7_3 = fconvert.t(*(i_1 + 0x68))
            long double x87_r6_3 = fconvert.t(*(esi_3 + 0x68))
            x87_r6_3 - x87_r7_3
            eax_7.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
            
            if ((eax_7:1.b & 0x41) == 0)
                goto label_4f6f7a
            
            long double x87_r7_4 = fconvert.t(*(esi_3 + 0x68))
            long double x87_r6_4 = fconvert.t(*(i_1 + 0x68))
            x87_r6_4 - x87_r7_4
            eax_7.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
            
            if ((eax_7:1.b & 0x41) == 0)
                goto label_4f6f7a
            
            long double x87_r7_5 = fconvert.t(*(i_1 + 0xd4))
            long double x87_r6_5 = fconvert.t(*(esi_3 + 0x68))
            x87_r6_5 - x87_r7_5
            eax_7.w = (x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe
            
            if ((eax_7:1.b & 0x41) != 0)
                long double x87_r7_6 = fconvert.t(*(esi_3 + 0x68))
                long double x87_r6_6 = fconvert.t(*(i_1 + 0xd4))
                x87_r6_6 - x87_r7_6
                eax_7.w = (x87_r6_6 < x87_r7_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_6, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r6_6 == x87_r7_6 ? 1 : 0) << 0xe
                
                if ((eax_7:1.b & 0x41) != 0)
                    long double x87_r7_7 = fconvert.t(*(i_1 + 0x140))
                    long double x87_r6_7 = fconvert.t(*(esi_3 + 0x68))
                    x87_r6_7 - x87_r7_7
                    eax_7.w = (x87_r6_7 < x87_r7_7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_7, x87_r7_7) ? 1 : 0) << 0xa
                        | (x87_r6_7 == x87_r7_7 ? 1 : 0) << 0xe
                    
                    if ((eax_7:1.b & 0x41) != 0)
                        long double x87_r7_8 = fconvert.t(*(esi_3 + 0x68))
                        long double x87_r6_8 = fconvert.t(*(i_1 + 0x140))
                        x87_r6_8 - x87_r7_8
                        eax_7.w = (x87_r6_8 < x87_r7_8 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_8, x87_r7_8) ? 1 : 0) << 0xa
                            | (x87_r6_8 == x87_r7_8 ? 1 : 0) << 0xe
                        
                        if ((eax_7:1.b & 0x41) != 0)
                            long double x87_r7_9 = fconvert.t(*(i_1 + 0x1ac))
                            long double x87_r6_9 = fconvert.t(*(esi_3 + 0x68))
                            x87_r6_9 - x87_r7_9
                            eax_7.w = (x87_r6_9 < x87_r7_9 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_9, x87_r7_9) ? 1 : 0) << 0xa
                                | (x87_r6_9 == x87_r7_9 ? 1 : 0) << 0xe
                            
                            if ((eax_7:1.b & 0x41) != 0)
                                long double x87_r7_10 = fconvert.t(*(esi_3 + 0x68))
                                long double x87_r6_10 = fconvert.t(*(i_1 + 0x1ac))
                                x87_r6_10 - x87_r7_10
                                eax_7.w = (x87_r6_10 < x87_r7_10 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_10, x87_r7_10) ? 1 : 0) << 0xa
                                    | (x87_r6_10 == x87_r7_10 ? 1 : 0) << 0xe
                                
                                if ((eax_7:1.b & 0x41) != 0)
                                    i_1 += 0x1b0
                                    
                                    if (i_1 s< arg3 - 0x144)
                                        continue
                                    
                                    i_2 = i_1
                                    break
                            
                            i_1 += 0x144
                            goto label_4f6f7a
                    
                    i_1 += 0xd8
                    goto label_4f6f7a
            
            i_1 += 0x6c
            goto label_4f6f7a
    
    if (i_1 u< arg3)
        do
            long double x87_r7_11 = fconvert.t(*(i_1 + 0x68))
            long double x87_r6_11 = fconvert.t(*(esi_3 + 0x68))
            x87_r6_11 - x87_r7_11
            eax_7.w = (x87_r6_11 < x87_r7_11 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_11, x87_r7_11) ? 1 : 0) << 0xa
                | (x87_r6_11 == x87_r7_11 ? 1 : 0) << 0xe
            
            if ((eax_7:1.b & 0x41) == 0)
                break
            
            long double x87_r7_12 = fconvert.t(*(esi_3 + 0x68))
            long double x87_r6_12 = fconvert.t(*(i_1 + 0x68))
            x87_r6_12 - x87_r7_12
            eax_7.w = (x87_r6_12 < x87_r7_12 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_12, x87_r7_12) ? 1 : 0) << 0xa
                | (x87_r6_12 == x87_r7_12 ? 1 : 0) << 0xe
            
            if ((eax_7:1.b & 0x41) == 0)
                break
            
            i_1 += 0x6c
        while (i_1 u< arg3)
        
    label_4f6f7a:
        i_2 = i_1

int32_t i = i_1
void* var_31c = esi_3

while (true)
    int32_t edi_9 = arg3
    
    if (i u< edi_9)
        void var_318
        
        if ((edi_9 - i + 0x6b) s/ 0x6c s>= 4)
            do
                long double x87_r7_13 = fconvert.t(*(esi_3 + 0x68))
                long double x87_r6_13 = fconvert.t(*(i + 0x68))
                x87_r6_13 - x87_r7_13
                eax_7.w = (x87_r6_13 < x87_r7_13 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_13, x87_r7_13) ? 1 : 0) << 0xa
                    | (x87_r6_13 == x87_r7_13 ? 1 : 0) << 0xe
                
                if ((eax_7:1.b & 0x41) != 0)
                    long double x87_r7_14 = fconvert.t(*(i + 0x68))
                    long double x87_r6_14 = fconvert.t(*(esi_3 + 0x68))
                    x87_r6_14 - x87_r7_14
                    eax_7.w = (x87_r6_14 < x87_r7_14 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_14, x87_r7_14) ? 1 : 0) << 0xa
                        | (x87_r6_14 == x87_r7_14 ? 1 : 0) << 0xe
                    
                    if ((eax_7:1.b & 0x41) == 0)
                        goto label_4f71c1
                    
                    i_2 = i_1 + 0x6c
                    __builtin_memcpy(&var_318, i_1, 0x6c)
                    __builtin_memcpy(i_1, i, 0x6c)
                    __builtin_memcpy(i, &var_318, 0x6c)
                    i_1 = i_2
                    esi_3 = var_320
                
                long double x87_r7_15 = fconvert.t(*(esi_3 + 0x68))
                long double x87_r6_15 = fconvert.t(*(i + 0xd4))
                x87_r6_15 - x87_r7_15
                eax_7.w = (x87_r6_15 < x87_r7_15 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_15, x87_r7_15) ? 1 : 0) << 0xa
                    | (x87_r6_15 == x87_r7_15 ? 1 : 0) << 0xe
                
                if ((eax_7:1.b & 0x41) != 0)
                    long double x87_r7_16 = fconvert.t(*(i + 0xd4))
                    long double x87_r6_16 = fconvert.t(*(esi_3 + 0x68))
                    x87_r6_16 - x87_r7_16
                    eax_7.w = (x87_r6_16 < x87_r7_16 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_16, x87_r7_16) ? 1 : 0) << 0xa
                        | (x87_r6_16 == x87_r7_16 ? 1 : 0) << 0xe
                    
                    if ((eax_7:1.b & 0x41) == 0)
                        i += 0x6c
                        goto label_4f71c1
                    
                    i_2 = i_1 + 0x6c
                    __builtin_memcpy(&var_318, i_1, 0x6c)
                    __builtin_memcpy(i_1, i + 0x6c, 0x6c)
                    __builtin_memcpy(i + 0x6c, &var_318, 0x6c)
                    i_1 = i_2
                    esi_3 = var_320
                
                long double x87_r7_17 = fconvert.t(*(esi_3 + 0x68))
                long double x87_r6_17 = fconvert.t(*(i + 0x140))
                x87_r6_17 - x87_r7_17
                eax_7.w = (x87_r6_17 < x87_r7_17 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_17, x87_r7_17) ? 1 : 0) << 0xa
                    | (x87_r6_17 == x87_r7_17 ? 1 : 0) << 0xe
                
                if ((eax_7:1.b & 0x41) != 0)
                    long double x87_r7_18 = fconvert.t(*(i + 0x140))
                    long double x87_r6_18 = fconvert.t(*(esi_3 + 0x68))
                    x87_r6_18 - x87_r7_18
                    eax_7.w = (x87_r6_18 < x87_r7_18 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_18, x87_r7_18) ? 1 : 0) << 0xa
                        | (x87_r6_18 == x87_r7_18 ? 1 : 0) << 0xe
                    
                    if ((eax_7:1.b & 0x41) == 0)
                        i += 0xd8
                        goto label_4f71c1
                    
                    i_2 = i_1 + 0x6c
                    __builtin_memcpy(&var_318, i_1, 0x6c)
                    __builtin_memcpy(i_1, i + 0xd8, 0x6c)
                    __builtin_memcpy(i + 0xd8, &var_318, 0x6c)
                    i_1 = i_2
                    esi_3 = var_320
                
                long double x87_r7_19 = fconvert.t(*(esi_3 + 0x68))
                long double x87_r6_19 = fconvert.t(*(i + 0x1ac))
                x87_r6_19 - x87_r7_19
                eax_7.w = (x87_r6_19 < x87_r7_19 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_19, x87_r7_19) ? 1 : 0) << 0xa
                    | (x87_r6_19 == x87_r7_19 ? 1 : 0) << 0xe
                
                if ((eax_7:1.b & 0x41) != 0)
                    long double x87_r7_20 = fconvert.t(*(i + 0x1ac))
                    long double x87_r6_20 = fconvert.t(*(esi_3 + 0x68))
                    x87_r6_20 - x87_r7_20
                    eax_7.w = (x87_r6_20 < x87_r7_20 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_20, x87_r7_20) ? 1 : 0) << 0xa
                        | (x87_r6_20 == x87_r7_20 ? 1 : 0) << 0xe
                    
                    if ((eax_7:1.b & 0x41) == 0)
                        i += 0x144
                        goto label_4f71c1
                    
                    i_2 = i_1 + 0x6c
                    __builtin_memcpy(&var_318, i_1, 0x6c)
                    __builtin_memcpy(i_1, i + 0x144, 0x6c)
                    __builtin_memcpy(i + 0x144, &var_318, 0x6c)
                    i_1 = i_2
                    esi_3 = var_320
                
                edi_9 = arg3
                i += 0x1b0
            while (i s< edi_9 - 0x144)
        
        if (i u< edi_9)
            do
                long double x87_r7_21 = fconvert.t(*(esi_3 + 0x68))
                long double x87_r6_21 = fconvert.t(*(i + 0x68))
                x87_r6_21 - x87_r7_21
                eax_7.w = (x87_r6_21 < x87_r7_21 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_21, x87_r7_21) ? 1 : 0) << 0xa
                    | (x87_r6_21 == x87_r7_21 ? 1 : 0) << 0xe
                
                if ((eax_7:1.b & 0x41) != 0)
                    long double x87_r7_22 = fconvert.t(*(i + 0x68))
                    long double x87_r6_22 = fconvert.t(*(esi_3 + 0x68))
                    x87_r6_22 - x87_r7_22
                    eax_7.w = (x87_r6_22 < x87_r7_22 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_22, x87_r7_22) ? 1 : 0) << 0xa
                        | (x87_r6_22 == x87_r7_22 ? 1 : 0) << 0xe
                    
                    if ((eax_7:1.b & 0x41) == 0)
                        break
                    
                    i_2 = i_1 + 0x6c
                    __builtin_memcpy(&var_318, i_1, 0x6c)
                    __builtin_memcpy(i_1, i, 0x6c)
                    __builtin_memcpy(i, &var_318, 0x6c)
                    i_1 = i_2
                    esi_3 = var_320
                
                i += 0x6c
            while (i u< arg3)
    
label_4f71c1:
    void* edi_12 = var_31c
    bool cond:0_1 = edi_12 != arg2
    
    if (edi_12 u> arg2)
        void* edx_15 = edi_12 - 0x6c
        
        do
            long double x87_r7_23 = fconvert.t(*(edx_15 + 0x68))
            long double x87_r6_23 = fconvert.t(*(esi_3 + 0x68))
            x87_r6_23 - x87_r7_23
            eax_7.w = (x87_r6_23 < x87_r7_23 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_23, x87_r7_23) ? 1 : 0) << 0xa
                | (x87_r6_23 == x87_r7_23 ? 1 : 0) << 0xe
            
            if ((eax_7:1.b & 0x41) != 0)
                long double x87_r7_24 = fconvert.t(*(esi_3 + 0x68))
                long double x87_r6_24 = fconvert.t(*(edx_15 + 0x68))
                x87_r6_24 - x87_r7_24
                eax_7.w = (x87_r6_24 < x87_r7_24 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_24, x87_r7_24) ? 1 : 0) << 0xa
                    | (x87_r6_24 == x87_r7_24 ? 1 : 0) << 0xe
                
                if ((eax_7:1.b & 0x41) == 0)
                    break
                
                var_320 = esi_3 - 0x6c
                void var_2a8
                __builtin_memcpy(&var_2a8, esi_3 - 0x6c, 0x6c)
                __builtin_memcpy(var_320, edx_15, 0x6c)
                __builtin_memcpy(edx_15, &var_2a8, 0x6c)
                i_1 = i_2
                esi_3 = var_320
            
            edi_12 = var_31c - 0x6c
            edx_15 -= 0x6c
            var_31c = edi_12
        while (arg2 u< edi_12)
        
        cond:0_1 = edi_12 != arg2
    
    if (cond:0_1)
        var_31c = edi_12 - 0x6c
        
        if (i != arg3)
            eax_7 = var_31c
            void var_78
            __builtin_memcpy(&var_78, i, 0x6c)
            __builtin_memcpy(i, eax_7, 0x6c)
            __builtin_memcpy(eax_7, &var_78, 0x6c)
            i_1 = i_2
            esi_3 = var_320
            i += 0x6c
        else
            void* esi_20 = esi_3 - 0x6c
            var_320 = esi_20
            
            if (edi_12 - 0x6c != esi_20)
                void var_238
                __builtin_memcpy(&var_238, edi_12 - 0x6c, 0x6c)
                __builtin_memcpy(var_31c, var_320, 0x6c)
                __builtin_memcpy(var_320, &var_238, 0x6c)
                i_1 = i_2
                esi_20 = var_320
            
            i_2 = i_1 - 0x6c
            void var_158
            __builtin_memcpy(&var_158, esi_20, 0x6c)
            __builtin_memcpy(var_320, i_2, 0x6c)
            __builtin_memcpy(i_2, &var_158, 0x6c)
            esi_3 = var_320
            i_1 = i_2
    else
        if (i == arg3)
            break
        
        if (i_1 != i)
            void var_1c8
            __builtin_memcpy(&var_1c8, esi_3, 0x6c)
            __builtin_memcpy(var_320, i_2, 0x6c)
            __builtin_memcpy(i_2, &var_1c8, 0x6c)
            esi_3 = var_320
            i_1 = i_2
        
        i_2 = i_1 + 0x6c
        var_320 = esi_3 + 0x6c
        void var_e8
        __builtin_memcpy(&var_e8, esi_3, 0x6c)
        __builtin_memcpy(esi_3, i, 0x6c)
        __builtin_memcpy(i, &var_e8, 0x6c)
        i_1 = i_2
        esi_3 = var_320
        i += 0x6c

*arg1 = esi_3
arg1[1] = i_1
return arg1
