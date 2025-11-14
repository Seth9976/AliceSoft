// 函数: sub_5b84d0
// 地址: 0x5b84d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
int32_t var_4_1 = ebp
void* ecx = __chkstk(0x136c)
void var_8
int32_t eax_1 = data_78c474 ^ &var_8
void* arg_4
void* eax_2 = arg_4
void* ebx = arg1
void* edx = *(ebx + 0x510)
int32_t i_1 = *(ebx + 0x504)
int32_t i
int32_t i_2 = i
void* var_4 = nullptr
void** arg_1c = nullptr
bool cond:0 = i_1 != 0
void* arg_34
void* arg_13c
int32_t arg_244[0x42]
void arg_34c
int32_t arg_454[0x42]

if (i_1 s> 0)
    int32_t ecx_2
    int32_t edi
    edi, ecx_2 = __memfill_u32(&arg_13c, 0xffffff38, i_1)
    int32_t ecx_4
    int32_t edi_1
    edi_1, ecx_4 = __memfill_u32(&arg_34, 0xffffff38, i_1)
    __builtin_memset(&arg_244, 0, i_1 << 2)
    cond:0 = i_1 != 0
    
    if (i_1 s> 0)
        int32_t ecx_7
        int32_t edi_2
        edi_2, ecx_7 = __memfill_u32(&arg_34c, 1, i_1)
        __builtin_memset(&arg_454, 0xffffffff, i_1 << 2)
        cond:0 = i_1 != 0

int32_t var_20
float arg_c
void arg_55c

if (cond:0)
    i = 0
    
    if (i_1 - 1 s> 0)
        int32_t* esi_2 = &arg_55c
        
        do
            int32_t ecx_10 = *(ebx + (i << 2) + 4)
            float edx_2 = arg_c
            void* const var_18_2 = edx
            int32_t var_1c_2 = *(ebx + 0x508)
            var_20 = ecx_10
            int32_t eax_11
            int80_t st0_2
            st0_2, eax_11 = sub_5b7cf0(*(ebx + (i << 2)), esi_2, edx_2, ecx_10, ecx, edx_2, var_20)
            var_4 += eax_11
            i += 1
            esi_2 = &esi_2[0xe]
        while (i s< i_1 - 1)
        
        goto label_5b85e7
else
    float ecx_9 = arg_c
    void* const var_18_1 = edx
    int32_t eax_4 = *(ebx + 0x508)
    int32_t var_1c_1 = eax_4
    var_20 = eax_4
    void* eax_5
    int80_t st0_1
    st0_1, eax_5 = sub_5b7cf0(0, &arg_55c, ecx, ecx_9, ecx, ecx_9, var_20)
    var_4 = eax_5
