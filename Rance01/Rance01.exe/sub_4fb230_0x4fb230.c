// 函数: sub_4fb230
// 地址: 0x4fb230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_72248a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = data_78c474 ^ &var_ac
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_9c = 0
float var_64 = arg3
float var_68 = arg1
int32_t var_60 = 0x400
int32_t var_5c = 0x400
float var_58 = 0f
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_c_1 = 0
int32_t var_78 = 0
int32_t* i_10 = sub_416b10(1)
*i_10 = i_10
i_10[1] = i_10
i_10[2] = i_10
i_10[4].b = 1
*(i_10 + 0x11) = 1
var_c_1.b = 1
int32_t* i_14 = *(arg2 + 0x50)
int32_t* i_3 = i_14
void** var_a8
float var_98
int32_t* i_8
void var_80
void** i_9

if (i_14 != *(arg2 + 0x54))
    void* i
    
    do
        void* eax_9 = *i_3
        void** ecx_1 = *(arg2 + 0x30)
        int32_t esi_1 = *(eax_9 + 0x20)
        int32_t edx_1 = *(eax_9 + 0x1c)
        void** eax_10 = ecx_1[1]
        
        while (*(eax_10 + 0x15) == 0)
            if (eax_10[3] s>= edx_1)
                ecx_1 = eax_10
                eax_10 = *eax_10
            else
                eax_10 = eax_10[2]
        
        float eax_11 = *(arg2 + 0x30)
        var_a8 = ecx_1
        void*** ecx_2
        
        if (ecx_1 == eax_11 || edx_1 s< ecx_1[3])
            var_98 = eax_11
            ecx_2 = &var_98
        else
            ecx_2 = &var_a8
        
        void** ecx_3 = *ecx_2
        void** edi_2
        
        if (ecx_3 == eax_11)
            edi_2 = nullptr
        else
            void** ecx_4 = ecx_3[4]
            
            if (ecx_4 == 0)
                edi_2 = nullptr
            else
                int32_t eax_14 = (ecx_4[0x14] - ecx_4[0x13]) s>> 2
                
                if (eax_14 s> 0)
                    if (esi_1 s>= 0 && esi_1 s< eax_14)
                        edi_2 = *(ecx_4[0x13] + (esi_1 << 2))
                    
                    if (esi_1 s< 0 || esi_1 s>= eax_14 || edi_2 == 0)
                        if (eax_14 s< 1 || eax_14 s<= 0)
                            edi_2 = nullptr
                        else
                            edi_2 = *ecx_4[0x13]
                else
                    edi_2 = ecx_4
        
        var_a8 = edi_2
        
        if (edi_2 != 0 && edi_2[0x10] == 0 && edi_2[0x11] == 0)
            char eax_17
            int80_t st0_1
            st0_1, eax_17 = sub_5008c0(edi_2)
            
            if (eax_17 == 0 && *(eax_9 + 0x25) == 0 && sub_501f90(eax_9) != 0)
                int32_t eax_20 = edi_2[0xd]
                int32_t* edi_3 = edi_2[0xc]
                
                if (((eax_20 - edi_3) & 0xfffffffc) s> 0 || edi_3 != eax_20)
                    void* edi_4 = *edi_3
                    
                    if (edi_4 != 0)
                        int32_t edi_5 = *(edi_4 + 8)
                        
                        if (edi_5 != 0)
                            if (sub_4b7c70(&var_60, edi_5) == 0)
                                int32_t var_c0_3 = edi_5
                                
                                if (sub_4b7cb0(&var_60) != 0)
                                    sub_58c400(&i_8, &var_80, sub_416d20(&var_80, &var_a8))
                            else
                                sub_58c400(&i_9, &var_80, sub_416d20(&var_80, &var_a8))
        
        i = &i_3[1]
        i_3 = i
    while (i != *(arg2 + 0x54))

sub_4b7e80(&var_60)
int32_t var_90_2 = 0
var_98 = var_58

