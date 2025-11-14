// 函数: sub_6ba6f4
// 地址: 0x6ba6f4
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
char* ebx = arg2
int32_t edi
int32_t var_290 = edi
void* edi_1 = arg4
void* var_220 = edi_1
int32_t var_25c = 0
uint32_t var_214 = 0
int32_t var_23c = 0
uint32_t i_5 = 0
int32_t* var_238 = nullptr
int32_t var_260 = 0
int32_t var_240 = 0
void var_258
sub_6b5cd7(&var_258, arg3)
void* eax_2
uint32_t edx
eax_2, edx = __errno()
uint32_t result
void* var_250
char var_24c

if (arg1 != 0)
    if ((arg1[3].b & 0x40) == 0)
        int32_t eax_5 = __fileno(arg1)
        void* ecx_5
        
        if (eax_5 == 0xffffffff || eax_5 == 0xfffffffe)
            ecx_5 = &data_78c560
        else
            ecx_5 = ((eax_5 & 0x1f) << 6) + (&data_798100)[eax_5 s>> 5]
        
        if ((*(ecx_5 + 0x24) & 0x7f) != 0)
            goto label_6ba76f
        
        void* eax_8
        
        if (eax_5 == 0xffffffff || eax_5 == 0xfffffffe)
            eax_8 = &data_78c560
        else
            eax_8 = ((eax_5 & 0x1f) << 6) + (&data_798100)[eax_5 s>> 5]
        
        if ((*(eax_8 + 0x24) & 0x80) != 0 || ebx == 0)
            goto label_6ba76f
    else if (ebx == 0)
        goto label_6ba76f
    
    edx.b = *ebx
    uint32_t result_1 = 0
    uint32_t var_22c = 0
    uint32_t var_248_1 = 0
    char* var_264_1 = nullptr
    char var_215_1 = edx.b
    
    if (edx.b != 0)
        while (true)
            void* var_244_1 = &ebx[1]
            
            if (result_1 s>= 0)
                int32_t eax_12
                
                if (edx.b - 0x20 u> 0x58)
                    eax_12 = 0
                else
                    eax_12 = zx.d(*(sx.d(edx.b) + 0x72b1a8)) & 0xf
                
                uint32_t eax_15 = zx.d(*(eax_12 * 9 + var_248_1 + 0x72b1c8)) u>> 4
                var_248_1 = eax_15
                int32_t var_278
                
                switch (eax_15)
                    case 0
                        goto label_6baa90
                    case 1
                        i_5 = 0xffffffff
                        var_278 = 0
                        var_260 = 0
                        var_23c = 0
                        var_238 = nullptr
                        var_214 = 0
                        var_240 = 0
                    case 2
                        int32_t eax_16 = sx.d(edx.b)
                        
                        if (eax_16 == 0x20)
                            var_214 |= 2
                        else if (eax_16 == 0x23)
                            var_214 |= 0x80
                        else if (eax_16 == 0x2b)
                            var_214 |= 1
                        else if (eax_16 == 0x2d)
                            var_214 |= 4
                        else if (eax_16 == 0x30)
                            var_214 |= 8
                    case 3
                        if (edx.b != 0x2a)
                            var_23c = var_23c * 0xa + sx.d(edx.b) - 0x30
                        else
                            var_220 = edi_1 + 4
                            int32_t edi_3 = *edi_1
                            var_23c = edi_3
                            
                            if (edi_3 s< 0)
                                var_214 |= 4
                                var_23c = neg.d(var_23c)
                    case 4
                        i_5 = 0
                    case 5
                        if (edx.b != 0x2a)
                            i_5 = i_5 * 0xa + sx.d(edx.b) - 0x30
                        else
                            var_220 = edi_1 + 4
                            uint32_t i_8 = *edi_1
                            i_5 = i_8
                            
                            if (i_8 s< 0)
                                i_5 = 0xffffffff
                    case 6
                        if (edx.b == 0x49)
                            eax_15.b = ebx[1]
                            
                            if (eax_15.b == 0x36 && ebx[2] == 0x34)
                                var_214 |= 0x8000
                                var_244_1 = &ebx[3]
                            else if (eax_15.b == 0x33 && ebx[2] == 0x32)
                                var_214 &= 0xffff7fff
                                var_244_1 = &ebx[3]
                            else if (eax_15.b != 0x64 && eax_15.b != 0x69 && eax_15.b != 0x6f
                                    && eax_15.b != 0x75 && eax_15.b != 0x78 && eax_15.b != 0x58)
                                var_248_1 = 0
                            label_6baa90:
                                var_240 = 0
                                uint32_t eax_23
                                int32_t edx_1
                                eax_23, edx_1 = sub_6c0d19(edx.b, &var_258)
                                bool cond:0_1 = eax_23 == 0
                                eax_23.b = var_215_1
                                
                                if (not(cond:0_1))
                                    eax_23, edx_1 = sub_6ba65f(eax_23, edx_1, arg1, &result_1)
                                    eax_23.b = ebx[1]
                                    var_244_1 = &ebx[2]
                                    
                                    if (eax_23.b == 0)
                                        goto label_6ba76f
                                
                                eax_15, edx = sub_6ba65f(eax_23, edx_1, arg1, &result_1)
                        else if (edx.b == 0x68)
                            var_214 |= 0x20
                        else if (edx.b == 0x6c)
                            if (ebx[1] != 0x6c)
                                var_214 |= 0x10
                            else
                                var_214 |= 0x1000
                                var_244_1 = &ebx[2]
                        else if (edx.b == 0x77)
                            var_214 |= 0x800
                    case 7
                        eax_15 = sx.d(edx.b)
                        char* var_294_4
                        char var_230
                        char* var_224
                        char var_210
                        
                        if (eax_15 s> 0x64)
                            if (eax_15 s> 0x70)
                                if (eax_15 != 0x73)
                                    if (eax_15 == 0x75)
                                        goto label_6bad59
                                    
                                    if (eax_15 != 0x78)
                                        goto label_6bb0c5
                                    
                                    edi_1 = var_220
                                    var_25c = 0x27
                                    goto label_6baf1e
                                
                            label_6bab6a:
                                uint32_t i = i_5
                                
                                if (i == 0xffffffff)
                                    i = 0x7fffffff
                                
                                var_220 = edi_1 + 4
                                char* edi_6 = *edi_1
                                var_224 = edi_6
                                
                                if ((var_214 & 0x810) == 0)
                                    if (edi_6 == 0)
                                        var_224 = data_78c4a0
                                    
                                    char* eax_63 = var_224
                                    
                                    while (i != 0)
                                        i -= 1
                                        
                                        if (*eax_63 == 0)
                                            break
                                        
                                        eax_63 = &eax_63[1]
                                    
                                    eax_15 = eax_63 - var_224
                                else
                                    if (edi_6 == 0)
                                        var_224 = data_78c4a4
                                    
                                    char* eax_60 = var_224
                                    var_240 = 1
                                    
                                    while (i != 0)
                                        i -= 1
                                        
                                        if (*eax_60 == 0)
                                            break
                                        
                                        eax_60 = &eax_60[2]
                                    
                                    eax_15 = (eax_60 - var_224) s>> 1
                                
                                goto label_6bb0bf
                            
                            if (eax_15 == 0x70)
                                i_5 = 8
                            label_6baee5:
                                var_25c = 7
                            label_6baf1e:
                                var_22c = 0x10
                                
                                if ((var_214.b & 0x80) != 0)
                                    eax_15.b = var_25c.b
                                    eax_15.b += 0x51
                                    var_230 = 0x30
                                    char var_22f_1 = eax_15.b
                                    var_238 = 2
                                
                                goto label_6baf58
                            
                            if (eax_15 s< 0x65)
                                goto label_6bb0c5
                            
                            if (eax_15 s<= 0x67)
                                edi_1 = var_220
                            label_6bad88:
                                var_214 |= 0x40
                                char* ebx_6 = &var_210
                                var_224 = &var_210
                                uint32_t var_26c_1 = 0x200
                                
                                if (i_5 s< 0)
                                    i_5 = 6
                                else if (i_5 != 0)
                                    if (i_5 s> 0x200)
                                        i_5 = 0x200
                                    
                                    if (i_5 s> 0xa3)
                                        char* eax_42
                                        eax_42, edx = sub_6b8223(i_5 + 0x15d)
                                        edx.b = var_215_1
                                        var_264_1 = eax_42
                                        
                                        if (eax_42 == 0)
                                            i_5 = 0xa3
                                        else
                                            var_224 = eax_42
                                            var_26c_1 = i_5 + 0x15d
                                            ebx_6 = eax_42
                                else if (edx.b == 0x67)
                                    i_5 = 1
                                
                                int32_t var_284 = *edi_1
                                int32_t var_280_1 = *(edi_1 + 4)
                                var_220 = edi_1 + 8
                                DecodePointer(data_78d1c8)(&var_284, ebx_6, var_26c_1, sx.d(edx.b), 
                                    i_5, var_278, &var_258)
                                int32_t edi_12 = var_214 & 0x80
                                
                                if (edi_12 != 0 && i_5 == 0)
                                    DecodePointer(data_78d1d4)(ebx_6, &var_258)
                                
                                if (var_215_1 == 0x67 && edi_12 == 0)
                                    DecodePointer(data_78d1d0)(ebx_6, &var_258)
                                
                                if (*ebx_6 == 0x2d)
                                    var_214 |= 0x100
                                    ebx_6 = &ebx_6[1]
                                    var_224 = ebx_6
                                
                                var_294_4 = ebx_6
                                goto label_6baca3
                            
                            if (eax_15 == 0x69)
                                edi_1 = var_220
                            label_6bad52:
                                var_214 |= 0x40
                            label_6bad59:
                                var_22c = 0xa
                            label_6baf58:
                                int32_t eax_41
                                void* edi_9
                                
                                if ((var_214 & 0x8000) == 0 && (var_214 & 0x1000) == 0)
                                    edi_9 = edi_1 + 4
                                    
                                    if ((var_214.b & 0x20) == 0)
                                        eax_41 = *(edi_9 - 4)
                                        
                                        if ((var_214.b & 0x40) == 0)
                                            edx = 0
                                        else
                                            edx:eax_41 = sx.q(eax_41)
                                        
                                        var_220 = edi_9
                                    else
                                        var_220 = edi_9
                                        int32_t eax_52
                                        
                                        if ((var_214.b & 0x40) == 0)
                                            eax_52 = zx.d(*(edi_9 - 4))
                                        else
                                            eax_52 = sx.d(*(edi_9 - 4))
                                        
                                        edx:eax_41 = sx.q(eax_52)
                                else
                                    edi_9 = edi_1 + 8
                                    eax_41 = *(edi_9 - 8)
                                    edx = *(edi_9 - 4)
                                    var_220 = edi_9
                                
                                if ((var_214.b & 0x40) != 0 && edx s<= 0
                                        && (edx s< 0 || eax_41 u< 0))
                                    int32_t temp18_1 = eax_41
                                    eax_41 = neg.d(eax_41)
                                    edx = neg.d(adc.d(edx, 0, temp18_1 != 0))
                                    var_214 |= 0x100
                                
                                uint32_t edi_13 = edx
                                int32_t ebx_7 = eax_41
                                
                                if ((var_214 & 0x9000) == 0)
                                    edi_13 = 0
                                
                                if (i_5 s>= 0)
                                    var_214 &= 0xfffffff7
                                    
                                    if (i_5 s> 0x200)
                                        i_5 = 0x200
                                else
                                    i_5 = 1
                                
                                int32_t eax_54 = ebx_7 | edi_13
                                
                                if (eax_54 == 0)
                                    var_238 &= eax_54
                                
                                void var_11
                                void* esi_8 = &var_11
                                
                                while (true)
                                    uint32_t i_7 = i_5
                                    i_5 -= 1
                                    
                                    if (i_7 s<= 0 && (ebx_7 | edi_13) == 0)
                                        break
                                    
                                    int32_t eax_58
                                    uint32_t edx_3
                                    edx_3:eax_58 = sx.q(var_22c)
                                    uint32_t eax_59
                                    int32_t ecx_20
                                    eax_59, ecx_20, edx = __aulldvrm(ebx_7, edi_13, eax_58, edx_3)
                                    int32_t ecx_21 = ecx_20 + 0x30
                                    int32_t var_26c_2 = ebx_7
                                    ebx_7 = eax_59
                                    edi_13 = edx
                                    
                                    if (ecx_21 s> 0x39)
                                        ecx_21 += var_25c
                                    
                                    *esi_8 = ecx_21.b
                                    esi_8 -= 1
                                
                                eax_15 = &var_11 - esi_8
                                var_22c = eax_15
                                var_224 = esi_8 + 1
                                
                                if ((var_214 & 0x200) == 0 || (eax_15 != 0 && *(esi_8 + 1) == 0x30))
                                    goto label_6bb0c5
                                
                                var_224 -= 1
                                *var_224 = 0x30
                                eax_15 += 1
                                goto label_6bb0bf
                            
                            if (eax_15 != 0x6e)
                                if (eax_15 != 0x6f)
                                    goto label_6bb0c5
                                
                                edi_1 = var_220
                                var_22c = 8
                                
                                if ((var_214.b & 0x80) != 0)
                                    var_214 |= 0x200
                                
                                goto label_6baf58
                            
                            var_220 += 4
                            int16_t* esi_5 = *(var_220 - 4)
                            
                            if (sub_6c1d56() == 0)
                                goto label_6ba76f
                            
                            if ((var_214.b & 0x20) == 0)
                                *esi_5 = result_1
                            else
                                eax_15.w = result_1.w
                                *esi_5 = eax_15.w
                            
                            var_260 = 1
                        else
                            if (eax_15 == 0x64)
                                goto label_6bad52
                            
                            if (eax_15 s<= 0x53)
                                if (eax_15 == 0x53)
                                    if ((var_214 & 0x830) == 0)
                                        var_214 |= 0x800
                                    
                                    goto label_6bab6a
                                
                                if (eax_15 == 0x41)
                                label_6bab1d:
                                    edx.b += 0x20
                                    var_278 = 1
                                    var_215_1 = edx.b
                                    goto label_6bad88
                                
                                int32_t eax_25 = eax_15 - 0x42
                                
                                if (eax_25 == 1)
                                    if ((var_214 & 0x830) == 0)
                                        var_214 |= 0x800
                                    
                                    goto label_6babf0
                                
                                if (eax_25 == 3 || eax_25 == 5)
                                    goto label_6bab1d
                                
                                goto label_6bb0c5
                            
                            if (eax_15 == 0x58)
                                goto label_6baee5
                            
                            int32_t eax_30 = eax_15 - 0x59
                            
                            if (eax_30 != 1)
                                if (eax_30 == 8)
                                    goto label_6bad88
                                
                                if (eax_30 != 0xa)
                                    goto label_6bb0c5
                                
                                edi_1 = var_220
                            label_6babf0:
                                var_220 = edi_1 + 4
                                
                                if ((var_214 & 0x810) == 0)
                                    eax_15.b = *edi_1
                                    var_210 = eax_15.b
                                    var_22c = 1
                                else
                                    int32_t eax_35
                                    eax_35, edx =
                                        __mbccpy_s(&var_22c, &var_210, 0x200, zx.d(*edi_1))
                                    
                                    if (eax_35 != 0)
                                        var_260 = 1
                                
                                var_224 = &var_210
                                goto label_6bb0c5
                            
                            int16_t* eax_36 = *edi_1
                            var_220 = edi_1 + 4
                            char* ecx_14
                            
                            if (eax_36 != 0)
                                ecx_14 = *(eax_36 + 4)
                            
                            if (eax_36 != 0 && ecx_14 != 0)
                                eax_15 = sx.d(*eax_36)
                                var_224 = ecx_14
                                
                                if ((var_214 & 0x800) == 0)
                                    var_240 = 0
                                else
                                    int32_t eax_37
                                    edx:eax_37 = sx.q(eax_15)
                                    eax_15 = (eax_37 - edx) s>> 1
                                    var_240 = 1
                                
                                goto label_6bb0bf
                            
                            char* eax_39 = data_78c4a0
                            var_224 = eax_39
                            var_294_4 = eax_39
                        label_6baca3:
                            eax_15, edx = _strlen(var_294_4)
                        label_6bb0bf:
                            var_22c = eax_15
                        label_6bb0c5:
                            
                            if (var_260 == 0)
                                uint32_t ecx_24 = var_214
                                
                                if ((ecx_24.b & 0x40) != 0)
                                    if ((ecx_24 & 0x100) != 0)
                                        var_230 = 0x2d
                                        var_238 = 1
                                    else if ((ecx_24.b & 1) != 0)
                                        var_230 = 0x2b
                                        var_238 = 1
                                    else if ((ecx_24.b & 2) != 0)
                                        var_230 = 0x20
                                        var_238 = 1
                                
                                void* i_6 = var_23c - var_22c - var_238
                                void* i_4 = i_6
                                
                                if ((ecx_24.b & 0xc) == 0)
                                    void* i_1 = i_6
                                    
                                    while (i_1 s> 0)
                                        ecx_24 = arg1
                                        i_6.b = 0x20
                                        i_1 -= 1
                                        i_6, edx = sub_6ba65f(i_6, edx, ecx_24, &result_1)
                                        
                                        if (result_1 == 0xffffffff)
                                            break
                                
                                char* var_298_6 = &var_230
                                uint32_t eax_67
                                uint32_t edx_4
                                eax_67, edx_4 = sub_6ba692(&result_1, eax_2, edx, ecx_24)
                                int32_t* ecx_25 = var_238
                                
                                if ((var_214.b & 8) != 0 && (var_214.b & 4) == 0)
                                    void* i_2 = i_4
                                    
                                    while (i_2 s> 0)
                                        ecx_25 = arg1
                                        eax_67.b = 0x30
                                        i_2 -= 1
                                        eax_67, edx_4 = sub_6ba65f(eax_67, edx_4, ecx_25, &result_1)
                                        
                                        if (result_1 == 0xffffffff)
                                            break
                                
                                uint32_t eax_68 = var_22c
                                
                                if (var_240 == 0 || eax_68 s<= 0)
                                    uint32_t var_294_13 = eax_68
                                    char* var_298_8 = var_224
                                    eax_15, edx = sub_6ba692(&result_1, eax_2, edx_4, ecx_25)
                                else
                                    char* esi_12 = var_224
                                    uint32_t var_274_1 = eax_68
                                    
                                    while (true)
                                        uint32_t eax_69 = zx.d(*esi_12)
                                        var_274_1 -= 1
                                        esi_12 = &esi_12[2]
                                        int32_t var_27c
                                        void var_10
                                        uint32_t ecx_26
                                        eax_15, ecx_26, edx =
                                            __mbccpy_s(&var_27c, &var_10, 6, eax_69)
                                        
                                        if (eax_15 != 0 || var_27c == eax_15)
                                            result_1 = 0xffffffff
                                            break
                                        
                                        int32_t var_294_12 = var_27c
                                        void* var_298_7 = &var_10
                                        eax_15, edx = sub_6ba692(&result_1, eax_2, edx, ecx_26)
                                        
                                        if (var_274_1 == 0)
                                            break
                                        
                                        continue
                                
                                if (result_1 s>= 0 && (var_214.b & 4) != 0)
                                    void* i_3 = i_4
                                    
                                    while (i_3 s> 0)
                                        eax_15.b = 0x20
                                        i_3 -= 1
                                        eax_15, edx = sub_6ba65f(eax_15, edx, arg1, &result_1)
                                        
                                        if (result_1 == 0xffffffff)
                                            break
                        
                        if (var_264_1 != 0)
                            eax_15, edx = __free_base(var_264_1)
                            var_264_1 = nullptr
                    case 8
                        goto label_6ba76f
                
                ebx = var_244_1
                eax_15.b = *ebx
                var_215_1 = eax_15.b
                
                if (eax_15.b != 0)
                    edi_1 = var_220
                    edx.b = eax_15.b
                    continue
            
            if (var_248_1 == 0)
                break
            
            if (var_248_1 != 7)
                goto label_6ba76f
            
            break
    
    if (var_24c != 0)
        *(var_250 + 0x70) &= 0xfffffffd
    
    result = result_1
else
label_6ba76f:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_24c != 0)
        *(var_250 + 0x70) &= 0xfffffffd
    
    result = 0xffffffff
sub_6b4885(eax_1 ^ &__saved_ebp)
return result
