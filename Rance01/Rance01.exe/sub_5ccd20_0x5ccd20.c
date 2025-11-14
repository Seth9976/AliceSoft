// 函数: sub_5ccd20
// 地址: 0x5ccd20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714120
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_20 = &fileimage::CFileImageMaker::`vftable'
int32_t var_1c = 0
char* var_18 = nullptr
void* var_14 = nullptr
int32_t var_4 = 0
int32_t ebx = *(arg1 + 0x28)
int32_t* esi = &var_1c
uint8_t var_29 = ebx.b
sub_54e400(&var_29, esi)
var_29 = (ebx u>> 8).b
sub_54e400(&var_29, esi)
var_29 = (ebx u>> 0x10).b
sub_54e400(&var_29, esi)
var_29 = (ebx u>> 0x18).b
sub_54e400(&var_29, esi)
int32_t* eax_9 = *(arg1 + 0x24)
int32_t* i_10 = *eax_9
void* edx = var_14
char* edi_1 = var_18
int32_t ebp = var_1c
int32_t* i_2 = i_10

if (i_10 != eax_9)
    int32_t* i
    
    do
        uint8_t* eax_11 = i_2[3]
        uint8_t* var_28_1 = eax_11
        var_29 = eax_11.b
        
        if (&var_29 u>= edi_1 || ebp u> &var_29)
            if (edi_1 == edx)
                void* eax_16 = edi_1 - ebp
                
                if (eax_16 u> 0xfffffffe)
                    goto label_5cd16e
                
                void* ecx_6 = edx - ebp
                
                if (eax_16 + 1 u> ecx_6)
                    uint32_t edx_4 = ecx_6 u>> 1
                    uint8_t* ecx_7
                    
                    if (0xffffffff - edx_4 u>= ecx_6)
                        ecx_7 = ecx_6 + edx_4
                    else
                        ecx_7 = nullptr
                    
                    if (ecx_7 u< eax_16 + 1)
                        ecx_7 = eax_16 + 1
                    
                    sub_424860(&var_1c, ecx_7)
                    edx = var_14
                    edi_1 = var_18
                    ebp = var_1c
            
            if (edi_1 != 0)
                eax_11.b = var_28_1.b
                *edi_1 = eax_11.b
        else
            void* ebx_2 = &var_29 - ebp
            uint8_t* ecx_2
            
            if (edi_1 == edx)
                void* eax_13 = edi_1 - ebp
                
                if (eax_13 u> 0xfffffffe)
                    goto label_5cd16e
                
                ecx_2 = edx - ebp
                
                if (eax_13 + 1 u> ecx_2)
                    uint32_t edx_2 = ecx_2 u>> 1
                    void* ecx_4
                    
                    if (0xffffffff - edx_2 u>= ecx_2)
                        ecx_4 = &ecx_2[edx_2]
                    else
                        ecx_4 = nullptr
                    
                    if (ecx_4 u< eax_13 + 1)
                        ecx_4 = eax_13 + 1
                    
                    sub_424860(&var_1c, ecx_4)
                    edx = var_14
                    edi_1 = var_18
                    ebp = var_1c
            
            if (edi_1 != 0)
                ecx_2.b = *(ebx_2 + ebp)
                *edi_1 = ecx_2.b
        
        void* edi_2 = &edi_1[1]
        uint8_t ebx_4 = (var_28_1 u>> 8).b
        var_29 = ebx_4
        
        if (&var_29 u>= edi_2 || ebp u> &var_29)
            if (edi_2 == edx)
                void* eax_21 = edi_2 - ebp
                
                if (eax_21 u> 0xfffffffe)
                    goto label_5cd16e
                
                void* ecx_12 = edx - ebp
                
                if (eax_21 + 1 u> ecx_12)
                    uint32_t edx_8 = ecx_12 u>> 1
                    void* ecx_13
                    
                    if (0xffffffff - edx_8 u>= ecx_12)
                        ecx_13 = ecx_12 + edx_8
                    else
                        ecx_13 = nullptr
                    
                    if (ecx_13 u< eax_21 + 1)
                        ecx_13 = eax_21 + 1
                    
                    sub_424860(&var_1c, ecx_13)
                    edx = var_14
                    ebp = var_1c
            
            if (edi_2 != 0)
                *edi_2 = ebx_4
        else
            void* ebx_5 = &var_29 - ebp
            uint8_t* ecx_8
            
            if (edi_2 == edx)
                void* eax_18 = edi_2 - ebp
                
                if (eax_18 u> 0xfffffffe)
                    goto label_5cd16e
                
                ecx_8 = edx - ebp
                
                if (eax_18 + 1 u> ecx_8)
                    uint32_t edx_6 = ecx_8 u>> 1
                    void* ecx_10
                    
                    if (0xffffffff - edx_6 u>= ecx_8)
                        ecx_10 = &ecx_8[edx_6]
                    else
                        ecx_10 = nullptr
                    
                    if (ecx_10 u< eax_18 + 1)
                        ecx_10 = eax_18 + 1
                    
                    sub_424860(&var_1c, ecx_10)
                    edx = var_14
                    ebp = var_1c
            
            if (edi_2 != 0)
                ecx_8.b = *(ebx_5 + ebp)
                *edi_2 = ecx_8.b
        
        void* edi_3 = edi_2 + 1
        uint8_t ebx_7 = (var_28_1 u>> 0x10).b
        var_29 = ebx_7
        
        if (&var_29 u>= edi_3 || ebp u> &var_29)
            if (edi_3 == edx)
                void* eax_27 = edi_3 - ebp
                
                if (eax_27 u> 0xfffffffe)
                    goto label_5cd16e
                
                void* ecx_18 = edx - ebp
                
                if (eax_27 + 1 u> ecx_18)
                    uint32_t edx_12 = ecx_18 u>> 1
                    void* ecx_19
                    
                    if (0xffffffff - edx_12 u>= ecx_18)
                        ecx_19 = ecx_18 + edx_12
                    else
                        ecx_19 = nullptr
                    
                    if (ecx_19 u< eax_27 + 1)
                        ecx_19 = eax_27 + 1
                    
                    sub_424860(&var_1c, ecx_19)
                    edx = var_14
                    ebp = var_1c
            
            if (edi_3 != 0)
                *edi_3 = ebx_7
        else
            void* ebx_8 = &var_29 - ebp
            
            if (edi_3 == edx)
                void* eax_25 = edi_3 - ebp
                
                if (eax_25 u> 0xfffffffe)
                    goto label_5cd16e
                
                void* ecx_15 = edx - ebp
                
                if (eax_25 + 1 u> ecx_15)
                    uint32_t edx_10 = ecx_15 u>> 1
                    uint8_t* ecx_16
                    
                    if (0xffffffff - edx_10 u>= ecx_15)
                        ecx_16 = ecx_15 + edx_10
                    else
                        ecx_16 = nullptr
                    
                    if (ecx_16 u< eax_25 + 1)
                        ecx_16 = eax_25 + 1
                    
                    sub_424860(&var_1c, ecx_16)
                    edx = var_14
                    ebp = var_1c
            
            if (edi_3 != 0)
                uint8_t* eax_23
                eax_23.b = *(ebx_8 + ebp)
                *edi_3 = eax_23.b
        
        void* edi_4 = edi_3 + 1
        uint8_t ebx_10 = (var_28_1 u>> 0x18).b
        var_29 = ebx_10
        
        if (&var_29 u>= edi_4 || ebp u> &var_29)
            if (edi_4 == edx)
                void* eax_33 = edi_4 - ebp
                
                if (eax_33 u> 0xfffffffe)
                    goto label_5cd16e
                
                void* ecx_24 = edx - ebp
                
                if (eax_33 + 1 u> ecx_24)
                    uint32_t edx_16 = ecx_24 u>> 1
                    void* ecx_25
                    
                    if (0xffffffff - edx_16 u>= ecx_24)
                        ecx_25 = ecx_24 + edx_16
                    else
                        ecx_25 = nullptr
                    
                    if (ecx_25 u< eax_33 + 1)
                        ecx_25 = eax_33 + 1
                    
                    sub_424860(&var_1c, ecx_25)
                    edx = var_14
                    ebp = var_1c
            
            if (edi_4 != 0)
                *edi_4 = ebx_10
        else
            void* ebx_11 = &var_29 - ebp
            uint8_t* ecx_20
            
            if (edi_4 == edx)
                void* eax_30 = edi_4 - ebp
                
                if (eax_30 u> 0xfffffffe)
                    goto label_5cd16e
                
                ecx_20 = edx - ebp
                
                if (eax_30 + 1 u> ecx_20)
                    uint32_t edx_14 = ecx_20 u>> 1
                    void* ecx_22
                    
                    if (0xffffffff - edx_14 u>= ecx_20)
                        ecx_22 = &ecx_20[edx_14]
                    else
                        ecx_22 = nullptr
                    
                    if (ecx_22 u< eax_30 + 1)
                        ecx_22 = eax_30 + 1
                    
                    sub_424860(&var_1c, ecx_22)
                    edx = var_14
                    ebp = var_1c
            
            if (edi_4 != 0)
                ecx_20.b = *(ebx_11 + ebp)
                *edi_4 = ecx_20.b
        
        i = i_2
        edi_1 = edi_4 + 1
        var_18 = edi_1
        
        if (*(i + 0x11) == 0)
            int32_t* i_6 = i[2]
            
            if (*(i_6 + 0x11) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0x11) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0x11) != 0)
                            break
                
                i = i_4
            else
                int32_t* i_8 = *i_6
                
                while (*(i_8 + 0x11) == 0)
                    i_6 = i_8
                    i_8 = *i_6
                
                i = i_6
            
            i_2 = i
    while (i != *(arg1 + 0x24))

int32_t eax_36 = *(arg1 + 0x38)
var_29 = eax_36.b

if (&var_29 u< edi_1 && ebp u<= &var_29)
    void* ebx_12 = &var_29 - ebp
    
    if (edi_1 != edx)
    label_5cd1ab:
        
        if (edi_1 == 0)
            goto label_5cd213
        
        uint8_t* eax_37
        eax_37.b = *(ebx_12 + ebp)
        *edi_1 = eax_37.b
        goto label_5cd213
    
    void* eax_39 = edi_1 - ebp
    
    if (eax_39 u<= 0xfffffffe)
        void* ecx_28 = edx - ebp
        
        if (eax_39 + 1 u> ecx_28)
            uint32_t edx_18 = ecx_28 u>> 1
            uint8_t* ecx_29
            
            if (0xffffffff - edx_18 u>= ecx_28)
                ecx_29 = ecx_28 + edx_18
            else
                ecx_29 = nullptr
            
            if (ecx_29 u< eax_39 + 1)
                ecx_29 = eax_39 + 1
            
            sub_424860(&var_1c, ecx_29)
            edx = var_14
            edi_1 = var_18
            ebp = var_1c
        
        goto label_5cd1ab
    
label_5cd16e:
    sub_6b47bf("vector<T> too long")
    noreturn

uint8_t* ecx_26

if (edi_1 == edx)
    void* eax_41 = edi_1 - ebp
    
    if (eax_41 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    ecx_26 = edx - ebp
    
    if (eax_41 + 1 u> ecx_26)
        uint32_t edx_20 = ecx_26 u>> 1
        void* ecx_31
        
        if (0xffffffff - edx_20 u>= ecx_26)
            ecx_31 = &ecx_26[edx_20]
        else
            ecx_31 = nullptr
        
        if (ecx_31 u< eax_41 + 1)
            ecx_31 = eax_41 + 1
        
        sub_424860(&var_1c, ecx_31)
        edx = var_14
        edi_1 = var_18
        ebp = var_1c

if (edi_1 == 0)
    goto label_5cd213

ecx_26.b = eax_36.b
*edi_1 = ecx_26.b
label_5cd213:
void* edi_5 = &edi_1[1]
uint8_t ebx_14 = (eax_36 u>> 8).b
var_29 = ebx_14

if (&var_29 u>= edi_5 || ebp u> &var_29)
    if (edi_5 == edx)
        void* eax_47 = edi_5 - ebp
        
        if (eax_47 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        void* ecx_36 = edx - ebp
        
        if (eax_47 + 1 u> ecx_36)
            uint32_t edx_24 = ecx_36 u>> 1
            void* ecx_37
            
            if (0xffffffff - edx_24 u>= ecx_36)
                ecx_37 = ecx_36 + edx_24
            else
                ecx_37 = nullptr
            
            if (ecx_37 u< eax_47 + 1)
                ecx_37 = eax_47 + 1
            
            sub_424860(&var_1c, ecx_37)
            edx = var_14
            ebp = var_1c
    
    if (edi_5 != 0)
        *edi_5 = ebx_14
else
    void* ebx_15 = &var_29 - ebp
    
    if (edi_5 == edx)
        void* eax_45 = edi_5 - ebp
        
        if (eax_45 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        void* ecx_33 = edx - ebp
        
        if (eax_45 + 1 u> ecx_33)
            uint32_t edx_22 = ecx_33 u>> 1
            uint8_t* ecx_34
            
            if (0xffffffff - edx_22 u>= ecx_33)
                ecx_34 = ecx_33 + edx_22
            else
                ecx_34 = nullptr
            
            if (ecx_34 u< eax_45 + 1)
                ecx_34 = eax_45 + 1
            
            sub_424860(&var_1c, ecx_34)
            edx = var_14
            ebp = var_1c
    
    if (edi_5 != 0)
        uint8_t* eax_43
        eax_43.b = *(ebx_15 + ebp)
        *edi_5 = eax_43.b

void* edi_6 = edi_5 + 1
uint8_t ebx_17 = (eax_36 u>> 0x10).b
var_29 = ebx_17

if (&var_29 u>= edi_6 || ebp u> &var_29)
    if (edi_6 == edx)
        void* eax_53 = edi_6 - ebp
        
        if (eax_53 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        void* ecx_42 = edx - ebp
        
        if (eax_53 + 1 u> ecx_42)
            uint32_t edx_28 = ecx_42 u>> 1
            void* ecx_43
            
            if (0xffffffff - edx_28 u>= ecx_42)
                ecx_43 = ecx_42 + edx_28
            else
                ecx_43 = nullptr
            
            if (ecx_43 u< eax_53 + 1)
                ecx_43 = eax_53 + 1
            
            sub_424860(&var_1c, ecx_43)
            edx = var_14
            ebp = var_1c
    
    if (edi_6 != 0)
        *edi_6 = ebx_17
else
    void* ebx_18 = &var_29 - ebp
    uint8_t* ecx_38
    
    if (edi_6 == edx)
        void* eax_50 = edi_6 - ebp
        
        if (eax_50 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_38 = edx - ebp
        
        if (eax_50 + 1 u> ecx_38)
            uint32_t edx_26 = ecx_38 u>> 1
            void* ecx_40
            
            if (0xffffffff - edx_26 u>= ecx_38)
                ecx_40 = &ecx_38[edx_26]
            else
                ecx_40 = nullptr
            
            if (ecx_40 u< eax_50 + 1)
                ecx_40 = eax_50 + 1
            
            sub_424860(&var_1c, ecx_40)
            edx = var_14
            ebp = var_1c
    
    if (edi_6 != 0)
        ecx_38.b = *(ebx_18 + ebp)
        *edi_6 = ecx_38.b

void* edi_7 = edi_6 + 1
uint8_t ebx_20 = (eax_36 u>> 0x18).b
var_29 = ebx_20

if (&var_29 u>= edi_7 || ebp u> &var_29)
    if (edi_7 == edx)
        void* eax_59 = edi_7 - ebp
        
        if (eax_59 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        void* ecx_48 = edx - ebp
        
        if (eax_59 + 1 u> ecx_48)
            uint32_t edx_32 = ecx_48 u>> 1
            void* ecx_49
            
            if (0xffffffff - edx_32 u>= ecx_48)
                ecx_49 = ecx_48 + edx_32
            else
                ecx_49 = nullptr
            
            if (ecx_49 u< eax_59 + 1)
                ecx_49 = eax_59 + 1
            
            sub_424860(&var_1c, ecx_49)
            ebp = var_1c
    
    if (edi_7 != 0)
        *edi_7 = ebx_20
else
    void* ebx_21 = &var_29 - ebp
    
    if (edi_7 == edx)
        void* eax_56 = edi_7 - ebp
        
        if (eax_56 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        void* ecx_45 = edx - ebp
        
        if (eax_56 + 1 u> ecx_45)
            uint32_t edx_30 = ecx_45 u>> 1
            void* ecx_46
            
            if (0xffffffff - edx_30 u>= ecx_45)
                ecx_46 = ecx_45 + edx_30
            else
                ecx_46 = nullptr
            
            if (ecx_46 u< eax_56 + 1)
                ecx_46 = eax_56 + 1
            
            sub_424860(&var_1c, ecx_46)
            ebp = var_1c
    
    if (edi_7 != 0)
        edx.b = *(ebx_21 + ebp)
        *edi_7 = edx.b

int32_t* eax_62 = *(arg1 + 0x34)
int32_t* i_11 = *eax_62
void* edi_8 = edi_7 + 1
void* var_18_7 = edi_8
int32_t* i_3 = i_11

if (i_11 != eax_62)
    var_29 = 0
    
    while (true)
        void* eax_63 = &i_11[3]
        int32_t ecx_50 = *(eax_63 + 0x14)
        void* edx_33
        
        if (ecx_50 u< 0x10)
            edx_33 = eax_63
        else
            edx_33 = *eax_63
        
        if (ecx_50 u>= 0x10)
            eax_63 = *eax_63
        
        uint8_t* var_44_17 = arg1
        sub_4102d0(&var_1c, edi_8, eax_63, edx_33 + i_11[7])
        void* edi_9 = var_18_7
        ebp = var_1c
        
        if (&var_29 u>= edi_9 || ebp u> &var_29)
            if (edi_9 == var_14)
                void* eax_68 = edi_9 - ebp
                
                if (eax_68 u> 0xfffffffe)
                    goto label_5cd16e
                
                void* ecx_55 = var_14 - ebp
                
                if (eax_68 + 1 u> ecx_55)
                    uint32_t edx_38 = ecx_55 u>> 1
                    void* ecx_56
                    
                    if (0xffffffff - edx_38 u>= ecx_55)
                        ecx_56 = ecx_55 + edx_38
                    else
                        ecx_56 = nullptr
                    
                    if (ecx_56 u< eax_68 + 1)
                        ecx_56 = eax_68 + 1
                    
                    sub_424860(&var_1c, ecx_56)
                    edi_9 = var_18_7
                    ebp = var_1c
            
            if (edi_9 != 0)
                *edi_9 = 0
        else
            void* ebx_22 = &var_29 - ebp
            void* ecx_52
            
            if (edi_9 == var_14)
                void* eax_65 = edi_9 - ebp
                
                if (eax_65 u> 0xfffffffe)
                    goto label_5cd16e
                
                ecx_52 = var_14 - ebp
                
                if (eax_65 + 1 u> ecx_52)
                    uint32_t edx_36 = ecx_52 u>> 1
                    void* ecx_53
                    
                    if (0xffffffff - edx_36 u>= ecx_52)
                        ecx_53 = ecx_52 + edx_36
                    else
                        ecx_53 = nullptr
                    
                    if (ecx_53 u< eax_65 + 1)
                        ecx_53 = eax_65 + 1
                    
                    sub_424860(&var_1c, ecx_53)
                    edi_9 = var_18_7
                    ebp = var_1c
            
            if (edi_9 != 0)
                ecx_52.b = *(ebx_22 + ebp)
                *edi_9 = ecx_52.b
        
        int32_t* i_1 = i_3
        edi_8 = edi_9 + 1
        var_18_7 = edi_8
        
        if (*(i_1 + 0x29) == 0)
            int32_t* i_7 = i_1[2]
            
            if (*(i_7 + 0x29) != 0)
                int32_t* i_5 = i_1[1]
                
                if (*(i_5 + 0x29) == 0)
                    while (i_1 == i_5[2])
                        i_1 = i_5
                        i_5 = i_5[1]
                        
                        if (*(i_5 + 0x29) != 0)
                            break
                
                i_1 = i_5
            else
                int32_t* i_9 = *i_7
                
                while (*(i_9 + 0x29) == 0)
                    i_7 = i_9
                    i_9 = *i_7
                
                i_1 = i_7
            
            i_3 = i_1
        
        if (i_1 == *(arg1 + 0x34))
            break
        
        i_11 = i_3

arg1 = nullptr
var_4.b = 1
uint8_t* result = sub_59e250(0x7374fc)
arg1 = result

if (result == 0)
    goto label_5cd631

void* edi_10 = edi_8 - ebp
int32_t* eax_72 = (*(*result + 8))(ebp, edi_10)

if (eax_72 != 0)
    sub_404f60((*(*eax_72 + 0x14))(eax_2), arg2)
    int32_t* eax_76 = *arg2
    
    if (eax_76 != arg2[1])
        sub_6c02a0(eax_76, (*(*eax_72 + 0x18))((*(*eax_72 + 0x14))()))
    
    *arg3 = edi_10
    (*(*eax_72 + 4))()
    var_4.b = 0
    (*(*result + 4))()
    
    if (ebp != 0)
        int32_t var_44_23 = ebp
        sub_6b4d5b()
    
    result.b = 1
else
    var_4.b = eax_72.b
    (*(*result + 4))(eax_2)
label_5cd631:
    
    if (ebp != 0)
        int32_t var_44_21 = ebp
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
