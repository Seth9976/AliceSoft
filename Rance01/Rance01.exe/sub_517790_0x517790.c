// 函数: sub_517790
// 地址: 0x517790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722208
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_bc
int32_t eax_2 = data_78c474 ^ &var_bc
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
void* var_78 = ebx
int32_t* var_b0 = nullptr
int32_t var_ac = 0
int32_t var_a8 = 0
int32_t var_a4 = 0
int32_t var_4 = 0
char eax_6 = sub_50c290(ebx + 0x40, arg1, &var_b0)
int32_t edx = var_ac
int32_t* ecx = var_b0

if (eax_6 == 0)
label_517813:
    int32_t var_4_1 = 1
    
    if (ecx != 0)
        (*(*ecx + 4))(eax_4)
        edx = var_ac
    
    if (edx != 0)
        int32_t var_d4_1 = edx
        sub_6b4d5b()
else
    int32_t esi_1
    int32_t edi_1
    
    if (ecx == 0)
        if (edx == var_a8)
            goto label_517813
        
        edi_1 = edx
        esi_1 = var_a8 - edx
        goto label_5178ad
    
    int32_t eax_9 = (*(*ecx + 0x18))(eax_4)
    int32_t* ecx_4 = var_b0
    edi_1 = eax_9
    int32_t eax_13
    
    if (ecx_4 == 0)
        edx = var_ac
        esi_1 = var_a8 - edx
    label_5178ad:
        int32_t eax_15 = edx - var_a8
        int32_t eax_16 = neg.d(eax_15)
        eax_13 = sbb.d(eax_16, eax_16, eax_15 != 0) & edx
    else
        int32_t eax_11 = (*(*ecx_4 + 0x14))()
        int32_t* ecx_5 = var_b0
        esi_1 = eax_11
        
        if (ecx_5 == 0)
            edx = var_ac
            goto label_5178ad
        
        eax_13 = (*(*ecx_5 + 0x18))()
    
    int32_t var_b8_1 = esi_1 + edi_1
    var_bc = eax_13
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    var_4.b = 2
    
    if (sub_410070(&var_bc, &var_30) == 0)
        if (var_1c_1 u>= 0x10)
            int32_t var_d4_3 = var_30.d
            sub_6b4d5b()
        
        int32_t var_1c_2 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
        goto label_51792f
    
    if (sub_402680(0x7537b4, &var_30) != 0)
        int32_t* ecx_7 = &var_bc
        uint32_t var_b4
        
        if (sub_5546f0(ecx_7, &var_b4) == 0)
        label_517de5:
            sub_401110(&var_30)
        label_51792f:
            int32_t var_4_2 = 0xffffffff
            sub_50a970(&var_b0)
            int32_t eax_20
            eax_20.b = 0
        else if (var_b4 != 0)
        label_517d83:
            sub_401110(&var_30)
            int32_t var_4_6 = 0xffffffff
            sub_50a970(&var_b0)
            int32_t eax_59
            eax_59.b = 0
        else
            if (sub_5546f0(ecx_7, &var_b4) == 0)
                goto label_517de5
            
            uint32_t ebp_1 = var_b4
            int32_t eax_25
            int32_t edx_5
            edx_5:eax_25 = muls.dp.d(0x2fa0be83, *(ebx + 0xc) - *(ebx + 8))
            int32_t edx_6 = edx_5 s>> 5
            
            if (ebp_1 != (edx_6 u>> 0x1f) + edx_6)
                goto label_517de5
            
            long double x87_r7_1 = float.t(0)
            int32_t esi_5 = 0
            float var_9c
            float var_98
            float var_94
            float var_90
            float var_8c
            float var_88
            float var_84
            float var_80
            float var_7c
            
            if (ebp_1 s> 0)
                int32_t edi_3 = 0
                
                while (true)
                    int32_t* ecx_10 = &var_bc
                    
                    if (sub_5546f0(ecx_10, &var_b4) != 0)
                        bool cond:0_1 = var_b4 != 0
                        var_90 = fconvert.s(x87_r7_1)
                        var_8c = fconvert.s(x87_r7_1)
                        var_88 = fconvert.s(x87_r7_1)
                        ebx.b = cond:0_1
                        
                        if (sub_40ff40(ecx_10, &var_bc, &var_90) == 0)
                            goto label_517de5
                        
                        char eax_31
                        int32_t ecx_12
                        eax_31, ecx_12 = sub_40ff40(&var_8c, &var_bc, &var_8c)
                        
                        if (eax_31 == 0)
                            goto label_517d83
                        
                        char eax_32
                        int32_t ecx_13
                        eax_32, ecx_13 = sub_40ff40(ecx_12, &var_bc, &var_88)
                        
                        if (eax_32 != 0)
                            long double x87_r7_2 = float.t(0)
                            var_9c = fconvert.s(x87_r7_2)
                            var_98 = fconvert.s(x87_r7_2)
                            var_94 = fconvert.s(x87_r7_2)
                            
                            if (sub_40ff40(ecx_13, &var_bc, &var_9c) == 0)
                                goto label_517de5
                            
                            char eax_34
                            int32_t ecx_15
                            eax_34, ecx_15 = sub_40ff40(&var_98, &var_bc, &var_98)
                            
                            if (eax_34 == 0)
                                goto label_517d83
                            
                            char eax_35
                            int32_t ecx_16
                            eax_35, ecx_16 = sub_40ff40(ecx_15, &var_bc, &var_94)
                            
                            if (eax_35 != 0)
                                if (sub_40ff40(ecx_16, &var_bc, &var_80) == 0)
                                    goto label_517de5
                                
                                char eax_37
                                int32_t ecx_18
                                eax_37, ecx_18 = sub_40ff40(&var_7c, &var_bc, &var_7c)
                                
                                if (eax_37 == 0)
                                    goto label_517d83
                                
                                if (sub_40ff40(ecx_18, &var_bc, &var_84) != 0)
                                    void* eax_40 = *(var_78 + 8)
                                    *(eax_40 + edi_3 + 0x78) = fconvert.s(fconvert.t(var_80))
                                    float ecx_19 = var_90
                                    float edx_16 = var_8c
                                    *(eax_40 + edi_3 + 0x88) = fconvert.s(fconvert.t(var_7c))
                                    long double x87_r7_5 = fconvert.t(var_84)
                                    void* eax_41 = eax_40 + edi_3
                                    *(eax_41 + 0x54) = ecx_19
                                    *(eax_41 + 0x9c) = fconvert.s(x87_r7_5)
                                    float ecx_20 = var_88
                                    *(eax_41 + 0x58) = edx_16
                                    *(eax_41 + 0x60) = var_9c
                                    float edx_18 = var_94
                                    *(eax_41 + 0x5c) = ecx_20
                                    esi_5 += 1
                                    edi_3 += 0xac
                                    *(eax_41 + 0x64) = var_98
                                    *(eax_41 + 0x50) = ebx.b
                                    *(eax_41 + 0x68) = edx_18
                                    
                                    if (esi_5 s>= ebp_1)
                                        ebx = var_78
                                        break
                                    
                                    x87_r7_1 = float.t(0)
                                    continue
                    
                    sub_401110(&var_30)
                    int32_t var_4_4 = 0xffffffff
                    sub_50a970(&var_b0)
                    int32_t eax_42
                    eax_42.b = 0
                    goto label_517843
            
            if (sub_5546f0(&var_bc, &var_b4) == 0)
                goto label_517d83
            
            sub_4b5070(ebx + 0x2c)
            int32_t ebx_1 = 0
            
            if (var_b4 s> 0)
                while (true)
                    struct sealengine::CBoneCollisionShape::VTable* var_6c
                    sub_4b4880(&var_6c)
                    var_4.b = 3
                    
                    if (sub_5546f0(&var_bc, &var_84) != 0)
                        long double x87_r7_6 = float.t(0)
                        var_9c = fconvert.s(x87_r7_6)
                        var_98 = fconvert.s(x87_r7_6)
                        var_94 = fconvert.s(x87_r7_6)
                        char eax_47
                        int32_t ecx_26
                        eax_47, ecx_26 = sub_40ff40(&var_9c, &var_bc, &var_9c)
                        
                        if (eax_47 == 0)
                        label_517da8:
                            sub_4b4910(&var_6c)
                            sub_401110(&var_30)
                            int32_t var_4_7 = 0xffffffff
                            sub_50a970(&var_b0)
                            int32_t eax_60
                            eax_60.b = 0
                            goto label_517843
                        
                        char eax_48
                        int32_t ecx_27
                        eax_48, ecx_27 = sub_40ff40(ecx_26, &var_bc, &var_98)
                        
                        if (eax_48 == 0)
                            sub_4b4910(&var_6c)
                            goto label_517de5
                        
                        if (sub_40ff40(ecx_27, &var_bc, &var_94) != 0)
                            long double x87_r7_7 = float.t(0)
                            var_90 = fconvert.s(x87_r7_7)
                            var_8c = fconvert.s(x87_r7_7)
                            var_88 = fconvert.s(x87_r7_7)
                            char eax_50
                            int32_t ecx_29
                            eax_50, ecx_29 = sub_40ff40(&var_90, &var_bc, &var_90)
                            
                            if (eax_50 == 0)
                                goto label_517da8
                            
                            char eax_51
                            int32_t ecx_30
                            eax_51, ecx_30 = sub_40ff40(ecx_29, &var_bc, &var_8c)
                            
                            if (eax_51 == 0)
                                sub_4b4910(&var_6c)
                                goto label_517de5
                            
                            if (sub_40ff40(ecx_30, &var_bc, &var_88) != 0)
                                if (sub_40ff40(&var_7c, &var_bc, &var_7c) == 0)
                                    goto label_517da8
                                
                                float var_48_1 = fconvert.s(fconvert.t(var_7c))
                                float var_60_1 = var_9c
                                float var_64_1 = var_84
                                float var_5c_1 = var_98
                                float var_54_1 = var_90
                                float var_58_1 = var_94
                                float var_50_1 = var_8c
                                float var_4c_1 = var_88
                                
                                if (sub_5546f0(&var_bc, &var_80) == 0)
                                    sub_4b4910(&var_6c)
                                    goto label_517de5
                                
                                float var_44_1 = var_80
                                uint32_t var_70
                                
                                if (sub_5546f0(&var_bc, &var_70) != 0)
                                    uint32_t ebp_2 = var_70
                                    
                                    if (ebp_2 s> 0)
                                        int32_t edi_4 = 0
                                        
                                        do
                                            uint32_t var_74
                                            
                                            if (sub_5546f0(&var_bc, &var_74) == 0)
                                                goto label_517da8
                                            
                                            sub_4b4950(&var_6c, var_74)
                                            edi_4 += 1
                                        while (edi_4 s< ebp_2)
                                    
                                    sub_4b50e0(&var_6c, var_78 + 0x30)
                                    sub_4b4910(&var_6c)
                                    ebx_1 += 1
                                    
                                    if (ebx_1 s>= var_b4)
                                        goto label_517d54
                                    
                                    continue
                    
                    sub_4b4910(&var_6c)
                    break
                
                goto label_517d83
            
        label_517d54:
            sub_401110(&var_30)
            int32_t var_4_5 = 0xffffffff
            sub_50a970(&var_b0)
    else
        sub_401110(&var_30)
        int32_t var_4_3 = 0xffffffff
        sub_50a970(&var_b0)
        int32_t eax_22
        eax_22.b = 0

label_517843:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_bc)
