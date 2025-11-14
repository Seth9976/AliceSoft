// 函数: sub_419a20
// 地址: 0x419a20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg1
int32_t ebx = *(edi + 0x34)
uint8_t var_d = ebx.b
sub_54e400(&var_d, arg2 + 4)
var_d = (ebx u>> 8).b
sub_54e400(&var_d, arg2 + 4)
var_d = (ebx u>> 0x10).b
sub_54e400(&var_d, arg2 + 4)
var_d = (ebx u>> 0x18).b
sub_54e400(&var_d, arg2 + 4)
int32_t ebx_4 = (*(edi + 0x28) - *(edi + 0x24)) s>> 2
var_d = ebx_4.b
sub_54e400(&var_d, arg2 + 4)
var_d = (ebx_4 u>> 8).b
sub_54e400(&var_d, arg2 + 4)
var_d = (ebx_4 u>> 0x10).b
sub_54e400(&var_d, arg2 + 4)
var_d = (ebx_4 u>> 0x18).b
sub_54e400(&var_d, arg2 + 4)
int32_t var_c = 0
int32_t eax_14 = (*(edi + 0x28) - *(edi + 0x24)) s>> 2

if (eax_14 s> 0)
    int32_t eax_45
    
    do
        int32_t ebx_6 = *(*(arg1 + 0x24) + (var_c << 2))
        int32_t eax_16 = *(arg2 + 8)
        var_d = ebx_6.b
        int32_t edx_3
        
        if (&var_d u< eax_16)
            edx_3 = *(arg2 + 4)
        
        if (&var_d u>= eax_16 || edx_3 u> &var_d)
            int32_t ecx_7 = *(arg2 + 0xc)
            
            if (eax_16 == ecx_7)
                int32_t edx_7 = *(arg2 + 4)
                int32_t eax_20 = eax_16 - edx_7
                
                if (eax_20 u> 0xfffffffe)
                    goto label_419e19
                
                int32_t ecx_8 = ecx_7 - edx_7
                
                if (eax_20 + 1 u> ecx_8)
                    uint32_t edx_9 = ecx_8 u>> 1
                    int32_t ecx_9
                    
                    if (0xffffffff - edx_9 u>= ecx_8)
                        ecx_9 = ecx_8 + edx_9
                    else
                        ecx_9 = 0
                    
                    if (ecx_9 u< eax_20 + 1)
                        ecx_9 = eax_20 + 1
                    
                    sub_424860(arg2 + 4, ecx_9)
            
            char* eax_22 = *(arg2 + 8)
            
            if (eax_22 != 0)
                *eax_22 = ebx_6.b
            
            *(arg2 + 8) += 1
        else
            int32_t ecx_5 = *(arg2 + 0xc)
            
            if (eax_16 == ecx_5)
                int32_t eax_17 = eax_16 - edx_3
                
                if (eax_17 u> 0xfffffffe)
                    goto label_419e19
                
                ecx_5 -= edx_3
                
                if (eax_17 + 1 u> ecx_5)
                    uint32_t edx_5 = ecx_5 u>> 1
                    int32_t ecx_6
                    
                    if (0xffffffff - edx_5 u>= ecx_5)
                        ecx_6 = ecx_5 + edx_5
                    else
                        ecx_6 = 0
                    
                    if (ecx_6 u< eax_17 + 1)
                        ecx_6 = eax_17 + 1
                    
                    sub_424860(arg2 + 4, ecx_6)
            
            char* eax_19 = *(arg2 + 8)
            
            if (eax_19 != 0)
                ecx_5.b = *(&var_d - edx_3 + *(arg2 + 4))
                *eax_19 = ecx_5.b
            
            *(arg2 + 8) += 1
        
        int32_t eax_23 = *(arg2 + 8)
        uint8_t ebx_7 = (ebx_6 u>> 8).b
        var_d = ebx_7
        int32_t edx_10
        
        if (&var_d u< eax_23)
            edx_10 = *(arg2 + 4)
        
        if (&var_d u>= eax_23 || edx_10 u> &var_d)
            int32_t ecx_12 = *(arg2 + 0xc)
            
            if (eax_23 == ecx_12)
                int32_t edx_14 = *(arg2 + 4)
                int32_t eax_27 = eax_23 - edx_14
                
                if (eax_27 u> 0xfffffffe)
                    goto label_419e19
                
                int32_t ecx_13 = ecx_12 - edx_14
                
                if (eax_27 + 1 u> ecx_13)
                    uint32_t edx_16 = ecx_13 u>> 1
                    int32_t ecx_14
                    
                    if (0xffffffff - edx_16 u>= ecx_13)
                        ecx_14 = ecx_13 + edx_16
                    else
                        ecx_14 = 0
                    
                    if (ecx_14 u< eax_27 + 1)
                        ecx_14 = eax_27 + 1
                    
                    sub_424860(arg2 + 4, ecx_14)
            
            uint8_t* eax_29 = *(arg2 + 8)
            
            if (eax_29 != 0)
                *eax_29 = ebx_7
        else
            int32_t ecx_10 = *(arg2 + 0xc)
            
            if (eax_23 == ecx_10)
                int32_t eax_24 = eax_23 - edx_10
                
                if (eax_24 u> 0xfffffffe)
                    goto label_419e19
                
                ecx_10 -= edx_10
                
                if (eax_24 + 1 u> ecx_10)
                    uint32_t edx_12 = ecx_10 u>> 1
                    int32_t ecx_11
                    
                    if (0xffffffff - edx_12 u>= ecx_10)
                        ecx_11 = ecx_10 + edx_12
                    else
                        ecx_11 = 0
                    
                    if (ecx_11 u< eax_24 + 1)
                        ecx_11 = eax_24 + 1
                    
                    sub_424860(arg2 + 4, ecx_11)
            
            char* eax_26 = *(arg2 + 8)
            
            if (eax_26 != 0)
                ecx_10.b = *(&var_d - edx_10 + *(arg2 + 4))
                *eax_26 = ecx_10.b
        
        *(arg2 + 8) += 1
        int32_t eax_30 = *(arg2 + 8)
        uint8_t ebx_10 = (ebx_6 u>> 0x10).b
        var_d = ebx_10
        int32_t edx_17
        
        if (&var_d u< eax_30)
            edx_17 = *(arg2 + 4)
        
        if (&var_d u>= eax_30 || edx_17 u> &var_d)
            int32_t ecx_17 = *(arg2 + 0xc)
            
            if (eax_30 == ecx_17)
                int32_t edx_21 = *(arg2 + 4)
                int32_t eax_34 = eax_30 - edx_21
                
                if (eax_34 u> 0xfffffffe)
                    goto label_419e19
                
                int32_t ecx_18 = ecx_17 - edx_21
                
                if (eax_34 + 1 u> ecx_18)
                    uint32_t edx_23 = ecx_18 u>> 1
                    int32_t ecx_19
                    
                    if (0xffffffff - edx_23 u>= ecx_18)
                        ecx_19 = ecx_18 + edx_23
                    else
                        ecx_19 = 0
                    
                    if (ecx_19 u< eax_34 + 1)
                        ecx_19 = eax_34 + 1
                    
                    sub_424860(arg2 + 4, ecx_19)
            
            uint8_t* eax_36 = *(arg2 + 8)
            
            if (eax_36 != 0)
                *eax_36 = ebx_10
        else
            int32_t ecx_15 = *(arg2 + 0xc)
            
            if (eax_30 == ecx_15)
                int32_t eax_31 = eax_30 - edx_17
                
                if (eax_31 u> 0xfffffffe)
                    goto label_419e19
                
                ecx_15 -= edx_17
                
                if (eax_31 + 1 u> ecx_15)
                    uint32_t edx_19 = ecx_15 u>> 1
                    int32_t ecx_16
                    
                    if (0xffffffff - edx_19 u>= ecx_15)
                        ecx_16 = ecx_15 + edx_19
                    else
                        ecx_16 = 0
                    
                    if (ecx_16 u< eax_31 + 1)
                        ecx_16 = eax_31 + 1
                    
                    sub_424860(arg2 + 4, ecx_16)
            
            char* eax_33 = *(arg2 + 8)
            
            if (eax_33 != 0)
                ecx_15.b = *(&var_d - edx_17 + *(arg2 + 4))
                *eax_33 = ecx_15.b
        
        *(arg2 + 8) += 1
        int32_t eax_37 = *(arg2 + 8)
        uint8_t ebx_13 = (ebx_6 u>> 0x18).b
        var_d = ebx_13
        int32_t edx_24
        
        if (&var_d u< eax_37)
            edx_24 = *(arg2 + 4)
        
        if (&var_d u>= eax_37 || edx_24 u> &var_d)
            int32_t ecx_22 = *(arg2 + 0xc)
            
            if (eax_37 == ecx_22)
                int32_t edx_28 = *(arg2 + 4)
                int32_t eax_41 = eax_37 - edx_28
                
                if (eax_41 u> 0xfffffffe)
                    goto label_419e19
                
                int32_t ecx_23 = ecx_22 - edx_28
                
                if (eax_41 + 1 u> ecx_23)
                    uint32_t edx_30 = ecx_23 u>> 1
                    int32_t ecx_24
                    
                    if (0xffffffff - edx_30 u>= ecx_23)
                        ecx_24 = ecx_23 + edx_30
                    else
                        ecx_24 = 0
                    
                    if (ecx_24 u< eax_41 + 1)
                        ecx_24 = eax_41 + 1
                    
                    sub_424860(arg2 + 4, ecx_24)
            
            uint8_t* eax_43 = *(arg2 + 8)
            
            if (eax_43 != 0)
                *eax_43 = ebx_13
        else
            int32_t ecx_20 = *(arg2 + 0xc)
            
            if (eax_37 == ecx_20)
                int32_t eax_38 = eax_37 - edx_24
                
                if (eax_38 u> 0xfffffffe)
                    goto label_419e19
                
                ecx_20 -= edx_24
                
                if (eax_38 + 1 u> ecx_20)
                    uint32_t edx_26 = ecx_20 u>> 1
                    int32_t ecx_21
                    
                    if (0xffffffff - edx_26 u>= ecx_20)
                        ecx_21 = ecx_20 + edx_26
                    else
                        ecx_21 = 0
                    
                    if (ecx_21 u< eax_38 + 1)
                        ecx_21 = eax_38 + 1
                    
                    sub_424860(arg2 + 4, ecx_21)
            
            char* eax_40 = *(arg2 + 8)
            
            if (eax_40 != 0)
                ecx_20.b = *(&var_d - edx_24 + *(arg2 + 4))
                *eax_40 = ecx_20.b
        
        *(arg2 + 8) += 1
        eax_45 = var_c + 1
        var_c = eax_45
    while (eax_45 s< eax_14)
    edi = arg1

