// 函数: sub_694260
// 地址: 0x694260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_72842e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_cc
int32_t eax_2 = data_78c474 ^ &var_cc
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    int32_t* var_98_1 = &arg2[0xd]
    int32_t var_c_1 = 0
    void* var_38
    bool var_c9_1 = sub_405d70(sub_426250(&var_38, &arg2[0xd], &arg2[0x14]), &arg1[0x16]) == 0
    int32_t var_c_2 = 0xffffffff
    int32_t var_24
    
    if (var_24 u>= 0x10)
        void* var_e0_2 = var_38
        sub_6b4d5b()
    
    if (var_c9_1 != 0)
        sub_401270(var_98_1, nullptr, 0x72ce2e)
        sub_401180(&arg2[0x14], 0xffffffff, &arg1[0x16], 0)
    
    int32_t eax_11 = (*(*arg1 + 0x24))(eax_4)
    int32_t eax_13 = (*(*arg1 + 0x28))()
    int32_t eax_15 = (*(*arg1 + 0x2c))()
    int32_t ecx_6 = arg1[7]
    int32_t edx_5 = arg1[8]
    int32_t var_8c_1 = eax_15
    eax_15.b = arg1[9].b
    char var_c9_2 = eax_15.b
    int32_t eax_16 = *(*arg2 + 0x10)
    int32_t var_84
    __builtin_memcpy(&var_84, &arg1[0xa], 0x30)
    char var_54
    int32_t var_40
    int32_t* edi_2
    
    if (eax_16() == 0)
        edi_2 = arg1
    else
        var_40 = 0xf
        int32_t var_44_1 = 0
        var_54 = 0
        int32_t var_c_3 = 1
        int32_t eax_18 = var_84
        int128_t* var_e0_3
        void* edi_1
        
        if (eax_18 == 0)
            var_e0_3 = &data_72fbc0
            edi_1 = 0xd
        else if (eax_18 == 1)
            var_e0_3 = &data_72fbd0
            edi_1 = 9
        else if (eax_18 == 0x100)
            var_e0_3 = &data_72fbdc
            edi_1 = 0xc
        else
            var_e0_3 = &data_72fbec
            edi_1 = 0xd
        
        sub_401270(&var_54, edi_1, var_e0_3)
        int32_t var_80
        sub_697b10(var_80, &var_54)
        sub_697ca0(&var_38)
        edi_2 = arg1
        var_c_3.b = 2
        int32_t var_28
        
        if (var_28 != 0)
            sub_6958e0(arg2, edi_2, &var_38)
        
        sub_5d1810()
        
        if (var_24 u>= 0x10)
            void* var_e0_6 = var_38
            sub_6b4d5b()
        
        int32_t var_c_4 = 0xffffffff
        var_24 = 0xf
        int32_t var_28_1 = 0
        var_38.b = 0
        
        if (var_40 u>= 0x10)
            int32_t var_e0_7 = var_54.d
            sub_6b4d5b()
    
    int32_t var_80_1 = edi_2[8] - arg2[3]
    
    if (sub_5e0140(&var_84, &edi_2[0xa]) == 0)
        __builtin_memcpy(&arg1[0xa], &var_84, 0x30)
        arg1[0x28].b = 1
        edi_2 = arg1
    
    void* var_c4 = nullptr
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** var_a0 = nullptr
    sub_6951a0(&var_c4, &var_a0, &edi_2[0xa], var_98_1)
    void* esi_5 = var_c4
    
    if (arg2[0x1b] + esi_5 s< 0)
        int32_t eax_30
        int32_t edx_13
        edx_13:eax_30 = sx.q(arg2[3])
        arg2[0x1b] = ((eax_30 - edx_13) s>> 1) - esi_5
    
    int32_t eax_34 = edi_2[7]
    
    if (eax_34 - arg2[3] s< arg2[0x1b] + esi_5 + 1)
        arg2[0x1b] = eax_34 - arg2[3] - esi_5 - 1
    
    bool cond:1_1 = arg2[0x1b] s< 0
    var_a0 = nullptr
    void* eax_38 = &arg2[0x1b]
    
    if (not(cond:1_1))
        eax_38 = &var_a0
    
    void* esi_6 = arg2[5]
    arg2[0x1b] = *eax_38
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_41 = sub_414e30(esi_6)
    int32_t* ecx_12 = *(esi_6 + 0x38)
    var_a0 = eax_41
    
    if (ecx_12 != 0 && eax_41[2] == 0)
        eax_41[8] = ecx_12
        eax_41[2] = (**ecx_12)(1)
    
    eax_41[3] = *(esi_6 + 0x30)
    eax_41[4] = esi_6
    void* edi_7 = arg2[6]
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_46 = sub_414e30(edi_7)
    int32_t* ecx_13 = *(edi_7 + 0x38)
    
    if (ecx_13 != 0 && eax_46[2] == 0)
        eax_46[8] = ecx_13
        eax_46[2] = (**ecx_13)(1)
    
    eax_46[3] = *(edi_7 + 0x30)
    eax_46[4] = edi_7
    void* edi_8 = arg2[7]
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_51 = sub_414e30(edi_8)
    int32_t* ecx_15 = *(edi_8 + 0x38)
    
    if (ecx_15 != 0 && eax_51[2] == 0)
        eax_51[8] = ecx_15
        eax_51[2] = (**ecx_15)(1)
    
    eax_51[3] = *(edi_8 + 0x30)
    eax_51[4] = edi_8
    void* edi_9 = arg2[8]
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_56 = sub_414e30(edi_9)
    int32_t* ecx_16 = *(edi_9 + 0x38)
    
    if (ecx_16 != 0 && eax_56[2] == 0)
        eax_56[8] = ecx_16
        eax_56[2] = (**ecx_16)(1)
    
    eax_56[3] = *(edi_9 + 0x30)
    int32_t* eax_60 = data_797da0
    eax_56[4] = edi_9
    void* eax_61 = sub_5f7370(*eax_60, eax_51[2]->vFunc_1)
    
    if (eax_61 != 0)
        void* eax_62 = *(eax_61 + 0xc)
        
        if (*(eax_62 + 0x24) != 0)
            *(eax_62 + 0x24) = 0
            *(eax_62 + 0xc) = 1
    
    int32_t eax_64
    int32_t edx_22
    edx_22:eax_64 = sx.q(arg2[3])
    int32_t eax_66 = (eax_64 - edx_22) s>> 1
    int32_t eax_68 = *(*arg2 + 0x10)
    void* var_bc = arg2[0x1b] + eax_66 + var_c4 + eax_11
    void* const var_c8
    
    if (eax_68() != 0)
        int32_t eax_71
        int32_t edx_24
        edx_24:eax_71 = sx.q(arg2[3])
        int32_t eax_73 = (eax_71 - edx_24) s>> 1
        int32_t vFunc_1 = eax_51[2]->vFunc_1
        void* esi_12 = arg2[0x1b] + eax_73 + var_c4 + eax_11
        var_c8 = eax_73 + eax_13
        void* eax_75 = sub_5f7370(*data_797da0, vFunc_1)
        
        if (eax_75 != 0)
            void* eax_76 = *(eax_75 + 0xc)
            
            if (*(eax_76 + 0x14) != esi_12 || *(eax_76 + 0x18) != var_c8)
                void* const edx_27 = var_c8
                *(eax_76 + 0x14) = esi_12
                *(eax_76 + 0x18) = edx_27
                *(eax_76 + 0xc) = 1
        
        if ((*(*arg2 + 0x10))() != 0 && mods.dp.d(sx.q(arg2[0xb]), 0x3e8) s< 0x1f4)
            void* eax_83 = sub_5f7370(*data_797da0, eax_51[2]->vFunc_1)
            
            if (eax_83 != 0)
                void* eax_84 = *(eax_83 + 0xc)
                
                if (*(eax_84 + 0x24) != var_c9_2)
                    *(eax_84 + 0x24) = var_c9_2
                    *(eax_84 + 0xc) = 1
        
        sub_697c10(var_bc, eax_66 + eax_13)
    
    void* esi_13 = &arg2[0xa]
    void* var_b4
    
    if (arg2[0xa] == 0xffffffff)
        void* eax_134 = sub_5f7370(*data_797da0, eax_46[2]->vFunc_1)
        
        if (eax_134 != 0)
            void* eax_135 = *(eax_134 + 0xc)
            
            if (*(eax_135 + 0x24) != 0)
                *(eax_135 + 0x24) = 0
                *(eax_135 + 0xc) = 1
    else
        void* edi_12 = arg2[0x11]
        var_c8 = edi_12
        sub_426250(&var_38, var_98_1, &arg2[0x14])
        int32_t var_c_5 = 3
        void** eax_87 = &var_c8
        
        if (edi_12 s>= *esi_13)
            eax_87 = esi_13
        
        var_c4 = *eax_87
        
        if (*esi_13 s< edi_12)
            esi_13 = &var_c8
        
        int32_t eax_88 = *esi_13
        char* eax_89 = sub_401ec0(&var_38, &var_54, 0, var_c4)
        var_c_5.b = 4
        var_c8 = nullptr
        var_bc = nullptr
        sub_6951a0(&var_c8, &var_bc, &arg1[0xa], eax_89)
        int32_t eax_93
        int32_t edx_35
        edx_35:eax_93 = sx.q(arg2[3])
        var_c_5.b = 3
        void* edi_17 = ((eax_93 - edx_35) s>> 1) + arg2[0x1b] + var_c8 + eax_11
        var_b4 = edi_17
        
        if (var_40 u>= 0x10)
            int32_t var_e0_13 = var_54.d
            sub_6b4d5b()
        
        void* ecx_38 = var_c4
        int32_t* eax_97 = sub_401ec0(&var_38, &var_54, ecx_38, eax_88 - ecx_38)
        var_c_5.b = 5
        var_c8 = nullptr
        var_bc = nullptr
        sub_6951a0(&var_c8, &var_bc, &arg1[0xa], eax_97)
        var_c_5.b = 3
        
        if (var_40 u>= 0x10)
            int32_t var_e0_16 = var_54.d
            sub_6b4d5b()
        
        int32_t eax_102
        int32_t edx_38
        edx_38:eax_102 = sx.q(arg2[3])
        int32_t eax_104 = (eax_102 - edx_38) s>> 1
        void* ecx_41 = eax_104 + eax_11
        var_bc = ecx_41
        var_40 = 0xf
        int32_t var_44_2 = 0
        var_54 = 0
        void** ecx_42 = &var_b4
        
        if (ecx_41 s>= edi_17)
            ecx_42 = &var_bc
        
        void* edi_18 = edi_17 + var_c8
        var_c4 = *ecx_42
        void* ecx_46 = ecx_6 - eax_104 + eax_11
        var_b4 = edi_18
        var_bc = ecx_46
        void** eax_105 = &var_b4
        
        if (edi_18 s>= ecx_46)
            eax_105 = &var_bc
        
        int32_t vFunc_1_1 = eax_46[2]->vFunc_1
        var_b4 = *eax_105
        void* eax_107 = sub_5f7370(*data_797da0, vFunc_1_1)
        int32_t var_a8_3
        
        if (eax_107 != 0)
            int32_t eax_111
            
            if ((*(**(*(eax_107 + 0xb4) + 4) + 0x34))() != 0)
                eax_111 = (*(**(*(eax_107 + 0xb4) + 4) + 0x50))()
            else
                eax_111 = 0
            
            var_a8_3 = eax_111
        else
            var_a8_3 = 0
        
        int32_t eax_114
        int32_t edx_44
        edx_44:eax_114 = sx.q(arg2[3])
        int32_t esi_18 = ((eax_114 - edx_44) s>> 1) + eax_13
        void* eax_117 = sub_5f7370(*data_797da0, eax_46[2]->vFunc_1)
        
        if (eax_117 != 0)
            void* eax_118 = *(eax_117 + 0xc)
            void* ecx_54 = var_c4
            
            if (*(eax_118 + 0x14) != ecx_54 || *(eax_118 + 0x18) != esi_18)
                *(eax_118 + 0x14) = ecx_54
                *(eax_118 + 0x18) = esi_18
                *(eax_118 + 0xc) = 1
        
        void* eax_119 = sub_5f7370(*data_797da0, eax_46[2]->vFunc_1)
        
        if (eax_119 != 0)
            void* eax_120 = *(eax_119 + 0xc)
            
            if (*(eax_120 + 0x24) != var_c9_2)
                *(eax_120 + 0x24) = var_c9_2
                *(eax_120 + 0xc) = 1
        
        void* ecx_59 = *data_797da0
        var_b4 -= var_c4
        void* const edi_23 = sub_5f7370(ecx_59, eax_46[2]->vFunc_1)
        var_c8 = edi_23
        
        if (edi_23 != 0)
            if ((*(**(*(edi_23 + 0xb4) + 4) + 8))() != 8)
                (*(**(*(edi_23 + 0xb4) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_129 =
                    operator new(0x4c)
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_130
                
                if (eax_129 == 0)
                    eax_130 = nullptr
                else
                    eax_130 = sub_5e0230(*(edi_23 + 0x3c), *(edi_23 + 0x38), *(edi_23 + 0x34), 
                        *(edi_23 + 0xc) + 0x1b4, eax_129)
                    edi_23 = var_c8
                
                *(*(edi_23 + 0xb4) + 4) = eax_130
                *(edi_23 + 0x10) = 1
            
            void* eax_131 = *(*(edi_23 + 0xb4) + 4)
            
            if (eax_131 != 0)
                void* edx_52 = var_b4
                
                if (edx_52 s>= 0 && var_a8_3 s>= 0)
                    *(eax_131 + 0x38) = 0
                    *(eax_131 + 0x3c) = 0
                    *(eax_131 + 0x40) = edx_52
                    *(eax_131 + 0x44) = var_a8_3
                    *(eax_131 + 0x48) = 1
        
        int32_t var_c_6 = 0xffffffff
        
        if (var_24 u>= 0x10)
            void* var_e0_18 = var_38
            sub_6b4d5b()
        
        var_24 = 0xf
        int32_t var_28_2 = 0
        var_38.b = 0
    
    int32_t eax_136 = arg2[3]
    int32_t esi_22 = arg2[0x1b]
    var_c8 = edx_5 - eax_136
    int32_t* eax_137 = data_797da0
    var_c4 = ecx_6 - eax_136
    int32_t esi_23 = neg.d(esi_22)
    void* eax_138
    void* ecx_73
    eax_138, ecx_73 = sub_5f7370(*eax_137, eax_56[2]->vFunc_1)
    
    if (eax_138 != 0)
        int32_t eax_140
        eax_140, ecx_73 = (*(**(*(eax_138 + 0xb4) + 4) + 8))()
        
        if (eax_140 != 3)
            (*(**(*(eax_138 + 0xb4) + 4) + 4))()
            void* eax_142 = operator new(0x98)
            var_b4 = eax_142
            int32_t var_c_7 = 0x11
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_143
            
            if (eax_142 == 0)
                eax_143 = nullptr
            else
                eax_143 = sub_5fc2d0(eax_142, *(eax_138 + 0x34), *(eax_138 + 0x3c))
            
            int32_t var_c_8 = 0xffffffff
            ecx_73 = *(eax_138 + 0xb4)
            *(ecx_73 + 4) = eax_143
            *(eax_138 + 0x10) = 1
        
        void* edx_58 = *(eax_138 + 0xb4)
        void* edi_29 = *(edx_58 + 4)
        void* var_9c_3 = edi_29
        
        if (edi_29 != 0 && var_c4 s>= 0 && var_c8 s>= 0 && esi_23 s>= 0)
            void* var_4c_1 = var_c4
            void* const var_48_1 = var_c8
            var_54.d = esi_23
            int32_t var_50_1 = 0
            char eax_146
            eax_146, ecx_73 = sub_5f7e00(&var_54, edx_58, edi_29 + 0x84)
            
            if (eax_146 == 0)
                void* edx_59 = var_c4
                void* const eax_147 = var_c8
                ecx_73 = edi_29
                *(edi_29 + 0x84) = esi_23
                *(edi_29 + 0x88) = 0
                *(edi_29 + 0x8c) = edx_59
                *(edi_29 + 0x90) = eax_147
                *(ecx_73 + 0x95) = 1
    
    sub_41b0f0(ecx_73, &var_84, eax_56, 1)
    int32_t* eax_150 = sub_426250(&var_38, var_98_1, &arg2[0x14])
    int32_t var_c_9 = 0x18
    sub_698020(eax_56[2]->vFunc_1, eax_150, 1)
    int32_t var_c_10 = 0xffffffff
    
    if (var_24 u>= 0x10)
        void* var_e0_21 = var_38
        sub_6b4d5b()
    
    int32_t eax_153
    int32_t edx_63
    edx_63:eax_153 = sx.q(arg2[3])
    int32_t eax_155 = (eax_153 - edx_63) s>> 1
    int32_t edx_64 = eax_155 + eax_13
    int32_t esi_26 = eax_155 + eax_11
    int32_t var_24_1 = 0xf
    int32_t var_28_3 = 0
    var_38.b = 0
    void* eax_157 = sub_5f7370(*data_797da0, eax_56[2]->vFunc_1)
    
    if (eax_157 != 0)
        void* eax_158 = *(eax_157 + 0xc)
        
        if (*(eax_158 + 0x14) != esi_26 || *(eax_158 + 0x18) != edx_64)
            *(eax_158 + 0x14) = esi_26
            *(eax_158 + 0x18) = edx_64
            *(eax_158 + 0xc) = 1
    
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** esi_27 = var_a0
    void* eax_160 = sub_5f7370(*data_797da0, esi_27[2]->vFunc_1)
    
    if (eax_160 != 0)
        void* eax_161 = *(eax_160 + 0xc)
        
        if (*(eax_161 + 0x14) != eax_11 || *(eax_161 + 0x18) != eax_13)
            *(eax_161 + 0x14) = eax_11
            *(eax_161 + 0x18) = eax_13
            *(eax_161 + 0xc) = 1
    
    void* eax_163 = sub_5f7370(*data_797da0, esi_27[2]->vFunc_1)
    
    if (eax_163 != 0)
        void* eax_164 = *(eax_163 + 0xc)
        
        if (*(eax_164 + 0x1c) != var_8c_1)
            *(eax_164 + 0x1c) = var_8c_1
            *(eax_164 + 0xc) = 1
    
    void* eax_166 = sub_5f7370(*data_797da0, var_a0[2]->vFunc_1)
    
    if (eax_166 != 0)
        void* eax_167 = *(eax_166 + 0xc)
        
        if (*(eax_167 + 0x24) != var_c9_2)
            *(eax_167 + 0x24) = var_c9_2
            *(eax_167 + 0xc) = 1
    
    void* eax_169 = sub_5f7370(*data_797da0, eax_46[2]->vFunc_1)
    
    if (eax_169 != 0)
        void* eax_170 = *(eax_169 + 0xc)
        
        if (*(eax_170 + 0x1c) != var_8c_1 + 1)
            *(eax_170 + 0x1c) = var_8c_1 + 1
            *(eax_170 + 0xc) = 1
    
    void* eax_172 = sub_5f7370(*data_797da0, eax_56[2]->vFunc_1)
    
    if (eax_172 != 0)
        void* eax_173 = *(eax_172 + 0xc)
        
        if (*(eax_173 + 0x1c) != var_8c_1 + 2)
            *(eax_173 + 0x1c) = var_8c_1 + 2
            *(eax_173 + 0xc) = 1
    
    int32_t eax_175
    int32_t edx_73
    edx_73:eax_175 = sx.q(arg2[3])
    int32_t ebx_3 = ((eax_175 - edx_73) s>> 1) + var_8c_1
    void* eax_178 = sub_5f7370(*data_797da0, eax_51[2]->vFunc_1)
    
    if (eax_178 != 0)
        void* eax_179 = *(eax_178 + 0xc)
        
        if (*(eax_179 + 0x1c) != ebx_3)
            *(eax_179 + 0x1c) = ebx_3
            *(eax_179 + 0xc) = 1
    
    void* eax_181 = sub_5f7370(*data_797da0, eax_56[2]->vFunc_1)
    
    if (eax_181 != 0)
        void* eax_182 = *(eax_181 + 0xc)
        
        if (*(eax_182 + 0x24) != var_c9_2)
            *(eax_182 + 0x24) = var_c9_2
            *(eax_182 + 0xc) = 1
    
    int32_t var_c_11 = 0x19
    result = sub_693180(arg1, sub_426250(&var_54, var_98_1, &arg2[0x14]))
    
    if (var_40 u>= 0x10)
        int32_t var_e0_24 = var_54.d
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_cc)
return result
