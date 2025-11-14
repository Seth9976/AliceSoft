// 函数: sub_5f1580
// 地址: 0x5f1580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2
void* ebp = arg1
void* eax = ebp + 0x10
int32_t esi = *(eax + 0x14)
void* var_c = ebp
void* edi

if (esi u< 0x10)
    edi = eax
else
    edi = *eax

if (esi u>= 0x10)
    eax = *eax

void* var_24 = arg2
sub_4102d0(ebx + 4, *(ebx + 8), eax, edi + *(ebp + 0x20))
uint8_t var_d = 0
sub_54e400(&var_d, ebx + 4)
int32_t ebx_2 = *(ebp + 0x2c)
var_d = ebx_2.b
sub_54e400(&var_d, ebx + 4)
var_d = (ebx_2 u>> 8).b
sub_54e400(&var_d, ebx + 4)
var_d = (ebx_2 u>> 0x10).b
sub_54e400(&var_d, ebx + 4)
var_d = (ebx_2 u>> 0x18).b
sub_54e400(&var_d, ebx + 4)
int32_t ebx_6 = (*(ebp + 0x34) - *(ebp + 0x30)) s>> 2
var_d = ebx_6.b
sub_54e400(&var_d, ebx + 4)
var_d = (ebx_6 u>> 8).b
sub_54e400(&var_d, ebx + 4)
var_d = (ebx_6 u>> 0x10).b
sub_54e400(&var_d, ebx + 4)
var_d = (ebx_6 u>> 0x18).b
sub_54e400(&var_d, ebx + 4)
int32_t* i_2 = *(ebp + 0x30)
int32_t* i_1 = i_2

