// 函数: sub_42ac30
// 地址: 0x42ac30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_94c
int32_t eax_2 = data_78c474 ^ &var_94c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_938 = nullptr

if (*(arg2 + 0x20) != 0 && arg1 != 0)
    result = (*(*arg1 + 0x14))(eax_4)
    
    if (arg3 s>= result)
        float eax_6 = *arg4
        result = eax_6 i+ 1
        *arg4 = result
        
        if (*(arg2 + 0x40) != arg1)
            *(arg2 + 0x40) = arg1
        
        if (*(arg2 + 0x38) != arg3)
            void* eax_7 = *(arg2 + 0x1c)
            *(arg2 + 0x38) = arg3
            int32_t var_948
            float result_1
            long double x87_r7_1
            
            if (eax_7 != 0)
                int32_t ecx = *(eax_7 + 0xc)
                result_1 = fconvert.s(fconvert.t(*(eax_7 + 0x18)))
                var_948 = ecx
                x87_r7_1 = float.t(var_948) / fconvert.t(result_1)
            else
                x87_r7_1 = float.t(0)
            
            float var_910_1 = fconvert.s(x87_r7_1)
            float ebx_1 = *(*(arg2 + 0x20) + 0x34)
            int32_t edx_3 = *(*arg1 + 0x18)
            var_94c = ebx_1
            int32_t eax_10 = edx_3() + 1 i- ebx_1
            var_948 = eax_10
            result_1 = 0f
            int32_t* eax_11 = &var_948
            
            if (eax_10 s<= 0)
                eax_11 = &result_1
            
            result = *eax_11
            result_1 = result
            
            if (result s> 0)
                int32_t eax_13 = (*(*arg1 + 0x14))()
                int32_t eax_18 = (*(*arg1 + 0x18))() + eax_13 - 1 i- ebx_1 + 1
                void* eax_19 = *(arg2 + 0x20)
                var_948 = *(eax_19 + 0x30)
                float var_8b0_1 = fconvert.s(float.t(var_948) / float.t(result_1))
                char eax_20 = sub_429120(*(arg2 + 0x1c), eax_19 + 8)
                ebx_1.b = sub_429360(*(arg2 + 0x1c), eax_19 + 8)
                int32_t eax_22 = *(*(arg2 + 0x20) + 0xa4)
                char var_921_1 = ebx_1.b
                result = sub_429780(*(arg2 + 0x1c), eax_19 + 8)
                
                if (ebx_1.b == 0)
                    void var_874
                    void var_858
                    char* eax_23
                    int32_t* ebx_2
                    
                    if (result == 0)
                        eax_23 = &var_858
                        sub_402be0(eax_23, 0x72dab7)
                        int32_t var_4_1 = 1
                        ebx_2 = 2
                    else
                    label_42add1:
                        eax_23 = sub_4010c0(&var_874, &result[2])
                        int32_t var_4 = 0
                        ebx_2 = 1
                    
                    var_938 = ebx_2
                    int32_t var_890
                    sub_4010c0(&var_890, eax_23)
                    int32_t var_4_2 = 2
                    
                    if ((ebx_2.b & 2) != 0)
                        ebx_2 &= 0xfffffffd
                        sub_401110(&var_858)
                    
                    var_4_2.b = 4
                    
                    if ((ebx_2.b & 1) != 0)
                        sub_401110(&var_874)
                    
                    char* var_8f0_1
                    
                    if (result == 0)
                        var_8f0_1 = nullptr
                    else
                        var_8f0_1 = result[9]
                    
                    int32_t var_8d8_1
                    
                    if (result == 0)
                        var_8d8_1 = 3
                    else
                        var_8d8_1 = result[0xa]
                    
                    char* eax_24
                    eax_24.b = *(*(arg2 + 0x20) + 0x64)
                    void* var_8d4_1
                    
                    if (eax_24.b == 0)
                        var_8d4_1 = arg2 + 0x44
                        
                        if (var_94c s<= (*(arg2 + 0x48) - *(arg2 + 0x44)) s>> 2)
                            int32_t* esi_4 = **(arg2 + 0x44)
                            
                            for (int32_t* i = *esi_4; i != esi_4[1]; i = &i[1])
                                (*(**i + 4))()
                            
                            sub_42abd0(esi_4)
                            int128_t* ecx_21 = *(arg2 + 0x44)
                            sub_6b49d0(ecx_21, ecx_21 + 4, 
                                ((*(arg2 + 0x48) - (ecx_21 + 4)) s>> 2) * 4)
                            *(arg2 + 0x48) -= 4
                        
                        int32_t* eax_40 = operator new(0x10)
                        
                        if (eax_40 == 0)
                            eax_40 = nullptr
                        else
                            *eax_40 = 0
                            eax_40[1] = 0
                            eax_40[2] = 0
                        
                        var_938 = eax_40
                        sub_61b5a0(&var_938, arg2 + 0x44)
                        int32_t* i_1 = arg1
                        int32_t* edi_6 = var_938
                        
                        do
                            void* ebp_3 = *i_1
                            void* eax_44 = (*(ebp_3 + 8))((*(ebp_3 + 0x10))())
                            
                            if (eax_44 == 0)
                                goto label_42af15
                            
                            struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable**
                                 eax_45 = operator new(0x7c)
                            var_948 = eax_45
                            var_4_2.b = 5
                            int32_t eax_46
                            
                            if (eax_45 == 0)
                                eax_46 = 0
                            else
                                long double x87_r7_6 = float.t(0)
                                long double x87_r7_7 = float.t(1)
                                eax_46 = sub_430880(eax_45, *(eax_44 + 0x24), *(eax_44 + 0x28), 
                                    fconvert.s(x87_r7_7), fconvert.s(x87_r7_7), 
                                    fconvert.s(x87_r7_6), fconvert.s(x87_r7_6), 
                                    fconvert.s(x87_r7_6), 0, 0, 0, 0xff)
                            
                            var_4_2.b = 4
                            var_948 = eax_46
                            sub_61b5a0(&var_948, edi_6)
                            i_1 = (*(*i_1 + 0xc))()
                        while (i_1 != 0)
                    else
                        sub_42ab10(arg2)
                        int32_t* eax_25 = operator new(0x10)
                        
                        if (eax_25 == 0)
                            eax_25 = nullptr
                        else
                            *eax_25 = 0
                            eax_25[1] = 0
                            eax_25[2] = 0
                        
                        var_938 = eax_25
                        var_8d4_1 = arg2 + 0x44
                        sub_61b5a0(&var_938, arg2 + 0x44)
                        int32_t* i_2 = arg1
                        int32_t* edi_4 = var_938
                        
                        do
                            void* ebp_1 = *i_2
                            int32_t eax_29 = (*(ebp_1 + 8))((*(ebp_1 + 0x10))())
                            var_948 = eax_29
                            
                            if (eax_29 == 0)
                            label_42af15:
                                result = sub_401110(&var_890)
                                goto label_42bb61
                            
                            (**eax_29)()
                            sub_61b5a0(&var_948, edi_4)
                            i_2 = (*(*i_2 + 0xc))()
                        while (i_2 != 0)
                    
                    int32_t var_8e0
                    int32_t var_8c0
                    sub_429940(eax_19 + 8, *(arg2 + 0x1c), &var_8c0, &var_8e0)
                    int32_t* ebx_3 = arg1
                    int32_t edx_17 = *(*ebx_3 + 0x14)
                    int32_t esi_7 = arg3 i- var_94c + 1
                    var_948 = esi_7
                    float result_3 = edx_17()
                    result_1 = result_3
                    int32_t* eax_51 = &var_948
                    
                    if (result_3 s>= esi_7)
                        eax_51 = &result_1
                    
                    result = *eax_51
                    int32_t esi_8 = 0
                    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                    
                    if (((*(arg2 + 0x28) - *(arg2 + 0x24)) & 0xfffffffc) s> 0)
                        do
                            sub_42f3e0(*(*(arg2 + 0x24) + (esi_8 << 2)))
                            esi_8 += 1
                            result = (*(arg2 + 0x28) - *(arg2 + 0x24)) s>> 2
                        while (esi_8 s< result)
                    
                    var_938 = nullptr
                    
                    if (result_2 s<= arg3)
                        while (result_2 s<= eax_18)
                            void* edx_20 = *ebx_3
                            var_948 = arg3 - result_2
                            unimplemented  {fild st0, dword [esp+0x18]}
                            float var_920_1 =
                                fconvert.s(unimplemented  {fstp dword [esp+0x40], st0})
                            unimplemented  {fstp dword [esp+0x40], st0}
                            int32_t eax_57 = (*(edx_20 + 0x14))()
                            unimplemented  {fldz }
                            void* edx_21 = *ebx_3
                            float var_904 = fconvert.s(unimplemented  {fst dword [esp+0x5c], st0})
                            float var_900_1 = fconvert.s(unimplemented  {fst dword [esp+0x60], st0})
                            int32_t eax_58 = *(edx_21 + 8)
                            float var_8fc_1 =
                                fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
                            unimplemented  {fstp dword [esp+0x64], st0}
                            float var_940 = result_2 - eax_57 + 1
                            void* eax_59 = eax_58(result_2)
                            void* eax_61 = (*(*ebx_3 + 8))(result_2 - 1)
                            
                            if (eax_59 != 0)
                                float result_5 = *(eax_59 + 0x28)
                                int32_t esi_10 = *(eax_59 + 0x24)
                                var_948 = esi_10
                                unimplemented  {fild st0, dword [esp+0x18]}
                                result_1 = result_5
                                var_904 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
                                unimplemented  {fstp dword [esp+0x5c], st0}
                                unimplemented  {fild st0, dword [esp+0x1c]}
                                float var_900_2 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x60], st0})
                                unimplemented  {fstp dword [esp+0x60], st0}
                                unimplemented  {fldz }
                                float var_8fc_2 =
                                    fconvert.s(unimplemented  {fst dword [esp+0x64], st0})
                                
                                if (eax_61 == 0)
                                    unimplemented  {fstp st0, st0}
                                    unimplemented  {fstp st0, st0}
                                else
                                    int32_t ecx_34 = result_5 i- *(eax_61 + 0x28)
                                    var_948 = esi_10 - *(eax_61 + 0x24)
                                    unimplemented  {fild st0, dword [esp+0x18]}
                                    var_948 = ecx_34
                                    var_904 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
                                    unimplemented  {fstp dword [esp+0x5c], st0}
                                    unimplemented  {fild st0, dword [esp+0x18]}
                                    float var_900_3 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x60], st0})
                                    unimplemented  {fstp dword [esp+0x60], st0}
                                    float var_8fc_3 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
                                    unimplemented  {fstp dword [esp+0x64], st0}
                                
                                sub_660160(&var_904)
                                void var_83c
                                sub_5952a0(0, &var_83c)
                                void* edi_11 = *(arg2 + 0x20)
                                sub_5952a0(*(edi_11 + 0xa8) * (result_2 - eax_57 + 1), &var_83c)
                                var_948 = result_2 - eax_57
                                unimplemented  {fild st0, dword [esp+0x18]}
                                unimplemented  {fld st0, dword [esp+0xb0]}
                                unimplemented  {fld st0, st0}
                                unimplemented  {fmulp st2, st0}
                                unimplemented  {fmulp st2, st0}
                                unimplemented  {fxch st0, st1}
                                unimplemented  {fxch st0, st1}
                                long double st0
                                int32_t eax_62 = sub_70c710(st0)
                                unimplemented  {fimul st0, dword [esp+0x20]}
                                int32_t eax_63
                                int32_t ecx_37
                                eax_63, ecx_37 = sub_70c710(st0)
                                unimplemented  {fldz }
                                float var_8f8 =
                                    fconvert.s(unimplemented  {fst dword [esp+0x68], st0})
                                float var_8f4_1 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x6c], st0})
                                unimplemented  {fstp dword [esp+0x6c], st0}
                                int32_t var_964_15 = ecx_37
                                unimplemented  {fld st0, dword [esp+0x44]}
                                var_948 = eax_63 - eax_62
                                float var_964_16 =
                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                sub_42bb90(&var_8f8, edi_11, var_964_16)
                                unimplemented  {fld st0, dword [esp+0x40]}
                                unimplemented  {fld st0, st0}
                                float result_6 = *(edi_11 + 0x34)
                                result_1 = result_6
                                unimplemented  {fidiv st0, dword [esp+0x1c]}
                                var_94c = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                unimplemented  {fstp dword [esp+0x14], st0}
                                unimplemented  {fld st0, dword [edi+0x84]}
                                float var_91c =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                                unimplemented  {fstp dword [esp+0x44], st0}
                                unimplemented  {fld st0, dword [edi+0x88]}
                                result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                                unimplemented  {fstp dword [esp+0x1c], st0}
                                unimplemented  {fld st0, dword [edi+0x84]}
                                var_940 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                                unimplemented  {fstp dword [esp+0x20], st0}
                                unimplemented  {fld st0, dword [esp+0x1c]}
                                unimplemented  {fsub st0, dword [esp+0x20]}
                                unimplemented  {fld st0, dword [esp+0x14]}
                                unimplemented  {fld st0, st0}
                                unimplemented  {fmulp st2, st0}
                                unimplemented  {fmulp st2, st0}
                                unimplemented  {fld st0, dword [esp+0x44]}
                                unimplemented  {faddp st2, st0}
                                unimplemented  {faddp st2, st0}
                                unimplemented  {fxch st0, st1}
                                unimplemented  {fxch st0, st1}
                                float var_8d0_1 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x90], st0})
                                unimplemented  {fstp dword [esp+0x90], st0}
                                unimplemented  {fld st0, dword [edi+0x8c]}
                                var_94c = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                unimplemented  {fstp dword [esp+0x14], st0}
                                unimplemented  {fld st0, dword [edi+0x90]}
                                result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                                unimplemented  {fstp dword [esp+0x1c], st0}
                                unimplemented  {fld st0, dword [edi+0x8c]}
                                var_940 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                                unimplemented  {fstp dword [esp+0x20], st0}
                                unimplemented  {fld st0, dword [esp+0x1c]}
                                unimplemented  {fsub st0, dword [esp+0x20]}
                                unimplemented  {fmul st0, st1}
                                unimplemented  {fadd dword [esp+0x14]}
                                float var_8cc_1 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x94], st0})
                                unimplemented  {fstp dword [esp+0x94], st0}
                                unimplemented  {fld st0, dword [edi+0x94]}
                                var_94c = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                                unimplemented  {fstp dword [esp+0x14], st0}
                                unimplemented  {fld st0, dword [edi+0x98]}
                                result_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                                unimplemented  {fstp dword [esp+0x1c], st0}
                                unimplemented  {fld st0, dword [edi+0x94]}
                                var_940 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                                unimplemented  {fstp dword [esp+0x20], st0}
                                unimplemented  {fld st0, dword [esp+0x1c]}
                                unimplemented  {fsub st0, dword [esp+0x20]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fadd dword [esp+0x14]}
                                float var_8c8_1 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0x98], st0})
                                unimplemented  {fstp dword [esp+0x98], st0}
                                unimplemented  {fldz }
                                float var_8a8 =
                                    fconvert.s(unimplemented  {fst dword [esp+0xb8], st0})
                                float var_8a4_1 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0xbc], st0})
                                unimplemented  {fstp dword [esp+0xbc], st0}
                                float result_7 = result_6
                                float var_964_17 =
                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                st0 = sub_42c870(edi_11, arg2, &var_8a8, var_964_17)
                                unimplemented  {call 0x42c870}
                                int32_t edx_25 = *(var_8d4_1 + 4) - *var_8d4_1
                                result_1 = 0f
                                int32_t edx_26 = edx_25 s>> 2
                                var_940 = edx_26
                                unimplemented  {fild st0, dword [esp+0x20]}
                                
                                if (edx_26 s< 0)
                                    unimplemented  {fadd dword [0x75bb48]}
                                
                                unimplemented  {fld st0, dword [esp+0x40]}
                                unimplemented  {fadd qword [0x75ba88]}
                                unimplemented  {fsubp st1, st0}
                                unimplemented  {fsubp st1, st0}
                                int32_t eax_67 = sub_70c710(st0)
                                int16_t top_46
                                int16_t top_1 = top_46 + 2
                                var_940 = eax_67
                                float* eax_68 = &result_1
                                
                                if (eax_67 s>= 0)
                                    eax_68 = &var_940
                                
                                bool cond:4_1 = var_948 s<= 0
                                float ebp_11 = *(*var_8d4_1 + (*eax_68 << 2))
                                var_940 = ebp_11
                                result_1 = 0f
                                
                                if (not(cond:4_1))
                                    while (true)
                                        for (int32_t* i_3 = *ebp_11; i_3 != *(ebp_11 i+ 4); 
                                                i_3 = &i_3[1])
                                            (***i_3)()
                                        
                                        unimplemented  {fldz }
                                        float esi_16 = *(arg2 + 0x20)
                                        float var_89c =
                                            fconvert.s(unimplemented  {fst dword [esp+0xc4], st0})
                                        float var_898_1 =
                                            fconvert.s(unimplemented  {fst dword [esp+0xcc], st0})
                                        float var_894_1 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0xd0], st0})
                                        unimplemented  {fstp dword [esp+0xd0], st0}
                                        sub_42be30(&var_904, esi_16, &var_83c, &var_89c)
                                        unimplemented  {fldz }
                                        float var_8ec =
                                            fconvert.s(unimplemented  {fst dword [esp+0x74], st0})
                                        float var_8e8_1 =
                                            fconvert.s(unimplemented  {fst dword [esp+0x7c], st0})
                                        float var_8e4_1 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0x84], st0})
                                        unimplemented  {fstp dword [esp+0x84], st0}
                                        int32_t* edi_12 = &var_83c
                                        sub_42bc90(edi_12, esi_16, &var_8ec)
                                        unimplemented  {call 0x42bc90}
                                        unimplemented  {fldz }
                                        float var_8bc =
                                            fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
                                        float var_8b8_1 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0xac], st0})
                                        unimplemented  {fstp dword [esp+0xac], st0}
                                        unimplemented  {fld st0, dword [esp+0x54]}
                                        float var_968_6 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                                        unimplemented  {fstp dword [esp+0x4], st0}
                                        unimplemented  {fld st0, dword [esp+0x4c]}
                                        float var_96c_3 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        st0 = sub_42c390(edi_12, arg2, esi_16, &var_8ec, &var_89c, 
                                            var_96c_3, var_968_6, &var_8bc)
                                        int16_t top_74 = top_1 + 2
                                        unimplemented  {call 0x42c390}
                                        int32_t* i_7 = nullptr
                                        struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable
                                            *** var_930_1 = nullptr
                                        int32_t var_92c_1 = 0
                                        var_4_2.b = 6
                                        float* var_930_3
                                        int32_t* i_5
                                        float* ebp_13
                                        int32_t esi_21
                                        
                                        if (*(*(arg2 + 0x20) + 0x64) != 0)
                                            struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable
                                                ** eax_96
                                            int32_t ecx_56
                                            eax_96, ecx_56 = operator new(0x7c)
                                            var_94c = eax_96
                                            var_4_2.b = 9
                                            struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable
                                                ** edi_17
                                            
                                            if (eax_96 == 0)
                                                edi_17 = nullptr
                                            else
                                                unimplemented  {fld st0, dword [esp+0x40]}
                                                int32_t var_964_27 = ecx_56
                                                float var_964_28 = fconvert.s(unimplemented  {fstp 
                                                    dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                int32_t eax_97 =
                                                    sub_42bc10(*(arg2 + 0x20), var_964_28)
                                                unimplemented  {fld st0, dword [esp+0x98]}
                                                int32_t eax_100
                                                int32_t edx_37
                                                edx_37:eax_100 = sx.q(var_8e0)
                                                int32_t eax_104
                                                int32_t edx_38
                                                edx_38:eax_104 = sx.q(var_8c0)
                                                float var_974_5 = fconvert.s(unimplemented  {fstp 
                                                    dword [esp+0x10], st0})
                                                unimplemented  {fstp dword [esp+0x10], st0}
                                                unimplemented  {fld st0, dword [esp+0xb8]}
                                                float var_978_5 = fconvert.s(unimplemented  {fstp 
                                                    dword [esp+0xc], st0})
                                                unimplemented  {fstp dword [esp+0xc], st0}
                                                unimplemented  {fld st0, dword [esp+0xb4]}
                                                float var_97c_5 = fconvert.s(unimplemented  {fstp 
                                                    dword [esp+0x8], st0})
                                                unimplemented  {fstp dword [esp+0x8], st0}
                                                unimplemented  {fld st0, dword [esp+0x90]}
                                                float var_980_4 = fconvert.s(unimplemented  {fstp 
                                                    dword [esp+0x4], st0})
                                                unimplemented  {fstp dword [esp+0x4], st0}
                                                unimplemented  {fld st0, dword [esp+0x8c]}
                                                float var_984_4 = fconvert.s(unimplemented  {fstp 
                                                    dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                unimplemented  {fld st0, dword [esp+0x9c]}
                                                unimplemented  {fadd dword [esp+0xcc]}
                                                unimplemented  {fld st0, dword [esp+0x74]}
                                                unimplemented  {fld st0, st0}
                                                unimplemented  {fmulp st2, st0}
                                                unimplemented  {fmulp st2, st0}
                                                unimplemented  {fxch st0, st1}
                                                unimplemented  {fxch st0, st1}
                                                int32_t eax_107 = sub_70c710(st0)
                                                unimplemented  {fld st0, dword [esp+0x98]}
                                                unimplemented  {fadd dword [esp+0xc8]}
                                                unimplemented  {fmulp st1, st0}
                                                unimplemented  {fmulp st1, st0}
                                                int16_t top_112
                                                top_74 = top_112 + 2
                                                edi_17 = sub_430880(eax_96, sub_70c710(st0), 
                                                    eax_107, var_984_4, var_980_4, var_97c_5, 
                                                    var_978_5, var_974_5, (eax_104 - edx_38) s>> 1, 
                                                    (eax_100 - edx_37) s>> 1, eax_22, eax_97)
                                            
                                            var_4_2.b = 6
                                            sub_6b0560(&i_7, 1)
                                            
                                            if (var_930_1 != 0)
                                                *var_930_1 = edi_17
                                            
                                            int32_t* edx_39 = var_940
                                            float var_964_30 = eax_6
                                            var_930_3 = &var_930_1[1]
                                            sub_42c960(&i_7, &var_930_1[1], *edx_39, edx_39[1])
                                            esi_21 = var_92c_1
                                            ebp_13 = var_930_3
                                            i_5 = i_7
                                            goto label_42b7a4
                                        
                                        float eax_71
                                        int32_t ecx_44
                                        eax_71, ecx_44 = operator new(0x7c)
                                        var_94c = eax_71
                                        var_4_2.b = 7
                                        struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable
                                            ** edi_13
                                        
                                        if (eax_71 == 0)
                                            edi_13 = nullptr
                                        else
                                            unimplemented  {fld st0, dword [esp+0x40]}
                                            int32_t var_964_21 = ecx_44
                                            float var_964_22 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            int32_t eax_72 = sub_42bc10(*(arg2 + 0x20), var_964_22)
                                            unimplemented  {fld st0, dword [esp+0x98]}
                                            int32_t eax_74
                                            int32_t edx_29
                                            edx_29:eax_74 = sx.q(var_8e0)
                                            int32_t eax_78
                                            int32_t edx_30
                                            edx_30:eax_78 = sx.q(var_8c0)
                                            float var_974_3 = fconvert.s(unimplemented  {fstp 
                                                dword [esp+0x10], st0})
                                            unimplemented  {fstp dword [esp+0x10], st0}
                                            unimplemented  {fld st0, dword [esp+0xb8]}
                                            float var_978_3 = fconvert.s(unimplemented  {fstp 
                                                dword [esp+0xc], st0})
                                            unimplemented  {fstp dword [esp+0xc], st0}
                                            unimplemented  {fld st0, dword [esp+0xb4]}
                                            float var_97c_3 = fconvert.s(unimplemented  {fstp 
                                                dword [esp+0x8], st0})
                                            unimplemented  {fstp dword [esp+0x8], st0}
                                            unimplemented  {fld st0, dword [esp+0x90]}
                                            float var_980_2 = fconvert.s(unimplemented  {fstp 
                                                dword [esp+0x4], st0})
                                            unimplemented  {fstp dword [esp+0x4], st0}
                                            unimplemented  {fld st0, dword [esp+0x8c]}
                                            float var_984_2 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            edi_13 = sub_430880(eax_71, 0, 0, var_984_2, var_980_2, 
                                                var_97c_3, var_978_3, var_974_3, 
                                                (eax_78 - edx_30) s>> 1, (eax_74 - edx_29) s>> 1, 
                                                eax_22, eax_72)
                                        
                                        var_4_2.b = 6
                                        sub_6b0560(&i_7, 1)
                                        
                                        if (var_930_1 != 0)
                                            *var_930_1 = edi_13
                                        
                                        float var_964_24 = eax_6
                                        sub_42c960(&i_7, &var_930_1[1], *ebp_11, *(ebp_11 i+ 4))
                                        float eax_84 = operator new(0x7c)
                                        var_94c = eax_84
                                        var_4_2.b = 8
                                        struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable
                                            ** edi_14
                                        
                                        if (eax_84 == 0)
                                            edi_14 = nullptr
                                        else
                                            unimplemented  {fldz }
                                            float var_974_4 = fconvert.s(unimplemented  {fst dword [
                                                esp+0x10], st0})
                                            float var_978_4 = fconvert.s(unimplemented  {fst dword [
                                                esp+0xc], st0})
                                            float var_97c_4 = fconvert.s(unimplemented  {fstp 
                                                dword [esp+0x8], st0})
                                            unimplemented  {fstp dword [esp+0x8], st0}
                                            unimplemented  {fld1 }
                                            float var_980_3 = fconvert.s(unimplemented  {fst dword [
                                                esp+0x4], st0})
                                            float var_984_3 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            unimplemented  {fld st0, dword [esp+0x9c]}
                                            unimplemented  {fadd dword [esp+0xcc]}
                                            unimplemented  {fld st0, dword [esp+0x74]}
                                            unimplemented  {fld st0, st0}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fmulp st2, st0}
                                            unimplemented  {fxch st0, st1}
                                            unimplemented  {fxch st0, st1}
                                            int32_t eax_85 = sub_70c710(st0)
                                            unimplemented  {fld st0, dword [esp+0x98]}
                                            unimplemented  {fadd dword [esp+0xc8]}
                                            unimplemented  {fmulp st1, st0}
                                            unimplemented  {fmulp st1, st0}
                                            edi_14 = sub_430880(eax_84, sub_70c710(st0), eax_85, 
                                                var_984_3, var_980_3, var_97c_4, var_978_4, 
                                                var_974_4, 0, 0, 0, 0xff)
                                        
                                        var_4_2.b = 6
                                        void* ebp_12 = &var_930_1[1]
                                        i_5 = i_7
                                        var_94c = edi_14
                                        
                                        if (&var_94c u>= ebp_12 || i_5 u> &var_94c)
                                            esi_21 = var_92c_1
                                            
                                            if (ebp_12 != esi_21)
                                            label_42b67d:
                                                
                                                if (ebp_12 != 0)
                                                    *ebp_12 = edi_14
                                                
                                                ebp_13 = ebp_12 + 4
                                                var_930_3 = ebp_13
                                            label_42b7a4:
                                                float eax_112 = operator new(0x7c)
                                                var_94c = eax_112
                                                var_4_2.b = 0xa
                                                float edi_19
                                                
                                                if (eax_112 == 0)
                                                    edi_19 = 0f
                                                else
                                                    unimplemented  {fldz }
                                                    float var_974_6 = fconvert.s(unimplemented  {fst
                                                         dword [esp+0x10], st0})
                                                    float var_978_6 = fconvert.s(unimplemented  {fst
                                                         dword [esp+0xc], st0})
                                                    float var_97c_6 = fconvert.s(unimplemented  {
                                                        fstp dword [esp+0x8], st0})
                                                    unimplemented  {fstp dword [esp+0x8], st0}
                                                    unimplemented  {fld1 }
                                                    float var_980_5 = fconvert.s(unimplemented  {fst
                                                         dword [esp+0x4], st0})
                                                    float var_984_5 = fconvert.s(unimplemented  {
                                                        fstp dword [esp], st0})
                                                    unimplemented  {fstp dword [esp], st0}
                                                    unimplemented  {fld st0, dword [esp+0xe0]}
                                                    unimplemented  {fld st0, dword [esp+0x74]}
                                                    unimplemented  {fld st0, st0}
                                                    unimplemented  {fmulp st2, st0}
                                                    unimplemented  {fmulp st2, st0}
                                                    unimplemented  {fxch st0, st1}
                                                    unimplemented  {fxch st0, st1}
                                                    int32_t eax_113 = sub_70c710(st0)
                                                    unimplemented  {fmul st0, dword [esp+0xdc]}
                                                    edi_19 = sub_430880(eax_112, sub_70c710(st0), 
                                                        eax_113, var_984_5, var_980_5, var_97c_6, 
                                                        var_978_6, var_974_6, 0, 0, 0, 0xff)
                                                
                                                var_4_2.b = 6
                                                var_94c = edi_19
                                                
                                                if (&var_94c u< ebp_13 && i_5 u<= &var_94c)
                                                    int32_t edi_21 = (&var_94c - i_5) s>> 2
                                                    
                                                    if (ebp_13 != esi_21)
                                                    label_42b883:
                                                        
                                                        if (ebp_13 == 0)
                                                            goto label_42b8ef
                                                        
                                                        *ebp_13 = i_5[edi_21]
                                                        goto label_42b8ef
                                                    
                                                    int32_t eax_118 = (ebp_13 - i_5) s>> 2
                                                    
                                                    if (eax_118 u<= 0x3ffffffe)
                                                        int32_t ecx_61 = (esi_21 - i_5) s>> 2
                                                        
                                                        if (eax_118 + 1 u> ecx_61)
                                                            uint32_t edx_42 = ecx_61 u>> 1
                                                            int32_t ecx_62
                                                            
                                                            if (0x3fffffff - edx_42 u>= ecx_61)
                                                                ecx_62 = ecx_61 + edx_42
                                                            else
                                                                ecx_62 = 0
                                                            
                                                            if (ecx_62 u< eax_118 + 1)
                                                                ecx_62 = eax_118 + 1
                                                            
                                                            sub_6b0560(&i_7, ecx_62)
                                                            ebp_13 = var_930_3
                                                            i_5 = i_7
                                                        
                                                        goto label_42b883
                                                else if (ebp_13 != esi_21)
                                                label_42b8de:
                                                    
                                                    if (ebp_13 == 0)
                                                        goto label_42b8ef
                                                    
                                                    *ebp_13 = edi_19
                                                label_42b8ef:
                                                    int32_t* ecx_66 = var_938
                                                    void* var_930_4 = &ebp_13[1]
                                                    
                                                    if ((*(arg2 + 0x28) - *(arg2 + 0x24)) s>> 2
                                                            s> ecx_66)
                                                        var_91c = *(*(arg2 + 0x24) + (ecx_66 << 2))
                                                    label_42baa1:
                                                        unimplemented  {fld st0, dword [esp+0x40]}
                                                        var_938 += 1
                                                        var_94c = eax_6
                                                        int32_t eax_138 = sub_70c710(st0)
                                                        top_1 = top_74
                                                        sub_42ea30(var_91c, eax_138, &var_94c, 
                                                            arg5, arg6, &i_7)
                                                        int32_t* i_4 = i_5
                                                        
                                                        if (i_5 != &ebp_13[1])
                                                            do
                                                                (*(**i_4 + 4))()
                                                                i_4 = &i_4[1]
                                                            while (i_4 != &ebp_13[1])
                                                        
                                                        var_4_2.b = 4
                                                        
                                                        if (i_5 != 0)
                                                            int32_t* i_6 = i_5
                                                            sub_6b4d5b()
                                                        
                                                        float result_4 = result_1 i+ 1
                                                        i_7 = nullptr
                                                        int32_t var_930_5 = 0
                                                        int32_t var_92c_2 = 0
                                                        result_1 = result_4
                                                        
                                                        if (result_4 s>= var_948)
                                                            break
                                                        
                                                        ebp_11 = var_940
                                                        continue
                                                    else
                                                        float eax_126 = operator new(0x34)
                                                        float edi_24
                                                        
                                                        if (eax_126 == 0)
                                                            edi_24 = 0f
                                                            var_94c = 0f
                                                        else
                                                            int32_t edx_48 = *(arg2 + 0x10)
                                                            int32_t esi_35 = *(arg2 + 0xc)
                                                            int32_t edi_23 = *(arg2 + 8)
                                                            *(eax_126 i+ 0x14) = *(arg2 + 0x14)
                                                            *(eax_126 i+ 8) = edi_23
                                                            *eax_126 = &partsengine::CFlatSpriteView::`vftable'{for `IInterface'}
                                                            *(eax_126 i+ 4) = 1
                                                            *(eax_126 i+ 0xc) = esi_35
                                                            *(eax_126 i+ 0x10) = edx_48
                                                            *(eax_126 i+ 0x18) = 0
                                                            *(eax_126 i+ 0x1c) = 0
                                                            *(eax_126 i+ 0x20) = 0
                                                            *(eax_126 i+ 0x24) = 0
                                                            *(eax_126 i+ 0x2c) = 1
                                                            *(eax_126 i+ 0x30) = 3
                                                            var_94c = eax_126
                                                            edi_24 = eax_126
                                                        
                                                        void* esi_39 = arg2
                                                        int32_t eax_127 = *(esi_39 + 0x28)
                                                        var_91c = edi_24
                                                        int32_t edx_49
                                                        
                                                        if (&var_91c u< eax_127)
                                                            edx_49 = *(esi_39 + 0x24)
                                                        
                                                        if (&var_91c u>= eax_127
                                                                || edx_49 u> &var_91c)
                                                            int32_t ecx_74 = *(esi_39 + 0x2c)
                                                            
                                                            if (eax_127 != ecx_74)
                                                            label_42ba3f:
                                                                float* eax_135 = *(esi_39 + 0x28)
                                                                
                                                                if (eax_135 != 0)
                                                                    *eax_135 = edi_24
                                                                
                                                            label_42ba48:
                                                                *(esi_39 + 0x28) += 4
                                                                
                                                                if (eax_20 != 0)
                                                                    sub_42e610(edi_24, eax_19 + 8, 
                                                                        *(esi_39 + 0x1c), nullptr, 3)
                                                                else if (var_921_1 != 0)
                                                                    sub_42e610(edi_24, &var_890, 
                                                                        *(esi_39 + 0x1c), var_8f0_1, var_8d8_1)
                                                                
                                                                goto label_42baa1
                                                            
                                                            int32_t edx_53 = *(esi_39 + 0x24)
                                                            int32_t eax_133 =
                                                                (eax_127 - edx_53) s>> 2
                                                            
                                                            if (eax_133 u<= 0x3ffffffe)
                                                                int32_t ecx_76 = (ecx_74 - edx_53) s>> 2
                                                                
                                                                if (eax_133 + 1 u> ecx_76)
                                                                    uint32_t edx_55 = ecx_76 u>> 1
                                                                    int32_t ecx_77
                                                                    
                                                                    if (0x3fffffff - edx_55 u>= ecx_76)
                                                                        ecx_77 = ecx_76 + edx_55
                                                                    else
                                                                        ecx_77 = 0
                                                                    
                                                                    if (ecx_77 u< eax_133 + 1)
                                                                        ecx_77 = eax_133 + 1
                                                                    
                                                                    sub_6b0560(arg2 + 0x24, ecx_77)
                                                                    esi_39 = arg2
                                                                    edi_24 = var_94c
                                                                
                                                                goto label_42ba3f
                                                        else
                                                            int32_t ecx_68 = *(esi_39 + 0x2c)
                                                            
                                                            if (eax_127 != ecx_68)
                                                            label_42b9d4:
                                                                int32_t* eax_131 = *(esi_39 + 0x28)
                                                                
                                                                if (eax_131 != 0)
                                                                    *eax_131 = *(*(esi_39 + 0x24)
                                                                        + ((&var_91c - edx_49) s>> 2 << 2))
                                                                
                                                                edi_24 = var_94c
                                                                goto label_42ba48
                                                            
                                                            int32_t eax_129 =
                                                                (eax_127 - edx_49) s>> 2
                                                            
                                                            if (eax_129 u<= 0x3ffffffe)
                                                                int32_t ecx_70 = (ecx_68 - edx_49) s>> 2
                                                                
                                                                if (eax_129 + 1 u> ecx_70)
                                                                    uint32_t edx_51 = ecx_70 u>> 1
                                                                    int32_t ecx_71
                                                                    
                                                                    if (0x3fffffff - edx_51 u>= ecx_70)
                                                                        ecx_71 = ecx_70 + edx_51
                                                                    else
                                                                        ecx_71 = 0
                                                                    
                                                                    if (ecx_71 u< eax_129 + 1)
                                                                        ecx_71 = eax_129 + 1
                                                                    
                                                                    sub_6b0560(arg2 + 0x24, ecx_71)
                                                                    esi_39 = arg2
                                                                
                                                                goto label_42b9d4
                                                else
                                                    int32_t eax_123 = (ebp_13 - i_5) s>> 2
                                                    
                                                    if (eax_123 u<= 0x3ffffffe)
                                                        int32_t ecx_64 = (esi_21 - i_5) s>> 2
                                                        
                                                        if (eax_123 + 1 u> ecx_64)
                                                            uint32_t edx_44 = ecx_64 u>> 1
                                                            int32_t ecx_65
                                                            
                                                            if (0x3fffffff - edx_44 u>= ecx_64)
                                                                ecx_65 = ecx_64 + edx_44
                                                            else
                                                                ecx_65 = 0
                                                            
                                                            if (ecx_65 u< eax_123 + 1)
                                                                ecx_65 = eax_123 + 1
                                                            
                                                            sub_6b0560(&i_7, ecx_65)
                                                            ebp_13 = var_930_3
                                                            i_5 = i_7
                                                        
                                                        goto label_42b8de
                                            else
                                                int32_t eax_94 = (ebp_12 - i_5) s>> 2
                                                
                                                if (eax_94 u<= 0x3ffffffe)
                                                    int32_t ecx_54 = (esi_21 - i_5) s>> 2
                                                    
                                                    if (eax_94 + 1 u> ecx_54)
                                                        uint32_t edx_36 = ecx_54 u>> 1
                                                        int32_t ecx_55
                                                        
                                                        if (0x3fffffff - edx_36 u>= ecx_54)
                                                            ecx_55 = ecx_54 + edx_36
                                                        else
                                                            ecx_55 = 0
                                                        
                                                        if (ecx_55 u< eax_94 + 1)
                                                            ecx_55 = eax_94 + 1
                                                        
                                                        sub_6b0560(&i_7, ecx_55)
                                                        esi_21 = var_92c_1
                                                        ebp_12 = &var_930_1[1]
                                                        i_5 = i_7
                                                    
                                                    goto label_42b67d
                                        else
                                            esi_21 = var_92c_1
                                            int32_t edi_16 = (&var_94c - i_5) s>> 2
                                            
                                            if (ebp_12 != esi_21)
                                            label_42b610:
                                                
                                                if (ebp_12 != 0)
                                                    *ebp_12 = i_5[edi_16]
                                                
                                                ebp_13 = ebp_12 + 4
                                                var_930_3 = ebp_13
                                                goto label_42b7a4
                                            
                                            int32_t eax_90 = (ebp_12 - i_5) s>> 2
                                            
                                            if (eax_90 u<= 0x3ffffffe)
                                                int32_t ecx_50 = (esi_21 - i_5) s>> 2
                                                
                                                if (eax_90 + 1 u> ecx_50)
                                                    uint32_t edx_33 = ecx_50 u>> 1
                                                    int32_t ecx_51
                                                    
                                                    if (0x3fffffff - edx_33 u>= ecx_50)
                                                        ecx_51 = ecx_50 + edx_33
                                                    else
                                                        ecx_51 = 0
                                                    
                                                    if (ecx_51 u< eax_90 + 1)
                                                        ecx_51 = eax_90 + 1
                                                    
                                                    sub_6b0560(&i_7, ecx_51)
                                                    esi_21 = var_92c_1
                                                    ebp_12 = &var_930_1[1]
                                                    i_5 = i_7
                                                
                                                goto label_42b610
                                        
                                        sub_6b47bf("vector<T> too long")
                                        noreturn
                                    
                                    ebx_3 = arg1
                            
                            result = result_2 + 1
                            result_2 = result
                            
                            if (result s> arg3)
                                break
                    
                    int32_t var_87c
                    
                    if (var_87c u>= 0x10)
                        int32_t var_964_37 = var_890
                        result = sub_6b4d5b()
                else if (result != 0)
                    goto label_42add1

label_42bb61:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_94c)
return result
