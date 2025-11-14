// 函数: sub_68a780
// 地址: 0x68a780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71be88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b4
int32_t eax_2 = data_78c474 ^ &var_b4
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    struct guiengine::CGUIModel::guiengine::CGUIVScrollbarModel::VTable** eax_5 =
        sub_414910(arg1[6])
    struct guiengine::CGUIModel::guiengine::CGUICGBoxModel::VTable** eax_6 = sub_4146d0(arg1[7])
    struct guiengine::CGUIModel::guiengine::CGUICGBoxModel::VTable** eax_7 = sub_4146d0(arg1[8])
    void* ecx_3 = arg1[9]
    struct guiengine::CGUIModel::guiengine::CGUICGBoxModel::VTable** var_7c = eax_7
    struct guiengine::CGUIModel::guiengine::CGUICGBoxModel::VTable** eax_8 = sub_4146d0(ecx_3)
    int32_t esi_1 = arg2[0x1b]
    int32_t eax_10 = arg2[0x1e]
    int32_t ecx_8 = (arg2[0x35] - arg2[0x34]) s/ 0x1c
    int32_t temp0_1 = divs.dp.d(sx.q(arg2[0x1c]), esi_1)
    int32_t var_84 = ecx_8
    int32_t var_74 = temp0_1
    int32_t* eax_14 = &var_74
    
    if (temp0_1 s>= ecx_8)
        eax_14 = &var_84
    
    int32_t ecx_9 = *eax_14
    int32_t eax_15 = eax_5[0x10]
    int32_t ecx_10 = arg2[0x38]
    int32_t eax_17 = (*(*arg2 + 0x24))(eax_4)
    int32_t eax_19 = (*(*arg2 + 0x28))()
    int32_t eax_21 = (*(*arg2 + 0x2c))()
    void* ecx_14 = arg2[0x1a]
    int32_t var_70_1 = eax_21
    eax_21.b = arg2[0x1f].b
    char var_ad_1 = eax_21.b
    var_74 = arg2[0x1c]
    int32_t var_4c
    __builtin_memcpy(&var_4c, &arg2[0x28], 0x30)
    int32_t eax_23 = esi_1 - eax_10 * 2
    int32_t var_48_1 = eax_23
    int32_t esi_5 = (arg1[0xb] - arg1[0xa]) s>> 2
    void* var_a8
    struct IInterface::guiengine::CGUIComponent::VTable** var_a4
    
    if (esi_5 s< ecx_9)
        int32_t i_3 = ecx_9 - esi_5
        int32_t i
        
        do
            int32_t esi_9 = ((arg1[0x15] - arg1[0x14]) s>> 2) + arg1[0xe]
            var_a8 = 0xffffffff
            sub_416780(&var_a8, &arg1[0x14])
            struct IInterface::guiengine::CGUIComponent::VTable** eax_29 = operator new(0x3c)
            struct _EXCEPTION_REGISTRATION_RECORD** edi_4 = arg1
            struct IInterface::guiengine::CGUIComponent::VTable** var_98_1
            struct IInterface::guiengine::CGUIComponent::VTable** esi_10
            
            if (eax_29 == 0)
                var_98_1 = nullptr
                esi_10 = nullptr
            else
                int32_t ecx_17 = edi_4[0x1d]
                var_a8 = edi_4[0x1b]
                int32_t edx_13 = edi_4[0x1c]
                eax_29[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
                eax_29[2] = esi_9
                *eax_29 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
                eax_29[1] =
                    &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
                eax_29[3] = 1
                eax_29[4] = 0xffffffff
                eax_29[9] = esi_9
                eax_29[5] = 0
                eax_29[6] = 0
                eax_29[7] = 0
                eax_29[0xa] = 0
                eax_29[0xb] = 0
                eax_29[0xd] = ecx_17
                void* ecx_18 = var_a8
                esi_10 = eax_29
                eax_29[0xc] = edx_13
                eax_29[0xe] = ecx_18
                var_98_1 = esi_10
            
            var_a4 = esi_10
            var_a8 = &edi_4[1]
            
            if (edi_4 != 0xfffffffc)
                int32_t edx_14 = esi_10[6]
                int32_t* eax_30 = esi_10[5]
                
                if (eax_30 == edx_14)
                    sub_61b5a0(&var_a8, &esi_10[5])
                    edi_4 = arg1
                else
                    while (*eax_30 != &edi_4[1])
                        eax_30 = &eax_30[1]
                        
                        if (eax_30 == edx_14)
                            break
                    
                    if (eax_30 == edx_14)
                        sub_61b5a0(&var_a8, &esi_10[5])
                        edi_4 = arg1
            
            void* esi_11 = sub_414850(esi_10)
            int32_t eax_33 = edi_4[0xb]
            var_a8 = esi_11
            int32_t ecx_21
            
            if (&var_a4 u< eax_33)
                ecx_21 = edi_4[0xa]
            
            if (&var_a4 u>= eax_33 || ecx_21 u> &var_a4)
                if (eax_33 == edi_4[0xc])
                    sub_4307a0(&edi_4[0xa])
                
                struct IInterface::guiengine::CGUIComponent::VTable*** eax_38 = edi_4[0xb]
                
                if (eax_38 != 0)
                    *eax_38 = var_98_1
            else
                if (eax_33 == edi_4[0xc])
                    sub_4307a0(&edi_4[0xa])
                
                int32_t* eax_36 = edi_4[0xb]
                
                if (eax_36 != 0)
                    *eax_36 = *(edi_4[0xa] + ((&var_a4 - ecx_21) s>> 2 << 2))
                
                esi_11 = var_a8
            
            edi_4[0xb] = &edi_4[0xb]->Handler
            
            if (*(esi_11 + 0x1c) != ecx_14 - 0x10)
                *(esi_11 + 0x1c) = ecx_14 - 0x10
                *(esi_11 + 0x78) = 1
            
            if (*(esi_11 + 0x20) != eax_23)
                *(esi_11 + 0x20) = eax_23
                *(esi_11 + 0x78) = 1
            
            if (sub_5e0140(&var_4c, esi_11 + 0x48) == 0)
                void* eax_43 = var_a8
                __builtin_memcpy(esi_11 + 0x48, &var_4c, 0x30)
                *(eax_43 + 0x78) = 1
                esi_11 = eax_43
            
            if (*(esi_11 + 0x2a) != 1)
                *(esi_11 + 0x2a) = 1
                *(esi_11 + 0x78) = 1
            
            i = i_3
            i_3 -= 1
        while (i != 1)
    else if (esi_5 s> ecx_9)
        do
            (*(**(arg1[0xa] + (esi_5 << 2) - 4) + 4))()
            int32_t eax_45 = arg1[0xb]
            
            if (arg1[0xa] != eax_45)
                arg1[0xb] = eax_45 - 4
            
            int32_t eax_47 = arg1[0x15]
            
            if (arg1[0x14] != eax_47)
                arg1[0x15] = eax_47 - 4
            
            esi_5 -= 1
        while (esi_5 != ecx_9)
    
    int32_t i_1 = (arg1[0xb] - arg1[0xa]) s>> 2
    struct guiengine::CGUIModel::guiengine::CGUICGBoxModel::VTable** eax_52
    
    if (eax_15 s> ecx_10 || ecx_10 s>= eax_15 + ecx_9)
        eax_52 = var_7c
        
        if (eax_52[0xb].b != 0)
            eax_52[0xb].b = 0
            eax_52[0x19].b = 1
    else
        eax_52 = var_7c
        int32_t ecx_31 = (ecx_10 - eax_15) * esi_1 + eax_19
        
        if (eax_52[4] != eax_17 || eax_52[5] != ecx_31)
            eax_52[4] = eax_17
            eax_52[5] = ecx_31
            eax_52[0x19].b = 1
        
        if (eax_52[6] != var_70_1 + 2)
            eax_52[6] = var_70_1 + 2
            eax_52[0x19].b = 1
        
        if (eax_52[7] != ecx_14 - 0x10)
            eax_52[7] = ecx_14 - 0x10
            eax_52[0x19].b = 1
        
        if (eax_52[8] != esi_1)
            eax_52[8] = esi_1
            eax_52[0x19].b = 1
        
        void* ecx_35
        ecx_35.b = var_ad_1
        
        if (eax_52[0xb].b != ecx_35.b)
            eax_52[0xb].b = ecx_35.b
            eax_52[0x19].b = 1
        
        if (eax_52[0x16] != 0xff)
            eax_52[0x16] = 0xff
            eax_52[0x19].b = 1
        
        if (eax_52[0x17] != 0x64)
            eax_52[0x17] = 0x64
            eax_52[0x19].b = 1
        
        if (eax_52[0x18] != 0x64)
            eax_52[0x18] = 0x64
            eax_52[0x19].b = 1
        
        if (*(eax_52 + 0x2d) != 0)
            *(eax_52 + 0x2d) = 0
            eax_52[0x19].b = 1
    int32_t var_54 = 0
    int32_t var_58 = 0
    char* eax_53 = data_797d44
    
    if (sub_424db0(eax_53) != 0)
        (***(eax_53 + 8))(&var_54, &var_58)
    
    int32_t eax_55 = var_54
    var_7c = ecx_14 - 0x10
    int32_t ecx_40
    int32_t esi_16
    
    if (eax_17 s> eax_55 || eax_55 s> ecx_14 - 0x10 + eax_17)
        esi_16 = esi_1
        ecx_40 = eax_19
        arg1[4] = 0xffffffff
    else
        int32_t eax_56 = var_58
        ecx_40 = eax_19
        esi_16 = esi_1
        
        if (ecx_40 s> eax_56 || eax_56 s> i_1 * esi_16 + ecx_40)
            arg1[4] = 0xffffffff
        else
            int32_t eax_60 = divs.dp.d(sx.q(eax_56 - ecx_40), esi_16) + eax_15
            
            if (eax_60 s< var_84)
                arg1[4] = eax_60
    
    int32_t eax_62 = arg1[4]
    
    if (eax_15 s> eax_62 || eax_62 s>= ecx_9 + eax_15)
        if (eax_8[0xb].b != 0)
            eax_8[0xb].b = 0
            eax_8[0x19].b = 1
    else
        int32_t ecx_41 = ecx_40 + (eax_62 - eax_15) * esi_16
        
        if (eax_8[4] != eax_17 || eax_8[5] != ecx_41)
            eax_8[4] = eax_17
            eax_8[5] = ecx_41
            eax_8[0x19].b = 1
        
        if (eax_8[6] != var_70_1 + 1)
            eax_8[6] = var_70_1 + 1
            eax_8[0x19].b = 1
        
        struct guiengine::CGUIModel::guiengine::CGUICGBoxModel::VTable** ecx_44 = var_7c
        
        if (eax_8[7] != ecx_44)
            eax_8[7] = ecx_44
            eax_8[0x19].b = 1
        
        if (eax_8[8] != esi_16)
            eax_8[8] = esi_16
            eax_8[0x19].b = 1
        
        ecx_44.b = var_ad_1
        
        if (eax_8[0xb].b != ecx_44.b)
            eax_8[0xb].b = ecx_44.b
            eax_8[0x19].b = 1
        
        if (eax_8[0x16] != 0xff)
            eax_8[0x16] = 0xff
            eax_8[0x19].b = 1
        
        if (eax_8[0x17] != 0xc8)
            eax_8[0x17] = 0xc8
            eax_8[0x19].b = 1
        
        if (eax_8[0x18] != 0xc8)
            eax_8[0x18] = 0xc8
            eax_8[0x19].b = 1
        
        if (*(eax_8 + 0x2d) != 0)
            *(eax_8 + 0x2d) = 0
            eax_8[0x19].b = 1
    
    if (var_84 != 0)
        var_a4 = nullptr
        
        if (i_1 s> 0)
            int32_t var_98_2 = eax_15
            var_a8 = eax_15 * 0x1c
            struct IInterface::guiengine::CGUIComponent::VTable** eax_85
            
            do
                struct IInterface::guiengine::CGUIComponent::VTable** ecx_46 = var_a4
                int32_t eax_71 = arg1[0xa]
                
                if (var_84 s> var_98_2)
                    struct guiengine::CGUIModel::guiengine::CGUILabelModel::VTable** eax_77 =
                        sub_414850(*(eax_71 + (ecx_46 << 2)))
                    int32_t esi_19 = arg2[0x34]
                    void* esi_20
                    
                    if ((arg2[0x35] - esi_19) s/ 0x1c s<= var_98_2)
                        esi_20 = &arg2[4]
                    else if (var_98_2 s>= 0)
                        esi_20 = esi_19 + var_a8
                    else
                        esi_20 = &arg2[4]
                    
                    int32_t* ecx_54
                    
                    if (*(esi_20 + 0x14) u< 0x10)
                        ecx_54 = esi_20
                    else
                        ecx_54 = *esi_20
                    
                    int32_t edi_11 = eax_77[0xf]
                    void* eax_83 = &eax_77[0xb]
                    int32_t edx_39 = *(esi_20 + 0x10)
                    
                    if (edi_11 u< edx_39)
                        edx_39 = edi_11
                    
                    if (*(eax_83 + 0x14) u>= 0x10)
                        eax_83 = *eax_83
                    
                    if (sub_402320(eax_83, eax_83, ecx_54, edx_39) != 0
                            || edi_11 u< *(esi_20 + 0x10))
                        sub_401180(&eax_77[0xb], 0xffffffff, esi_20, 0)
                        eax_77[0x1e].b = 1
                    else
                        int32_t eax_84
                        eax_84.b = edi_11 != *(esi_20 + 0x10)
                        
                        if (eax_84 != 0)
                            sub_401180(&eax_77[0xb], 0xffffffff, esi_20, 0)
                            eax_77[0x1e].b = 1
                else
                    struct guiengine::CGUIModel::guiengine::CGUILabelModel::VTable** eax_73 =
                        sub_414850(*(eax_71 + (ecx_46 << 2)))
                    int32_t var_38_1 = 0xf
                    int32_t var_3c_1 = 0
                    var_4c.b = 0
                    sub_401270(&var_4c, nullptr, 0x72d03b)
                    int32_t var_c_1 = 0
                    int32_t* ecx_48 = var_4c
                    
                    if (var_38_1 u< 0x10)
                        ecx_48 = &var_4c
                    
                    int32_t edi_10 = eax_73[0xf]
                    int32_t eax_74 = var_3c_1
                    
                    if (edi_10 u< eax_74)
                        eax_74 = edi_10
                    
                    int32_t* edx_33
                    
                    if (eax_73[0x10] u< 0x10)
                        edx_33 = &eax_73[0xb]
                    else
                        edx_33 = eax_73[0xb]
                    
                    int32_t eax_75 = sub_402320(eax_74, edx_33, ecx_48, eax_74)
                    bool cond:3_1 = eax_75 == 0
                    
                    if (eax_75 == 0)
                        if (edi_10 u>= var_3c_1)
                            int32_t edx_34
                            edx_34.b = edi_10 != var_3c_1
                            eax_75 = edx_34
                        else
                            eax_75 = 0xffffffff
                        
                        cond:3_1 = eax_75 == 0
                    
                    eax_75.b = cond:3_1
                    
                    if (eax_75.b == 0)
                        sub_401180(&eax_73[0xb], 0xffffffff, &var_4c, 0)
                        eax_73[0x1e].b = 1
                    
                    int32_t var_c_2 = 0xffffffff
                    
                    if (var_38_1 u>= 0x10)
                        int32_t var_c8_4 = var_4c
                        sub_6b4d5b()
                    
                    int32_t var_38_2 = 0xf
                    int32_t var_3c_2 = 0
                    var_4c.b = 0
                
                eax_85 = var_a4
                var_a8 += 0x1c
                var_98_2 += 1
                var_a4 = eax_85 + 1
            while (eax_85 + 1 s< i_1)
    
    if (eax_5[4] != ecx_14 + eax_17 - 0x10 || eax_5[5] != eax_19)
        eax_5[4] = ecx_14 + eax_17 - 0x10
        eax_5[5] = eax_19
        eax_5[0x36].b = 1
    
    int32_t var_68_2 = var_70_1 + 3
    
    if (eax_5[6] != var_70_1 + 3)
        eax_5[6] = var_70_1 + 3
        eax_5[0x36].b = 1
    
    if (eax_5[0xf] != ecx_9)
        eax_5[0xf] = ecx_9
        eax_5[0x36].b = 1
    
    int32_t eax_91
    eax_91.b = var_ad_1
    
    if (eax_5[7].b != eax_91.b)
        eax_5[7].b = eax_91.b
        eax_5[0x36].b = 1
    
    int32_t eax_92 = var_74
    
    if (eax_5[0xb] != eax_92)
        eax_5[0xb] = eax_92
        eax_5[0x36].b = 1
    
    if (eax_5[0xc] != 0x10)
        eax_5[0xc] = 0x10
        eax_5[0x36].b = 1
    
    if (eax_5[0xd] != 0x10)
        eax_5[0xd] = 0x10
        eax_5[0x36].b = 1
    
    if (eax_5[0xa] != 0x10)
        eax_5[0xa] = 0x10
        eax_5[0x36].b = 1
    
    int32_t eax_93 = var_84
    
    if (eax_5[0xe] != eax_93)
        eax_5[0xe] = eax_93
        eax_5[0x36].b = 1
    
    if (arg1[5] != ecx_10 && (ecx_10 s< eax_15 || eax_15 + ecx_9 s< ecx_10))
        int32_t var_c8_6 = ecx_10
        sub_6856c0(eax_5)
    
    arg1[5] = ecx_10
    
    if (eax_6[4] != eax_17 || eax_6[5] != eax_19)
        eax_6[4] = eax_17
        eax_6[5] = eax_19
        eax_6[0x19].b = 1
    
    if (eax_6[6] != var_70_1)
        eax_6[6] = var_70_1
        eax_6[0x19].b = 1
    
    int32_t eax_97
    eax_97.b = var_ad_1
    
    if (eax_6[0xb].b != eax_97.b)
        eax_6[0xb].b = eax_97.b
        eax_6[0x19].b = 1
    
    struct guiengine::CGUIModel::guiengine::CGUICGBoxModel::VTable** eax_98 = var_7c
    
    if (eax_6[7] != eax_98)
        eax_6[7] = eax_98
        eax_6[0x19].b = 1
    
    int32_t eax_99 = var_74
    
    if (eax_6[8] != eax_99)
        eax_6[8] = eax_99
        eax_6[0x19].b = 1
    
    void* ecx_58
    
    if (arg2[0x25] u< 0x10)
        ecx_58 = &arg2[0x20]
    else
        ecx_58 = arg2[0x20]
    
    int32_t ebx_1 = eax_6[0x10]
    int32_t eax_102 = arg2[0x24]
    
    if (ebx_1 u< eax_102)
        eax_102 = ebx_1
    
    int32_t* edx_45
    
    if (eax_6[0x11] u< 0x10)
        edx_45 = &eax_6[0xc]
    else
        edx_45 = eax_6[0xc]
    
    if (sub_402320(eax_102, edx_45, ecx_58, eax_102) != 0 || ebx_1 u< arg2[0x24])
        sub_401180(&eax_6[0xc], 0xffffffff, &arg2[0x20], 0)
        eax_6[0x19].b = 1
    else
        int32_t eax_103
        eax_103.b = ebx_1 != arg2[0x24]
        
        if (eax_103 != 0)
            sub_401180(&eax_6[0xc], 0xffffffff, &arg2[0x20], 0)
            eax_6[0x19].b = 1
    
    if (*(eax_6 + 0x2d) != 0)
        *(eax_6 + 0x2d) = 0
        eax_6[0x19].b = 1
    
    result = arg1
    int32_t* i_2 = result[0xa]
    
    if (i_2 != result[0xb])
        int32_t edi_14 = eax_17 + eax_10
        void* ebx_3 = 0
        
        do
            struct guiengine::CGUIModel::guiengine::CGUILabelModel::VTable** eax_105 =
                sub_414850(*i_2)
            int32_t ecx_66 = (ebx_3 s>> 2) * esi_1 + eax_19 + eax_10
            
            if (eax_105[4] != edi_14 || eax_105[5] != ecx_66)
                eax_105[4] = edi_14
                eax_105[5] = ecx_66
                eax_105[0x1e].b = 1
            
            if (eax_105[6] != var_68_2)
                eax_105[6] = var_68_2
                eax_105[0x1e].b = 1
            
            int32_t ecx_67
            ecx_67.b = var_ad_1
            
            if (eax_105[0xa].b != ecx_67.b)
                eax_105[0xa].b = ecx_67.b
                eax_105[0x1e].b = 1
            
            result = arg1
            i_2 = &i_2[1]
            ebx_3 += 4
        while (i_2 != result[0xb])

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b4)
return result