if (i_2 != *(ebp + 0x34))
    void* i
    
    do
        int32_t ebx_8 = *i_1
        int32_t eax_14 = *(ebx + 8)
        var_d = ebx_8.b
        int32_t edx_3
        
        if (&var_d u< eax_14)
            edx_3 = *(ebx + 4)
        
        if (&var_d u>= eax_14 || edx_3 u> &var_d)
            int32_t ecx_8 = *(ebx + 0xc)
            
            if (eax_14 == ecx_8)
                int32_t edx_7 = *(ebx + 4)
                int32_t eax_18 = eax_14 - edx_7
                
                if (eax_18 u> 0xfffffffe)
                    goto label_5f199c
                
                int32_t ecx_9 = ecx_8 - edx_7
                
                if (eax_18 + 1 u> ecx_9)
                    uint32_t edx_9 = ecx_9 u>> 1
                    uint32_t ecx_10
                    
                    if (0xffffffff - edx_9 u>= ecx_9)
                        ecx_10 = ecx_9 + edx_9
                    else
                        ecx_10 = 0
                    
                    if (ecx_10 u< eax_18 + 1)
                        ecx_10 = eax_18 + 1
                    
                    sub_424860(ebx + 4, ecx_10)
            
            char* eax_20 = *(ebx + 8)
            
            if (eax_20 != 0)
                *eax_20 = ebx_8.b
            
            *(ebx + 8) += 1
        else
            int32_t ecx_6 = *(ebx + 0xc)
            
            if (eax_14 == ecx_6)
                int32_t eax_15 = eax_14 - edx_3
                
                if (eax_15 u> 0xfffffffe)
                    goto label_5f199c
                
                ecx_6 -= edx_3
                
                if (eax_15 + 1 u> ecx_6)
                    uint32_t edx_5 = ecx_6 u>> 1
                    uint32_t ecx_7
                    
                    if (0xffffffff - edx_5 u>= ecx_6)
                        ecx_7 = ecx_6 + edx_5
                    else
                        ecx_7 = 0
                    
                    if (ecx_7 u< eax_15 + 1)
                        ecx_7 = eax_15 + 1
                    
                    sub_424860(ebx + 4, ecx_7)
            
            char* eax_17 = *(ebx + 8)
            
            if (eax_17 != 0)
                ecx_6.b = *(&var_d - edx_3 + *(ebx + 4))
                *eax_17 = ecx_6.b
            
            *(ebx + 8) += 1
        
        int32_t eax_21 = *(ebx + 8)
        uint8_t ebx_9 = (ebx_8 u>> 8).b
        var_d = ebx_9
        int32_t edx_10
        
        if (&var_d u< eax_21)
            edx_10 = *(ebx + 4)
        
        if (&var_d u>= eax_21 || edx_10 u> &var_d)
            int32_t ecx_13 = *(ebx + 0xc)
            
            if (eax_21 == ecx_13)
                int32_t edx_14 = *(ebx + 4)
                int32_t eax_25 = eax_21 - edx_14
                
                if (eax_25 u> 0xfffffffe)
                    goto label_5f199c
                
                int32_t ecx_14 = ecx_13 - edx_14
                
                if (eax_25 + 1 u> ecx_14)
                    uint32_t edx_16 = ecx_14 u>> 1
                    uint32_t ecx_15
                    
                    if (0xffffffff - edx_16 u>= ecx_14)
                        ecx_15 = ecx_14 + edx_16
                    else
                        ecx_15 = 0
                    
                    if (ecx_15 u< eax_25 + 1)
                        ecx_15 = eax_25 + 1
                    
                    sub_424860(ebx + 4, ecx_15)
            
            uint8_t* eax_27 = *(ebx + 8)
            
            if (eax_27 != 0)
                *eax_27 = ebx_9
        else
            int32_t ecx_11 = *(ebx + 0xc)
            
            if (eax_21 == ecx_11)
                int32_t eax_22 = eax_21 - edx_10
                
                if (eax_22 u> 0xfffffffe)
                    goto label_5f199c
                
                ecx_11 -= edx_10
                
                if (eax_22 + 1 u> ecx_11)
                    uint32_t edx_12 = ecx_11 u>> 1
                    uint32_t ecx_12
                    
                    if (0xffffffff - edx_12 u>= ecx_11)
                        ecx_12 = ecx_11 + edx_12
                    else
                        ecx_12 = 0
                    
                    if (ecx_12 u< eax_22 + 1)
                        ecx_12 = eax_22 + 1
                    
                    sub_424860(ebx + 4, ecx_12)
            
            char* eax_24 = *(ebx + 8)
            
            if (eax_24 != 0)
                ecx_11.b = *(&var_d - edx_10 + *(ebx + 4))
                *eax_24 = ecx_11.b
        
        *(ebx + 8) += 1
        int32_t eax_28 = *(ebx + 8)
        uint8_t ebx_12 = (ebx_8 u>> 0x10).b
        var_d = ebx_12
        int32_t edx_17
        
        if (&var_d u< eax_28)
            edx_17 = *(ebx + 4)
        
        if (&var_d u>= eax_28 || edx_17 u> &var_d)
            int32_t ecx_18 = *(ebx + 0xc)
            
            if (eax_28 == ecx_18)
                int32_t edx_21 = *(ebx + 4)
                int32_t eax_32 = eax_28 - edx_21
                
                if (eax_32 u> 0xfffffffe)
                    goto label_5f199c
                
                int32_t ecx_19 = ecx_18 - edx_21
                
                if (eax_32 + 1 u> ecx_19)
                    uint32_t edx_23 = ecx_19 u>> 1
                    uint32_t ecx_20
                    
                    if (0xffffffff - edx_23 u>= ecx_19)
                        ecx_20 = ecx_19 + edx_23
                    else
                        ecx_20 = 0
                    
                    if (ecx_20 u< eax_32 + 1)
                        ecx_20 = eax_32 + 1
                    
                    sub_424860(ebx + 4, ecx_20)
            
            uint8_t* eax_34 = *(ebx + 8)
            
            if (eax_34 != 0)
                *eax_34 = ebx_12
        else
            int32_t ecx_16 = *(ebx + 0xc)
            
            if (eax_28 == ecx_16)
                int32_t eax_29 = eax_28 - edx_17
                
                if (eax_29 u> 0xfffffffe)
                    goto label_5f199c
                
                ecx_16 -= edx_17
                
                if (eax_29 + 1 u> ecx_16)
                    uint32_t edx_19 = ecx_16 u>> 1
                    uint32_t ecx_17
                    
                    if (0xffffffff - edx_19 u>= ecx_16)
                        ecx_17 = ecx_16 + edx_19
                    else
                        ecx_17 = 0
                    
                    if (ecx_17 u< eax_29 + 1)
                        ecx_17 = eax_29 + 1
                    
                    sub_424860(ebx + 4, ecx_17)
            
            char* eax_31 = *(ebx + 8)
            
            if (eax_31 != 0)
                ecx_16.b = *(&var_d - edx_17 + *(ebx + 4))
                *eax_31 = ecx_16.b
        
        *(ebx + 8) += 1
        int32_t eax_35 = *(ebx + 8)
        uint8_t ebx_15 = (ebx_8 u>> 0x18).b
        var_d = ebx_15
        int32_t edx_24
        
        if (&var_d u< eax_35)
            edx_24 = *(ebx + 4)
        
        if (&var_d u>= eax_35 || edx_24 u> &var_d)
            int32_t ecx_23 = *(ebx + 0xc)
            
            if (eax_35 == ecx_23)
                int32_t edx_28 = *(ebx + 4)
                int32_t eax_39 = eax_35 - edx_28
                
                if (eax_39 u> 0xfffffffe)
                    goto label_5f199c
                
                int32_t ecx_24 = ecx_23 - edx_28
                
                if (eax_39 + 1 u> ecx_24)
                    uint32_t edx_30 = ecx_24 u>> 1
                    uint32_t ecx_25
                    
                    if (0xffffffff - edx_30 u>= ecx_24)
                        ecx_25 = ecx_24 + edx_30
                    else
                        ecx_25 = 0
                    
                    if (ecx_25 u< eax_39 + 1)
                        ecx_25 = eax_39 + 1
                    
                    sub_424860(ebx + 4, ecx_25)
            
            uint8_t* eax_41 = *(ebx + 8)
            
            if (eax_41 != 0)
                *eax_41 = ebx_15
        else
            int32_t ecx_21 = *(ebx + 0xc)
            
            if (eax_35 == ecx_21)
                int32_t eax_36 = eax_35 - edx_24
                
                if (eax_36 u> 0xfffffffe)
                    goto label_5f199c
                
                ecx_21 -= edx_24
                
                if (eax_36 + 1 u> ecx_21)
                    uint32_t edx_26 = ecx_21 u>> 1
                    uint32_t ecx_22
                    
                    if (0xffffffff - edx_26 u>= ecx_21)
                        ecx_22 = ecx_21 + edx_26
                    else
                        ecx_22 = 0
                    
                    if (ecx_22 u< eax_36 + 1)
                        ecx_22 = eax_36 + 1
                    
                    sub_424860(ebx + 4, ecx_22)
            
            char* eax_38 = *(ebx + 8)
            
            if (eax_38 != 0)
                ecx_21.b = *(&var_d - edx_24 + *(ebx + 4))
                *eax_38 = ecx_21.b
        
        *(ebx + 8) += 1
        i = &i_1[1]
        i_1 = i
    while (i != *(var_c + 0x34))
    ebp = var_c

