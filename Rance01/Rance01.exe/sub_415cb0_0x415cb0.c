// 函数: sub_415cb0
// 地址: 0x415cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7155da
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *(arg1 + 0x10)
int32_t* var_34 = eax_3
uint8_t var_3e = eax_3.b
sub_54e400(&var_3e, arg2 + 4)
var_3e = (var_34 u>> 8).b
sub_54e400(&var_3e, arg2 + 4)
var_3e = (var_34 u>> 0x10).b
sub_54e400(&var_3e, arg2 + 4)
var_3e = (var_34 u>> 0x18).b
sub_54e400(&var_3e, arg2 + 4)
int32_t var_20 = 0
int32_t* eax_12 = sub_416b10(1)
*eax_12 = eax_12
eax_12[1] = eax_12
eax_12[2] = eax_12
eax_12[4].b = 1
*(eax_12 + 0x11) = 1
int32_t var_c_1 = 0
int32_t* eax_16 = *(arg1 + 0xc)
int32_t* i = *eax_16
int32_t* i_2
int32_t* var_30
void var_28

if (i != eax_16)
    do
        void* esi_1 = i[4]
        
        if (*(esi_1 + 0x28) != 0 && (*(**(esi_1 + 0x28) + 0x30))(eax_2) != 0)
            sub_416880(&var_28, &i[3], &var_30)
        
        int32_t* eax_22
        
        if (*(esi_1 + 0x28) != 0 && *(esi_1 + 0x28) != 0)
            if ((*(**(esi_1 + 0x28) + 8))() == 0xb)
                eax_22 = *(*(esi_1 + 0x28) + 0x2c)
            else
                eax_22 = nullptr
        else
            eax_22 = nullptr
        
        var_34 = eax_22
        sub_416b60(&i_2, &var_28, sub_416d20(&var_28, &var_34))
        
        if (*(i + 0x15) == 0)
            int32_t* i_3 = i[2]
            
            if (*(i_3 + 0x15) != 0)
                int32_t* i_5 = i[1]
                
                if (*(i_5 + 0x15) == 0)
                    while (i == i_5[2])
                        i = i_5
                        i_5 = i_5[1]
                        
                        if (*(i_5 + 0x15) != 0)
                            break
                
                i = i_5
            else
                i = i_3
                int32_t* i_4 = *i
                
                while (*(i_4 + 0x15) == 0)
                    i = i_4
                    i_4 = *i
    while (i != *(arg1 + 0xc))

int32_t* eax_25 = *(arg1 + 0xc)
int32_t* i_10 = *eax_25
i_2 = i_10

