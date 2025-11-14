// 函数: sub_63a6e0
// 地址: 0x63a6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg3
int32_t* ebx
int32_t* var_a4 = ebx
int32_t result = (ecx[1] - *ecx) s>> 2
int32_t result_1 = 0
int32_t result_2 = result

if (result s> 0)
    while (true)
        int32_t result_3 = result_1
        int32_t* esi_1 = (*ecx)[result_3]
        int32_t** eax_3
        int32_t** edx
        void* edi_1
        
        if (esi_1 s> 0)
            edi_1 = data_797ddc
            int32_t* var_b4_1 = esi_1
            eax_3, result_3, edx = sub_418b70(edi_1 + 0xa8, edx, result_3)
        
        int32_t** edi_4
        
        if (esi_1 s> 0 && eax_3.b != 0)
            int32_t* eax_5
            eax_5, result_3, edx = sub_418bd0(edi_1 + 0xa8, esi_1)
            void* eax_10
            
            if (eax_5 != 0)
                struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_6 =
                    sub_414e30(eax_5)
                int32_t* ecx_1 = eax_5[0xe]
                
                if (ecx_1 != 0 && eax_6[2] == 0)
                    eax_6[8] = ecx_1
                    eax_6[2] = (**ecx_1)(1)
                
                void** eax_9 = data_797da0
                eax_6[3] = eax_5[0xc]
                eax_6[4] = eax_5
                eax_10, result_3, edx = sub_5f7370(*eax_9, eax_6[2]->vFunc_1)
            
            if (eax_5 != 0 && eax_10 != 0)
                eax_3, edx, result_3 = (*(**(*(eax_10 + 0xb4) + 4) + 8))()
            else
                eax_3 = nullptr
            
            edi_4 = eax_3
        else
            edi_4 = nullptr
        
        int32_t** var_9c = edi_4
        
        if (esi_1 s> 0)
            int32_t* var_b4_3 = esi_1
            eax_3 = sub_418b70(data_797ddc + 0xa8, edx, result_3)
        
        if (esi_1 s> 0 && eax_3.b != 0)
            eax_3 = sub_6834f0(esi_1)
        else
            eax_3.b = 0
        
        ebx.b = eax_3.b != 0
        void** eax_15
        
        if (ebx.b == 0)
            eax_15 = arg1 + 0x3ac
        else
            eax_15 = arg1 + 0x39c
        
        void* eax_16
        eax_16, edx = sub_4ccf80(eax_15, &var_9c)
        *eax_16 += 1
        
        if (*(arg1 + 0x340) == 0 || ebx.b != 0)
            int32_t* var_90
            int32_t* ecx_8 = sub_637570(&var_90)
            uint32_t edx_5 = zx.d(ebx.b)
            var_90 = esi_1
            int32_t** var_8c_1 = edi_4
            uint32_t var_54_1 = edx_5
            int32_t eax_27
            
            if (esi_1 s<= 0)
                eax_27 = 0
            else
                void* edi_5 = data_797ddc
                int32_t* var_b4_4 = esi_1
                char eax_19
                eax_19, ecx_8, edx_5 = sub_418b70(edi_5 + 0xa8, edx_5, nullptr)
                
                if (eax_19 != 0)
                    int32_t* eax_21
                    eax_21, ecx_8, edx_5 = sub_418bd0(edi_5 + 0xa8, esi_1)
                    
                    if (eax_21 == 0)
                        eax_27 = 0
                    else
                        struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_22 =
                            sub_414e30(eax_21)
                        int32_t* ecx_9 = eax_21[0xe]
                        
                        if (ecx_9 != 0 && eax_22[2] == 0)
                            eax_22[8] = ecx_9
                            eax_22[2] = (**ecx_9)(1)
                        
                        eax_22[3] = eax_21[0xc]
                        eax_22[4] = eax_21
                        eax_27, edx_5, ecx_8 = (*eax_22)->vFunc_9()
                else
                    eax_27 = 0
            
            int32_t var_88_1 = eax_27
            int32_t eax_36
            
            if (esi_1 s<= 0)
                eax_36 = 0
            else
                void* edi_7 = data_797ddc
                int32_t* var_b4_6 = esi_1
                char eax_29
                eax_29, ecx_8, edx_5 = sub_418b70(edi_7 + 0xa8, edx_5, ecx_8)
                
                if (eax_29 != 0)
                    int32_t* eax_31
                    eax_31, ecx_8, edx_5 = sub_418bd0(edi_7 + 0xa8, esi_1)
                    
                    if (eax_31 == 0)
                        eax_36 = 0
                    else
                        struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_32 =
                            sub_414e30(eax_31)
                        int32_t* ecx_11 = eax_31[0xe]
                        
                        if (ecx_11 != 0 && eax_32[2] == 0)
                            eax_32[8] = ecx_11
                            eax_32[2] = (**ecx_11)(1)
                        
                        eax_32[3] = eax_31[0xc]
                        eax_32[4] = eax_31
                        eax_36, edx_5, ecx_8 = (*eax_32)->vFunc_10()
                else
                    eax_36 = 0
            
            int32_t var_84_1 = eax_36
            int32_t eax_45
            
            if (esi_1 s<= 0)
                eax_45 = 0
            else
                void* edi_9 = data_797ddc
                int32_t* var_b4_8 = esi_1
                char eax_38
                eax_38, ecx_8, edx_5 = sub_418b70(edi_9 + 0xa8, edx_5, ecx_8)
                
                if (eax_38 != 0)
                    int32_t* eax_40
                    eax_40, ecx_8, edx_5 = sub_418bd0(edi_9 + 0xa8, esi_1)
                    
                    if (eax_40 == 0)
                        eax_45 = 0
                    else
                        struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_41 =
                            sub_414e30(eax_40)
                        int32_t* ecx_14 = eax_40[0xe]
                        
                        if (ecx_14 != 0 && eax_41[2] == 0)
                            eax_41[8] = ecx_14
                            eax_41[2] = (**ecx_14)(1)
                        
                        eax_41[3] = eax_40[0xc]
                        eax_41[4] = eax_40
                        eax_45, edx_5, ecx_8 = (*eax_41)->vFunc_11()
                else
                    eax_45 = 0
            
            int32_t var_70_1 = eax_45
            char eax_47
            void* edi_11
            
            if (esi_1 s> 0)
                edi_11 = data_797ddc
                int32_t* var_b4_10 = esi_1
                eax_47, ecx_8, edx_5 = sub_418b70(edi_11 + 0xa8, edx_5, ecx_8)
            
            void* const eax_54
            
            if (esi_1 s> 0 && eax_47 != 0)
                int32_t* eax_49
                eax_49, ecx_8, edx_5 = sub_418bd0(edi_11 + 0xa8, esi_1)
                
                if (eax_49 == 0)
                    eax_54 = nullptr
                else
                    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_50 =
                        sub_414e30(eax_49)
                    int32_t* ecx_17 = eax_49[0xe]
                    
                    if (ecx_17 != 0 && eax_50[2] == 0)
                        eax_50[8] = ecx_17
                        eax_50[2] = (**ecx_17)(1)
                    
                    void** eax_53 = data_797da0
                    eax_50[3] = eax_49[0xc]
                    eax_50[4] = eax_49
                    eax_54, ecx_8, edx_5 = sub_5f7370(*eax_53, eax_50[2]->vFunc_1)
                    
                    if (eax_54 != 0)
                        char eax_56
                        eax_56, edx_5, ecx_8 = (*(**(*(eax_54 + 0xb4) + 4) + 0x34))()
                        
                        if (eax_56 != 0)
                            eax_54, edx_5, ecx_8 = (*(**(*(eax_54 + 0xb4) + 4) + 0x4c))()
                        else
                            eax_54 = nullptr
            else
                eax_54 = nullptr
            
            void* const var_80_1 = eax_54
            char eax_59
            void* edi_15
            
            if (esi_1 s> 0)
                edi_15 = data_797ddc
                int32_t* var_b4_12 = esi_1
                eax_59, ecx_8, edx_5 = sub_418b70(edi_15 + 0xa8, edx_5, ecx_8)
            
            void* const eax_66
            
            if (esi_1 s> 0 && eax_59 != 0)
                int32_t* eax_61
                eax_61, ecx_8, edx_5 = sub_418bd0(edi_15 + 0xa8, esi_1)
                
                if (eax_61 == 0)
                    eax_66 = nullptr
                else
                    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_62 =
                        sub_414e30(eax_61)
                    int32_t* ecx_24 = eax_61[0xe]
                    
                    if (ecx_24 != 0 && eax_62[2] == 0)
                        eax_62[8] = ecx_24
                        eax_62[2] = (**ecx_24)(1)
                    
                    void** eax_65 = data_797da0
                    eax_62[3] = eax_61[0xc]
                    eax_62[4] = eax_61
                    eax_66, ecx_8, edx_5 = sub_5f7370(*eax_65, eax_62[2]->vFunc_1)
                    
                    if (eax_66 != 0)
                        char eax_68
                        eax_68, edx_5, ecx_8 = (*(**(*(eax_66 + 0xb4) + 4) + 0x34))()
                        
                        if (eax_68 != 0)
                            eax_66, edx_5, ecx_8 = (*(**(*(eax_66 + 0xb4) + 4) + 0x50))()
                        else
                            eax_66 = nullptr
            else
                eax_66 = nullptr
            
            void* const var_7c_1 = eax_66
            char eax_72
            
            if (esi_1 s> 0)
                int32_t* var_b4_14 = esi_1
                eax_72, ecx_8, edx_5 = sub_418b70(data_797ddc + 0xa8, edx_5, ecx_8)
            
            int32_t eax_73
            
            if (esi_1 s> 0 && eax_72 != 0)
                ecx_8 = esi_1
                eax_73, edx_5 = sub_683560(ecx_8)
            else
                eax_73 = 0
            
            int32_t var_74_1 = eax_73
            char eax_82
            
            if (esi_1 s> 0)
                int32_t* var_b4_15 = esi_1
                char eax_76
                int32_t* ecx_31
                int32_t edx_20
                eax_76, ecx_31, edx_20 = sub_418b70(data_797ddc + 0xa8, edx_5, ecx_8)
                void var_6c
                void var_68
                void var_64
                
                if (eax_76 != 0)
                    ecx_31, edx_20 = sub_683810(esi_1, &var_6c, &var_68, &var_64)
                int32_t* var_b4_17 = esi_1
                char eax_79
                int32_t* ecx_33
                int32_t edx_21
                eax_79, ecx_33, edx_21 = sub_418b70(data_797ddc + 0xa8, edx_20, ecx_31)
                void var_60
                void var_5c
                void var_58
                
                if (eax_79 != 0)
                    ecx_33, edx_21 = sub_6838b0(esi_1, &var_60, &var_5c, &var_58)
                int32_t* var_b4_19 = esi_1
                eax_82, ecx_8, edx_5 = sub_418b70(data_797ddc + 0xa8, edx_21, ecx_33)
            
            int32_t** eax_83
            
            if (esi_1 s> 0 && eax_82 != 0)
                ecx_8 = esi_1
                eax_83, edx_5 = sub_6835d0(ecx_8)
            else
                eax_83 = nullptr
            
            int32_t** var_50_1 = eax_83
            
            if (esi_1 s> 0)
                int32_t* var_b4_20 = esi_1
                eax_83, ecx_8, edx_5 = sub_418b70(data_797ddc + 0xa8, edx_5, ecx_8)
            
            if (esi_1 s> 0 && eax_83.b != 0)
                ecx_8 = esi_1
                eax_83, edx_5 = sub_683640(ecx_8)
            else
                eax_83.b = 0
            
            char var_4c_1 = eax_83.b
            
            if (esi_1 s> 0)
                int32_t* var_b4_21 = esi_1
                eax_83, ecx_8, edx_5 = sub_418b70(data_797ddc + 0xa8, edx_5, ecx_8)
            
            if (esi_1 s> 0 && eax_83.b != 0)
                ecx_8 = esi_1
                eax_83, edx_5 = sub_6836b0(ecx_8)
            else
                eax_83.b = 0
            
            char var_4b_1 = eax_83.b
            char eax_90
            
            if (esi_1 s> 0)
                int32_t* var_b4_22 = esi_1
                eax_90, ecx_8, edx_5 = sub_418b70(data_797ddc + 0xa8, edx_5, ecx_8)
            
            int32_t eax_91
            
            if (esi_1 s> 0 && eax_90 != 0)
                ecx_8 = esi_1
                eax_91, edx_5 = sub_6839c0(ecx_8)
            else
                eax_91 = 0
            
            int32_t var_48_1 = eax_91
            char eax_93
            void* edi_19
            
            if (esi_1 s> 0)
                edi_19 = data_797ddc
                int32_t* var_b4_23 = esi_1
                eax_93, ecx_8, edx_5 = sub_418b70(edi_19 + 0xa8, edx_5, ecx_8)
            
            int32_t** eax_99
            
            if (esi_1 s> 0 && eax_93 != 0)
                int32_t* eax_95
                eax_95, ecx_8, edx_5 = sub_418bd0(edi_19 + 0xa8, esi_1)
                int32_t** edi_21
                
                if (eax_95 == 0)
                    edi_21 = nullptr
                else
                    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_96
                    eax_96, edx_5 = sub_414e30(eax_95)
                    int32_t* ecx_35 = eax_95[0xe]
                    
                    if (ecx_35 != 0 && eax_96[2] == 0)
                        eax_96[8] = ecx_35
                        int32_t eax_98
                        eax_98, edx_5 = (**ecx_35)(1)
                        eax_96[2] = eax_98
                    
                    ecx_8 = eax_95[0xc]
                    eax_96[3] = ecx_8
                    eax_96[4] = eax_95
                    edi_21 = eax_96[0xa]
                
                eax_99 = edi_21
            else
                eax_99 = nullptr
            
            int32_t** var_44_1 = eax_99
            
            if (esi_1 s> 0)
                int32_t* var_b4_25 = esi_1
                eax_99, ecx_8 = sub_418b70(data_797ddc + 0xa8, edx_5, ecx_8)
            
            if (esi_1 s> 0 && eax_99.b != 0)
                ecx_8 = esi_1
                eax_99 = sub_683b90(ecx_8)
            else
                eax_99.b = 0
            
            char var_40_1 = eax_99.b
            int32_t var_3c_1 = sub_6503a0(esi_1)
            int32_t eax_105
            int32_t edx_23
            eax_105, edx_23 = sub_650430(esi_1)
            int32_t var_38_1 = eax_105
            char eax_107
            void* edi_22
            
            if (esi_1 s> 0)
                edi_22 = data_797ddc
                int32_t* var_b4_26 = esi_1
                eax_107, ecx_8, edx_23 = sub_418b70(edi_22 + 0xa8, edx_23, ecx_8)
            
            int32_t* eax_113
            
            if (esi_1 s> 0 && eax_107 != 0)
                int32_t* eax_109
                eax_109, ecx_8, edx_23 = sub_418bd0(edi_22 + 0xa8, esi_1)
                int32_t* edi_24
                
                if (eax_109 == 0)
                    edi_24 = nullptr
                else
                    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_110
                    eax_110, edx_23 = sub_414e30(eax_109)
                    int32_t* ecx_36 = eax_109[0xe]
                    
                    if (ecx_36 != 0 && eax_110[2] == 0)
                        eax_110[8] = ecx_36
                        int32_t eax_112
                        eax_112, edx_23 = (**ecx_36)(1)
                        eax_110[2] = eax_112
                    
                    ecx_8 = eax_109[0xc]
                    eax_110[3] = ecx_8
                    eax_110[4] = eax_109
                    edi_24 = eax_110[0xb]
                
                eax_113 = edi_24
            else
                eax_113 = nullptr
            
            int32_t* var_34_1 = eax_113
            
            if (esi_1 s> 0)
                int32_t* var_b4_28 = esi_1
                eax_113, ecx_8, edx_23 = sub_418b70(data_797ddc + 0xa8, edx_23, ecx_8)
            
            if (esi_1 s> 0 && eax_113.b != 0)
                ecx_8 = esi_1
                eax_113, edx_23 = sub_683fc0(ecx_8)
            else
                eax_113.b = 0
            
            char var_30_1 = eax_113.b
            char eax_118
            
            if (esi_1 s> 0)
                int32_t* var_b4_29 = esi_1
                eax_118, ecx_8, edx_23 = sub_418b70(data_797ddc + 0xa8, edx_23, ecx_8)
            
            long double x87_r7_1
            
            if (esi_1 s> 0 && eax_118 != 0)
                long double st0_1
                st0_1, ecx_8, edx_23 = sub_683c80(esi_1)
                x87_r7_1 = st0_1
            else
                x87_r7_1 = float.t(0)
            
            var_9c = fconvert.s(x87_r7_1)
            float var_2c_1 = fconvert.s(fconvert.t(var_9c))
            char eax_121
            
            if (esi_1 s> 0)
                int32_t* var_b4_30 = esi_1
                eax_121, ecx_8, edx_23 = sub_418b70(data_797ddc + 0xa8, edx_23, ecx_8)
            
            long double x87_r7_3
            
            if (esi_1 s> 0 && eax_121 != 0)
                long double st0_2
                st0_2, ecx_8, edx_23 = sub_683d10(esi_1)
                x87_r7_3 = st0_2
            else
                x87_r7_3 = float.t(0)
            
            var_9c = fconvert.s(x87_r7_3)
            float var_28_1 = fconvert.s(fconvert.t(var_9c))
            char eax_124
            
            if (esi_1 s> 0)
                int32_t* var_b4_31 = esi_1
                eax_124, ecx_8, edx_23 = sub_418b70(data_797ddc + 0xa8, edx_23, ecx_8)
            
            long double x87_r7_5
            
            if (esi_1 s> 0 && eax_124 != 0)
                long double st0_3
                st0_3, ecx_8, edx_23 = sub_683da0(esi_1)
                x87_r7_5 = st0_3
            else
                x87_r7_5 = float.t(0)
            
            var_9c = fconvert.s(x87_r7_5)
            float var_24_1 = fconvert.s(fconvert.t(var_9c))
            char eax_127
            
            if (esi_1 s> 0)
                int32_t* var_b4_32 = esi_1
                eax_127, ecx_8, edx_23 = sub_418b70(data_797ddc + 0xa8, edx_23, ecx_8)
            
            long double x87_r7_7
            
            if (esi_1 s> 0 && eax_127 != 0)
                long double st0_4
                st0_4, ecx_8, edx_23 = sub_683e30(esi_1)
                x87_r7_7 = st0_4
            else
                x87_r7_7 = float.t(0)
            
            var_9c = fconvert.s(x87_r7_7)
            float var_20_1 = fconvert.s(fconvert.t(var_9c))
            char eax_130
            
            if (esi_1 s> 0)
                int32_t* var_b4_33 = esi_1
                eax_130 = sub_418b70(data_797ddc + 0xa8, edx_23, ecx_8)
            
            long double x87_r7_9
            
            if (esi_1 s> 0 && eax_130 != 0)
                x87_r7_9 = sub_683ec0(esi_1)
            else
                x87_r7_9 = float.t(0)
            
            int32_t edi_25 = arg2[1]
            var_9c = fconvert.s(x87_r7_9)
            edx = &var_90
            float var_1c_1 = fconvert.s(fconvert.t(var_9c))
            int32_t eax_131
            
            if (&var_90 u< edi_25)
                eax_131 = *arg2
            
            int32_t edi_26
            
            if (&var_90 u>= edi_25 || eax_131 u> &var_90)
                if (edi_25 == arg2[2])
                    edx = sub_63c7f0(arg2)
                
                edi_26 = arg2[1]
                
                if (edi_26 != 0)
                    __builtin_memcpy(edi_26, &var_90, 0x8c)
            else
                void* ecx_42 = &var_90 - eax_131
                int32_t eax_132
                void* edx_25
                edx_25:eax_132 = muls.dp.d(0xea0ea0eb, ecx_42)
                edx = (edx_25 + ecx_42) s>> 7
                
                if (edi_25 == arg2[2])
                    edx = sub_63c7f0(arg2)
                
                edi_26 = arg2[1]
                
                if (edi_26 != 0)
                    __builtin_memcpy(edi_26, ecx_42 s/ 0x8c * 0x8c + *arg2, 0x8c)
            arg2[1] += 0x8c
        
        result = result_1 + 1
        result_1 = result
        
        if (result s>= result_2)
            break
        
        ecx = arg3

return result