if (var_58 == var_54)
label_4fb7ee:
    int32_t* i_1 = *(arg2 + 0x50)
    int32_t* i_4 = i_1
    
    if (i_1 != *(arg2 + 0x54))
        void* esi_15 = arg2
        
        do
            void* ebx_2 = *i_1
            void** i_21 = *(esi_15 + 0x30)
            void** i_27 = i_21[1]
            int32_t edi_12 = *(ebx_2 + 0x20)
            int32_t edx_17 = *(ebx_2 + 0x1c)
            
            while (*(i_27 + 0x15) == 0)
                if (i_27[3] s>= edx_17)
                    i_21 = i_27
                    i_27 = *i_27
                else
                    i_27 = i_27[2]
            
            int32_t* i_20 = *(esi_15 + 0x30)
            i_9 = i_21
            void*** ecx_31
            
            if (i_21 == i_20 || edx_17 s< i_21[3])
                i_8 = i_20
                ecx_31 = &i_8
            else
                ecx_31 = &i_9
            
            void** ecx_32 = *ecx_31
            
            if (ecx_32 != i_20)
                void* ecx_33 = ecx_32[4]
                
                if (ecx_33 != 0)
                    int32_t eax_58 = (*(ecx_33 + 0x50) - *(ecx_33 + 0x4c)) s>> 2
                    void* const edi_13
                    
                    if (eax_58 s> 0)
                        if (edi_12 s>= 0 && edi_12 s< eax_58)
                            edi_13 = *(*(ecx_33 + 0x4c) + (edi_12 << 2))
                        
                        if (edi_12 s>= 0 && edi_12 s< eax_58 && edi_13 != 0)
                            goto label_4fb956
                        
                        if (eax_58 s>= 1)
                            if (eax_58 s> 0)
                                edi_13 = **(ecx_33 + 0x4c)
                            else
                                edi_13 = nullptr
                            
                            goto label_4fb94e
                    else
                        edi_13 = ecx_33
                    label_4fb94e:
                        
                        if (edi_13 != 0)
                        label_4fb956:
                            
                            if (*(edi_13 + 0x40) == 0 && *(edi_13 + 0x44) == 0)
                                char eax_61
                                int80_t st0_2
                                st0_2, eax_61 = sub_5008c0(edi_13)
                                
                                if (eax_61 == 0 && *(ebx_2 + 0x25) == eax_61
                                        && sub_501f90(ebx_2) != 0)
                                    int32_t eax_63 = *(edi_13 + 0x34)
                                    int32_t* edi_14 = *(edi_13 + 0x30)
                                    
                                    if (((eax_63 - edi_14) & 0xfffffffc) s> 0 || edi_14 != eax_63)
                                        void* edi_15 = *edi_14
                                        
                                        if (edi_15 != 0)
                                            int32_t edi_16 = *(edi_15 + 8)
                                            
                                            if (edi_16 != 0 && sub_4b7c70(&var_60, edi_16) != 0)
                                                int32_t eax_66 = sub_4b7f50(&var_60, edi_16)
                                                
                                                if (eax_66 != 0xffffffff)
                                                    *(ebx_2 + 0x1c) = *(arg2 + 0x3c) + eax_66
                                                    *(ebx_2 + 0x20) = 0
                                                    
                                                    if (sub_4b7ef0(edi_16, &var_60, &var_98, 
                                                            &var_a8, &var_68, &var_64) != 0)
                                                        sub_501aa0(ebx_2, 
                                                            fconvert.s(fconvert.t(var_98)), 
                                                            fconvert.s(fconvert.t(var_a8)), 
                                                            fconvert.s(fconvert.t(var_68)), 
                                                            fconvert.s(fconvert.t(var_64)))
            
            esi_15 = arg2
            i_1 = &i_4[1]
            i_4 = i_1
        while (i_1 != *(esi_15 + 0x54))
    
    void** i_7 = i_10
    void** i_11 = *i_7
    void** i_5 = i_11
    
    if (i_11 != i_7)
        void** i_2
        
        do
            int32_t* edi_17 = *(arg2 + 0x50)
            float eax_71 = *(arg2 + 0x54)
            var_98 = eax_71
            
            if (edi_17 != eax_71)
                void** i_16 = *(arg2 + 0x30)
                
                do
                    void* eax_73 = *edi_17
                    int32_t esi_22 = *(eax_73 + 0x20)
                    int32_t edx_22 = *(eax_73 + 0x1c)
                    void** i_12 = i_16[1]
                    i_7 = i_16
                    
                    while (*(i_12 + 0x15) == 0)
                        if (i_12[3] s>= edx_22)
                            i_7 = i_12
                            i_12 = *i_12
                        else
                            i_12 = i_12[2]
                    
                    i_9 = i_7
                    int32_t** eax_74
                    
                    if (i_7 == i_16 || edx_22 s< i_7[3])
                        i_7 = i_16
                        i_8 = i_7
                        eax_74 = &i_8
                    else
                        eax_74 = &i_9
                    
                    int32_t* eax_75 = *eax_74
                    
                    if (eax_75 != i_16)
                        i_7 = eax_75[4]
                        
                        if (i_7 != 0)
                            int32_t eax_78 = (i_7[0x14] - i_7[0x13]) s>> 2
                            
                            if (eax_78 s<= 0)
                                goto label_4fbb09
                            
                            void** i_15
                            
                            if (esi_22 s>= 0 && esi_22 s< eax_78)
                                i_15 = *(i_7[0x13] + (esi_22 << 2))
                            
                            if (esi_22 s>= 0 && esi_22 s< eax_78 && i_15 != 0)
                                i_7 = i_15
                            label_4fbb09:
                                
                                if (i_7 != 0 && i_5[3] == i_7)
                                    break
                            else if (eax_78 s>= 1)
                                if (eax_78 s> 0)
                                    i_7 = *i_7[0x13]
                                else
                                    i_7 = nullptr
                                
                                goto label_4fbb09
                    
                    edi_17 = &edi_17[1]
                while (edi_17 != var_98)
            
            if (edi_17 == var_98)
                i_7 = sub_501640(i_7, i_5[3], arg2 + 0x2c)
            
            i_2 = i_5
            
            if (*(i_2 + 0x11) == 0)
                i_7 = i_2[2]
                
                if (*(i_7 + 0x11) != 0)
                    void** i_6 = i_2[1]
                    
                    if (*(i_6 + 0x11) == 0)
                        while (i_2 == i_6[2])
                            i_2 = i_6
                            i_6 = i_6[1]
                            
                            if (*(i_6 + 0x11) != 0)
                                break
                    
                    i_2 = i_6
                else
                    void** i_13 = *i_7
                    
                    while (*(i_13 + 0x11) == 0)
                        i_7 = i_13
                        i_13 = *i_7
                    
                    i_2 = i_7
                
                i_5 = i_2
        while (i_2 != i_10)
    
    var_c_1.b = 9
    int32_t*** i_22 = i_10
    sub_58bc40(&var_80, &i_9, *i_22, i_22)
    int32_t* i_18 = i_10
    sub_6b4d5b()
    int32_t var_c_4 = 0xa
    float esi_24 = var_58
    
    if (esi_24 != var_54)
        do
            void* edi_18 = *esi_24
            
            if (edi_18 != 0)
                sub_4b7210(edi_18)
                void* var_c0_27 = edi_18
                sub_6b4d5b()
            
            esi_24 += 4
        while (esi_24 != var_54)
        
        esi_24 = var_58
    
    if (esi_24 != 0)
        float var_c0_28 = esi_24
        sub_6b4d5b()
    
    int32_t eax_86
    eax_86.b = 1