int32_t eax_46 = *(arg2 + 8)
int32_t ebx_17 = (*(edi + 0x14) - *(edi + 0x10)) s>> 2
var_d = ebx_17.b
int32_t edx_31

if (&var_d u< eax_46)
    edx_31 = *(arg2 + 4)

if (&var_d u< eax_46 && edx_31 u<= &var_d)
    int32_t ecx_25 = *(arg2 + 0xc)
    
    if (eax_46 != ecx_25)
    label_419e4f:
        char* eax_49 = *(arg2 + 8)
        
        if (eax_49 != 0)
            ecx_25.b = *(&var_d - edx_31 + *(arg2 + 4))
            *eax_49 = ecx_25.b
        
        *(arg2 + 8) += 1
        goto label_419eb3
    
    int32_t eax_47 = eax_46 - edx_31
    
    if (eax_47 u<= 0xfffffffe)
        ecx_25 -= edx_31
        
        if (eax_47 + 1 u> ecx_25)
            uint32_t edx_33 = ecx_25 u>> 1
            int32_t ecx_26
            
            if (0xffffffff - edx_33 u>= ecx_25)
                ecx_26 = ecx_25 + edx_33
            else
                ecx_26 = 0
            
            if (ecx_26 u< eax_47 + 1)
                ecx_26 = eax_47 + 1
            
            sub_424860(arg2 + 4, ecx_26)
        
        goto label_419e4f
    
