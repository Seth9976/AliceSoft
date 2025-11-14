// 函数: sub_4f8820
// 地址: 0x4f8820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fc2a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t var_88 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_60 = nullptr
int32_t var_5c = 0
int32_t var_58 = 0
int32_t var_4 = 0
void* result

if (sub_5037e0(arg1, &var_60, arg2) != 0)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    var_4.b = 1
    void** esi_1 = var_60
    char var_48_1 = 0
    
    if (esi_1 != var_5c)
        do
            int32_t* var_70
            sub_4fbdc0(arg3, &var_70, &var_30, var_48_1)
            var_4.b = 2
            int32_t edi_1 = esi_1[4]
            int32_t eax_7 = edi_1
            
            if (edi_1 u>= 4)
                eax_7 = 4
            
            int32_t* edx_2
            
            if (esi_1[5] u< 0x10)
                edx_2 = esi_1
            else
                edx_2 = *esi_1
            
            int32_t eax_8 = sub_402320(eax_7, edx_2, "Mesh", eax_7)
            bool cond:0_1 = eax_8 == 0
            
            if (eax_8 == 0)
                if (edi_1 u>= 4)
                    eax_8.b = edi_1 != 4
                else
                    eax_8 = 0xffffffff
                
                cond:0_1 = eax_8 == 0
            
            int32_t* ebp_1 = var_70
            eax_8.b = cond:0_1
            int32_t var_6c
            
            if (eax_8.b == 0)
                if (sub_402680("MeshPart", esi_1) == 0)
                    if (sub_402680("DrawShadow", esi_1) == 0)
                        if (sub_402680("ZWrite", esi_1) == 0)
                            if (sub_402680("UVScroll", esi_1) == 0)
                                if (sub_402680("SpecularColor", esi_1) == 0)
                                    if (sub_402680("SpecularPower", esi_1) == 0)
                                        if (sub_402680("ParallaxScale", esi_1) == 0)
                                            if (sub_402680("ReliefScale", esi_1) == 0)
                                                if (sub_402680("HeightDetection", esi_1) == 0)
                                                    if (sub_402680("BlendMode", esi_1) == 0)
                                                        if (sub_402680("MeshCombinable", esi_1)
                                                                == 0)
                                                            if (sub_402680("SkyDome", esi_1) == 0)
                                                                if (sub_402680("Edge", esi_1) == 0
                                                                        && sub_402680("EdgeSize", esi_1) == 0
                                                                        && sub_402680("EdgeColor", esi_1) == 0)
                                                                    if (esi_1[5] u>= 0x10)
                                                                        esi_1 = *esi_1
                                                                    
                                                                    void** var_8c_22 = esi_1
                                                                    sub_51ddc0(0x754bcc)
                                                                    goto label_4f9214
                                                            else
                                                                int32_t eax_83
                                                                int32_t edx_31
                                                                edx_31:eax_83 = muls.dp.d(0x78787879, 
                                                                    esi_1[8] - esi_1[7])
                                                                int32_t edx_32 = edx_31 s>> 5
                                                                
                                                                if ((edx_32 u>> 0x1f) + edx_32 != 1)
                                                                    goto label_4f91b9
                                                                
                                                                if (*esi_1[7] != 2)
                                                                    goto label_4f91d0
                                                                
                                                                int32_t* ebp_2 = var_70
                                                                
                                                                while (ebp_2 != var_6c)
                                                                    char eax_87 =
                                                                        sub_402680("true", esi_1[7] + 0xc)
                                                                    void* ecx_56 = *ebp_2
                                                                    ebp_2 = &ebp_2[1]
                                                                    *(ecx_56 + 0x27) = eax_87
                                                        else
                                                            int32_t eax_80
                                                            int32_t edx_28
                                                            edx_28:eax_80 = muls.dp.d(0x78787879, 
                                                                esi_1[8] - esi_1[7])
                                                            int32_t edx_29 = edx_28 s>> 5
                                                            
                                                            if ((edx_29 u>> 0x1f) + edx_29 != 1)
                                                                goto label_4f91d0
                                                            
                                                            if (*esi_1[7] != 2)
                                                                goto label_4f9214
                                                            
                                                            while (ebp_1 != var_6c)
                                                                char eax_81 =
                                                                    sub_402680("true", esi_1[7] + 0xc)
                                                                void* ecx_52 = *ebp_1
                                                                ebp_1 = &ebp_1[1]
                                                                *(ecx_52 + 0x7d) = eax_81
                                                    else
                                                        int32_t eax_72
                                                        int32_t edx_25
                                                        edx_25:eax_72 = muls.dp.d(0x78787879, 
                                                            esi_1[8] - esi_1[7])
                                                        int32_t edx_26 = edx_25 s>> 5
                                                        
                                                        if ((edx_26 u>> 0x1f) + edx_26 != 1)
                                                            goto label_4f9214
                                                        
                                                        int32_t* eax_76 = esi_1[7]
                                                        
                                                        if (*eax_76 != 2)
                                                            goto label_4f91b9
                                                        
                                                        int32_t ebx_7 = 0
                                                        
                                                        if (sub_402680(0x754b80, &eax_76[3]) != 0)
                                                            ebx_7 = 1
                                                        
                                                        int32_t* eax_78 = ebp_1
                                                        
                                                        if (ebp_1 != var_6c)
                                                            do
                                                                void* ecx_46 = *eax_78
                                                                eax_78 = &eax_78[1]
                                                                *(ecx_46 + 0x74) = ebx_7
                                                            while (eax_78 != var_6c)
                                                else
                                                    int32_t eax_69
                                                    int32_t edx_22
                                                    edx_22:eax_69 =
                                                        muls.dp.d(0x78787879, esi_1[8] - esi_1[7])
                                                    int32_t edx_23 = edx_22 s>> 5
                                                    
                                                    if ((edx_23 u>> 0x1f) + edx_23 != 1)
                                                        goto label_4f91b9
                                                    
                                                    if (*esi_1[7] != 2)
                                                        goto label_4f91d0
                                                    
                                                    while (ebp_1 != var_6c)
                                                        char eax_70 =
                                                            sub_402680("true", esi_1[7] + 0xc)
                                                        void* ecx_43 = *ebp_1
                                                        ebp_1 = &ebp_1[1]
                                                        *(ecx_43 + 0x70) = eax_70
                                            else
                                                int32_t eax_61
                                                int32_t edx_19
                                                edx_19:eax_61 =
                                                    muls.dp.d(0x78787879, esi_1[8] - esi_1[7])
                                                int32_t edx_20 = edx_19 s>> 5
                                                
                                                if ((edx_20 u>> 0x1f) + edx_20 != 1)
                                                    goto label_4f91d0
                                                
                                                if (sub_504ac0(esi_1[7]) == 0)
                                                    goto label_4f9214
                                                
                                                int32_t* eax_67 = ebp_1
                                                
                                                if (ebp_1 != var_6c)
                                                    do
                                                        int32_t* ecx_36 = esi_1[7]
                                                        long double x87_r7_16
                                                        
                                                        if (*ecx_36 != 0)
                                                            x87_r7_16 = fconvert.t(ecx_36[2])
                                                        else
                                                            x87_r7_16 = float.t(ecx_36[1])
                                                        
                                                        void* ecx_37 = *eax_67
                                                        var_74 = fconvert.s(x87_r7_16)
                                                        eax_67 = &eax_67[1]
                                                        *(ecx_37 + 0x50) =
                                                            fconvert.s(fconvert.t(var_74))
                                                    while (eax_67 != var_6c)
                                        else
                                            int32_t eax_56
                                            int32_t edx_16
                                            edx_16:eax_56 =
                                                muls.dp.d(0x78787879, esi_1[8] - esi_1[7])
                                            int32_t edx_17 = edx_16 s>> 5
                                            
                                            if ((edx_17 u>> 0x1f) + edx_17 != 1)
                                                goto label_4f9214
                                            
                                            if (sub_504ac0(esi_1[7]) == 0)
                                                goto label_4f91b9
                                            
                                            int32_t* eax_59 = ebp_1
                                            
                                            if (ebp_1 != var_6c)
                                                do
                                                    int32_t* ecx_32 = esi_1[7]
                                                    long double x87_r7_14
                                                    
                                                    if (*ecx_32 != 0)
                                                        x87_r7_14 = fconvert.t(ecx_32[2])
                                                    else
                                                        x87_r7_14 = float.t(ecx_32[1])
                                                    
                                                    void* ecx_33 = *eax_59
                                                    var_74 = fconvert.s(x87_r7_14)
                                                    eax_59 = &eax_59[1]
                                                    *(ecx_33 + 0x4c) =
                                                        fconvert.s(fconvert.t(var_74))
                                                while (eax_59 != var_6c)
                                    else
                                        int32_t eax_48
                                        int32_t edx_13
                                        edx_13:eax_48 = muls.dp.d(0x78787879, esi_1[8] - esi_1[7])
                                        int32_t edx_14 = edx_13 s>> 5
                                        
                                        if ((edx_14 u>> 0x1f) + edx_14 != 1)
                                            goto label_4f91b9
                                        
                                        if (sub_504ac0(esi_1[7]) == 0)
                                            goto label_4f91d0
                                        
                                        int32_t* eax_54 = ebp_1
                                        
                                        if (ebp_1 != var_6c)
                                            do
                                                int32_t* ecx_25 = esi_1[7]
                                                long double x87_r7_12
                                                
                                                if (*ecx_25 != 0)
                                                    x87_r7_12 = fconvert.t(ecx_25[2])
                                                else
                                                    x87_r7_12 = float.t(ecx_25[1])
                                                
                                                void* ecx_26 = *eax_54
                                                var_74 = fconvert.s(x87_r7_12)
                                                eax_54 = &eax_54[1]
                                                *(ecx_26 + 0x6c) = fconvert.s(fconvert.t(var_74))
                                            while (eax_54 != var_6c)
                                else
                                    int32_t eax_38
                                    int32_t edx_10
                                    edx_10:eax_38 = muls.dp.d(0x78787879, esi_1[8] - esi_1[7])
                                    int32_t edx_11 = edx_10 s>> 5
                                    
                                    if ((edx_11 u>> 0x1f) + edx_11 != 3)
                                        goto label_4f9214
                                    
                                    int32_t* ecx_20 = esi_1[7]
                                    
                                    if (sub_504ac0(ecx_20) == 0)
                                        goto label_4f91b9
                                    
                                    if (sub_504ac0(&ecx_20[0x11]) == 0)
                                        goto label_4f91d0
                                    
                                    if (sub_504ac0(&ecx_20[0x22]) == 0)
                                        goto label_4f9214
                                    
                                    int32_t* ecx_21 = ebp_1
                                    
                                    if (ebp_1 != var_6c)
                                        float var_34_1 = fconvert.s(float.t(1))
                                        
                                        do
                                            void* eax_45 = esi_1[7]
                                            long double x87_r7_6
                                            
                                            if (*(eax_45 + 0x88) != 0)
                                                x87_r7_6 = fconvert.t(*(eax_45 + 0x90))
                                            else
                                                x87_r7_6 = float.t(*(eax_45 + 0x8c))
                                            
                                            bool cond:2_1 = *(eax_45 + 0x44) != 0
                                            var_74 = fconvert.s(x87_r7_6)
                                            long double x87_r7_7
                                            
                                            if (cond:2_1)
                                                x87_r7_7 = fconvert.t(*(eax_45 + 0x4c))
                                            else
                                                x87_r7_7 = float.t(*(eax_45 + 0x48))
                                            
                                            long double x87_r7_8
                                            
                                            if (*eax_45 != 0)
                                                x87_r7_8 = fconvert.t(*(eax_45 + 8))
                                            else
                                                x87_r7_8 = float.t(*(eax_45 + 4))
                                            
                                            void* eax_46 = *ecx_21
                                            ecx_21 = &ecx_21[1]
                                            *(eax_46 + 0x5c) =
                                                fconvert.s(fconvert.t(fconvert.s(x87_r7_8)))
                                            long double x87_r7_11 = fconvert.t(var_74)
                                            *(eax_46 + 0x60) =
                                                fconvert.s(fconvert.t(fconvert.s(x87_r7_7)))
                                            *(eax_46 + 0x64) = fconvert.s(x87_r7_11)
                                            *(eax_46 + 0x68) = var_34_1
                                        while (ecx_21 != var_6c)
                            else
                                int32_t eax_27
                                int32_t edx_7
                                edx_7:eax_27 = muls.dp.d(0x78787879, esi_1[8] - esi_1[7])
                                int32_t edx_8 = edx_7 s>> 5
                                
                                if ((edx_8 u>> 0x1f) + edx_8 != 2)
                                    goto label_4f9214
                                
                                int32_t* ecx_13 = esi_1[7]
                                
                                if (sub_504ac0(ecx_13) == 0)
                                    goto label_4f91b9
                                
                                if (sub_504ac0(&ecx_13[0x11]) == 0)
                                    goto label_4f91d0
                                
                                int32_t* ecx_14 = ebp_1
                                
                                if (ebp_1 != var_6c)
                                    do
                                        void* eax_35 = esi_1[7]
                                        long double x87_r7_1
                                        
                                        if (*(eax_35 + 0x44) != 0)
                                            x87_r7_1 = fconvert.t(*(eax_35 + 0x4c))
                                        else
                                            x87_r7_1 = float.t(*(eax_35 + 0x48))
                                        
                                        float var_50_1 = fconvert.s(x87_r7_1)
                                        long double x87_r7_2
                                        
                                        if (*eax_35 != 0)
                                            x87_r7_2 = fconvert.t(*(eax_35 + 8))
                                        else
                                            x87_r7_2 = float.t(*(eax_35 + 4))
                                        
                                        void* eax_36 = *ecx_14
                                        ecx_14 = &ecx_14[1]
                                        *(eax_36 + 0x54) =
                                            fconvert.s(fconvert.t(fconvert.s(x87_r7_2)))
                                        *(eax_36 + 0x58) = fconvert.s(fconvert.t(var_50_1))
                                    while (ecx_14 != var_6c)
                        else
                            int32_t eax_21
                            int32_t edx_5
                            edx_5:eax_21 = muls.dp.d(0x78787879, esi_1[8] - esi_1[7])
                            int32_t edx_6 = edx_5 s>> 5
                            
                            if ((edx_6 u>> 0x1f) + edx_6 != 1)
                            label_4f91b9:
                                sub_65ab60(&var_70)
                                sub_401110(&var_30)
                                goto label_4f8893
                            
                            if (*esi_1[7] != 2)
                            label_4f91d0:
                                sub_65ab60(&var_70)
                                sub_401110(&var_30)
                                int32_t var_4_7 = 0xffffffff
                                sub_503740(&var_60)
                                result.b = 0
                                goto label_4f9018
                            
                            while (ebp_1 != var_6c)
                                char eax_25 = sub_402680("true", esi_1[7] + 0xc)
                                void* ecx_10 = *ebp_1
                                ebp_1 = &ebp_1[1]
                                *(ecx_10 + 0x49) = eax_25
                    else
                        int32_t eax_15
                        int32_t edx_3
                        edx_3:eax_15 = muls.dp.d(0x78787879, esi_1[8] - esi_1[7])
                        int32_t edx_4 = edx_3 s>> 5
                        
                        if ((edx_4 u>> 0x1f) + edx_4 != 1)
                            int32_t* eax_97 = var_70
                            
                            if (eax_97 != 0)
                                int32_t* var_8c_18 = eax_97
                                sub_6b4d5b()
                            
                            if (var_1c_1 u>= 0x10)
                                int32_t var_8c_19 = var_30.d
                                sub_6b4d5b()
                            
                            int32_t var_1c_7 = 0xf
                            int32_t var_20_7 = 0
                            var_30 = 0
                            int32_t var_4_6 = 0xffffffff
                            sub_503740(&var_60)
                            result.b = 0
                            goto label_4f9018
                        
                        if (*esi_1[7] != 2)
                        label_4f9214:
                            sub_65ab60(&var_70)
                            sub_401110(&var_30)
                            int32_t var_4_8 = 0xffffffff
                            sub_503740(&var_60)
                            result.b = 0
                            goto label_4f9018
                        
                        while (ebp_1 != var_6c)
                            char eax_19 = sub_402680("true", esi_1[7] + 0xc)
                            void* ecx_6 = *ebp_1
                            ebp_1 = &ebp_1[1]
                            *(ecx_6 + 0x48) = eax_19
                else
                    int32_t* ecx_1 = esi_1[7]
                    
                    if (ecx_1 == esi_1[8])
                        int32_t* eax_94 = var_70
                        
                        if (eax_94 != 0)
                            int32_t* var_8c_13 = eax_94
                            sub_6b4d5b()
                        
                        if (var_1c_1 u>= 0x10)
                            int32_t var_8c_14 = var_30.d
                            sub_6b4d5b()
                        
                        int32_t var_1c_5 = 0xf
                        int32_t var_20_5 = 0
                        var_30 = 0
                        goto label_4f8893
                    
                    if (*ecx_1 != 3)
                        int32_t* eax_96 = var_70
                        
                        if (eax_96 != 0)
                            int32_t* var_8c_15 = eax_96
                            sub_6b4d5b()
                        
                        if (var_1c_1 u>= 0x10)
                            int32_t var_8c_16 = var_30.d
                            sub_6b4d5b()
                        
                        int32_t var_1c_6 = 0xf
                        int32_t var_20_6 = 0
                        var_30 = 0
                        int32_t var_4_5 = 0xffffffff
                        sub_503740(&var_60)
                        result.b = 0
                        goto label_4f9018
                    
                    sub_401180(&var_30, 0xffffffff, &ecx_1[0xa], 0)
                    var_48_1 = 1
            else
                int32_t* eax_9 = esi_1[7]
                
                if (eax_9 == esi_1[8])
                    int32_t* eax_92 = var_70
                    
                    if (eax_92 != 0)
                        int32_t* var_8c_7 = eax_92
                        sub_6b4d5b()
                    
                    if (var_1c_1 u>= 0x10)
                        int32_t var_8c_8 = var_30.d
                        sub_6b4d5b()
                    
                    int32_t var_1c_3 = 0xf
                    int32_t var_20_3 = 0
                    var_30 = 0
                    int32_t var_4_3 = 0xffffffff
                    sub_503740(&var_60)
                    result.b = 0
                    goto label_4f9018
                
                if (*eax_9 != 3)
                    int32_t* eax_93 = var_70
                    
                    if (eax_93 != 0)
                        int32_t* var_8c_10 = eax_93
                        sub_6b4d5b()
                    
                    if (var_1c_1 u>= 0x10)
                        int32_t var_8c_11 = var_30.d
                        sub_6b4d5b()
                    
                    int32_t var_1c_4 = 0xf
                    int32_t var_20_4 = 0
                    var_30 = 0
                    int32_t var_4_4 = 0xffffffff
                    sub_503740(&var_60)
                    result.b = 0
                    goto label_4f9018
                
                sub_401180(&var_30, 0xffffffff, &eax_9[0xa], 0)
                var_48_1 = 0
            
            var_4.b = 1
            int32_t* eax_91 = var_70
            
            if (eax_91 != 0)
                int32_t* var_8c_4 = eax_91
                sub_6b4d5b()
            
            esi_1 = &esi_1[0xb]
            var_70 = nullptr
            var_6c = 0
            int32_t var_68_1 = 0
        while (esi_1 != var_5c)
        
        if (var_1c_1 u>= 0x10)
            int32_t var_8c_5 = var_30.d
            sub_6b4d5b()
    
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0
    int32_t var_4_2 = 0xffffffff
    sub_503740(&var_60)
    result.b = 1
else
    sub_51ddc0(0x754abc)
label_4f8893:
    int32_t var_4_1 = 0xffffffff
    sub_503740(&var_60)
    result.b = 0

label_4f9018:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result