int32_t ebx_17 = *(ebp + 0x314)
int32_t eax_43 = *(ebx + 8)
var_d = ebx_17.b
int32_t edx_32

if (&var_d u< eax_43)
    edx_32 = *(ebx + 4)

if (&var_d u< eax_43 && edx_32 u<= &var_d)
    int32_t ecx_26 = *(ebx + 0xc)
    
    if (eax_43 != ecx_26)
    label_5f19d2:
        char* eax_46 = *(ebx + 8)
        
        if (eax_46 != 0)
            ecx_26.b = *(&var_d - edx_32 + *(ebx + 4))
            *eax_46 = ecx_26.b
        
        *(ebx + 8) += 1
        goto label_5f1a36
    
    int32_t eax_44 = eax_43 - edx_32
    
    if (eax_44 u<= 0xfffffffe)
        ecx_26 -= edx_32
        
        if (eax_44 + 1 u> ecx_26)
            uint32_t edx_34 = ecx_26 u>> 1
            uint32_t ecx_27
            
            if (0xffffffff - edx_34 u>= ecx_26)
                ecx_27 = ecx_26 + edx_34
            else
                ecx_27 = 0
            
            if (ecx_27 u< eax_44 + 1)
                ecx_27 = eax_44 + 1
            
            sub_424860(ebx + 4, ecx_27)
        
        goto label_5f19d2
    
label_5f199c:
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t ecx_28 = *(ebx + 0xc)

