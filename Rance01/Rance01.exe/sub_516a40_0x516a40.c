// 函数: sub_516a40
// 地址: 0x516a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71aec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_50 = ebp
struct fileimage::CFileImageMaker::VTable* const var_68 = &fileimage::CFileImageMaker::`vftable'
char* result_3 = nullptr
void* var_60 = nullptr
int32_t var_5c = 0
int32_t var_4 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_401270(&var_2c, 3, 0x7537b0)
var_4.b = 1
char* ecx = var_2c.d
char* esi_1 = ecx

if (var_18 u< 0x10)
    esi_1 = &var_2c
    ecx = &var_2c

int32_t var_3c
int32_t var_84 = var_3c
sub_4102d0(&result_3, nullptr, ecx, var_1c + esi_1)
var_4.b = 0

if (var_18 u>= 0x10)
    int32_t var_84_1 = var_2c.d
    sub_6b4d5b()

int32_t* esi_3 = &result_3
uint8_t var_69 = 0
sub_54e400(&var_69, esi_3)
var_69 = 0
sub_54e400(&var_69, esi_3)
var_69 = 0
sub_54e400(&var_69, esi_3)
var_69 = 0
sub_54e400(&var_69, esi_3)
int32_t eax_10
int32_t edx_4
edx_4:eax_10 = muls.dp.d(0x2fa0be83, *(ebp + 0xc) - *(ebp + 8))
int32_t edx_5 = edx_4 s>> 5
int32_t ebx_2 = (edx_5 u>> 0x1f) + edx_5
var_69 = ebx_2.b
sub_54e400(&var_69, esi_3)
var_69 = (ebx_2 u>> 8).b
sub_54e400(&var_69, esi_3)
var_69 = (ebx_2 u>> 0x10).b
sub_54e400(&var_69, esi_3)
var_69 = (ebx_2 u>> 0x18).b
sub_54e400(&var_69, esi_3)
int32_t eax_15
int32_t edx_8
edx_8:eax_15 = muls.dp.d(0x2fa0be83, *(ebp + 0xc) - *(ebp + 8))
int32_t edx_9 = edx_8 s>> 5
int32_t var_4c = 0

if ((edx_9 u>> 0x1f) + edx_9 s> 0)
    while (true)
        void* eax_21 = var_4c * 0xac + *(var_50 + 8)
        char* result_4 = result_3
        char* eax_22 = var_60
        int32_t ebx_4
        ebx_4.b = *(eax_21 + 0x50) != 0
        var_69 = ebx_4.b
        int32_t esi_4
        
        if (&var_69 u>= eax_22 || result_4 u> &var_69)
            esi_4 = var_5c
            
            if (eax_22 != esi_4)
            label_516ca6:
                
                if (eax_22 == 0)
                    goto label_516cac
                
                *eax_22 = ebx_4.b
            label_516cac:
                void* eax_29 = &eax_22[1]
                uint8_t ebx_5 = (ebx_4 u>> 8).b
                var_69 = ebx_5
                
                if (&var_69 u< eax_29 && result_4 u<= &var_69)
                    int32_t ebp_2 = &var_69 - result_4
                    
                    if (eax_29 != esi_4)
                    label_516d13:
                        
                        if (eax_29 == 0)
                            goto label_516d73
                        
                        uint8_t* edx_16
                        edx_16.b = result_4[ebp_2]
                        *eax_29 = edx_16.b
                        goto label_516d73
                    
                    void* edx_18 = eax_29 - result_4
                    
                    if (edx_18 u<= 0xfffffffe)
                        void* edi_6 = esi_4 - result_4
                        
                        if (edx_18 + 1 u> edi_6)
                            uint32_t ecx_13 = edi_6 u>> 1
                            uint8_t* eax_28
                            
                            if (0xffffffff - ecx_13 u>= edi_6)
                                eax_28 = edi_6 + ecx_13
                            else
                                eax_28 = nullptr
                            
                            if (eax_28 u< edx_18 + 1)
                                eax_28 = edx_18 + 1
                            
                            sub_424860(&result_3, eax_28)
                            esi_4 = var_5c
                            result_4 = result_3
                        
                        goto label_516d13
                else if (eax_29 != esi_4)
                label_516d69:
                    
                    if (eax_29 == 0)
                        goto label_516d73
                    
                    *eax_29 = ebx_5
                label_516d73:
                    void* eax_32 = eax_29 + 1
                    uint8_t ebx_7 = (ebx_4 u>> 0x10).b
                    var_69 = ebx_7
                    
                    if (&var_69 u< eax_32 && result_4 u<= &var_69)
                        int32_t ebp_3 = &var_69 - result_4
                        
                        if (eax_32 != esi_4)
                        label_516dda:
                            
                            if (eax_32 == 0)
                                goto label_516e3a
                            
                            uint8_t* edx_22
                            edx_22.b = result_4[ebp_3]
                            *eax_32 = edx_22.b
                            goto label_516e3a
                        
                        void* edx_24 = eax_32 - result_4
                        
                        if (edx_24 u<= 0xfffffffe)
                            void* edi_10 = esi_4 - result_4
                            
                            if (edx_24 + 1 u> edi_10)
                                uint32_t ecx_17 = edi_10 u>> 1
                                uint8_t* eax_34
                                
                                if (0xffffffff - ecx_17 u>= edi_10)
                                    eax_34 = edi_10 + ecx_17
                                else
                                    eax_34 = nullptr
                                
                                if (eax_34 u< edx_24 + 1)
                                    eax_34 = edx_24 + 1
                                
                                sub_424860(&result_3, eax_34)
                                esi_4 = var_5c
                                result_4 = result_3
                            
                            goto label_516dda
                    else if (eax_32 != esi_4)
                    label_516e30:
                        
                        if (eax_32 == 0)
                            goto label_516e3a
                        
                        *eax_32 = ebx_7
                    label_516e3a:
                        void* eax_37 = eax_32 + 1
                        uint8_t ebx_9 = (ebx_4 u>> 0x18).b
                        var_69 = ebx_9
                        
                        if (&var_69 u< eax_37 && result_4 u<= &var_69)
                            int32_t ebp_4 = &var_69 - result_4
                            
                            if (eax_37 != esi_4)
                            label_516ea1:
                                
                                if (eax_37 == 0)
                                    goto label_516f04
                                
                                uint8_t* edx_28
                                edx_28.b = result_4[ebp_4]
                                *eax_37 = edx_28.b
                                goto label_516f04
                            
                            void* edx_30 = eax_37 - result_4
                            
                            if (edx_30 u<= 0xfffffffe)
                                void* edi_14 = esi_4 - result_4
                                
                                if (edx_30 + 1 u> edi_14)
                                    uint32_t ecx_21 = edi_14 u>> 1
                                    uint8_t* eax_39
                                    
                                    if (0xffffffff - ecx_21 u>= edi_14)
                                        eax_39 = edi_14 + ecx_21
                                    else
                                        eax_39 = nullptr
                                    
                                    if (eax_39 u< edx_30 + 1)
                                        eax_39 = edx_30 + 1
                                    
                                    sub_424860(&result_3, eax_39)
                                    esi_4 = var_5c
                                    result_4 = result_3
                                
                                goto label_516ea1
                        else if (eax_37 != esi_4)
                        label_516ef7:
                            
                            if (eax_37 == 0)
                                goto label_516f04
                            
                            *eax_37 = ebx_9
                        label_516f04:
                            void* eax_42 = eax_37 + 1
                            float var_54_1 = fconvert.s(fconvert.t(*(eax_21 + 0x54)))
                            var_69 = var_54_1.b
                            
                            if (&var_69 u< eax_42 && result_4 u<= &var_69)
                                int32_t ebp_5 = &var_69 - result_4
                                
                                if (eax_42 != esi_4)
                                label_516f70:
                                    
                                    if (eax_42 == 0)
                                        goto label_516fcc
                                    
                                    uint8_t* edx_35
                                    edx_35.b = result_4[ebp_5]
                                    *eax_42 = edx_35.b
                                    goto label_516fcc
                                
                                void* edx_37 = eax_42 - result_4
                                
                                if (edx_37 u<= 0xfffffffe)
                                    void* edi_18 = esi_4 - result_4
                                    
                                    if (edx_37 + 1 u> edi_18)
                                        uint32_t ecx_25 = edi_18 u>> 1
                                        uint8_t* eax_44
                                        
                                        if (0xffffffff - ecx_25 u>= edi_18)
                                            eax_44 = edi_18 + ecx_25
                                        else
                                            eax_44 = nullptr
                                        
                                        if (eax_44 u< edx_37 + 1)
                                            eax_44 = edx_37 + 1
                                        
                                        sub_424860(&result_3, eax_44)
                                        esi_4 = var_5c
                                        result_4 = result_3
                                    
                                    goto label_516f70
                            else if (eax_42 != esi_4)
                            label_516fc6:
                                
                                if (eax_42 == 0)
                                    goto label_516fcc
                                
                                *eax_42 = var_54_1.b
                            label_516fcc:
                                uint8_t* eax_49 = eax_42 + 1
                                uint8_t ebx_11 = (var_54_1 u>> 8).b
                                var_69 = ebx_11
                                
                                if (&var_69 u< eax_49 && result_4 u<= &var_69)
                                    int32_t ebp_6 = &var_69 - result_4
                                    
                                    if (eax_49 != esi_4)
                                    label_517033:
                                        
                                        if (eax_49 == 0)
                                            goto label_517093
                                        
                                        uint8_t* edx_41
                                        edx_41.b = result_4[ebp_6]
                                        *eax_49 = edx_41.b
                                        goto label_517093
                                    
                                    void* edx_43 = eax_49 - result_4
                                    
                                    if (edx_43 u<= 0xfffffffe)
                                        void* edi_22 = esi_4 - result_4
                                        
                                        if (edx_43 + 1 u> edi_22)
                                            uint32_t ecx_29 = edi_22 u>> 1
                                            uint8_t* eax_48
                                            
                                            if (0xffffffff - ecx_29 u>= edi_22)
                                                eax_48 = edi_22 + ecx_29
                                            else
                                                eax_48 = nullptr
                                            
                                            if (eax_48 u< edx_43 + 1)
                                                eax_48 = edx_43 + 1
                                            
                                            sub_424860(&result_3, eax_48)
                                            esi_4 = var_5c
                                            result_4 = result_3
                                        
                                        goto label_517033
                                else if (eax_49 != esi_4)
                                label_517089:
                                    
                                    if (eax_49 == 0)
                                        goto label_517093
                                    
                                    *eax_49 = ebx_11
                                label_517093:
                                    void* eax_52 = &eax_49[1]
                                    uint8_t ebx_13 = (var_54_1 u>> 0x10).b
                                    var_69 = ebx_13
                                    
                                    if (&var_69 u< eax_52 && result_4 u<= &var_69)
                                        int32_t ebp_7 = &var_69 - result_4
                                        
                                        if (eax_52 != esi_4)
                                        label_5170fa:
                                            
                                            if (eax_52 == 0)
                                                goto label_51715a
                                            
                                            uint8_t* edx_47
                                            edx_47.b = result_4[ebp_7]
                                            *eax_52 = edx_47.b
                                            goto label_51715a
                                        
                                        void* edx_49 = eax_52 - result_4
                                        
                                        if (edx_49 u<= 0xfffffffe)
                                            void* edi_26 = esi_4 - result_4
                                            
                                            if (edx_49 + 1 u> edi_26)
                                                uint32_t ecx_33 = edi_26 u>> 1
                                                uint8_t* eax_54
                                                
                                                if (0xffffffff - ecx_33 u>= edi_26)
                                                    eax_54 = edi_26 + ecx_33
                                                else
                                                    eax_54 = nullptr
                                                
                                                if (eax_54 u< edx_49 + 1)
                                                    eax_54 = edx_49 + 1
                                                
                                                sub_424860(&result_3, eax_54)
                                                esi_4 = var_5c
                                                result_4 = result_3
                                            
                                            goto label_5170fa
                                    else if (eax_52 != esi_4)
                                    label_517150:
                                        
                                        if (eax_52 == 0)
                                            goto label_51715a
                                        
                                        *eax_52 = ebx_13
                                    label_51715a:
                                        uint8_t* eax_57 = eax_52 + 1
                                        uint8_t ebx_15 = (var_54_1 u>> 0x18).b
                                        var_69 = ebx_15
                                        
                                        if (&var_69 u< eax_57 && result_4 u<= &var_69)
                                            int32_t ebp_8 = &var_69 - result_4
                                            
                                            if (eax_57 != esi_4)
                                            label_5171c1:
                                                
                                                if (eax_57 == 0)
                                                    goto label_517224
                                                
                                                uint8_t* edx_53
                                                edx_53.b = result_4[ebp_8]
                                                *eax_57 = edx_53.b
                                                goto label_517224
                                            
                                            void* edx_55 = eax_57 - result_4
                                            
                                            if (edx_55 u<= 0xfffffffe)
                                                void* edi_30 = esi_4 - result_4
                                                
                                                if (edx_55 + 1 u> edi_30)
                                                    uint32_t ecx_37 = edi_30 u>> 1
                                                    uint8_t* eax_59
                                                    
                                                    if (0xffffffff - ecx_37 u>= edi_30)
                                                        eax_59 = edi_30 + ecx_37
                                                    else
                                                        eax_59 = nullptr
                                                    
                                                    if (eax_59 u< edx_55 + 1)
                                                        eax_59 = edx_55 + 1
                                                    
                                                    sub_424860(&result_3, eax_59)
                                                    esi_4 = var_5c
                                                    result_4 = result_3
                                                
                                                goto label_5171c1
                                        else if (eax_57 != esi_4)
                                        label_517217:
                                            
                                            if (eax_57 == 0)
                                                goto label_517224
                                            
                                            *eax_57 = ebx_15
                                        label_517224:
                                            void* eax_62 = &eax_57[1]
                                            float var_44_1 =
                                                fconvert.s(fconvert.t(*(eax_21 + 0x58)))
                                            var_69 = var_44_1.b
                                            
                                            if (&var_69 u< eax_62 && result_4 u<= &var_69)
                                                void* ebp_9 = &var_69 - result_4
                                                
                                                if (eax_62 != esi_4)
                                                label_517290:
                                                    
                                                    if (eax_62 == 0)
                                                        goto label_5172f0
                                                    
                                                    uint8_t* edx_60
                                                    edx_60.b = *(result_4 + ebp_9)
                                                    *eax_62 = edx_60.b
                                                    goto label_5172f0
                                                
                                                void* edx_62 = eax_62 - result_4
                                                
                                                if (edx_62 u<= 0xfffffffe)
                                                    void* edi_34 = esi_4 - result_4
                                                    
                                                    if (edx_62 + 1 u> edi_34)
                                                        uint32_t ecx_41 = edi_34 u>> 1
                                                        uint8_t* eax_64
                                                        
                                                        if (0xffffffff - ecx_41 u>= edi_34)
                                                            eax_64 = edi_34 + ecx_41
                                                        else
                                                            eax_64 = nullptr
                                                        
                                                        if (eax_64 u< edx_62 + 1)
                                                            eax_64 = edx_62 + 1
                                                        
                                                        sub_424860(&result_3, eax_64)
                                                        esi_4 = var_5c
                                                        result_4 = result_3
                                                    
                                                    goto label_517290
                                            else if (eax_62 != esi_4)
                                            label_5172e6:
                                                
                                                if (eax_62 == 0)
                                                    goto label_5172f0
                                                
                                                *eax_62 = var_44_1.b
                                            label_5172f0:
                                                uint8_t* eax_67 = eax_62 + 1
                                                uint8_t ebx_17 = (var_44_1 u>> 8).b
                                                var_69 = ebx_17
                                                
                                                if (&var_69 u>= eax_67 || result_4 u> &var_69)
                                                    if (eax_67 == esi_4)
                                                        sub_4247b0(&result_3, &var_69, 1)
                                                    
                                                    if (eax_67 == 0)
                                                        goto label_51737f
                                                    
                                                    *eax_67 = ebx_17
                                                label_51737f:
                                                    var_60 = &eax_67[1]
                                                    int32_t* esi_44 = &result_3
                                                    var_69 = (var_44_1 u>> 0x10).b
                                                    sub_54e400(&var_69, esi_44)
                                                    var_69 = (var_44_1 u>> 0x18).b
                                                    int32_t var_84_21 = sub_54e400(&var_69, esi_44)
                                                    int32_t var_84_23 = sub_4101f0(&var_68, 
                                                        fconvert.s(fconvert.t(*(eax_21 + 0x5c))))
                                                    int32_t var_84_25 = sub_4101f0(&var_68, 
                                                        fconvert.s(fconvert.t(*(eax_21 + 0x60))))
                                                    int32_t var_84_27 = sub_4101f0(&var_68, 
                                                        fconvert.s(fconvert.t(*(eax_21 + 0x64))))
                                                    int32_t var_84_29 = sub_4101f0(&var_68, 
                                                        fconvert.s(fconvert.t(*(eax_21 + 0x68))))
                                                    int32_t var_84_31 = sub_4101f0(&var_68, 
                                                        fconvert.s(fconvert.t(*(eax_21 + 0x78))))
                                                    int32_t var_84_33 = sub_4101f0(&var_68, 
                                                        fconvert.s(fconvert.t(*(eax_21 + 0x88))))
                                                    sub_4101f0(&var_68, 
                                                        fconvert.s(fconvert.t(*(eax_21 + 0x9c))))
                                                    int32_t eax_82
                                                    int32_t edx_72
                                                    edx_72:eax_82 = muls.dp.d(0x2fa0be83, 
                                                        *(var_50 + 0xc) - *(var_50 + 8))
                                                    int32_t edx_73 = edx_72 s>> 5
                                                    int32_t esi_46 = var_4c + 1
                                                    var_4c = esi_46
                                                    
                                                    if (esi_46 s>= (edx_73 u>> 0x1f) + edx_73)
                                                        break
                                                    
                                                    continue
                                                else
                                                    void* edi_37 = &var_69 - result_4
                                                    
                                                    if (eax_67 != esi_4)
                                                    label_517351:
                                                        
                                                        if (eax_67 == 0)
                                                            goto label_51737f
                                                        
                                                        result_4.b = *(edi_37 + result_4)
                                                        *eax_67 = result_4.b
                                                        goto label_51737f
                                                    
                                                    int32_t edx_68 = eax_67 - result_4
                                                    
                                                    if (edx_68 u<= 0xfffffffe)
                                                        void* esi_41 = esi_4 - result_4
                                                        
                                                        if (edx_68 + 1 u> esi_41)
                                                            uint32_t ecx_45 = esi_41 u>> 1
                                                            uint32_t eax_69
                                                            
                                                            if (0xffffffff - ecx_45 u>= esi_41)
                                                                eax_69 = esi_41 + ecx_45
                                                            else
                                                                eax_69 = 0
                                                            
                                                            if (eax_69 u< edx_68 + 1)
                                                                eax_69 = edx_68 + 1
                                                            
                                                            sub_424860(&result_3, eax_69)
                                                            result_4 = result_3
                                                        
                                                        goto label_517351
                                            else
                                                void* edx_64 = eax_62 - result_4
                                                
                                                if (edx_64 u<= 0xfffffffe)
                                                    void* edi_36 = esi_4 - result_4
                                                    
                                                    if (edx_64 + 1 u> edi_36)
                                                        uint32_t ecx_43 = edi_36 u>> 1
                                                        void* eax_66
                                                        
                                                        if (0xffffffff - ecx_43 u>= edi_36)
                                                            eax_66 = edi_36 + ecx_43
                                                        else
                                                            eax_66 = nullptr
                                                        
                                                        if (eax_66 u< edx_64 + 1)
                                                            eax_66 = edx_64 + 1
                                                        
                                                        sub_424860(&result_3, eax_66)
                                                        esi_4 = var_5c
                                                        result_4 = result_3
                                                    
                                                    goto label_5172e6
                                        else
                                            void* edx_57 = eax_57 - result_4
                                            
                                            if (edx_57 u<= 0xfffffffe)
                                                void* edi_32 = esi_4 - result_4
                                                
                                                if (edx_57 + 1 u> edi_32)
                                                    uint32_t ecx_39 = edi_32 u>> 1
                                                    void* eax_61
                                                    
                                                    if (0xffffffff - ecx_39 u>= edi_32)
                                                        eax_61 = edi_32 + ecx_39
                                                    else
                                                        eax_61 = nullptr
                                                    
                                                    if (eax_61 u< edx_57 + 1)
                                                        eax_61 = edx_57 + 1
                                                    
                                                    sub_424860(&result_3, eax_61)
                                                    esi_4 = var_5c
                                                    result_4 = result_3
                                                
                                                goto label_517217
                                    else
                                        void* edx_51 = eax_52 - result_4
                                        
                                        if (edx_51 u<= 0xfffffffe)
                                            void* edi_28 = esi_4 - result_4
                                            
                                            if (edx_51 + 1 u> edi_28)
                                                uint32_t ecx_35 = edi_28 u>> 1
                                                void* eax_56
                                                
                                                if (0xffffffff - ecx_35 u>= edi_28)
                                                    eax_56 = edi_28 + ecx_35
                                                else
                                                    eax_56 = nullptr
                                                
                                                if (eax_56 u< edx_51 + 1)
                                                    eax_56 = edx_51 + 1
                                                
                                                sub_424860(&result_3, eax_56)
                                                esi_4 = var_5c
                                                result_4 = result_3
                                            
                                            goto label_517150
                                else
                                    void* edx_45 = eax_49 - result_4
                                    
                                    if (edx_45 u<= 0xfffffffe)
                                        void* edi_24 = esi_4 - result_4
                                        
                                        if (edx_45 + 1 u> edi_24)
                                            uint32_t ecx_31 = edi_24 u>> 1
                                            void* eax_51
                                            
                                            if (0xffffffff - ecx_31 u>= edi_24)
                                                eax_51 = edi_24 + ecx_31
                                            else
                                                eax_51 = nullptr
                                            
                                            if (eax_51 u< edx_45 + 1)
                                                eax_51 = edx_45 + 1
                                            
                                            sub_424860(&result_3, eax_51)
                                            esi_4 = var_5c
                                            result_4 = result_3
                                        
                                        goto label_517089
                            else
                                void* edx_39 = eax_42 - result_4
                                
                                if (edx_39 u<= 0xfffffffe)
                                    void* edi_20 = esi_4 - result_4
                                    
                                    if (edx_39 + 1 u> edi_20)
                                        uint32_t ecx_27 = edi_20 u>> 1
                                        void* eax_46
                                        
                                        if (0xffffffff - ecx_27 u>= edi_20)
                                            eax_46 = edi_20 + ecx_27
                                        else
                                            eax_46 = nullptr
                                        
                                        if (eax_46 u< edx_39 + 1)
                                            eax_46 = edx_39 + 1
                                        
                                        sub_424860(&result_3, eax_46)
                                        esi_4 = var_5c
                                        result_4 = result_3
                                    
                                    goto label_516fc6
                        else
                            void* edx_32 = eax_37 - result_4
                            
                            if (edx_32 u<= 0xfffffffe)
                                void* edi_16 = esi_4 - result_4
                                
                                if (edx_32 + 1 u> edi_16)
                                    uint32_t ecx_23 = edi_16 u>> 1
                                    void* eax_41
                                    
                                    if (0xffffffff - ecx_23 u>= edi_16)
                                        eax_41 = edi_16 + ecx_23
                                    else
                                        eax_41 = nullptr
                                    
                                    if (eax_41 u< edx_32 + 1)
                                        eax_41 = edx_32 + 1
                                    
                                    sub_424860(&result_3, eax_41)
                                    esi_4 = var_5c
                                    result_4 = result_3
                                
                                goto label_516ef7
                    else
                        void* edx_26 = eax_32 - result_4
                        
                        if (edx_26 u<= 0xfffffffe)
                            void* edi_12 = esi_4 - result_4
                            
                            if (edx_26 + 1 u> edi_12)
                                uint32_t ecx_19 = edi_12 u>> 1
                                void* eax_36
                                
                                if (0xffffffff - ecx_19 u>= edi_12)
                                    eax_36 = edi_12 + ecx_19
                                else
                                    eax_36 = nullptr
                                
                                if (eax_36 u< edx_26 + 1)
                                    eax_36 = edx_26 + 1
                                
                                sub_424860(&result_3, eax_36)
                                esi_4 = var_5c
                                result_4 = result_3
                            
                            goto label_516e30
                else
                    void* edx_20 = eax_29 - result_4
                    
                    if (edx_20 u<= 0xfffffffe)
                        void* edi_8 = esi_4 - result_4
                        
                        if (edx_20 + 1 u> edi_8)
                            uint32_t ecx_15 = edi_8 u>> 1
                            void* eax_31
                            
                            if (0xffffffff - ecx_15 u>= edi_8)
                                eax_31 = edi_8 + ecx_15
                            else
                                eax_31 = nullptr
                            
                            if (eax_31 u< edx_20 + 1)
                                eax_31 = edx_20 + 1
                            
                            sub_424860(&result_3, eax_31)
                            esi_4 = var_5c
                            result_4 = result_3
                        
                        goto label_516d69
            else
                void* edx_14 = eax_22 - result_4
                
                if (edx_14 u<= 0xfffffffe)
                    void* edi_4 = esi_4 - result_4
                    
                    if (edx_14 + 1 u> edi_4)
                        uint32_t ecx_11 = edi_4 u>> 1
                        void* eax_26
                        
                        if (0xffffffff - ecx_11 u>= edi_4)
                            eax_26 = edi_4 + ecx_11
                        else
                            eax_26 = nullptr
                        
                        if (eax_26 u< edx_14 + 1)
                            eax_26 = edx_14 + 1
                        
                        sub_424860(&result_3, eax_26)
                        esi_4 = var_5c
                        eax_22 = var_60
                        result_4 = result_3
                    
                    goto label_516ca6
        else
            esi_4 = var_5c
            int32_t ebp_1 = &var_69 - result_4
            
            if (eax_22 != esi_4)
            label_516c4c:
                
                if (eax_22 == 0)
                    goto label_516cac
                
                uint8_t* edx_10
                edx_10.b = result_4[ebp_1]
                *eax_22 = edx_10.b
                goto label_516cac
            
            void* edx_12 = eax_22 - result_4
            
            if (edx_12 u<= 0xfffffffe)
                void* edi_2 = esi_4 - result_4
                
                if (edx_12 + 1 u> edi_2)
                    uint32_t ecx_9 = edi_2 u>> 1
                    uint8_t* eax_24
                    
                    if (0xffffffff - ecx_9 u>= edi_2)
                        eax_24 = edi_2 + ecx_9
                    else
                        eax_24 = nullptr
                    
                    if (eax_24 u< edx_12 + 1)
                        eax_24 = edx_12 + 1
                    
                    sub_424860(&result_3, eax_24)
                    esi_4 = var_5c
                    eax_22 = var_60
                    result_4 = result_3
                
                goto label_516c4c
        sub_6b47bf("vector<T> too long")
        noreturn
    
    ebp = var_50

sub_4101f0(&var_68, (*(ebp + 0x34) - *(ebp + 0x30)) s/ 0x3c)
int32_t i_1 = 0

if ((*(ebp + 0x34) - *(ebp + 0x30)) s/ 0x3c s> 0)
    int32_t var_54_2 = 0
    int32_t i
    
    do
        void* edi_39 = *(var_50 + 0x30) + var_54_2
        int32_t ebx_20 = *(edi_39 + 8)
        int32_t* esi_47 = &result_3
        var_69 = ebx_20.b
        sub_54e400(&var_69, esi_47)
        var_69 = (ebx_20 u>> 8).b
        sub_54e400(&var_69, esi_47)
        var_69 = (ebx_20 u>> 0x10).b
        sub_54e400(&var_69, esi_47)
        var_69 = (ebx_20 u>> 0x18).b
        sub_54e400(&var_69, esi_47)
        float var_44_2 = fconvert.s(fconvert.t(*(edi_39 + 0xc)))
        var_69 = var_44_2.b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_44_2 u>> 8).b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_44_2 u>> 0x10).b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_44_2 u>> 0x18).b
        sub_54e400(&var_69, esi_47)
        float var_40_2 = fconvert.s(fconvert.t(*(edi_39 + 0x10)))
        var_69 = var_40_2.b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_40_2 u>> 8).b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_40_2 u>> 0x10).b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_40_2 u>> 0x18).b
        sub_54e400(&var_69, esi_47)
        float var_48_2 = fconvert.s(fconvert.t(*(edi_39 + 0x14)))
        var_69 = var_48_2.b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_48_2 u>> 8).b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_48_2 u>> 0x10).b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_48_2 u>> 0x18).b
        sub_54e400(&var_69, esi_47)
        float var_34_1 = fconvert.s(fconvert.t(*(edi_39 + 0x18)))
        var_69 = var_34_1.b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_34_1 u>> 8).b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_34_1 u>> 0x10).b
        sub_54e400(&var_69, esi_47)
        var_69 = (var_34_1 u>> 0x18).b
        sub_54e400(&var_69, esi_47)
        sub_4101f0(&var_68, fconvert.s(fconvert.t(*(edi_39 + 0x1c))))
        sub_4101f0(&var_68, fconvert.s(fconvert.t(*(edi_39 + 0x20))))
        sub_4101f0(&var_68, fconvert.s(fconvert.t(*(edi_39 + 0x24))))
        sub_4101f0(&var_68, *(edi_39 + 0x28))
        sub_4101f0(&var_68, (*(edi_39 + 0x30) - *(edi_39 + 0x2c)) s>> 2)
        int32_t eax_125 = *(edi_39 + 0x2c)
        int32_t j = 0
        
        if (((*(edi_39 + 0x30) - eax_125) & 0xfffffffc) s> 0)
            do
                int32_t ebx_30 = *(eax_125 + (j << 2))
                int32_t* esi_48 = &result_3
                var_69 = ebx_30.b
                sub_54e400(&var_69, esi_48)
                var_69 = (ebx_30 u>> 8).b
                sub_54e400(&var_69, esi_48)
                var_69 = (ebx_30 u>> 0x10).b
                sub_54e400(&var_69, esi_48)
                var_69 = (ebx_30 u>> 0x18).b
                sub_54e400(&var_69, esi_48)
                eax_125 = *(edi_39 + 0x2c)
                j += 1
            while (j s< (*(edi_39 + 0x30) - eax_125) s>> 2)
        
        var_54_2 += 0x3c
        i = i_1 + 1
        i_1 = i
    while (i s< (*(var_50 + 0x34) - *(var_50 + 0x30)) s/ 0x3c)

bool cond:0 = sub_602070(var_50 + 0x40, &result_3) != 0
char* result = result_3

if (cond:0)
    if (result != 0)
        char* result_2 = result
        sub_6b4d5b()
    
    result.b = 1
else
    if (result != 0)
        char* result_1 = result
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
