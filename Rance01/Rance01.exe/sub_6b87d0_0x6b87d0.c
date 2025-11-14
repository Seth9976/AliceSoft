// 函数: sub_6b87d0
// 地址: 0x6b87d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t edi
int32_t var_210 = edi
uint32_t var_1e8 = arg4
char* i_5 = arg2
void var_188
void* var_1ac = &var_188
int32_t var_1dc = 0x15e
int32_t var_1d4 = 0
int32_t var_1f4 = 0
uint32_t i_8 = 0
int32_t var_1f8 = 0
int32_t result

if (arg2 == 0 || arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
else if ((arg1[3].b & 0x40) != 0)
label_6b88d4:
    void* var_208
    sub_6b5cd7(&var_208, arg3)
    uint32_t i_2
    i_2.b = *arg2
    char var_1a6_1 = 0
    uint32_t i_9 = 0
    int32_t result_1 = 0
    void* var_200
    char var_1fc
    
    if (i_2.b == 0)
    label_6b98d2:
        
        if (var_1fc != 0)
            *(var_200 + 0x70) &= 0xfffffffd
        
        result = result_1
    else
        while (true)
            uint32_t eax_9 = zx.d(i_2.b)
            char* i_12
            
            if (sub_6c1a76(eax_9) == 0)
                char* i_13 = i_5
                int32_t eax_10
                eax_10.b = *i_13
                bool cond:5_1
                
                if (eax_10.b != 0x25)
                label_6b973f:
                    i_9 += 1
                    uint32_t i_23 = sub_6b8790(eax_9, arg1)
                    i_12 = &i_13[1]
                    i_8 = i_23
                    i_5 = i_12
                    
                    if (zx.d(*i_13) != i_23)
                    label_6b9852:
                        cond:5_1 = i_23 == 0xffffffff
                    label_6b9855:
                        
                        if (cond:5_1)
                            break
                        
                        sub_6c1aa4(i_8, arg1)
                        break
                        break
                    
                    uint32_t eax_80 = zx.d(i_23.b)
                    
                    if (__ismbcupper(eax_80.b) != 0)
                        i_9 += 1
                        i_2 = sub_6b8790(eax_80, arg1)
                        uint32_t ecx_53 = zx.d(*i_12)
                        i_12 = &i_12[1]
                        i_5 = i_12
                        
                        if (ecx_53 != i_2)
                            if (i_2 != 0xffffffff)
                                sub_6c1aa4(i_2, arg1)
                            
                            goto label_6b9852
                        
                        i_9 -= 1
                else
                    if (i_13[1] == eax_10.b)
                        if (eax_10.b == 0x25 && i_13[1] == eax_10.b)
                            i_13 = &i_13[1]
                        
                        goto label_6b973f
                    
                    uint32_t i_4 = 0
                    char var_1d5_1 = 0
                    int32_t var_1b0_1 = 0
                    int32_t* var_1c4_1 = nullptr
                    uint32_t i_6 = 0
                    uint32_t i_3 = 0
                    char var_1a7_1 = 0
                    char var_1a8_1 = 0
                    char var_19a_1 = 0
                    char i = 0
                    char var_1a5_1 = 0
                    char var_199_1 = 0
                    char var_189_1 = 1
                    int32_t var_1e0_1 = 0
                    int32_t var_1bc
                    uint32_t var_1b8
                    uint32_t ecx_13
                    
                    do
                        i_13 = &i_13[1]
                        uint32_t ebx_3 = zx.d(*i_13)
                        uint32_t eax_13 = zx.d(ebx_3.b)
                        i_2 = sub_6c1971(eax_13)
                        ecx_13 = eax_13
                        
                        if (i_2 != 0)
                            var_1c4_1 += 1
                            i_6 = i_6 * 0xa + ebx_3 - 0x30
                        else if (ebx_3 s> 0x4e)
                            if (ebx_3 == 0x68)
                                var_189_1 -= 1
                                var_199_1 -= 1
                            else if (ebx_3 == 0x6c)
                                i_2 = &i_13[1]
                                
                                if (*i_2 == 0x6c)
                                label_6b8a38:
                                    var_1e0_1 += 1
                                    i_13 = i_2
                                    var_1bc = 0
                                    var_1b8 = 0
                                else
                                    var_189_1 += 1
                                    var_199_1 += 1
                            else if (ebx_3 == 0x77)
                                var_199_1 += 1
                            else
                                i += 1
                        else if (ebx_3 != 0x4e)
                            if (ebx_3 == 0x2a)
                                var_19a_1 += 1
                            else if (ebx_3 != 0x46)
                                if (ebx_3 == 0x49)
                                    ecx_13.b = i_13[1]
                                    
                                    if (ecx_13.b == 0x36)
                                        i_2 = &i_13[2]
                                    
                                    if (ecx_13.b == 0x36 && *i_2 == 0x34)
                                        goto label_6b8a38
                                    
                                    if (ecx_13.b == 0x33 && i_13[2] == 0x32)
                                        i_13 = &i_13[2]
                                    else if (ecx_13.b != 0x64 && ecx_13.b != 0x69
                                            && ecx_13.b != 0x6f && ecx_13.b != 0x78
                                            && ecx_13.b != 0x58)
                                        i += 1
                                else if (ebx_3 != 0x4c)
                                    i += 1
                                else
                                    var_189_1 += 1
                    while (i == 0)
                    
                    void* i_16 = i_13
                    int32_t* var_1f0
                    int32_t* ebx_4
                    
                    if (var_19a_1 != 0)
                        ebx_4 = nullptr
                    else
                        int32_t* eax_16 = var_1e8
                        ebx_4 = *eax_16
                        var_1f0 = eax_16
                        var_1e8 = &eax_16[1]
                    
                    int32_t* var_1c0_1 = ebx_4
                    char var_191_1 = 0
                    
                    if (var_199_1 == 0)
                        i_2.b = *i_13
                        
                        if (i_2.b != 0x53)
                            var_199_1 = 0xff
                        
                        if (i_2.b == 0x53 || i_2.b == 0x43)
                            var_199_1 = 1
                    
                    int32_t edi_2 = zx.d(*i_13) | 0x20
                    int32_t var_1ec_1 = edi_2
                    
                    if (edi_2 != 0x6e)
                        if (edi_2 == 0x63 || edi_2 == 0x7b)
                            i_9 += 1
                            i_2 = sub_6b8790(ecx_13, arg1)
                        else
                            i_2 = sub_6b87a6(&i_9, arg1)
                        
                        i_8 = i_2
                        
                        if (i_2 == 0xffffffff)
                            break
                        
                        ebx_4 = var_1c0_1
                        i_13 = i_16
                        edi_2 = var_1ec_1
                    
                    int32_t* ecx_26 = var_1c4_1
                    
                    if (ecx_26 != 0 && i_6 == 0)
                        cond:5_1 = i_8 == 0xffffffff
                        goto label_6b9855
                    
                    if (var_19a_1 == 0 && (edi_2 == 0x63 || edi_2 == 0x73 || edi_2 == 0x7b))
                        ebx_4 = *var_1f0
                        void* eax_18 = &var_1f0[1]
                        var_1f0 = eax_18
                        var_1e8 = eax_18 + 4
                        i_2 = *eax_18
                        var_1c0_1 = ebx_4
                        i_3 = i_2
                        
                        if (i_2 u< 1)
                            if (var_199_1 s<= 0)
                                *ebx_4 = 0
                            else
                                *ebx_4 = 0
                            
                            *__errno() = 0xc
                            break
                    
                    uint32_t i_11
                    
                    if (edi_2 s<= 0x6f)
                        if (edi_2 == 0x6f)
                            goto label_6b9446
                        
                        if (edi_2 == 0x63)
                            if (ecx_26 == 0)
                                i_6 += 1
                                var_1c4_1 = 1
                            
                            goto label_6b901e
                        
                        if (edi_2 == 0x64)
                            goto label_6b9446
                        
                        if (edi_2 s<= 0x64)
                        label_6b91af:
                            
                            if (zx.d(*i_13) != i_8)
                                if (i_8 != 0xffffffff)
                                    sub_6c1aa4(i_8, arg1)
                                
                                var_1f8 = 1
                                break
                                break
                            
                            var_1a6_1 -= 1
                            
                            if (var_19a_1 == 0)
                                var_1e8 = var_1f0
                        else
                            if (edi_2 s<= 0x67)
                                char* ebx_5 = nullptr
                                
                                if (i_8 == 0x2d)
                                    *var_1ac = 0x2d
                                    ebx_5 = 1
                                label_6b8c72:
                                    i_6 -= 1
                                    i_9 += 1
                                    i_8 = sub_6b8790(ecx_26, arg1)
                                else if (i_8 == 0x2b)
                                    goto label_6b8c72
                                
                                if (var_1c4_1 == 0)
                                    i_6 = 0xffffffff
                                
                                uint32_t eax_22 = zx.d(i_8.b)
                                
                                while (true)
                                    if (sub_6c1971(eax_22) != 0)
                                        uint32_t i_17 = i_6
                                        i_6 -= 1
                                        
                                        if (i_17 != 0)
                                            i_17.b = i_8.b
                                            var_1b0_1 += 1
                                            *(ebx_5 + var_1ac) = i_17.b
                                            ebx_5 = &ebx_5[1]
                                            int32_t eax_23
                                            int32_t ecx_16
                                            eax_23, ecx_16 = sub_6b8719(&var_1dc, &var_1ac, ebx_5, 
                                                &var_188, &var_1d4)
                                            
                                            if (eax_23 == 0)
                                                break
                                            
                                            i_9 += 1
                                            uint32_t i_18 = sub_6b8790(ecx_16, arg1)
                                            i_8 = i_18
                                            eax_22 = zx.d(i_18.b)
                                            continue
                                    
                                    i_2.b = ***(var_208 + 0xbc)
                                    char var_1a7_2 = i_2.b
                                    
                                    if (i_2.b == i_8.b)
                                        i_2 = i_6
                                        i_6 -= 1
                                        
                                        if (i_2 != 0)
                                            i_9 += 1
                                            i_8 = sub_6b8790(eax_22, arg1)
                                            uint32_t eax_27
                                            eax_27.b = var_1a7_2
                                            *(ebx_5 + var_1ac) = eax_27.b
                                            ebx_5 = &ebx_5[1]
                                            
                                            if (sub_6b8719(&var_1dc, &var_1ac, ebx_5, &var_188, 
                                                    &var_1d4) == 0)
                                                goto label_6b986a
                                            
                                            uint32_t eax_29 = zx.d(i_8.b)
                                            
                                            while (sub_6c1971(eax_29) != 0)
                                                i_2 = i_6
                                                i_6 -= 1
                                                
                                                if (i_2 == 0)
                                                    break
                                                
                                                var_1b0_1 += 1
                                                *(ebx_5 + var_1ac) = i_8.b
                                                ebx_5 = &ebx_5[1]
                                                int32_t eax_31
                                                int32_t ecx_20
                                                eax_31, ecx_20 = sub_6b8719(&var_1dc, &var_1ac, 
                                                    ebx_5, &var_188, &var_1d4)
                                                
                                                if (eax_31 == 0)
                                                    goto label_6b986a
                                                
                                                i_9 += 1
                                                uint32_t i_19 = sub_6b8790(ecx_20, arg1)
                                                i_8 = i_19
                                                eax_29 = zx.d(i_19.b)
                                    
                                    if (var_1b0_1 != 0 && (i_8 == 0x65 || i_8 == 0x45))
                                        uint32_t i_7 = i_6 - 1
                                        
                                        if (i_6 != 0)
                                            *(ebx_5 + var_1ac) = 0x65
                                            ebx_5 = &ebx_5[1]
                                            int32_t* edi_6 = &var_1ac
                                            int32_t* esi_6 = &var_1dc
                                            int32_t eax_33
                                            int32_t ecx_21
                                            eax_33, ecx_21 =
                                                sub_6b8719(esi_6, edi_6, ebx_5, &var_188, &var_1d4)
                                            
                                            if (eax_33 != 0)
                                                i_9 += 1
                                                uint32_t i_20
                                                int32_t ecx_22
                                                i_20, ecx_22 = sub_6b8790(ecx_21, arg1)
                                                i_8 = i_20
                                                
                                                if (i_20 != 0x2d)
                                                    if (i_8 == 0x2b)
                                                    label_6b8ee3:
                                                        uint32_t i_21 = i_7
                                                        i_7 -= 1
                                                        
                                                        if (i_21 != 0)
                                                            i_9 += 1
                                                            i_8 = sub_6b8790(ecx_22, arg1)
                                                        else
                                                            i_7 &= i_21
                                                        
                                                        goto label_6b8f12
                                                    
                                                label_6b8f12:
                                                    uint32_t eax_39 = zx.d(i_8.b)
                                                    
                                                    while (true)
                                                        if (sub_6c1971(eax_39) == 0)
                                                            goto label_6b8f91
                                                        
                                                        i_2 = i_7
                                                        i_7 -= 1
                                                        
                                                        if (i_2 == 0)
                                                            goto label_6b8f91
                                                        
                                                        var_1b0_1 += 1
                                                        *(ebx_5 + var_1ac) = i_8.b
                                                        ebx_5 = &ebx_5[1]
                                                        int32_t eax_38
                                                        int32_t ecx_24
                                                        eax_38, ecx_24 = sub_6b8719(&var_1dc, 
                                                            &var_1ac, ebx_5, &var_188, &var_1d4)
                                                        
                                                        if (eax_38 == 0)
                                                            break
                                                        
                                                        i_9 += 1
                                                        uint32_t i_22 = sub_6b8790(ecx_24, arg1)
                                                        i_8 = i_22
                                                        eax_39 = zx.d(i_22.b)
                                                else
                                                    *(ebx_5 + var_1ac) = 0x2d
                                                    ebx_5 = &ebx_5[1]
                                                    int32_t eax_35
                                                    eax_35, ecx_22 = sub_6b8719(esi_6, edi_6, 
                                                        ebx_5, &var_188, &var_1d4)
                                                    
                                                    if (eax_35 != 0)
                                                        goto label_6b8ee3
                                            
                                            goto label_6b986a
                                    
                                label_6b8f91:
                                    i_9 -= 1
                                    
                                    if (i_8 != 0xffffffff)
                                        sub_6c1aa4(i_8, arg1)
                                    
                                    if (var_1b0_1 == 0)
                                        goto label_6b986a
                                    
                                    if (var_19a_1 == 0)
                                        void* eax_40 = var_1ac
                                        result_1 += 1
                                        *(ebx_5 + eax_40) = 0
                                        DecodePointer(data_78d1cc)(sx.d(var_189_1) - 1, var_1c0_1, 
                                            eax_40, &var_208)
                                    
                                    goto label_6b9720
                                
                                break
                                break
                            
                            if (edi_2 == 0x69)
                                edi_2 = 0x64
                            label_6b8c37:
                                i_11 = i_8
                                
                                if (i_11 == 0x2d)
                                    var_1a8_1 = 1
                                label_6b92de:
                                    uint32_t i_25 = i_6
                                    i_6 -= 1
                                    
                                    if (i_25 != 1 || ecx_26 == 0)
                                        i_9 += 1
                                        i_2, ecx_26 = sub_6b8790(ecx_26, arg1)
                                        i_11 = i_2
                                        i_8 = i_11
                                    else
                                        var_191_1 = 1
                                else if (i_11 == 0x2b)
                                    goto label_6b92de
                                
                                if (i_11 != 0x30)
                                    goto label_6b9494
                                
                                i_9 += 1
                                int32_t ecx_37
                                i_2, ecx_37 = sub_6b8790(ecx_26, arg1)
                                i_11 = i_2
                                i_8 = i_11
                                int32_t var_218_23
                                
                                if (i_11.b == 0x78 || i_11.b == 0x58)
                                    i_9 += 1
                                    i_11 = sub_6b8790(ecx_37, arg1)
                                    i_8 = i_11
                                    
                                    if (var_1c4_1 != 0)
                                        i_6 -= 2
                                        
                                        if (i_6 s< 1)
                                            var_191_1 += 1
                                    
                                    var_218_23 = 0x78
                                else
                                    var_1b0_1 = 1
                                    
                                    if (edi_2 == 0x78)
                                        i_9 -= 1
                                        
                                        if (i_11 != 0xffffffff)
                                            sub_6c1aa4(i_11, arg1)
                                        
                                        i_11 = 0x30
                                        goto label_6b9487
                                    
                                    if (var_1c4_1 != 0)
                                        uint32_t i_28 = i_6
                                        i_6 -= 1
                                        
                                        if (i_28 == 1)
                                            var_191_1 += 1
                                    
                                    var_218_23 = 0x6f
                                
                                edi_2 = var_218_23
                                goto label_6b9494
                            
                            if (edi_2 != 0x6e)
                                goto label_6b91af
                            
                            i_2 = i_9
                            
                            if (var_19a_1 == 0)
                                goto label_6b96ee
                    else if (edi_2 == 0x70)
                        var_189_1 = 1
                    label_6b9446:
                        i_11 = i_8
                        
                        if (i_11 != 0x2d)
                            if (i_11 != 0x2b)
                                goto label_6b9494
                            
                            goto label_6b945f
                        
                        var_1a8_1 = 1
                    label_6b945f:
                        uint32_t i_24 = i_6
                        i_6 -= 1
                        
                        if (i_24 != 1 || ecx_26 == 0)
                            i_9 += 1
                            i_11 = sub_6b8790(ecx_26, arg1)
                        label_6b9487:
                            i_8 = i_11
                            goto label_6b9494
                        
                        var_191_1 = 1
                    label_6b9494:
                        
                        if (var_1e0_1 == 0)
                            if (var_191_1 == 0)
                                while (true)
                                    uint32_t eax_73
                                    uint32_t i_30
                                    
                                    if (edi_2 != 0x78 && edi_2 != 0x70)
                                        uint32_t i_33 = zx.d(i_11.b)
                                        i_30 = i_33
                                        
                                        if (sub_6c1971(i_33) == 0)
                                            goto label_6b9692
                                        
                                        if (edi_2 != 0x6f)
                                            eax_73 = i_4 * 0xa
                                            goto label_6b9653
                                        
                                        if (i_11 s>= 0x38)
                                            goto label_6b9692
                                        
                                        eax_73 = i_4 << 3
                                        goto label_6b9653
                                    
                                    if (sub_6c19f5(zx.d(i_11.b)) == 0)
                                    label_6b9692:
                                        i_9 -= 1
                                        
                                        if (i_11 != 0xffffffff)
                                            sub_6c1aa4(i_11, arg1)
                                        
                                        break
                                    
                                    uint32_t var_1c8_1 = i_4 << 4
                                    uint32_t i_15 = i_11
                                    i_11 = sub_6b8770(i_15.b)
                                    eax_73 = var_1c8_1
                                    i_30 = i_15
                                    i_8 = i_11
                                label_6b9653:
                                    var_1b0_1 += 1
                                    i_4 = eax_73 + i_11 - 0x30
                                    
                                    if (var_1c4_1 != 0)
                                        uint32_t i_26 = i_6
                                        i_6 -= 1
                                        
                                        if (i_26 == 1)
                                            break
                                    
                                    i_9 += 1
                                    i_11 = sub_6b8790(i_30, arg1)
                                    i_8 = i_11
                            
                            if (var_1a8_1 != 0)
                                i_4 = neg.d(i_4)
                        else
                            if (var_191_1 == 0)
                                while (true)
                                    int32_t var_1bc_1
                                    uint32_t i_32
                                    uint32_t i_29
                                    
                                    if (edi_2 != 0x78 && edi_2 != 0x70)
                                        if (sub_6c1971(zx.d(i_11.b)) == 0)
                                            goto label_6b9596
                                        
                                        if (edi_2 != 0x6f)
                                            int32_t eax_64
                                            uint32_t i_34
                                            eax_64, i_29, i_34 = __allmul(var_1bc, var_1b8, 0xa, 0)
                                            var_1bc_1 = eax_64
                                            i_32 = i_34
                                            goto label_6b9551
                                        
                                        if (i_11 s>= 0x38)
                                            goto label_6b9596
                                        
                                        i_29 = var_1b8 << 3 | var_1bc u>> 0xffffffe3
                                        var_1bc_1 = var_1bc << 3
                                        i_32 = i_29
                                        goto label_6b9551
                                    
                                    if (sub_6c19f5(zx.d(i_11.b)) == 0)
                                    label_6b9596:
                                        i_9 -= 1
                                        
                                        if (i_11 != 0xffffffff)
                                            sub_6c1aa4(i_11, arg1)
                                        
                                        break
                                    
                                    uint32_t i_14 = i_11
                                    var_1bc_1 = var_1bc << 4
                                    i_32 = var_1b8 << 4 | var_1bc u>> 0xffffffe4
                                    i_11 = sub_6b8770(i_14.b)
                                    i_29 = i_14
                                    i_8 = i_11
                                label_6b9551:
                                    var_1b0_1 += 1
                                    int32_t edx_16
                                    edx_16:i_2 = sx.q(i_11 - 0x30)
                                    var_1bc = var_1bc_1 + i_2
                                    var_1b8 = adc.d(i_32, edx_16, var_1bc_1 + i_2 u< var_1bc_1)
                                    
                                    if (var_1c4_1 != 0)
                                        uint32_t i_27 = i_6
                                        i_6 -= 1
                                        
                                        if (i_27 == 1)
                                            break
                                    
                                    i_9 += 1
                                    i_11 = sub_6b8790(i_29, arg1)
                                    i_8 = i_11
                            
                            if (var_1a8_1 != 0)
                                uint32_t ecx_49 = neg.d(adc.d(var_1b8, 0, var_1bc != 0))
                                var_1bc = neg.d(var_1bc)
                                var_1b8 = ecx_49
                        
                        if (edi_2 == 0x46)
                            var_1b0_1 = 0
                        
                        if (var_1b0_1 == 0)
                            break
                        
                        if (var_19a_1 == 0)
                            result_1 += 1
                            ebx_4 = var_1c0_1
                            i_2 = i_4
                        label_6b96ee:
                            
                            if (var_1e0_1 != 0)
                                *ebx_4 = var_1bc
                                ebx_4[1] = var_1b8
                            else if (var_189_1 == 0)
                                *ebx_4 = i_2.w
                            else
                                *ebx_4 = i_2
                    else
                        char var_28[0xb]
                        
                        if (edi_2 == 0x73)
                        label_6b901e:
                            
                            if (var_199_1 s> 0)
                                var_1a5_1 = 1
                        else
                            if (edi_2 == 0x75)
                                goto label_6b9446
                            
                            if (edi_2 == 0x78)
                                goto label_6b8c37
                            
                            if (edi_2 != 0x7b)
                                goto label_6b91af
                            
                            if (var_199_1 s> 0)
                                var_1a5_1 = 1
                            
                            void* i_31 = &i_13[1]
                            
                            if (*i_31 == 0x5e)
                                i_31 += 1
                                var_1a7_1 = 0xff
                            
                            char* eax_53
                            uint32_t i_10
                            eax_53, ecx_26, i_10 = sub_6bc670(&var_28, 0, 0x20)
                            
                            if (*i_31 != 0x5d)
                                i_10.b = var_1d5_1
                            else
                                i_10.b = 0x5d
                                i_31 += 1
                                char var_1d_1 = 0x20
                            
                            while (true)
                                eax_53.b = *i_31
                                
                                if (eax_53.b == 0x5d)
                                    break
                                
                                i_31 += 1
                                
                                if (eax_53.b == 0x2d && i_10.b != 0)
                                    ecx_26.b = *i_31
                                    
                                    if (ecx_26.b != 0x5d)
                                        i_31 += 1
                                        char var_189_2
                                        
                                        if (i_10.b u>= ecx_26.b)
                                            var_189_2 = i_10.b
                                            i_10.b = ecx_26.b
                                        else
                                            var_189_2 = ecx_26.b
                                        
                                        if (i_10.b u< var_189_2)
                                            eax_53.b = var_189_2
                                            eax_53.b -= i_10.b
                                            uint32_t edi_9 = zx.d(i_10.b)
                                            i_10 = zx.d(eax_53.b)
                                            uint32_t i_1
                                            
                                            do
                                                ebx_4.b = 1
                                                ebx_4.b = 1 << (edi_9.b & 7)
                                                *(&__saved_ebp + (edi_9 u>> 3) - 0x24) |= ebx_4.b
                                                edi_9 += 1
                                                i_1 = i_10
                                                i_10 -= 1
                                            while (i_1 != 1)
                                        
                                        uint32_t ecx_35 = zx.d(var_189_2)
                                        ecx_26 = ecx_35 & 7
                                        i_10.b = 1
                                        i_10.b = 1 << ecx_26.b
                                        *(&__saved_ebp + (ecx_35 u>> 3) - 0x24) |= i_10.b
                                        i_10.b = 0
                                        continue
                                
                                uint32_t ecx_36 = zx.d(eax_53.b)
                                i_10.b = eax_53.b
                                ecx_26 = ecx_36 & 7
                                ebx_4.b = 1
                                ebx_4.b = 1 << ecx_26.b
                                *(&__saved_ebp + (ecx_36 u>> 3) - 0x24) |= ebx_4.b
                            
                            if (eax_53.b == 0)
                                break
                            
                            ebx_4 = var_1c0_1
                            edi_2 = var_1ec_1
                            i_16 = i_31
                        
                        i_9 -= 1
                        int32_t* esi_8 = ebx_4
                        
                        if (i_8 != 0xffffffff)
                            sub_6c1aa4(i_8, arg1)
                            ecx_26 = arg1
                        
                        if (edi_2 != 0x63)
                            goto label_6b9057
                        
                        while (true)
                            if (var_1c4_1 != 0)
                                i_2 = i_6
                                i_6 -= 1
                                
                                if (i_2 == 0)
                                    break
                            
                            i_9 += 1
                            i_2, ecx_26 = sub_6b8790(ecx_26, arg1)
                            i_8 = i_2
                            
                            if (i_2 != 0xffffffff)
                                if (edi_2 == 0x63)
                                    goto label_6b90eb
                                
                                if (edi_2 != 0x73)
                                label_6b90b7:
                                    
                                    if (edi_2 == 0x7b)
                                        ecx_26 = sx.d(var_28[i_2 s>> 3]) ^ sx.d(var_1a7_1)
                                        
                                        if ((ecx_26 & 1 << (i_2.b & 7)) != 0)
                                            edi_2 = var_1ec_1
                                        label_6b90eb:
                                            
                                            if (var_19a_1 != 0)
                                                esi_8 += 1
                                                continue
                                            else
                                                if (i_3 == 0)
                                                    *__errno() = 0xc
                                                    
                                                    if (var_1a5_1 == 0)
                                                        *esi_8 = 0
                                                    else
                                                        *esi_8 = 0
                                                    
                                                    goto label_6b986a
                                                
                                                if (var_1a5_1 == 0)
                                                    *ebx_4 = i_2.b
                                                    ebx_4 += 1
                                                else
                                                    char var_1e4 = i_2.b
                                                    uint32_t eax_44 = zx.d(i_2.b)
                                                    
                                                    if (__ismbcupper(eax_44.b) != 0)
                                                        i_9 += 1
                                                        char var_1e3_1 = sub_6b8790(eax_44, arg1)
                                                    
                                                    void* eax_47 = var_208
                                                    var_1f4 = 0x3f
                                                    ecx_26 = sub_6c1b87(&var_1f4, &var_1e4, 
                                                        *(eax_47 + 0xac), &var_208)
                                                    *ebx_4 = var_1f4.w
                                                    ebx_4 += 2
                                                
                                                var_1c0_1 = ebx_4
                                            label_6b9057:
                                                i_3 -= 1
                                                continue
                                else if (i_2 s< 9 || i_2 s> 0xd)
                                    if (i_2 != 0x20)
                                        goto label_6b90eb
                                    
                                    goto label_6b90b7
                            
                            i_9 -= 1
                            
                            if (i_2 != 0xffffffff)
                                sub_6c1aa4(i_2, arg1)
                            
                            break
                        
                        if (esi_8 == ebx_4)
                            break
                        
                        if (var_19a_1 == 0)
                            result_1 += 1
                            
                            if (var_1ec_1 != 0x63)
                                if (var_1a5_1 == 0)
                                    *var_1c0_1 = 0
                                else
                                    *var_1c0_1 = 0
                label_6b9720:
                    var_1a6_1 += 1
                    i_12 = i_16 + 1
                    i_5 = i_12
                
                if (i_8 == 0xffffffff)
                    if (*i_12 != 0x25)
                        break
                    
                    i_2 = i_5
                    
                    if (*(i_2 + 1) != 0x6e)
                        break
                    
                    i_12 = i_2
            else
                i_9 -= 1
                uint32_t eax_11 = sub_6b87a6(&i_9, arg1)
                
                if (eax_11 != 0xffffffff)
                    sub_6c1aa4(eax_11, arg1)
                
                i_12 = i_5
                
                do
                    i_12 = &i_12[1]
                    i_2 = sub_6c1a76(zx.d(*i_12))
                while (i_2 != 0)
                
                i_5 = i_12
            
            i_2.b = *i_12
            
            if (i_2.b == 0)
                break
        
    label_6b986a:
        
        if (var_1d4 == 1)
            __free_base(var_1ac)
        
        if (i_8 != 0xffffffff)
            if (var_1f8 == 1)
                *__errno() = 0x16
                __invalid_parameter_noinfo()
            
            goto label_6b98d2
        
        result = result_1
        
        if (result == 0 && var_1a6_1 == result.b)
            result = 0xffffffff
        
        if (var_1fc != 0)
            *(var_200 + 0x70) &= 0xfffffffd
else
    int32_t eax_4 = __fileno(arg1)
    void* ecx_5
    
    if (eax_4 == 0xffffffff || eax_4 == 0xfffffffe)
        ecx_5 = &data_78c560
    else
        ecx_5 = ((eax_4 & 0x1f) << 6) + (&data_798100)[eax_4 s>> 5]
    
    void* eax_7
    
    if ((*(ecx_5 + 0x24) & 0x7f) == 0)
        if (eax_4 == 0xffffffff || eax_4 == 0xfffffffe)
            eax_7 = &data_78c560
        else
            eax_7 = ((eax_4 & 0x1f) << 6) + (&data_798100)[eax_4 s>> 5]
    
    if ((*(ecx_5 + 0x24) & 0x7f) == 0 && (*(eax_7 + 0x24) & 0x80) == 0)
        goto label_6b88d4
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

sub_6b4885(eax_1 ^ &__saved_ebp)
return result