else
    while (true)
        int32_t* esi_7 = *var_98
        int32_t* eax_28 = sub_4b79a0(var_64, esi_7, var_68, eax_4)
        var_a8 = eax_28
        
        if (eax_28 != 0)
            int32_t var_c0_8 = (esi_7[8] - esi_7[7]) s>> 2
            int32_t var_c4_4 = var_90_2
            sub_4104a0("Combine(%d) Numof(%d)")
            var_c_1.b = 2
            i_8 = *(arg2 + 0x3c) + var_90_2
            int32_t* i_30 = operator new(0x5c)
            int32_t* i_26 = i_30
            int32_t* i_33
            int32_t* var_48
            int32_t var_44
            int32_t var_38
            int32_t edi_6
            
            if (i_30 == 0)
                edi_6 = var_44
                i_33 = nullptr
            else
                edi_6 = 0
                var_48 = nullptr
                var_44 = 0
                int32_t var_40_1 = 0
                var_c_1.b = 4
                var_9c |= 1
                i_30[5] = 0xf
                i_30[4] = 0
                *i_30 = 0
                sub_401180(i_30, 0xffffffff, &var_38, 0)
                int32_t var_c_2 = 5
                i_30[7].b = 0
                sub_501270(&i_30[8], &var_48)
                i_30[0xc] = 0
                i_30[0xd] = 0
                i_30[0xe] = 0
                i_30[0x10] = 0
                i_30[0x11] = 0
                i_30[0x12].b = sub_405360(&var_38, "(sprite)", 8) != 0xffffffff
                i_30[0x13] = 0
                i_30[0x14] = 0
                i_30[0x15] = 0
                i_33 = i_30
            
            var_c_1 = 2
            
            if ((var_9c.b & 1) != 0)
                int32_t* esi_10 = var_48
                var_9c &= 0xfffffffe
                
                if (esi_10 != 0)
                    if (esi_10 != edi_6)
                        do
                            (**esi_10)(0)
                            esi_10 = &esi_10[0xb]
                        while (esi_10 != edi_6)
                        
                        esi_10 = var_48
                    
                    int32_t* var_c0_10 = esi_10
                    sub_6b4d5b()
                
                var_48 = nullptr
                var_44 = 0
                int32_t var_40_2 = 0
            
            int32_t* i_31 = operator new(0x40)
            i_26 = i_31
            var_c_1.b = 7
            int32_t* i_29
            
            if (i_31 == 0)
                i_29 = nullptr
            else
                *i_31 = 1
                CRITICAL_SECTION* lpCriticalSection = operator new(0x18)
                
                if (lpCriticalSection == 0)
                    lpCriticalSection = nullptr
                else
                    InitializeCriticalSection(lpCriticalSection)
                
                i_31[1] = lpCriticalSection
                i_31[2] = 0
                i_31[3] = 0
                i_31[4].w = 0
                i_31[0xa] = 0xf
                i_31[9] = 0
                i_31[5].b = 0
                i_31[0xc] = 0
                i_31[0xd] = 0
                i_31[0xe] = 0
                i_31[0xf] = 0
                i_29 = i_31
            
            var_c_1.b = 2
            int32_t var_24
            
            if (sub_4bfa90(i_29, var_a8, &var_38) == 0)
                if (i_29 != 0)
                    sub_4bf950(i_29)
                    int32_t* i_32 = i_29
                    sub_6b4d5b()
                
                if (i_33 != 0)
                    sub_4fff40(i_33)
                    int32_t* i_34 = i_33
                    sub_6b4d5b()
                
                (*(*var_a8 + 4))()
                
                if (var_24 u>= 0x10)
                    int32_t var_c0_18 = var_38
                    sub_6b4d5b()
            else
                int32_t eax_38 = i_33[0xd]
                i_26 = i_29
                int32_t edx_7
                
                if (&i_26 u< eax_38)
                    edx_7 = i_33[0xc]
                
                if (&i_26 u>= eax_38 || edx_7 u> &i_26)
                    int32_t ecx_18 = i_33[0xe]
                    
                    if (eax_38 == ecx_18)
                        int32_t edx_11 = i_33[0xc]
                        int32_t eax_44 = (eax_38 - edx_11) s>> 2
                        
                        if (eax_44 u> 0x3ffffffe)
                            sub_6b47bf("vector<T> too long")
                            noreturn
                        
                        int32_t ecx_20 = (ecx_18 - edx_11) s>> 2
                        
                        if (eax_44 + 1 u> ecx_20)
                            uint32_t edx_13 = ecx_20 u>> 1
                            int32_t ecx_21
                            
                            if (0x3fffffff - edx_13 u>= ecx_20)
                                ecx_21 = ecx_20 + edx_13
                            else
                                ecx_21 = 0
                            
                            if (ecx_21 u< eax_44 + 1)
                                ecx_21 = eax_44 + 1
                            
                            sub_6b0560(&i_33[0xc], ecx_21)
                    
                    int32_t** eax_46 = i_33[0xd]
                    
                    if (eax_46 != 0)
                        *eax_46 = i_29
                else
                    int32_t ecx_13 = i_33[0xe]
                    
                    if (eax_38 == ecx_13)
                        int32_t eax_40 = (eax_38 - edx_7) s>> 2
                        
                        if (eax_40 u> 0x3ffffffe)
                            sub_6b47bf("vector<T> too long")
                            noreturn
                        
                        int32_t ecx_15 = (ecx_13 - edx_7) s>> 2
                        
                        if (eax_40 + 1 u> ecx_15)
                            uint32_t edx_9 = ecx_15 u>> 1
                            int32_t ecx_16
                            
                            if (0x3fffffff - edx_9 u>= ecx_15)
                                ecx_16 = ecx_15 + edx_9
                            else
                                ecx_16 = 0
                            
                            if (ecx_16 u< eax_40 + 1)
                                ecx_16 = eax_40 + 1
                            
                            sub_6b0560(&i_33[0xc], ecx_16)
                    
                    int32_t* eax_42 = i_33[0xd]
                    
                    if (eax_42 != 0)
                        *eax_42 = *(i_33[0xc] + ((&i_26 - edx_7) s>> 2 << 2))
                
                i_33[0xd] += 4
                void** i_24 = *(arg2 + 0x30)
                void** i_28 = i_24[1]
                int32_t* i_25 = i_8
                bool cond:2_1 = *(i_28 + 0x15) != 0
                i_26 = i_25
                void** i_23 = i_24
                
                if (not(cond:2_1))
                    do
                        if (i_28[3] s>= i_25)
                            i_23 = i_28
                            i_28 = *i_28
                        else
                            i_28 = i_28[2]
                    while (*(i_28 + 0x15) == 0)
                
                i_8 = i_23
                int32_t* ecx_23
                
                if (i_23 == i_24 || i_25 s< i_23[3])
                    i_9 = i_24
                    ecx_23 = &i_9
                else
                    ecx_23 = &i_8
                
                if (*ecx_23 == i_24)
                    *sub_5cc1d0(arg2 + 0x2c, &i_26) = i_33
                
                (*(*var_a8 + 4))()
                var_90_2 += 1
                var_c_1.b = 1
                
                if (var_24 u>= 0x10)
                    int32_t var_c0_15 = var_38
                    sub_6b4d5b()
                
                float eax_52 = var_98 i+ 4
                var_98 = eax_52
                
                if (eax_52 == var_54)
                    goto label_4fb7ee
                
                continue
        
        var_c_1.b = 8
        int32_t*** i_19 = i_10
        sub_58bc40(&var_80, &i_9, *i_19, i_19)
        int32_t* i_17 = i_10
        sub_6b4d5b()
        int32_t var_c_3 = 0xffffffff
        sub_4b7be0(&var_60)
        int32_t eax_55
        eax_55.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_ac)