if (eax_43 == ecx_28)
    int32_t edx_36 = *(ebx + 4)
    int32_t eax_47 = eax_43 - edx_36
    
    if (eax_47 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t ecx_29 = ecx_28 - edx_36
    
    if (eax_47 + 1 u> ecx_29)
        uint32_t edx_38 = ecx_29 u>> 1
        uint32_t ecx_30
        
        if (0xffffffff - edx_38 u>= ecx_29)
            ecx_30 = ecx_29 + edx_38
        else
            ecx_30 = 0
        
        if (ecx_30 u< eax_47 + 1)
            ecx_30 = eax_47 + 1
        
        sub_424860(ebx + 4, ecx_30)

char* eax_49 = *(ebx + 8)

if (eax_49 != 0)
    *eax_49 = ebx_17.b

*(ebx + 8) += 1
label_5f1a36:
int32_t eax_50 = *(ebx + 8)
uint8_t ebx_18 = (ebx_17 u>> 8).b
var_d = ebx_18
int32_t edx_39

if (&var_d u< eax_50)
    edx_39 = *(ebx + 4)

if (&var_d u>= eax_50 || edx_39 u> &var_d)
    int32_t ecx_33 = *(ebx + 0xc)
    
    if (eax_50 == ecx_33)
        int32_t edx_43 = *(ebx + 4)
        int32_t eax_54 = eax_50 - edx_43
        
        if (eax_54 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_34 = ecx_33 - edx_43
        
        if (eax_54 + 1 u> ecx_34)
            uint32_t edx_45 = ecx_34 u>> 1
            uint32_t ecx_35
            
            if (0xffffffff - edx_45 u>= ecx_34)
                ecx_35 = ecx_34 + edx_45
            else
                ecx_35 = 0
            
            if (ecx_35 u< eax_54 + 1)
                ecx_35 = eax_54 + 1
            
            sub_424860(ebx + 4, ecx_35)
    
    uint8_t* eax_56 = *(ebx + 8)
    
    if (eax_56 != 0)
        *eax_56 = ebx_18
else
    int32_t ecx_31 = *(ebx + 0xc)
    
    if (eax_50 == ecx_31)
        int32_t eax_51 = eax_50 - edx_39
        
        if (eax_51 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_31 -= edx_39
        
        if (eax_51 + 1 u> ecx_31)
            uint32_t edx_41 = ecx_31 u>> 1
            uint32_t ecx_32
            
            if (0xffffffff - edx_41 u>= ecx_31)
                ecx_32 = ecx_31 + edx_41
            else
                ecx_32 = 0
            
            if (ecx_32 u< eax_51 + 1)
                ecx_32 = eax_51 + 1
            
            sub_424860(ebx + 4, ecx_32)
    
    char* eax_53 = *(ebx + 8)
    
    if (eax_53 != 0)
        ecx_31.b = *(&var_d - edx_39 + *(ebx + 4))
        *eax_53 = ecx_31.b

*(ebx + 8) += 1
int32_t eax_57 = *(ebx + 8)
uint8_t ebx_21 = (ebx_17 u>> 0x10).b
var_d = ebx_21
int32_t edx_46

if (&var_d u< eax_57)
    edx_46 = *(ebx + 4)

if (&var_d u>= eax_57 || edx_46 u> &var_d)
    int32_t ecx_38 = *(ebx + 0xc)
    
    if (eax_57 == ecx_38)
        int32_t edx_50 = *(ebx + 4)
        int32_t eax_61 = eax_57 - edx_50
        
        if (eax_61 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_39 = ecx_38 - edx_50
        
        if (eax_61 + 1 u> ecx_39)
            uint32_t edx_52 = ecx_39 u>> 1
            uint32_t ecx_40
            
            if (0xffffffff - edx_52 u>= ecx_39)
                ecx_40 = ecx_39 + edx_52
            else
                ecx_40 = 0
            
            if (ecx_40 u< eax_61 + 1)
                ecx_40 = eax_61 + 1
            
            sub_424860(ebx + 4, ecx_40)
    
    uint8_t* eax_63 = *(ebx + 8)
    
    if (eax_63 != 0)
        *eax_63 = ebx_21
else
    int32_t ecx_36 = *(ebx + 0xc)
    
    if (eax_57 == ecx_36)
        int32_t eax_58 = eax_57 - edx_46
        
        if (eax_58 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_36 -= edx_46
        
        if (eax_58 + 1 u> ecx_36)
            uint32_t edx_48 = ecx_36 u>> 1
            uint32_t ecx_37
            
            if (0xffffffff - edx_48 u>= ecx_36)
                ecx_37 = ecx_36 + edx_48
            else
                ecx_37 = 0
            
            if (ecx_37 u< eax_58 + 1)
                ecx_37 = eax_58 + 1
            
            sub_424860(ebx + 4, ecx_37)
    
    char* eax_60 = *(ebx + 8)
    
    if (eax_60 != 0)
        ecx_36.b = *(&var_d - edx_46 + *(ebx + 4))
        *eax_60 = ecx_36.b

*(ebx + 8) += 1
int32_t eax_64 = *(ebx + 8)
uint32_t ebx_24 = ebx_17 u>> 0x18
var_d = ebx_24.b
int32_t edx_53

if (&var_d u< eax_64)
    edx_53 = *(ebx + 4)

if (&var_d u>= eax_64 || edx_53 u> &var_d)
    int32_t ecx_43 = *(ebx + 0xc)
    
    if (eax_64 == ecx_43)
        int32_t edx_57 = *(ebx + 4)
        int32_t eax_68 = eax_64 - edx_57
        
        if (eax_68 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_44 = ecx_43 - edx_57
        
        if (eax_68 + 1 u> ecx_44)
            uint32_t edx_59 = ecx_44 u>> 1
            uint32_t ecx_45
            
            if (0xffffffff - edx_59 u>= ecx_44)
                ecx_45 = ecx_44 + edx_59
            else
                ecx_45 = 0
            
            if (ecx_45 u< eax_68 + 1)
                ecx_45 = eax_68 + 1
            
            sub_424860(ebx + 4, ecx_45)
    
    char* eax_70 = *(ebx + 8)
    
    if (eax_70 != 0)
        *eax_70 = ebx_24.b
else
    int32_t ecx_41 = *(ebx + 0xc)
    
    if (eax_64 == ecx_41)
        int32_t eax_65 = eax_64 - edx_53
        
        if (eax_65 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_41 -= edx_53
        
        if (eax_65 + 1 u> ecx_41)
            uint32_t edx_55 = ecx_41 u>> 1
            uint32_t ecx_42
            
            if (0xffffffff - edx_55 u>= ecx_41)
                ecx_42 = ecx_41 + edx_55
            else
                ecx_42 = 0
            
            if (ecx_42 u< eax_65 + 1)
                ecx_42 = eax_65 + 1
            
            sub_424860(ebx + 4, ecx_42)
    
    char* eax_67 = *(ebx + 8)
    
    if (eax_67 != 0)
        ecx_41.b = *(&var_d - edx_53 + *(ebx + 4))
        *eax_67 = ecx_41.b

*(ebx + 8) += 1
void* edi_18 = var_c
int32_t eax_71 = *(ebx + 8)
ebx_24.b = *(edi_18 + 0x318) != 0
var_d = ebx_24.b
int32_t edx_60

if (&var_d u< eax_71)
    edx_60 = *(ebx + 4)

if (&var_d u>= eax_71 || edx_60 u> &var_d)
    int32_t ecx_48 = *(ebx + 0xc)
    
    if (eax_71 == ecx_48)
        int32_t edx_64 = *(ebx + 4)
        int32_t eax_75 = eax_71 - edx_64
        
        if (eax_75 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_49 = ecx_48 - edx_64
        
        if (eax_75 + 1 u> ecx_49)
            uint32_t edx_66 = ecx_49 u>> 1
            uint32_t ecx_50
            
            if (0xffffffff - edx_66 u>= ecx_49)
                ecx_50 = ecx_49 + edx_66
            else
                ecx_50 = 0
            
            if (ecx_50 u< eax_75 + 1)
                ecx_50 = eax_75 + 1
            
            sub_424860(ebx + 4, ecx_50)
            edi_18 = var_c
    
    char* eax_77 = *(ebx + 8)
    
    if (eax_77 != 0)
        *eax_77 = ebx_24.b
else
    int32_t ecx_46 = *(ebx + 0xc)
    
    if (eax_71 == ecx_46)
        int32_t eax_72 = eax_71 - edx_60
        
        if (eax_72 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_46 -= edx_60
        
        if (eax_72 + 1 u> ecx_46)
            uint32_t edx_62 = ecx_46 u>> 1
            uint32_t ecx_47
            
            if (0xffffffff - edx_62 u>= ecx_46)
                ecx_47 = ecx_46 + edx_62
            else
                ecx_47 = 0
            
            if (ecx_47 u< eax_72 + 1)
                ecx_47 = eax_72 + 1
            
            sub_424860(ebx + 4, ecx_47)
    
    char* eax_74 = *(ebx + 8)
    
    if (eax_74 != 0)
        ecx_46.b = *(&var_d - edx_60 + *(ebx + 4))
        *eax_74 = ecx_46.b
    
    edi_18 = var_c

*(ebx + 8) += 1
int32_t eax_78 = *(ebx + 8)
int32_t ebx_26 = *(edi_18 + 0x31c)
var_d = ebx_26.b
int32_t edx_67

if (&var_d u< eax_78)
    edx_67 = *(ebx + 4)

if (&var_d u>= eax_78 || edx_67 u> &var_d)
    int32_t ecx_53 = *(ebx + 0xc)
    
    if (eax_78 == ecx_53)
        int32_t edx_71 = *(ebx + 4)
        int32_t eax_82 = eax_78 - edx_71
        
        if (eax_82 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_54 = ecx_53 - edx_71
        
        if (eax_82 + 1 u> ecx_54)
            uint32_t edx_73 = ecx_54 u>> 1
            uint32_t ecx_55
            
            if (0xffffffff - edx_73 u>= ecx_54)
                ecx_55 = ecx_54 + edx_73
            else
                ecx_55 = 0
            
            if (ecx_55 u< eax_82 + 1)
                ecx_55 = eax_82 + 1
            
            sub_424860(ebx + 4, ecx_55)
            edi_18 = var_c
    
    char* eax_84 = *(ebx + 8)
    
    if (eax_84 != 0)
        *eax_84 = ebx_26.b
else
    int32_t ecx_51 = *(ebx + 0xc)
    
    if (eax_78 == ecx_51)
        int32_t eax_79 = eax_78 - edx_67
        
        if (eax_79 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_51 -= edx_67
        
        if (eax_79 + 1 u> ecx_51)
            uint32_t edx_69 = ecx_51 u>> 1
            uint32_t ecx_52
            
            if (0xffffffff - edx_69 u>= ecx_51)
                ecx_52 = ecx_51 + edx_69
            else
                ecx_52 = 0
            
            if (ecx_52 u< eax_79 + 1)
                ecx_52 = eax_79 + 1
            
            sub_424860(ebx + 4, ecx_52)
    
    char* eax_81 = *(ebx + 8)
    
    if (eax_81 != 0)
        ecx_51.b = *(&var_d - edx_67 + *(ebx + 4))
        *eax_81 = ecx_51.b
    
    edi_18 = var_c

*(ebx + 8) += 1
var_d = (ebx_26 u>> 8).b
sub_54e400(&var_d, ebx + 4)
var_d = (ebx_26 u>> 0x10).b
sub_54e400(&var_d, ebx + 4)
var_d = (ebx_26 u>> 0x18).b
sub_54e400(&var_d, ebx + 4)
void* ebx_28 = arg2
sub_4101f0(ebx_28, *(edi_18 + 0x2e0))
sub_4101f0(ebx_28, *(edi_18 + 0x2e4))
sub_4101f0(ebx_28, *(edi_18 + 0x2f0))
sub_4101f0(ebx_28, *(edi_18 + 0x2ec))
int32_t var_24_26 = sub_4101f0(ebx_28, *(edi_18 + 0x2e8))
int32_t var_24_28 = sub_4101f0(ebx_28, fconvert.s(fconvert.t(*(edi_18 + 0x2f8))))
sub_4101f0(ebx_28, fconvert.s(fconvert.t(*(edi_18 + 0x2fc))))
sub_4101f0(ebx_28, *(edi_18 + 0x308))
sub_4101f0(ebx_28, *(edi_18 + 0x304))
sub_4101f0(ebx_28, *(edi_18 + 0x300))
arg2.b = *(edi_18 + 0x310) != 0
sub_54e400(&arg2, ebx + 4)
sub_4101f0(ebx_28, *(edi_18 + 0x320))
sub_4101f0(ebx_28, *(edi_18 + 0x340))
sub_4101f0(ebx_28, *(edi_18 + 0x344))
sub_4101f0(ebx_28, *(edi_18 + 0x348))
sub_4101f0(ebx_28, *(edi_18 + 0x34c))
char* result
result.b = 1
return result