label_419e19:
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t ecx_27 = *(arg2 + 0xc)

if (eax_46 == ecx_27)
    int32_t edx_35 = *(arg2 + 4)
    int32_t eax_50 = eax_46 - edx_35
    
    if (eax_50 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t ecx_28 = ecx_27 - edx_35
    
    if (eax_50 + 1 u> ecx_28)
        uint32_t edx_37 = ecx_28 u>> 1
        int32_t ecx_29
        
        if (0xffffffff - edx_37 u>= ecx_28)
            ecx_29 = ecx_28 + edx_37
        else
            ecx_29 = 0
        
        if (ecx_29 u< eax_50 + 1)
            ecx_29 = eax_50 + 1
        
        sub_424860(arg2 + 4, ecx_29)

char* eax_52 = *(arg2 + 8)

if (eax_52 != 0)
    *eax_52 = ebx_17.b

*(arg2 + 8) += 1
label_419eb3:
int32_t eax_53 = *(arg2 + 8)
uint8_t ebx_18 = (ebx_17 u>> 8).b
var_d = ebx_18
int32_t edx_38

if (&var_d u< eax_53)
    edx_38 = *(arg2 + 4)

if (&var_d u>= eax_53 || edx_38 u> &var_d)
    int32_t ecx_32 = *(arg2 + 0xc)
    
    if (eax_53 == ecx_32)
        int32_t edx_42 = *(arg2 + 4)
        int32_t eax_57 = eax_53 - edx_42
        
        if (eax_57 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_33 = ecx_32 - edx_42
        
        if (eax_57 + 1 u> ecx_33)
            uint32_t edx_44 = ecx_33 u>> 1
            int32_t ecx_34
            
            if (0xffffffff - edx_44 u>= ecx_33)
                ecx_34 = ecx_33 + edx_44
            else
                ecx_34 = 0
            
            if (ecx_34 u< eax_57 + 1)
                ecx_34 = eax_57 + 1
            
            sub_424860(arg2 + 4, ecx_34)
    
    uint8_t* eax_59 = *(arg2 + 8)
    
    if (eax_59 != 0)
        *eax_59 = ebx_18
else
    int32_t ecx_30 = *(arg2 + 0xc)
    
    if (eax_53 == ecx_30)
        int32_t eax_54 = eax_53 - edx_38
        
        if (eax_54 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_30 -= edx_38
        
        if (eax_54 + 1 u> ecx_30)
            uint32_t edx_40 = ecx_30 u>> 1
            int32_t ecx_31
            
            if (0xffffffff - edx_40 u>= ecx_30)
                ecx_31 = ecx_30 + edx_40
            else
                ecx_31 = 0
            
            if (ecx_31 u< eax_54 + 1)
                ecx_31 = eax_54 + 1
            
            sub_424860(arg2 + 4, ecx_31)
    
    char* eax_56 = *(arg2 + 8)
    
    if (eax_56 != 0)
        ecx_30.b = *(&var_d - edx_38 + *(arg2 + 4))
        *eax_56 = ecx_30.b

*(arg2 + 8) += 1
int32_t eax_60 = *(arg2 + 8)
uint8_t ebx_21 = (ebx_17 u>> 0x10).b
var_d = ebx_21
int32_t edx_45

if (&var_d u< eax_60)
    edx_45 = *(arg2 + 4)

if (&var_d u>= eax_60 || edx_45 u> &var_d)
    int32_t ecx_37 = *(arg2 + 0xc)
    
    if (eax_60 == ecx_37)
        int32_t edx_49 = *(arg2 + 4)
        int32_t eax_64 = eax_60 - edx_49
        
        if (eax_64 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_38 = ecx_37 - edx_49
        
        if (eax_64 + 1 u> ecx_38)
            uint32_t edx_51 = ecx_38 u>> 1
            int32_t ecx_39
            
            if (0xffffffff - edx_51 u>= ecx_38)
                ecx_39 = ecx_38 + edx_51
            else
                ecx_39 = 0
            
            if (ecx_39 u< eax_64 + 1)
                ecx_39 = eax_64 + 1
            
            sub_424860(arg2 + 4, ecx_39)
    
    uint8_t* eax_66 = *(arg2 + 8)
    
    if (eax_66 != 0)
        *eax_66 = ebx_21
else
    int32_t ecx_35 = *(arg2 + 0xc)
    
    if (eax_60 == ecx_35)
        int32_t eax_61 = eax_60 - edx_45
        
        if (eax_61 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_35 -= edx_45
        
        if (eax_61 + 1 u> ecx_35)
            uint32_t edx_47 = ecx_35 u>> 1
            int32_t ecx_36
            
            if (0xffffffff - edx_47 u>= ecx_35)
                ecx_36 = ecx_35 + edx_47
            else
                ecx_36 = 0
            
            if (ecx_36 u< eax_61 + 1)
                ecx_36 = eax_61 + 1
            
            sub_424860(arg2 + 4, ecx_36)
    
    char* eax_63 = *(arg2 + 8)
    
    if (eax_63 != 0)
        ecx_35.b = *(&var_d - edx_45 + *(arg2 + 4))
        *eax_63 = ecx_35.b

*(arg2 + 8) += 1
int32_t eax_67 = *(arg2 + 8)
uint8_t ebx_24 = (ebx_17 u>> 0x18).b
var_d = ebx_24
int32_t edx_52

if (&var_d u< eax_67)
    edx_52 = *(arg2 + 4)

if (&var_d u>= eax_67 || edx_52 u> &var_d)
    int32_t ecx_42 = *(arg2 + 0xc)
    
    if (eax_67 == ecx_42)
        int32_t edx_56 = *(arg2 + 4)
        int32_t eax_71 = eax_67 - edx_56
        
        if (eax_71 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_43 = ecx_42 - edx_56
        
        if (eax_71 + 1 u> ecx_43)
            uint32_t edx_58 = ecx_43 u>> 1
            int32_t ecx_44
            
            if (0xffffffff - edx_58 u>= ecx_43)
                ecx_44 = ecx_43 + edx_58
            else
                ecx_44 = 0
            
            if (ecx_44 u< eax_71 + 1)
                ecx_44 = eax_71 + 1
            
            sub_424860(arg2 + 4, ecx_44)
    
    uint8_t* eax_73 = *(arg2 + 8)
    
    if (eax_73 != 0)
        *eax_73 = ebx_24
else
    int32_t ecx_40 = *(arg2 + 0xc)
    
    if (eax_67 == ecx_40)
        int32_t eax_68 = eax_67 - edx_52
        
        if (eax_68 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_40 -= edx_52
        
        if (eax_68 + 1 u> ecx_40)
            uint32_t edx_54 = ecx_40 u>> 1
            int32_t ecx_41
            
            if (0xffffffff - edx_54 u>= ecx_40)
                ecx_41 = ecx_40 + edx_54
            else
                ecx_41 = 0
            
            if (ecx_41 u< eax_68 + 1)
                ecx_41 = eax_68 + 1
            
            sub_424860(arg2 + 4, ecx_41)
    
    char* eax_70 = *(arg2 + 8)
    
    if (eax_70 != 0)
        ecx_40.b = *(&var_d - edx_52 + *(arg2 + 4))
        *eax_70 = ecx_40.b

*(arg2 + 8) += 1
void** i = *(arg1 + 0x10)
void** i_1 = i

while (i != *(arg1 + 0x14))
    int32_t ebx_26 = *(*i + 0xc)
    int32_t eax_74 = *(arg2 + 8)
    var_d = ebx_26.b
    int32_t edx_60
    
    if (&var_d u< eax_74)
        edx_60 = *(arg2 + 4)
    
    if (&var_d u>= eax_74 || edx_60 u> &var_d)
        int32_t ecx_47 = *(arg2 + 0xc)
        
        if (eax_74 == ecx_47)
            int32_t edx_64 = *(arg2 + 4)
            int32_t eax_78 = eax_74 - edx_64
            
            if (eax_78 u> 0xfffffffe)
                goto label_419e19
            
            int32_t ecx_48 = ecx_47 - edx_64
            
            if (eax_78 + 1 u> ecx_48)
                uint32_t edx_66 = ecx_48 u>> 1
                int32_t ecx_49
                
                if (0xffffffff - edx_66 u>= ecx_48)
                    ecx_49 = ecx_48 + edx_66
                else
                    ecx_49 = 0
                
                if (ecx_49 u< eax_78 + 1)
                    ecx_49 = eax_78 + 1
                
                sub_424860(arg2 + 4, ecx_49)
        
        char* eax_80 = *(arg2 + 8)
        
        if (eax_80 != 0)
            *eax_80 = ebx_26.b
    else
        int32_t ecx_45 = *(arg2 + 0xc)
        
        if (eax_74 == ecx_45)
            int32_t eax_75 = eax_74 - edx_60
            
            if (eax_75 u> 0xfffffffe)
                goto label_419e19
            
            ecx_45 -= edx_60
            
            if (eax_75 + 1 u> ecx_45)
                uint32_t edx_62 = ecx_45 u>> 1
                int32_t ecx_46
                
                if (0xffffffff - edx_62 u>= ecx_45)
                    ecx_46 = ecx_45 + edx_62
                else
                    ecx_46 = 0
                
                if (ecx_46 u< eax_75 + 1)
                    ecx_46 = eax_75 + 1
                
                sub_424860(arg2 + 4, ecx_46)
                i = i_1
        
        char* eax_77 = *(arg2 + 8)
        
        if (eax_77 != 0)
            ecx_45.b = *(&var_d - edx_60 + *(arg2 + 4))
            *eax_77 = ecx_45.b
    
    *(arg2 + 8) += 1
    int32_t eax_81 = *(arg2 + 8)
    uint8_t ebx_27 = (ebx_26 u>> 8).b
    var_d = ebx_27
    int32_t edx_67
    
    if (&var_d u< eax_81)
        edx_67 = *(arg2 + 4)
    
    if (&var_d u>= eax_81 || edx_67 u> &var_d)
        int32_t ecx_52 = *(arg2 + 0xc)
        
        if (eax_81 == ecx_52)
            int32_t edx_71 = *(arg2 + 4)
            int32_t eax_85 = eax_81 - edx_71
            
            if (eax_85 u> 0xfffffffe)
                goto label_419e19
            
            int32_t ecx_53 = ecx_52 - edx_71
            
            if (eax_85 + 1 u> ecx_53)
                uint32_t edx_73 = ecx_53 u>> 1
                int32_t ecx_54
                
                if (0xffffffff - edx_73 u>= ecx_53)
                    ecx_54 = ecx_53 + edx_73
                else
                    ecx_54 = 0
                
                if (ecx_54 u< eax_85 + 1)
                    ecx_54 = eax_85 + 1
                
                sub_424860(arg2 + 4, ecx_54)
        
        uint8_t* eax_87 = *(arg2 + 8)
        
        if (eax_87 != 0)
            *eax_87 = ebx_27
    else
        int32_t ecx_50 = *(arg2 + 0xc)
        
        if (eax_81 == ecx_50)
            int32_t eax_82 = eax_81 - edx_67
            
            if (eax_82 u> 0xfffffffe)
                goto label_419e19
            
            ecx_50 -= edx_67
            
            if (eax_82 + 1 u> ecx_50)
                uint32_t edx_69 = ecx_50 u>> 1
                int32_t ecx_51
                
                if (0xffffffff - edx_69 u>= ecx_50)
                    ecx_51 = ecx_50 + edx_69
                else
                    ecx_51 = 0
                
                if (ecx_51 u< eax_82 + 1)
                    ecx_51 = eax_82 + 1
                
                sub_424860(arg2 + 4, ecx_51)
        
        char* eax_84 = *(arg2 + 8)
        
        if (eax_84 != 0)
            ecx_50.b = *(&var_d - edx_67 + *(arg2 + 4))
            *eax_84 = ecx_50.b
    
    *(arg2 + 8) += 1
    int32_t eax_88 = *(arg2 + 8)
    uint8_t ebx_30 = (ebx_26 u>> 0x10).b
    uint8_t* edx_74 = &var_d
    var_d = ebx_30
    
    if (&var_d u< eax_88)
        edx_74 = *(arg2 + 4)
    
    if (&var_d u>= eax_88 || edx_74 u> &var_d)
        if (eax_88 == *(arg2 + 0xc))
            sub_4247b0(arg2 + 4, edx_74, 1)
        
        uint8_t* eax_93 = *(arg2 + 8)
        
        if (eax_93 != 0)
            *eax_93 = ebx_30
    else
        void* ecx_55 = *(arg2 + 0xc)
        
        if (eax_88 == ecx_55)
            void* eax_89 = eax_88 - edx_74
            
            if (eax_89 u> 0xfffffffe)
                goto label_419e19
            
            ecx_55 -= edx_74
            
            if (eax_89 + 1 u> ecx_55)
                uint32_t edx_76 = ecx_55 u>> 1
                void* ecx_56
                
                if (0xffffffff - edx_76 u>= ecx_55)
                    ecx_56 = ecx_55 + edx_76
                else
                    ecx_56 = nullptr
                
                if (ecx_56 u< eax_89 + 1)
                    ecx_56 = eax_89 + 1
                
                sub_424860(arg2 + 4, ecx_56)
        
        char* eax_91 = *(arg2 + 8)
        
        if (eax_91 != 0)
            ecx_55.b = *(&var_d - edx_74 + *(arg2 + 4))
            *eax_91 = ecx_55.b
    
    *(arg2 + 8) += 1
    var_d = (ebx_26 u>> 0x18).b
    sub_54e400(&var_d, arg2 + 4)
    sub_418590(*i, arg2)
    i = &i[1]
    i_1 = i

void* result
result.b = 1
return result
