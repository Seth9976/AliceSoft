// 函数: sub_68f470
// 地址: 0x68f470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728545
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_13c
int32_t eax_2 = data_78c474 ^ &var_13c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_138 = 0

if (arg2 != 0)
    int32_t eax_6 = arg2[0xb]
    int32_t* var_2c
    sub_426250(&var_2c, &arg1[0x18], &arg1[0x1f])
    int32_t var_4 = 0
    int32_t* ecx_2 = var_2c
    int32_t var_18
    
    if (var_18 u< 0x10)
        ecx_2 = &var_2c
    
    int32_t edi_1 = arg2[0x1a]
    int32_t var_1c
    int32_t eax_8 = var_1c
    
    if (edi_1 u< eax_8)
        eax_8 = edi_1
    
    int32_t* edx_1
    
    if (arg2[0x1b] u< 0x10)
        edx_1 = &arg2[0x16]
    else
        edx_1 = arg2[0x16]
    
    int32_t eax_9 = sub_402320(eax_8, edx_1, ecx_2, eax_8)
    bool cond:0_1 = eax_9 == 0
    
    if (eax_9 == 0)
        if (edi_1 u>= var_1c)
            int32_t edx_2
            edx_2.b = edi_1 != var_1c
            eax_9 = edx_2
        else
            eax_9 = 0xffffffff
        
        cond:0_1 = eax_9 == 0
    
    eax_9.b = cond:0_1
    eax_9.b = eax_9.b == 0
    
    if (eax_9.b != 0)
        sub_401270(&arg1[0x18], nullptr, 0x72cf3b)
        sub_401180(&arg1[0x1f], 0xffffffff, &arg2[0x16], 0)
    
    int32_t eax_13 = (*arg2)->__offset(0x24).d(eax_4)
    int32_t eax_15 = (*arg2)->__offset(0x28).d()
    int32_t eax_17 = (*arg2)->__offset(0x2c).d()
    int32_t ecx_7 = arg2[8]
    char edx_6 = arg2[9].b
    int32_t eax_18 = arg2[7]
    int32_t eax_19 = arg2[0x1e]
    int32_t ecx_8 = arg2[0x1f]
    int32_t edx_7 = arg2[0x20]
    char var_d4
    int32_t var_c0
    char var_9c
    int32_t var_88
    
    if ((*(*arg1 + 0x10))() != 0)
        var_c0 = 0xf
        int32_t var_c4_1 = 0
        var_d4 = 0
        var_4.b = 1
        int32_t eax_23 = arg2[0xa]
        int128_t* var_154_3
        void* edi_2
        
        if (eax_23 == 0)
            var_154_3 = &data_72fc00
            edi_2 = 0xd
        else if (eax_23 == 1)
            var_154_3 = &data_72fc10
            edi_2 = 9
        else if (eax_23 == 0x100)
            var_154_3 = &data_72fc1c
            edi_2 = 0xc
        else
            var_154_3 = &data_72fc2c
            edi_2 = 0xd
        
        sub_401270(&var_d4, edi_2, var_154_3)
        sub_697b10(arg2[0xb], &var_d4)
        sub_697ca0(&var_9c)
        var_4.b = 2
        int32_t var_8c
        
        if (var_8c != 0)
            sub_691220(arg1, arg2, &var_9c)
        
        sub_5d1810()
        
        if (var_88 u>= 0x10)
            int32_t var_154_6 = var_9c.d
            sub_6b4d5b()
        
        var_4.b = 0
        var_88 = 0xf
        int32_t var_8c_1 = 0
        var_9c = 0
        
        if (var_c0 u>= 0x10)
            int32_t var_154_7 = var_d4.d
            sub_6b4d5b()
    
    int32_t var_f4 = 0
    int32_t var_11c = 0
    sub_691440(&arg1[0x18], &var_11c, arg2, &var_f4)
    int32_t var_e4 = 0
    int32_t var_ec = 0
    sub_6904e0(&var_e4, &var_ec, &arg2[0xa], &var_2c)
    void* esi_3 = arg1[4]
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_30 = sub_414e30(esi_3)
    int32_t* ecx_14 = *(esi_3 + 0x38)
    
    if (ecx_14 != 0 && eax_30[2] == 0)
        eax_30[8] = ecx_14
        eax_30[2] = (**ecx_14)(1)
    
    eax_30[3] = *(esi_3 + 0x30)
    eax_30[4] = esi_3
    void* esi_4 = arg1[5]
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_35 = sub_414e30(esi_4)
    int32_t* ecx_15 = *(esi_4 + 0x38)
    
    if (ecx_15 != 0 && eax_35[2] == 0)
        eax_35[8] = ecx_15
        eax_35[2] = (**ecx_15)(1)
    
    eax_35[3] = *(esi_4 + 0x30)
    eax_35[4] = esi_4
    void* esi_5 = arg1[6]
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_40 = sub_414e30(esi_5)
    int32_t* ecx_16 = *(esi_5 + 0x38)
    
    if (ecx_16 != 0 && eax_40[2] == 0)
        eax_40[8] = ecx_16
        eax_40[2] = (**ecx_16)(1)
    
    eax_40[3] = *(esi_5 + 0x30)
    eax_40[4] = esi_5
    void* esi_6 = arg1[7]
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_45 = sub_414e30(esi_6)
    int32_t* ecx_17 = *(esi_6 + 0x38)
    
    if (ecx_17 != 0 && eax_45[2] == 0)
        eax_45[8] = ecx_17
        eax_45[2] = (**ecx_17)(1)
    
    eax_45[3] = *(esi_6 + 0x30)
    eax_45[4] = esi_6
    struct guiengine::CGUIModel::guiengine::CGUIVScrollbarModel::VTable** eax_49 =
        sub_414910(arg1[8])
    struct guiengine::CGUIModel::guiengine::CGUIHScrollbarModel::VTable** eax_50 =
        sub_4149d0(arg1[9])
    char var_b8
    int32_t var_a4
    char* eax_52
    int32_t ebx_1
    
    if (eax_49 == 0)
        int32_t var_c4_2 = 0
        var_c0 = 0xf
        var_d4 = 0
        sub_401270(&var_d4, nullptr, 0x72cf59)
        eax_52 = &var_d4
        int32_t var_4_1 = 4
        ebx_1 = 2
    else
        var_a4 = 0xf
        int32_t var_a8_1 = 0
        var_b8 = 0
        sub_401180(&var_b8, 0xffffffff, &eax_49[0x2f], 0)
        eax_52 = &var_b8
        var_4.b = 3
        ebx_1 = 1
    
    int32_t var_138_1 = ebx_1
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    sub_401180(&var_64, 0xffffffff, eax_52, 0)
    int32_t var_4_2 = 5
    
    if ((ebx_1.b & 2) != 0)
        ebx_1 &= 0xfffffffd
        int32_t var_138_2 = ebx_1
        
        if (var_c0 u>= 0x10)
            int32_t var_154_10 = var_d4.d
            sub_6b4d5b()
        
        int32_t var_c0_1 = 0xf
        int32_t var_c4_3 = 0
        var_d4 = 0
    
    var_4_2.b = 7
    
    if ((ebx_1.b & 1) != 0)
        ebx_1 &= 0xfffffffe
        int32_t var_138_3 = ebx_1
        
        if (var_a4 u>= 0x10)
            int32_t var_154_11 = var_b8.d
            sub_6b4d5b()
        
        var_a4 = 0xf
        int32_t var_a8_2 = 0
        var_b8 = 0
    
    struct guiengine::CGUIModel::guiengine::CGUIHScrollbarModel::VTable** edi_3 = eax_50
    char var_80
    int32_t var_6c
    char* eax_54
    int32_t ebx_2
    
    if (edi_3 == 0)
        var_6c = 0xf
        int32_t var_70_1 = 0
        var_80 = 0
        sub_401270(&var_80, nullptr, 0x72cf5a)
        edi_3 = eax_50
        eax_54 = &var_80
        ebx_2 = ebx_1 | 8
        int32_t var_4_3 = 9
    else
        var_88 = 0xf
        int32_t var_8c_2 = 0
        var_9c = 0
        sub_401180(&var_9c, 0xffffffff, &edi_3[0x2f], 0)
        eax_54 = &var_9c
        var_4_2.b = 8
        ebx_2 = ebx_1 | 4
    
    int32_t var_138_4 = ebx_2
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_401180(&var_48, 0xffffffff, eax_54, 0)
    int32_t var_4_4 = 0xa
    
    if ((ebx_2.b & 8) != 0)
        ebx_2 &= 0xfffffff7
        
        if (var_6c u>= 0x10)
            int32_t var_154_12 = var_80.d
            sub_6b4d5b()
        
        int32_t var_6c_1 = 0xf
        int32_t var_70_2 = 0
        var_80 = 0
    
    var_4_4.b = 0xc
    
    if ((ebx_2.b & 4) != 0)
        if (var_88 u>= 0x10)
            int32_t var_154_13 = var_9c.d
            sub_6b4d5b()
        
        int32_t var_88_1 = 0xf
        int32_t var_8c_3 = 0
        var_9c = 0
    
    int32_t eax_55 = sub_699840(&var_64)
    int32_t var_108_1
    int32_t esi_9
    
    if (eax_55 != 0)
        var_108_1 = eax_55
        esi_9 = eax_55
    else
        esi_9 = arg1[0x11]
        var_108_1 = esi_9
    
    int32_t eax_56 = sub_699900(&var_48)
    
    if (eax_56 == 0)
        eax_56 = arg1[0x11]
    
    if (eax_49[0xa] != esi_9)
        eax_49[0xa] = esi_9
        eax_49[0x36].b = 1
    
    if (eax_49[0xc] != esi_9)
        eax_49[0xc] = esi_9
        eax_49[0x36].b = 1
    
    if (eax_49[0xd] != esi_9)
        eax_49[0xd] = esi_9
        eax_49[0x36].b = 1
    
    if (eax_49[6] != eax_17 + 4)
        eax_49[6] = eax_17 + 4
        eax_49[0x36].b = 1
    
    int32_t ecx_30 = ecx_7 - eax_56
    
    if (eax_49[0xb] != ecx_30)
        eax_49[0xb] = ecx_30
        eax_49[0x36].b = 1
    
    int32_t eax_59 = eax_18 - esi_9
    int32_t eax_60 = eax_59 + eax_13
    
    if (eax_49[4] != eax_60 || eax_49[5] != eax_15)
        eax_49[4] = eax_60
        eax_49[5] = eax_15
        eax_49[0x36].b = 1
    
    int32_t eax_63
    int32_t edx_20
    edx_20:eax_63 = sx.q(var_ec)
    int32_t ecx_31
    ecx_31.b = mods.dp.d(edx_20:eax_63, eax_6) != 0
    int32_t eax_65 = divs.dp.d(edx_20:eax_63, eax_6) + ecx_31
    
    if (eax_49[0xe] != eax_65)
        eax_49[0xe] = eax_65
        eax_49[0x36].b = 1
    
    int32_t temp0_2 = divs.dp.d(sx.q(ecx_7 - arg1[0x12] * 2 - esi_9), eax_6)
    
    if (eax_49[0xf] != temp0_2)
        eax_49[0xf] = temp0_2
        eax_49[0x36].b = 1
    
    sub_696460(eax_49, &arg2[0x2f])
    
    if (edi_3[0xb] != eax_56)
        edi_3[0xb] = eax_56
        edi_3[0x36].b = 1
    
    if (edi_3[0xc] != eax_56)
        edi_3[0xc] = eax_56
        edi_3[0x36].b = 1
    
    if (edi_3[0xd] != eax_56)
        edi_3[0xd] = eax_56
        edi_3[0x36].b = 1
    
    if (edi_3[6] != eax_17 + 4)
        edi_3[6] = eax_17 + 4
        edi_3[0x36].b = 1
    
    if (edi_3[0xa] != eax_59)
        edi_3[0xa] = eax_59
        edi_3[0x36].b = 1
    
    int32_t eax_76 = ecx_30 + eax_15
    
    if (edi_3[4] != eax_13 || edi_3[5] != eax_76)
        edi_3[4] = eax_13
        edi_3[5] = eax_76
        edi_3[0x36].b = 1
    
    int32_t eax_78
    int32_t edx_26
    edx_26:eax_78 = sx.q(var_e4)
    int32_t ecx_34
    ecx_34.b = mods.dp.d(edx_26:eax_78, eax_6) != 0
    int32_t eax_80 = divs.dp.d(edx_26:eax_78, eax_6) + ecx_34
    
    if (edi_3[0xe] != eax_80)
        edi_3[0xe] = eax_80
        edi_3[0x36].b = 1
    
    int32_t temp0_4 = divs.dp.d(sx.q(eax_18 - arg1[0x12] * 2 - eax_56), eax_6)
    
    if (edi_3[0xf] != temp0_4)
        edi_3[0xf] = temp0_4
        edi_3[0x36].b = 1
    
    sub_685820(edi_3, &arg2[0x28])
    void* eax_88 = sub_5f7370(*data_797da0, eax_40[2]->vFunc_1)
    
    if (eax_88 != 0)
        void* eax_89 = *(eax_88 + 0xc)
        
        if (*(eax_89 + 0x24) != 0)
            *(eax_89 + 0x24) = 0
            *(eax_89 + 0xc) = 1
    
    int32_t eax_90 = arg1[0x12]
    int32_t esi_15 = eax_90 - eax_50[0x10] * eax_6 + var_f4 + eax_13
    int32_t eax_93 = eax_90 - eax_49[0x10] * eax_6 + var_11c + eax_15
    
    if ((*(*arg1 + 0x10))() != 0)
        void* eax_97 = sub_5f7370(*data_797da0, eax_40[2]->vFunc_1)
        
        if (eax_97 != 0)
            void* eax_98 = *(eax_97 + 0xc)
            
            if (*(eax_98 + 0x14) != esi_15 || *(eax_98 + 0x18) != eax_93)
                *(eax_98 + 0x14) = esi_15
                *(eax_98 + 0x18) = eax_93
                *(eax_98 + 0xc) = 1
        
        char eax_100 = (*(*arg1 + 0x10))()
        
        if (sub_690770(arg1, arg1[0x16], eax_100) != 0)
            void* eax_104 = sub_5f7370(*data_797da0, eax_40[2]->vFunc_1)
            
            if (eax_104 != 0)
                void* eax_105 = *(eax_104 + 0xc)
                
                if (*(eax_105 + 0x24) != edx_6)
                    *(eax_105 + 0x24) = edx_6
                    *(eax_105 + 0xc) = 1
        
        sub_697c10(esi_15, eax_93)
    
    if (*(arg1 + 0x4e) != 0)
        *(arg1 + 0x4e) = 0
        sub_692000(arg1)
    
    void* esi_16 = &arg1[0x14]
    
    if (arg1[0x14] == 0xffffffff)
        void* eax_113 = sub_5f7370(*data_797da0, eax_35[2]->vFunc_1)
        
        if (eax_113 != 0)
            void* eax_114 = *(eax_113 + 0xc)
            
            if (*(eax_114 + 0x24) != 0)
                *(eax_114 + 0x24) = 0
                *(eax_114 + 0xc) = 1
        
        arg1[0x15] = 0xffffffff
        sub_41b090(eax_45, 1)
    else
        int32_t eax_106 = sub_695c40(&arg1[0x18])
        var_11c = eax_106
        
        if (arg1[0x15] != eax_106)
            void* eax_107 = &var_11c
            
            if (eax_106 s>= *esi_16)
                eax_107 = esi_16
            
            int32_t ecx_51 = *eax_107
            
            if (*esi_16 s< eax_106)
                esi_16 = &var_11c
            
            int32_t eax_108 = *esi_16
            
            if (ecx_51 == eax_108)
                sub_41b090(eax_45, 1)
                arg1[0x15] = eax_106
            else
                sub_41b040(eax_45, ecx_51, eax_108 - ecx_51, eax_19, ecx_8, edx_7, 1)
                arg1[0x15] = eax_106
    
    int32_t esi_17 = eax_50[0x10]
    int32_t ebp_6 = eax_49[0x10]
    int32_t eax_118 = arg1[0x12] * 2
    void* eax_120 = sub_5f7370(*data_797da0, eax_45[2]->vFunc_1)
    
    if (eax_120 != 0)
        if ((*(**(*(eax_120 + 0xb4) + 4) + 8))() != 3)
            (*(**(*(eax_120 + 0xb4) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_124 =
                operator new(0x98)
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_f0_2 = eax_124
            var_4_4.b = 0xf
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_125
            
            if (eax_124 == 0)
                eax_125 = nullptr
            else
                eax_125 = sub_5fc2d0(eax_124, *(eax_120 + 0x34), *(eax_120 + 0x3c))
            
            var_4_4.b = 0xc
            *(*(eax_120 + 0xb4) + 4) = eax_125
            *(eax_120 + 0x10) = 1
        
        void* eax_126 = *(*(eax_120 + 0xb4) + 4)
        
        if (eax_126 != 0)
            sub_5fd780(eax_18 - eax_118 - var_108_1, eax_126, esi_17 * eax_6, ebp_6 * eax_6, 
                ecx_7 - eax_118 - eax_56)
    
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** esi_21 = eax_45
    void* eax_128
    void* ecx_71
    eax_128, ecx_71 = sub_5f7370(*data_797da0, esi_21[2]->vFunc_1)
    
    if (eax_128 != 0)
        int32_t eax_130
        eax_130, ecx_71 = (*(**(*(eax_128 + 0xb4) + 4) + 8))()
        
        if (eax_130 != 3)
            (*(**(*(eax_128 + 0xb4) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_132 =
                operator new(0x98)
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_124_3 = eax_132
            var_4_4.b = 0x18
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_133
            
            if (eax_132 == 0)
                eax_133 = nullptr
            else
                eax_133 = sub_5fc2d0(eax_132, *(eax_128 + 0x34), *(eax_128 + 0x3c))
            
            esi_21 = eax_45
            var_4_4.b = 0xc
            ecx_71 = *(eax_128 + 0xb4)
            *(ecx_71 + 4) = eax_133
            *(eax_128 + 0x10) = 1
        
        void* eax_134 = *(*(eax_128 + 0xb4) + 4)
        
        if (eax_134 != 0 && *(eax_134 + 0x94) != 1)
            *(eax_134 + 0x94) = 0x101
    
    sub_41b0f0(ecx_71, &arg2[0xa], esi_21, 1)
    int32_t* eax_138 = sub_426250(&var_b8, &arg1[0x18], &arg1[0x1f])
    var_4_4.b = 0x1f
    sub_698020(esi_21[2]->vFunc_1, eax_138, 1)
    var_4_4.b = 0xc
    
    if (var_a4 u>= 0x10)
        int32_t var_154_25 = var_b8.d
        sub_6b4d5b()
    
    int32_t ebx_5 = arg1[0x12]
    int32_t vFunc_1 = eax_45[2]->vFunc_1
    int32_t esi_22 = ebx_5 + eax_15
    int32_t* eax_140 = data_797da0
    int32_t var_a4_1 = 0xf
    int32_t var_a8_3 = 0
    var_b8 = 0
    int32_t ebx_6 = ebx_5 + eax_13
    void* eax_141 = sub_5f7370(*eax_140, vFunc_1)
    
    if (eax_141 != 0)
        void* eax_142 = *(eax_141 + 0xc)
        
        if (*(eax_142 + 0x14) != ebx_6 || *(eax_142 + 0x18) != esi_22)
            *(eax_142 + 0x14) = ebx_6
            *(eax_142 + 0x18) = esi_22
            *(eax_142 + 0xc) = 1
    
    void* eax_143 = sub_5f7370(*data_797da0, eax_30[2]->vFunc_1)
    
    if (eax_143 != 0)
        void* eax_144 = *(eax_143 + 0xc)
        
        if (*(eax_144 + 0x14) != eax_13 || *(eax_144 + 0x18) != eax_15)
            *(eax_144 + 0x14) = eax_13
            *(eax_144 + 0x18) = eax_15
            *(eax_144 + 0xc) = 1
    
    void* eax_146 = sub_5f7370(*data_797da0, eax_30[2]->vFunc_1)
    
    if (eax_146 != 0)
        void* eax_147 = *(eax_146 + 0xc)
        
        if (*(eax_147 + 0x1c) != eax_17)
            *(eax_147 + 0x1c) = eax_17
            *(eax_147 + 0xc) = 1
    
    void* eax_149 = sub_5f7370(*data_797da0, eax_30[2]->vFunc_1)
    
    if (eax_149 != 0)
        void* eax_150 = *(eax_149 + 0xc)
        
        if (*(eax_150 + 0x24) != edx_6)
            *(eax_150 + 0x24) = edx_6
            *(eax_150 + 0xc) = 1
    
    void* eax_152 = sub_5f7370(*data_797da0, eax_35[2]->vFunc_1)
    
    if (eax_152 != 0)
        void* eax_153 = *(eax_152 + 0xc)
        
        if (*(eax_153 + 0x1c) != eax_17 + 1)
            *(eax_153 + 0x1c) = eax_17 + 1
            *(eax_153 + 0xc) = 1
    
    void* eax_154 = sub_5f7370(*data_797da0, eax_45[2]->vFunc_1)
    
    if (eax_154 != 0)
        void* eax_155 = *(eax_154 + 0xc)
        
        if (*(eax_155 + 0x1c) != eax_17 + 2)
            *(eax_155 + 0x1c) = eax_17 + 2
            *(eax_155 + 0xc) = 1
    
    void* eax_157 = sub_5f7370(*data_797da0, eax_40[2]->vFunc_1)
    
    if (eax_157 != 0)
        void* eax_158 = *(eax_157 + 0xc)
        
        if (*(eax_158 + 0x1c) != eax_17 + 3)
            *(eax_158 + 0x1c) = eax_17 + 3
            *(eax_158 + 0xc) = 1
    
    void* eax_160 = sub_5f7370(*data_797da0, eax_45[2]->vFunc_1)
    
    if (eax_160 != 0)
        void* eax_161 = *(eax_160 + 0xc)
        
        if (*(eax_161 + 0x24) != edx_6)
            *(eax_161 + 0x24) = edx_6
            *(eax_161 + 0xc) = 1
    
    var_4_4.b = 0x20
    result = sub_68d670(arg2, sub_426250(&var_b8, &arg1[0x18], &arg1[0x1f]))
    
    if (var_a4_1 u>= 0x10)
        int32_t var_154_28 = var_b8.d
        result = sub_6b4d5b()
    
    if (var_34_1 u>= 0x10)
        int32_t var_154_29 = var_48.d
        result = sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_50_1 u>= 0x10)
        int32_t var_154_30 = var_64.d
        result = sub_6b4d5b()
    
    int32_t var_50_2 = 0xf
    int32_t var_54_2 = 0
    var_64 = 0
    
    if (var_18 u>= 0x10)
        int32_t* var_154_31 = var_2c
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_13c)
return result