if (i_10 != eax_25)
    while (true)
        void** eax_26 = eax_12[1]
        int32_t* ecx_8 = eax_12
        
        while (*(eax_26 + 0x11) == 0)
            if (eax_26[3] s>= i_2[3])
                ecx_8 = eax_26
                eax_26 = *eax_26
            else
                eax_26 = eax_26[2]
        
        var_34 = ecx_8
        int32_t** eax_29
        
        if (ecx_8 == eax_12 || i_2[3] s< ecx_8[3])
            var_30 = eax_12
            eax_29 = &var_30
        else
            eax_29 = &var_34
        
        eax_29.b = *eax_29 != eax_12
        int32_t* edx_4
        edx_4.b = eax_29.b != 0
        char var_3d_1 = eax_29.b
        int32_t eax_30 = *(arg2 + 8)
        var_3e = edx_4.b
        var_34 = edx_4
        int32_t esi_7
        
        if (&var_3e u< eax_30)
            esi_7 = *(arg2 + 4)
        
        if (&var_3e u>= eax_30 || esi_7 u> &var_3e)
            int32_t ecx_13 = *(arg2 + 0xc)
            
            if (eax_30 != ecx_13)
            label_415f57:
                char* eax_36 = *(arg2 + 8)
                
                if (eax_36 != 0)
                    *eax_36 = edx_4.b
                
            label_415f60:
                *(arg2 + 8) += 1
                int32_t eax_37 = *(arg2 + 8)
                var_3e = (edx_4 u>> 8).b
                int32_t esi_13
                
                if (&var_3e u< eax_37)
                    esi_13 = *(arg2 + 4)
                
                if (&var_3e u>= eax_37 || esi_13 u> &var_3e)
                    int32_t ecx_22 = *(arg2 + 0xc)
                    
                    if (eax_37 != ecx_22)
                    label_41600f:
                        char* eax_43 = *(arg2 + 8)
                        
                        if (eax_43 != 0)
                            ecx_22.b = var_3e
                            *eax_43 = ecx_22.b
                        
                    label_41601c:
                        *(arg2 + 8) += 1
                        var_3e = (edx_4 u>> 0x10).b
                        int32_t eax_46 = *(arg2 + 8)
                        int32_t esi_19
                        
                        if (&var_3e u< eax_46)
                            esi_19 = *(arg2 + 4)
                        
                        if (&var_3e u>= eax_46 || esi_19 u> &var_3e)
                            int32_t ecx_28 = *(arg2 + 0xc)
                            
                            if (eax_46 != ecx_28)
                            label_4160cb:
                                char* eax_52 = *(arg2 + 8)
                                
                                if (eax_52 != 0)
                                    ecx_28.b = var_3e
                                    *eax_52 = ecx_28.b
                                
                            label_4160d8:
                                *(arg2 + 8) += 1
                                int32_t eax_53 = *(arg2 + 8)
                                var_3e = (edx_4 u>> 0x18).b
                                int32_t edx_18
                                
                                if (&var_3e u< eax_53)
                                    edx_18 = *(arg2 + 4)
                                
                                if (&var_3e u>= eax_53 || edx_18 u> &var_3e)
                                    int32_t ecx_34 = *(arg2 + 0xc)
                                    
                                    if (eax_53 != ecx_34)
                                    label_416181:
                                        char* eax_59 = *(arg2 + 8)
                                        
                                        if (eax_59 != 0)
                                            ecx_34.b = var_3e
                                            *eax_59 = ecx_34.b
                                        
                                    label_41618e:
                                        *(arg2 + 8) += 1
                                        
                                        if (var_3d_1 == 0)
                                        label_4164a0:
                                            int32_t* i_1 = i_2
                                            
                                            if (*(i_1 + 0x15) == 0)
                                                int32_t* i_6 = i_1[2]
                                                
                                                if (*(i_6 + 0x15) != 0)
                                                    int32_t* i_8 = i_1[1]
                                                    
                                                    if (*(i_8 + 0x15) == 0)
                                                        while (i_1 == i_8[2])
                                                            i_1 = i_8
                                                            i_8 = i_8[1]
                                                            
                                                            if (*(i_8 + 0x15) != 0)
                                                                break
                                                    
                                                    i_1 = i_8
                                                else
                                                    i_1 = i_6
                                                    int32_t* i_7 = *i_1
                                                    
                                                    while (*(i_7 + 0x15) == 0)
                                                        i_1 = i_7
                                                        i_7 = *i_1
                                                
                                                i_2 = i_1
                                            
                                            if (i_1 == *(arg1 + 0xc))
                                                break
                                            
                                            continue
                                        else
                                            int32_t* edx_25 = i_2[3]
                                            int32_t eax_60 = *(arg2 + 8)
                                            var_34 = edx_25
                                            var_3e = edx_25.b
                                            int32_t esi_29
                                            
                                            if (&var_3e u< eax_60)
                                                esi_29 = *(arg2 + 4)
                                            
                                            if (&var_3e u>= eax_60 || esi_29 u> &var_3e)
                                                int32_t ecx_40 = *(arg2 + 0xc)
                                                
                                                if (eax_60 != ecx_40)
                                                label_41624e:
                                                    char* eax_66 = *(arg2 + 8)
                                                    
                                                    if (eax_66 != 0)
                                                        *eax_66 = edx_25.b
                                                    
                                                label_416257:
                                                    *(arg2 + 8) += 1
                                                    int32_t eax_67 = *(arg2 + 8)
                                                    var_3e = (edx_25 u>> 8).b
                                                    int32_t esi_35
                                                    
                                                    if (&var_3e u< eax_67)
                                                        esi_35 = *(arg2 + 4)
                                                    
                                                    if (&var_3e u>= eax_67 || esi_35 u> &var_3e)
                                                        int32_t ecx_49 = *(arg2 + 0xc)
                                                        
                                                        if (eax_67 != ecx_49)
                                                        label_416306:
                                                            char* eax_73 = *(arg2 + 8)
                                                            
                                                            if (eax_73 != 0)
                                                                ecx_49.b = var_3e
                                                                *eax_73 = ecx_49.b
                                                            
                                                        label_416313:
                                                            *(arg2 + 8) += 1
                                                            var_3e = (edx_25 u>> 0x10).b
                                                            int32_t eax_76 = *(arg2 + 8)
                                                            int32_t esi_41
                                                            
                                                            if (&var_3e u< eax_76)
                                                                esi_41 = *(arg2 + 4)
                                                            
                                                            if (&var_3e u>= eax_76
                                                                    || esi_41 u> &var_3e)
                                                                int32_t ecx_55 = *(arg2 + 0xc)
                                                                
                                                                if (eax_76 != ecx_55)
                                                                label_4163c2:
                                                                    char* eax_82 = *(arg2 + 8)
                                                                    
                                                                    if (eax_82 != 0)
                                                                        ecx_55.b = var_3e
                                                                        *eax_82 = ecx_55.b
                                                                    
                                                                label_4163cf:
                                                                    *(arg2 + 8) += 1
                                                                    int32_t eax_83 = *(arg2 + 8)
                                                                    var_3e = (edx_25 u>> 0x18).b
                                                                    int32_t edx_39
                                                                    
                                                                    if (&var_3e u< eax_83)
                                                                        edx_39 = *(arg2 + 4)
                                                                    
                                                                    if (&var_3e u>= eax_83
                                                                            || edx_39 u> &var_3e)
                                                                        int32_t ecx_61 = *(arg2 + 0xc)
                                                                        
                                                                        if (eax_83 != ecx_61)
                                                                        label_416478:
                                                                            char* eax_89 = *(arg2 + 8)
                                                                            
                                                                            if (eax_89 != 0)
                                                                                ecx_61.b = var_3e
                                                                                *eax_89 = ecx_61.b
                                                                            
                                                                        label_416488:
                                                                            int32_t* i_9 = i_2
                                                                            *(arg2 + 8) += 1
                                                                            
                                                                            if (sub_413d10(i_9[4], arg2) != 0)
                                                                                goto label_4164a0
                                                                            
                                                                            int32_t var_c_3 = 1
                                                                            int32_t*** eax_94 = eax_12
                                                                            sub_58bc40(&var_28, &var_30, *eax_94, 
                                                                                eax_94)
                                                                            int32_t* var_58_24 = eax_12
                                                                            sub_6b4d5b()
                                                                            int32_t eax_97
                                                                            eax_97.b = 0
                                                                            fsbase->NtTib.ExceptionList =
                                                                                ExceptionList
                                                                            return eax_97
                                                                        
                                                                        int32_t edx_42 = *(arg2 + 4)
                                                                        int32_t eax_87 = eax_83 - edx_42
                                                                        
                                                                        if (eax_87 u<= 0xfffffffe)
                                                                            ecx_61 -= edx_42
                                                                            
                                                                            if (eax_87 + 1 u> ecx_61)
                                                                                uint32_t edx_44 = ecx_61 u>> 1
                                                                                int32_t ecx_62
                                                                                
                                                                                if (0xffffffff - edx_44 u>= ecx_61)
                                                                                    ecx_62 = ecx_61 + edx_44
                                                                                else
                                                                                    ecx_62 = 0
                                                                                
                                                                                if (ecx_62 u< eax_87 + 1)
                                                                                    ecx_62 = eax_87 + 1
                                                                                
                                                                                sub_424860(arg2 + 4, ecx_62)
                                                                            
                                                                            goto label_416478
                                                                    else
                                                                        int32_t ecx_57 = *(arg2 + 0xc)
                                                                        
                                                                        if (eax_83 != ecx_57)
                                                                        label_41642c:
                                                                            char* ecx_60 = *(arg2 + 8)
                                                                            
                                                                            if (ecx_60 != 0)
                                                                                edx_39.b =
                                                                                    *(*(arg2 + 4) + &var_3e - edx_39)
                                                                                *ecx_60 = edx_39.b
                                                                            
                                                                            goto label_416488
                                                                        
                                                                        int32_t eax_84 = eax_83 - edx_39
                                                                        
                                                                        if (eax_84 u<= 0xfffffffe)
                                                                            int32_t ecx_58 = ecx_57 - edx_39
                                                                            
                                                                            if (eax_84 + 1 u> ecx_58)
                                                                                uint32_t edx_41 = ecx_58 u>> 1
                                                                                int32_t ecx_59
                                                                                
                                                                                if (0xffffffff - edx_41 u>= ecx_58)
                                                                                    ecx_59 = ecx_58 + edx_41
                                                                                else
                                                                                    ecx_59 = 0
                                                                                
                                                                                if (ecx_59 u< eax_84 + 1)
                                                                                    ecx_59 = eax_84 + 1
                                                                                
                                                                                sub_424860(arg2 + 4, ecx_59)
                                                                            
                                                                            goto label_41642c
                                                                else
                                                                    int32_t esi_44 = *(arg2 + 4)
                                                                    int32_t eax_80 = eax_76 - esi_44
                                                                    
                                                                    if (eax_80 u<= 0xfffffffe)
                                                                        ecx_55 -= esi_44
                                                                        
                                                                        if (eax_80 + 1 u> ecx_55)
                                                                            uint32_t edx_37 = ecx_55 u>> 1
                                                                            int32_t ecx_56
                                                                            
                                                                            if (0xffffffff - edx_37 u>= ecx_55)
                                                                                ecx_56 = ecx_55 + edx_37
                                                                            else
                                                                                ecx_56 = 0
                                                                            
                                                                            if (ecx_56 u< eax_80 + 1)
                                                                                ecx_56 = eax_80 + 1
                                                                            
                                                                            sub_424860(arg2 + 4, ecx_56)
                                                                            edx_25 = var_34
                                                                        
                                                                        goto label_4163c2
                                                            else
                                                                int32_t ecx_51 = *(arg2 + 0xc)
                                                                
                                                                if (eax_76 != ecx_51)
                                                                label_416372:
                                                                    char* ecx_54 = *(arg2 + 8)
                                                                    
                                                                    if (ecx_54 != 0)
                                                                        char* eax_79
                                                                        eax_79.b =
                                                                            *(*(arg2 + 4) + &var_3e - esi_41)
                                                                        *ecx_54 = eax_79.b
                                                                    
                                                                    goto label_4163cf
                                                                
                                                                int32_t eax_77 = eax_76 - esi_41
                                                                
                                                                if (eax_77 u<= 0xfffffffe)
                                                                    int32_t ecx_52 = ecx_51 - esi_41
                                                                    
                                                                    if (eax_77 + 1 u> ecx_52)
                                                                        uint32_t edx_35 = ecx_52 u>> 1
                                                                        int32_t ecx_53
                                                                        
                                                                        if (0xffffffff - edx_35 u>= ecx_52)
                                                                            ecx_53 = ecx_52 + edx_35
                                                                        else
                                                                            ecx_53 = 0
                                                                        
                                                                        if (ecx_53 u< eax_77 + 1)
                                                                            ecx_53 = eax_77 + 1
                                                                        
                                                                        sub_424860(arg2 + 4, ecx_53)
                                                                        edx_25 = var_34
                                                                    
                                                                    goto label_416372
                                                        else
                                                            int32_t esi_38 = *(arg2 + 4)
                                                            int32_t eax_71 = eax_67 - esi_38
                                                            
                                                            if (eax_71 u<= 0xfffffffe)
                                                                ecx_49 -= esi_38
                                                                
                                                                if (eax_71 + 1 u> ecx_49)
                                                                    uint32_t edx_33 = ecx_49 u>> 1
                                                                    int32_t ecx_50
                                                                    
                                                                    if (0xffffffff - edx_33 u>= ecx_49)
                                                                        ecx_50 = ecx_49 + edx_33
                                                                    else
                                                                        ecx_50 = 0
                                                                    
                                                                    if (ecx_50 u< eax_71 + 1)
                                                                        ecx_50 = eax_71 + 1
                                                                    
                                                                    sub_424860(arg2 + 4, ecx_50)
                                                                    edx_25 = var_34
                                                                
                                                                goto label_416306
                                                    else
                                                        int32_t ecx_45 = *(arg2 + 0xc)
                                                        
                                                        if (eax_67 != ecx_45)
                                                        label_4162b6:
                                                            char* ecx_48 = *(arg2 + 8)
                                                            
                                                            if (ecx_48 != 0)
                                                                char* eax_70
                                                                eax_70.b =
                                                                    *(*(arg2 + 4) + &var_3e - esi_35)
                                                                *ecx_48 = eax_70.b
                                                            
                                                            goto label_416313
                                                        
                                                        int32_t eax_68 = eax_67 - esi_35
                                                        
                                                        if (eax_68 u<= 0xfffffffe)
                                                            int32_t ecx_46 = ecx_45 - esi_35
                                                            
                                                            if (eax_68 + 1 u> ecx_46)
                                                                uint32_t edx_31 = ecx_46 u>> 1
                                                                int32_t ecx_47
                                                                
                                                                if (0xffffffff - edx_31 u>= ecx_46)
                                                                    ecx_47 = ecx_46 + edx_31
                                                                else
                                                                    ecx_47 = 0
                                                                
                                                                if (ecx_47 u< eax_68 + 1)
                                                                    ecx_47 = eax_68 + 1
                                                                
                                                                sub_424860(arg2 + 4, ecx_47)
                                                                edx_25 = var_34
                                                            
                                                            goto label_4162b6
                                                else
                                                    int32_t esi_32 = *(arg2 + 4)
                                                    int32_t eax_64 = eax_60 - esi_32
                                                    
                                                    if (eax_64 u<= 0xfffffffe)
                                                        int32_t ecx_41 = ecx_40 - esi_32
                                                        
                                                        if (eax_64 + 1 u> ecx_41)
                                                            uint32_t edx_29 = ecx_41 u>> 1
                                                            int32_t ecx_42
                                                            
                                                            if (0xffffffff - edx_29 u>= ecx_41)
                                                                ecx_42 = ecx_41 + edx_29
                                                            else
                                                                ecx_42 = 0
                                                            
                                                            if (ecx_42 u< eax_64 + 1)
                                                                ecx_42 = eax_64 + 1
                                                            
                                                            sub_424860(arg2 + 4, ecx_42)
                                                            edx_25 = var_34
                                                        
                                                        goto label_41624e
                                            else
                                                int32_t ecx_36 = *(arg2 + 0xc)
                                                
                                                if (eax_60 != ecx_36)
                                                label_4161fe:
                                                    char* ecx_39 = *(arg2 + 8)
                                                    
                                                    if (ecx_39 != 0)
                                                        char* eax_63
                                                        eax_63.b = *(*(arg2 + 4) + &var_3e - esi_29)
                                                        *ecx_39 = eax_63.b
                                                    
                                                    goto label_416257
                                                
                                                int32_t eax_61 = eax_60 - esi_29
                                                
                                                if (eax_61 u<= 0xfffffffe)
                                                    int32_t ecx_37 = ecx_36 - esi_29
                                                    
                                                    if (eax_61 + 1 u> ecx_37)
                                                        uint32_t edx_27 = ecx_37 u>> 1
                                                        int32_t ecx_38
                                                        
                                                        if (0xffffffff - edx_27 u>= ecx_37)
                                                            ecx_38 = ecx_37 + edx_27
                                                        else
                                                            ecx_38 = 0
                                                        
                                                        if (ecx_38 u< eax_61 + 1)
                                                            ecx_38 = eax_61 + 1
                                                        
                                                        sub_424860(arg2 + 4, ecx_38)
                                                        edx_25 = var_34
                                                    
                                                    goto label_4161fe
                                    else
                                        int32_t edx_21 = *(arg2 + 4)
                                        int32_t eax_57 = eax_53 - edx_21
                                        
                                        if (eax_57 u<= 0xfffffffe)
                                            ecx_34 -= edx_21
                                            
                                            if (eax_57 + 1 u> ecx_34)
                                                uint32_t edx_23 = ecx_34 u>> 1
                                                int32_t ecx_35
                                                
                                                if (0xffffffff - edx_23 u>= ecx_34)
                                                    ecx_35 = ecx_34 + edx_23
                                                else
                                                    ecx_35 = 0
                                                
                                                if (ecx_35 u< eax_57 + 1)
                                                    ecx_35 = eax_57 + 1
                                                
                                                sub_424860(arg2 + 4, ecx_35)
                                            
                                            goto label_416181
                                else
                                    int32_t ecx_30 = *(arg2 + 0xc)
                                    
                                    if (eax_53 != ecx_30)
                                    label_416135:
                                        char* ecx_33 = *(arg2 + 8)
                                        
                                        if (ecx_33 != 0)
                                            edx_18.b = *(*(arg2 + 4) + &var_3e - edx_18)
                                            *ecx_33 = edx_18.b
                                        
                                        goto label_41618e
                                    
                                    int32_t eax_54 = eax_53 - edx_18
                                    
                                    if (eax_54 u<= 0xfffffffe)
                                        int32_t ecx_31 = ecx_30 - edx_18
                                        
                                        if (eax_54 + 1 u> ecx_31)
                                            uint32_t edx_20 = ecx_31 u>> 1
                                            int32_t ecx_32
                                            
                                            if (0xffffffff - edx_20 u>= ecx_31)
                                                ecx_32 = ecx_31 + edx_20
                                            else
                                                ecx_32 = 0
                                            
                                            if (ecx_32 u< eax_54 + 1)
                                                ecx_32 = eax_54 + 1
                                            
                                            sub_424860(arg2 + 4, ecx_32)
                                        
                                        goto label_416135
                            else
                                int32_t esi_22 = *(arg2 + 4)
                                int32_t eax_50 = eax_46 - esi_22
                                
                                if (eax_50 u<= 0xfffffffe)
                                    ecx_28 -= esi_22
                                    
                                    if (eax_50 + 1 u> ecx_28)
                                        uint32_t edx_16 = ecx_28 u>> 1
                                        int32_t ecx_29
                                        
                                        if (0xffffffff - edx_16 u>= ecx_28)
                                            ecx_29 = ecx_28 + edx_16
                                        else
                                            ecx_29 = 0
                                        
                                        if (ecx_29 u< eax_50 + 1)
                                            ecx_29 = eax_50 + 1
                                        
                                        sub_424860(arg2 + 4, ecx_29)
                                        edx_4 = var_34
                                    
                                    goto label_4160cb
                        else
                            int32_t ecx_24 = *(arg2 + 0xc)
                            
                            if (eax_46 != ecx_24)
                            label_41607b:
                                char* ecx_27 = *(arg2 + 8)
                                
                                if (ecx_27 != 0)
                                    char* eax_49
                                    eax_49.b = *(*(arg2 + 4) + &var_3e - esi_19)
                                    *ecx_27 = eax_49.b
                                
                                goto label_4160d8
                            
                            int32_t eax_47 = eax_46 - esi_19
                            
                            if (eax_47 u<= 0xfffffffe)
                                int32_t ecx_25 = ecx_24 - esi_19
                                
                                if (eax_47 + 1 u> ecx_25)
                                    uint32_t edx_14 = ecx_25 u>> 1
                                    int32_t ecx_26
                                    
                                    if (0xffffffff - edx_14 u>= ecx_25)
                                        ecx_26 = ecx_25 + edx_14
                                    else
                                        ecx_26 = 0
                                    
                                    if (ecx_26 u< eax_47 + 1)
                                        ecx_26 = eax_47 + 1
                                    
                                    sub_424860(arg2 + 4, ecx_26)
                                    edx_4 = var_34
                                
                                goto label_41607b
                    else
                        int32_t esi_16 = *(arg2 + 4)
                        int32_t eax_41 = eax_37 - esi_16
                        
                        if (eax_41 u<= 0xfffffffe)
                            ecx_22 -= esi_16
                            
                            if (eax_41 + 1 u> ecx_22)
                                uint32_t edx_12 = ecx_22 u>> 1
                                int32_t ecx_23
                                
                                if (0xffffffff - edx_12 u>= ecx_22)
                                    ecx_23 = ecx_22 + edx_12
                                else
                                    ecx_23 = 0
                                
                                if (ecx_23 u< eax_41 + 1)
                                    ecx_23 = eax_41 + 1
                                
                                sub_424860(arg2 + 4, ecx_23)
                                edx_4 = var_34
                            
                            goto label_41600f
                else
                    int32_t ecx_18 = *(arg2 + 0xc)
                    
                    if (eax_37 != ecx_18)
                    label_415fbf:
                        char* ecx_21 = *(arg2 + 8)
                        
                        if (ecx_21 != 0)
                            char* eax_40
                            eax_40.b = *(*(arg2 + 4) + &var_3e - esi_13)
                            *ecx_21 = eax_40.b
                        
                        goto label_41601c
                    
                    int32_t eax_38 = eax_37 - esi_13
                    
                    if (eax_38 u<= 0xfffffffe)
                        int32_t ecx_19 = ecx_18 - esi_13
                        
                        if (eax_38 + 1 u> ecx_19)
                            uint32_t edx_10 = ecx_19 u>> 1
                            int32_t ecx_20
                            
                            if (0xffffffff - edx_10 u>= ecx_19)
                                ecx_20 = ecx_19 + edx_10
                            else
                                ecx_20 = 0
                            
                            if (ecx_20 u< eax_38 + 1)
                                ecx_20 = eax_38 + 1
                            
                            sub_424860(arg2 + 4, ecx_20)
                            edx_4 = var_34
                        
                        goto label_415fbf
            else
                int32_t esi_10 = *(arg2 + 4)
                int32_t eax_34 = eax_30 - esi_10
                
                if (eax_34 u<= 0xfffffffe)
                    int32_t ecx_14 = ecx_13 - esi_10
                    
                    if (eax_34 + 1 u> ecx_14)
                        uint32_t edx_8 = ecx_14 u>> 1
                        int32_t ecx_15
                        
                        if (0xffffffff - edx_8 u>= ecx_14)
                            ecx_15 = ecx_14 + edx_8
                        else
                            ecx_15 = 0
                        
                        if (ecx_15 u< eax_34 + 1)
                            ecx_15 = eax_34 + 1
                        
                        sub_424860(arg2 + 4, ecx_15)
                        edx_4 = var_34
                    
                    goto label_415f57
        else
            int32_t ecx_9 = *(arg2 + 0xc)
            
            if (eax_30 != ecx_9)
            label_415f07:
                char* ecx_12 = *(arg2 + 8)
                
                if (ecx_12 != 0)
                    char* eax_33
                    eax_33.b = *(*(arg2 + 4) + &var_3e - esi_7)
                    *ecx_12 = eax_33.b
                
                goto label_415f60
            
            int32_t eax_31 = eax_30 - esi_7
            
            if (eax_31 u<= 0xfffffffe)
                int32_t ecx_10 = ecx_9 - esi_7
                
                if (eax_31 + 1 u> ecx_10)
                    uint32_t edx_6 = ecx_10 u>> 1
                    int32_t ecx_11
                    
                    if (0xffffffff - edx_6 u>= ecx_10)
                        ecx_11 = ecx_10 + edx_6
                    else
                        ecx_11 = 0
                    
                    if (ecx_11 u< eax_31 + 1)
                        ecx_11 = eax_31 + 1
                    
                    sub_424860(arg2 + 4, ecx_11)
                    edx_4 = var_34
                
                goto label_415f07
        
        sub_6b47bf("vector<T> too long")
        noreturn

int32_t var_c_2 = 2
int32_t*** ecx_64 = eax_12
sub_58bc40(&var_28, &var_30, *ecx_64, ecx_64)
int32_t* var_58_22 = eax_12
sub_6b4d5b()
int32_t eax_93
eax_93.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_93