label_5b85e7:
    
    if (var_4 != 0)
        int32_t i_3 = i_1
        int32_t* var_18_3 = &arg_c
        arg_4 = 0xffffff38
        arg_c = -nanf
        int32_t* var_1c_3 = &arg_4
        var_20 = i_3 - 1
        sub_5b7e60(&arg_55c, &arg_4, edx, &arg_55c, var_20, var_1c_3, var_18_3)
        void* eax_16 = arg_4
        arg_13c = eax_16
        arg_34 = eax_16
        int32_t eax_17 = arg_c
        int32_t arg_38 = eax_17
        arg1 = 2
        
        if (i_3 s> 2)
            var_4 = ebx + 0x210
            void* ecx_27
            
            do
                int32_t eax_18 = *var_4
                void** j_1 = arg_244[eax_18]
                int32_t j = *(&arg_34c + (eax_18 << 2))
                
                if (arg_454[j_1] == j)
                    ecx_27 = arg1
                else
                    int32_t edi_4 = *(ebx + (j_1 << 2) + 0x208)
                    int32_t ebx_2 = *(ebx + (j << 2) + 0x208)
                    (&i_2)[j_1 + 0x11a] = j
                    int32_t eax_20 = *(edx + (j_1 << 2) + 0x344)
                    int32_t arg_28 = *(edx + (j << 2) + 0x344)
                    void* ecx_16 = (&arg_13c)[j_1]
                    int32_t arg_20 = eax_20
                    void* arg_24
                    void* eax_21
                    
                    if (ecx_16 s>= 0)
                        void* edx_5 = (&arg_34)[j_1]
                        
                        if (edx_5 s>= 0)
                            eax_21 = (edx_5 + ecx_16) s>> 1
                            arg_24 = eax_21
                        else
                            eax_21 = ecx_16
                            arg_24 = ecx_16
                    else
                        eax_21 = (&arg_34)[j_1]
                        arg_24 = eax_21
                    
                    float edx_6 = (&arg_13c)[j]
                    
                    if (edx_6 s>= 0)
                        int32_t ecx_17 = (&arg_34)[j]
                        
                        if (ecx_17 s>= 0)
                            edx_6 = (edx_6 i+ ecx_17) s>> 1
                    else
                        edx_6 = (&arg_34)[j]
                    
                    arg_c = edx_6
                    
                    if (eax_21 == 0xffffffff || edx_6 == 0xffffffff)
                        _exit(1)
                        noreturn
                    
                    float eax_23 = arg_c
                    int32_t edx_9 = arg_24
                    int32_t eax_24 = arg_28
                    var_20 = ecx
                    
                    if (sub_5b8250(arg_20, edx_9, arg_c, eax_24, edx_9, var_20, eax_23, edx) == 0)
                        (&arg_13c)[arg1] = 0xffffff38
                        (&arg_34)[arg1] = 0xffffff38
                        ecx_27 = arg1
                    else
                        int32_t* var_18_5 = &arg_20
                        arg_4 = 0xffffff38
                        arg_20 = 0xffffff38
                        int32_t arg_2c = 0xffffff38
                        arg_28 = 0xffffff38
                        int32_t* var_1c_5 = &arg_4
                        int32_t edx_11 = edi_4 * 7
                        var_20 = *var_4 - edi_4
                        int32_t eax_29
                        int80_t st0_4
                        st0_4, eax_29 = sub_5b7e60(&(&var_20)[edx_11 * 2 + 0x15f], edx_11, edx, 
                            &(&var_20)[edx_11 * 2 + 0x15f], var_20, var_1c_5, var_18_5)
                        int32_t eax_31 = *var_4
                        int32_t* var_28_4 = &arg_28
                        int32_t* var_2c = &arg_2c
                        int32_t eax_32
                        int80_t st0_5
                        st0_5, eax_32 = sub_5b7e60(eax_31, &(&var_2c)[eax_31 * 0xe + 0x162], edx, 
                            &(&var_2c)[eax_31 * 0xe + 0x162], ebx_2 - eax_31, var_2c, var_28_4)
                        int32_t eax_33 = arg_2c
                        int32_t edx_14
                        
                        if (eax_29 == 0)
                            edx_14 = arg_20
                        else
                            arg_4 = arg_24
                            edx_14 = eax_33
                        
                        int32_t ebx_4
                        
                        if (eax_32 == 0)
                            ebx_4 = arg_28
                        else
                            ebx_4 = arg_c
                            eax_33 = edx_14
                        
                        if (eax_29 == 0 || eax_32 == 0)
                            void* ecx_28 = arg_4
                            (&arg_34)[j_1] = ecx_28
                            
                            if (j_1 == 0)
                                arg_13c = ecx_28
                            
                            ecx_27 = arg1
                            (&arg_13c)[ecx_27] = edx_14
                            (&arg_34)[ecx_27] = eax_33
                            (&arg_13c)[j] = ebx_4
                            
                            if (j == 1)
                                arg_38 = ebx_4
                            
                            if (edx_14 s>= 0 || eax_33 s>= 0)
                                int32_t eax_34 = *var_4
                                int32_t eax_35 = eax_34 - 1
                                
                                if (eax_34 - 1 s>= 0)
                                    while (*(&arg_34c + (eax_35 << 2)) == j)
                                        int32_t temp3_1 = eax_35
                                        eax_35 -= 1
                                        int32_t arg_350[0x41]
                                        arg_350[eax_35] = ecx_27
                                        
                                        if (temp3_1 - 1 s< 0)
                                            break
                                
                                int32_t eax_37 = *var_4 + 1
                                
                                if (eax_37 s< i_1)
                                    while (arg_244[eax_37] == j_1)
                                        arg_244[eax_37] = ecx_27
                                        eax_37 += 1
                                        
                                        if (eax_37 s>= i_1)
                                            break
                        else
                            ecx_27 = arg1
                            (&arg_13c)[ecx_27] = 0xffffff38
                            (&arg_34)[ecx_27] = 0xffffff38
                
                var_4 += 4
                arg1 = ecx_27 + 1
            while (ecx_27 + 1 s< i_1)
            i_3 = i_1
        
        void* ebx_5 = *(eax_2 + 0x48)
        void* edi_8 = ((i_3 << 2) + 7) & 0xfffffff8
        
        if (ebx_5 + edi_8 s> *(eax_2 + 0x4c))
            if (*(eax_2 + 0x44) != 0)
                int32_t* eax_40 = sub_6b5c43(8)
                int32_t ecx_30 = *(eax_2 + 0x54)
                *(eax_2 + 0x50) += ebx_5
                eax_40[1] = ecx_30
                *eax_40 = *(eax_2 + 0x44)
                *(eax_2 + 0x54) = eax_40
            
            *(eax_2 + 0x4c) = edi_8
            *(eax_2 + 0x44) = sub_6b5c43(edi_8)
            *(eax_2 + 0x48) = 0
        
        void* eax_42 = *(eax_2 + 0x48)
        void** ebx_7 = *(eax_2 + 0x44) + eax_42
        *(eax_2 + 0x48) = eax_42 + edi_8
        void* eax_44 = arg_13c
        arg_1c = ebx_7
        
        if (eax_44 s>= 0)
            void* ecx_32 = arg_34
            
            if (ecx_32 s>= 0)
                eax_44 = (eax_44 + ecx_32) s>> 1
        else
            eax_44 = arg_34
        
        *ebx_7 = eax_44
        int32_t eax_46 = eax_17
        
        if (eax_46 s< 0)
            eax_46 = arg_38
        else if (arg_38 s>= 0)
            eax_46 = (eax_46 + arg_38) s>> 1
        
        ebx_7[1] = eax_46
        arg1 = 2
        
        if (i_1 s> 2)
            void* arg_14 = edx + 0x34c
            arg_4 = ebx + 0x30c
            void* ecx_42
            
            do
                void* ecx_36 = arg_4
                int32_t eax_50 = *(ecx_36 + 0xfc)
                int32_t edi_9 = *ecx_36
                void* ecx_37 = *(edx + (eax_50 << 2) + 0x344)
                int32_t esi_5 = ebx_7[eax_50] & 0x7fff
                int32_t ecx_40 = (ebx_7[edi_9] & 0x7fff) - esi_5
                int32_t eax_52
                int32_t edx_19
                edx_19:eax_52 = sx.q(ecx_40)
                int32_t temp0_1 = divs.dp.d(
                    sx.q(((eax_52 ^ edx_19) - edx_19) * (*arg_14 - ecx_37)), 
                    *(edx + (edi_9 << 2) + 0x344) - ecx_37)
                int32_t esi_6
                
                if (ecx_40 s>= 0)
                    esi_6 = esi_5 + temp0_1
                else
                    esi_6 = esi_5 - temp0_1
                
                int32_t eax_58 = (&arg_13c)[arg1]
                
                if (eax_58 s>= 0)
                    int32_t edx_26 = (&arg_34)[arg1]
                    
                    if (edx_26 s>= 0)
                        eax_58 = (eax_58 + edx_26) s>> 1
                else
                    eax_58 = (&arg_34)[arg1]
                
                if (eax_58 s< 0 || esi_6 == eax_58)
                    ebx_7[arg1] = esi_6 | 0x8000
                else
                    ebx_7[arg1] = eax_58
                
                arg_4 += 4
                arg_14 += 4
                ecx_42 = arg1 + 1
                arg1 = ecx_42
            while (ecx_42 s< i_1)
sub_6b4885(eax_1 ^ &var_8)
