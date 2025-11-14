// 函数: sub_5ce9a0
// 地址: 0x5ce9a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716608
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_58 = &fileimage::CFileImageMaker::`vftable'
char* result_3 = nullptr
int128_t* var_50 = nullptr
int32_t var_4c = 0
int32_t var_4 = 0
int32_t ebx = *(arg2 + 0x28)
int32_t* esi = &result_3
uint8_t var_5a = ebx.b
sub_54e400(&var_5a, esi)
var_5a = (ebx u>> 8).b
sub_54e400(&var_5a, esi)
var_5a = (ebx u>> 0x10).b
sub_54e400(&var_5a, esi)
var_5a = (ebx u>> 0x18).b
sub_54e400(&var_5a, esi)
int32_t* eax_12 = *(arg2 + 0x24)
void* ecx = *eax_12
void* var_44 = ecx
void* result

if (ecx == eax_12)
label_5cef9c:
    int32_t var_38_1 = 0
    var_4.b = 2
    struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_51 = sub_59e250(0x7373dc)
    struct IDecompressor::nutria::CZlibDecompressor::VTable** var_38_2 = eax_51
    
    if (eax_51 != 0)
        char* result_5 = result_3
        int32_t ebp_6 = var_50 - result_5
        int32_t* eax_53 = (*eax_51)->vFunc_2(result_5, ebp_6)
        
        if (eax_53 != 0)
            sub_404f60((*(*eax_53 + 0x14))(eax_4), arg3)
            int128_t* esi_28 = *arg3
            
            if (esi_28 != arg3[1])
                sub_6c02a0(esi_28, (*(*eax_53 + 0x18))((*(*eax_53 + 0x14))()))
            
            *arg1 = ebp_6
            (*(*eax_53 + 4))()
            var_4.b = 0
            (*eax_51)->vFunc_1()
            result = result_3
            
            if (result != 0)
                void* result_2 = result
                sub_6b4d5b()
            
            result.b = 1
        else
            var_4.b = eax_53.b
            (*eax_51)->vFunc_1(eax_4)
            
            if (result_5 == 0)
                result.b = 0
            else
                char* result_8 = result_5
                sub_6b4d5b()
                result.b = 0
    else
        result = result_3
        
        if (result == 0)
            result.b = 0
        else
            void* result_1 = result
            sub_6b4d5b()
            result.b = 0
else
    char var_59 = 0
    
    while (true)
        int32_t eax_13 = *(ecx + 0x20)
        void* ecx_1
        
        if (eax_13 u< 0x10)
            ecx_1 = ecx + 0xc
        else
            ecx_1 = *(ecx + 0xc)
        
        void* eax_14
        
        if (eax_13 u< 0x10)
            eax_14 = ecx + 0xc
        else
            eax_14 = *(ecx + 0xc)
        
        int32_t* var_74_1 = arg1
        sub_4102d0(&result_3, var_50, eax_14, ecx_1 + *(ecx + 0x1c))
        int128_t* eax_15 = var_50
        char* result_4 = result_3
        int32_t esi_4
        
        if (&var_59 u>= eax_15 || result_4 u> &var_59)
            esi_4 = var_4c
            
            if (eax_15 != esi_4)
            label_5ceb5b:
                
                if (eax_15 == 0)
                    goto label_5ceb66
                
                *eax_15 = 0
            label_5ceb66:
                int32_t ebx_2 = *(var_44 + 0x2c)
                void* eax_20 = eax_15 + 1
                var_5a = ebx_2.b
                
                if (&var_5a u< eax_20 && result_4 u<= &var_5a)
                    int32_t ebp_2 = &var_5a - result_4
                    
                    if (eax_20 != esi_4)
                    label_5cebd1:
                        
                        if (eax_20 == 0)
                            goto label_5cec2d
                        
                        uint8_t* edx_10
                        edx_10.b = result_4[ebp_2]
                        *eax_20 = edx_10.b
                        goto label_5cec2d
                    
                    void* edx_12 = eax_20 - result_4
                    
                    if (edx_12 u<= 0xfffffffe)
                        void* edi_6 = esi_4 - result_4
                        
                        if (edx_12 + 1 u> edi_6)
                            uint32_t ecx_9 = edi_6 u>> 1
                            uint8_t* eax_22
                            
                            if (0xffffffff - ecx_9 u>= edi_6)
                                eax_22 = edi_6 + ecx_9
                            else
                                eax_22 = nullptr
                            
                            if (eax_22 u< edx_12 + 1)
                                eax_22 = edx_12 + 1
                            
                            sub_424860(&result_3, eax_22)
                            esi_4 = var_4c
                            result_4 = result_3
                        
                        goto label_5cebd1
                else if (eax_20 != esi_4)
                label_5cec27:
                    
                    if (eax_20 == 0)
                        goto label_5cec2d
                    
                    *eax_20 = ebx_2.b
                label_5cec2d:
                    void* eax_27 = eax_20 + 1
                    uint8_t ebx_3 = (ebx_2 u>> 8).b
                    var_5a = ebx_3
                    
                    if (&var_5a u< eax_27 && result_4 u<= &var_5a)
                        int32_t ebp_3 = &var_5a - result_4
                        
                        if (eax_27 != esi_4)
                        label_5cec94:
                            
                            if (eax_27 == 0)
                                goto label_5cecf4
                            
                            uint8_t* edx_16
                            edx_16.b = result_4[ebp_3]
                            *eax_27 = edx_16.b
                            goto label_5cecf4
                        
                        void* edx_18 = eax_27 - result_4
                        
                        if (edx_18 u<= 0xfffffffe)
                            void* edi_10 = esi_4 - result_4
                            
                            if (edx_18 + 1 u> edi_10)
                                uint32_t ecx_13 = edi_10 u>> 1
                                uint8_t* eax_26
                                
                                if (0xffffffff - ecx_13 u>= edi_10)
                                    eax_26 = edi_10 + ecx_13
                                else
                                    eax_26 = nullptr
                                
                                if (eax_26 u< edx_18 + 1)
                                    eax_26 = edx_18 + 1
                                
                                sub_424860(&result_3, eax_26)
                                esi_4 = var_4c
                                result_4 = result_3
                            
                            goto label_5cec94
                    else if (eax_27 != esi_4)
                    label_5cecea:
                        
                        if (eax_27 == 0)
                            goto label_5cecf4
                        
                        *eax_27 = ebx_3
                    label_5cecf4:
                        void* eax_30 = eax_27 + 1
                        uint8_t ebx_5 = (ebx_2 u>> 0x10).b
                        var_5a = ebx_5
                        
                        if (&var_5a u< eax_30 && result_4 u<= &var_5a)
                            int32_t ebp_4 = &var_5a - result_4
                            
                            if (eax_30 != esi_4)
                            label_5ced5b:
                                
                                if (eax_30 == 0)
                                    goto label_5cedbb
                                
                                uint8_t* edx_22
                                edx_22.b = result_4[ebp_4]
                                *eax_30 = edx_22.b
                                goto label_5cedbb
                            
                            void* edx_24 = eax_30 - result_4
                            
                            if (edx_24 u<= 0xfffffffe)
                                void* edi_14 = esi_4 - result_4
                                
                                if (edx_24 + 1 u> edi_14)
                                    uint32_t ecx_17 = edi_14 u>> 1
                                    uint8_t* eax_32
                                    
                                    if (0xffffffff - ecx_17 u>= edi_14)
                                        eax_32 = edi_14 + ecx_17
                                    else
                                        eax_32 = nullptr
                                    
                                    if (eax_32 u< edx_24 + 1)
                                        eax_32 = edx_24 + 1
                                    
                                    sub_424860(&result_3, eax_32)
                                    esi_4 = var_4c
                                    result_4 = result_3
                                
                                goto label_5ced5b
                        else if (eax_30 != esi_4)
                        label_5cedb1:
                            
                            if (eax_30 == 0)
                                goto label_5cedbb
                            
                            *eax_30 = ebx_5
                        label_5cedbb:
                            void* eax_35 = eax_30 + 1
                            uint8_t ebx_7 = (ebx_2 u>> 0x18).b
                            var_5a = ebx_7
                            
                            if (&var_5a u>= eax_35 || result_4 u> &var_5a)
                                if (eax_35 != esi_4)
                                label_5cee6c:
                                    
                                    if (eax_35 == 0)
                                        goto label_5cee73
                                    
                                    *eax_35 = ebx_7
                                label_5cee73:
                                    var_50 = eax_35 + 1
                                    result = *(var_44 + 0x2c) - 1
                                    bool cond:0_1
                                    int32_t var_74_12
                                    
                                    if (result u> 3)
                                        cond:0_1 = result_4 == 0
                                    else
                                        switch (result)
                                            case nullptr
                                                if (*(ecx + 0x2c) == 1)
                                                    var_74_12 = *(ecx + 0x30)
                                                label_5cef47:
                                                    sub_4101f0(&var_58, var_74_12)
                                                    goto label_5cef50
                                                
                                                cond:0_1 = result_4 == 0
                                            case 1
                                                if (*(ecx + 0x2c) != 2)
                                                    cond:0_1 = result_4 == 0
                                                else
                                                    char* result_6 = result_4
                                                    sub_4101f0(&var_58, 
                                                        fconvert.s(fconvert.t(fconvert.s(fconvert.t(
                                                            *(ecx + 0x34))))))
                                                label_5cef50:
                                                    sub_5d0450(&var_44)
                                                    
                                                    if (var_44 == *(arg2 + 0x24))
                                                        goto label_5cef9c
                                                    
                                                    ecx = var_44
                                                    continue
                                            case 2
                                                int32_t var_18_1 = 0xf
                                                int32_t var_1c_1 = 0
                                                char var_2c = 0
                                                var_4.b = 1
                                                
                                                if (*(ecx + 0x2c) == 3)
                                                    sub_410280(&var_2c, 
                                                        sub_401180(&var_2c, 0xffffffff, ecx + 0x38, 
                                                            0), 
                                                        &var_58)
                                                    var_4.b = 0
                                                    
                                                    if (var_18_1 u>= 0x10)
                                                        int32_t var_74_14 = var_2c.d
                                                        sub_6b4d5b()
                                                    
                                                    goto label_5cef50
                                                
                                                int32_t var_18_2 = 0xf
                                                int32_t var_1c_2 = 0
                                                var_2c = 0
                                                cond:0_1 = result_4 == 0
                                            case 3
                                                if (*(ecx + 0x2c) == 4)
                                                    result.b = *(ecx + 0x54)
                                                    int32_t edx_35
                                                    edx_35.b = result.b != 0
                                                    var_74_12 = edx_35
                                                    goto label_5cef47
                                                
                                                cond:0_1 = result_4 == 0
                                    
                                    if (cond:0_1)
                                        break
                                    
                                    char* result_7 = result_4
                                    sub_6b4d5b()
                                    break
                                
                                int32_t edx_32 = eax_35 - result_4
                                
                                if (edx_32 u<= 0xfffffffe)
                                    void* esi_24 = esi_4 - result_4
                                    
                                    if (edx_32 + 1 u> esi_24)
                                        uint32_t ecx_23 = esi_24 u>> 1
                                        uint32_t eax_39
                                        
                                        if (0xffffffff - ecx_23 u>= esi_24)
                                            eax_39 = esi_24 + ecx_23
                                        else
                                            eax_39 = 0
                                        
                                        if (eax_39 u< edx_32 + 1)
                                            eax_39 = edx_32 + 1
                                        
                                        sub_424860(&result_3, eax_39)
                                        result_4 = result_3
                                    
                                    goto label_5cee6c
                            else
                                void* edi_17 = &var_5a - result_4
                                
                                if (eax_35 != esi_4)
                                label_5cee1c:
                                    
                                    if (eax_35 == 0)
                                        goto label_5cee73
                                    
                                    uint8_t* edx_28
                                    edx_28.b = *(edi_17 + result_4)
                                    *eax_35 = edx_28.b
                                    goto label_5cee73
                                
                                void* edx_30 = eax_35 - result_4
                                
                                if (edx_30 u<= 0xfffffffe)
                                    void* esi_21 = esi_4 - result_4
                                    
                                    if (edx_30 + 1 u> esi_21)
                                        uint32_t ecx_21 = esi_21 u>> 1
                                        uint8_t* eax_37
                                        
                                        if (0xffffffff - ecx_21 u>= esi_21)
                                            eax_37 = esi_21 + ecx_21
                                        else
                                            eax_37 = nullptr
                                        
                                        if (eax_37 u< edx_30 + 1)
                                            eax_37 = edx_30 + 1
                                        
                                        sub_424860(&result_3, eax_37)
                                        result_4 = result_3
                                    
                                    goto label_5cee1c
                        else
                            int32_t edx_26 = eax_30 - result_4
                            
                            if (edx_26 u<= 0xfffffffe)
                                void* edi_16 = esi_4 - result_4
                                
                                if (edx_26 + 1 u> edi_16)
                                    uint32_t ecx_19 = edi_16 u>> 1
                                    uint32_t eax_34
                                    
                                    if (0xffffffff - ecx_19 u>= edi_16)
                                        eax_34 = edi_16 + ecx_19
                                    else
                                        eax_34 = 0
                                    
                                    if (eax_34 u< edx_26 + 1)
                                        eax_34 = edx_26 + 1
                                    
                                    sub_424860(&result_3, eax_34)
                                    esi_4 = var_4c
                                    result_4 = result_3
                                
                                goto label_5cedb1
                    else
                        int32_t edx_20 = eax_27 - result_4
                        
                        if (edx_20 u<= 0xfffffffe)
                            void* edi_12 = esi_4 - result_4
                            
                            if (edx_20 + 1 u> edi_12)
                                uint32_t ecx_15 = edi_12 u>> 1
                                uint32_t eax_29
                                
                                if (0xffffffff - ecx_15 u>= edi_12)
                                    eax_29 = edi_12 + ecx_15
                                else
                                    eax_29 = 0
                                
                                if (eax_29 u< edx_20 + 1)
                                    eax_29 = edx_20 + 1
                                
                                sub_424860(&result_3, eax_29)
                                esi_4 = var_4c
                                result_4 = result_3
                            
                            goto label_5cecea
                else
                    int32_t edx_14 = eax_20 - result_4
                    
                    if (edx_14 u<= 0xfffffffe)
                        void* edi_8 = esi_4 - result_4
                        
                        if (edx_14 + 1 u> edi_8)
                            uint32_t ecx_11 = edi_8 u>> 1
                            uint32_t eax_24
                            
                            if (0xffffffff - ecx_11 u>= edi_8)
                                eax_24 = edi_8 + ecx_11
                            else
                                eax_24 = 0
                            
                            if (eax_24 u< edx_14 + 1)
                                eax_24 = edx_14 + 1
                            
                            sub_424860(&result_3, eax_24)
                            esi_4 = var_4c
                            result_4 = result_3
                        
                        goto label_5cec27
            else
                void* edx_7 = eax_15 - result_4
                
                if (edx_7 u<= 0xfffffffe)
                    void* edi_4 = esi_4 - result_4
                    
                    if (edx_7 + 1 u> edi_4)
                        uint32_t ecx_7 = edi_4 u>> 1
                        uint32_t eax_19
                        
                        if (0xffffffff - ecx_7 u>= edi_4)
                            eax_19 = edi_4 + ecx_7
                        else
                            eax_19 = 0
                        
                        if (eax_19 u< edx_7 + 1)
                            eax_19 = edx_7 + 1
                        
                        sub_424860(&result_3, eax_19)
                        esi_4 = var_4c
                        eax_15 = var_50
                        result_4 = result_3
                    
                    goto label_5ceb5b
        else
            esi_4 = var_4c
            void* ebp_1 = &var_59 - result_4
            
            if (eax_15 != esi_4)
            label_5ceb01:
                
                if (eax_15 == 0)
                    goto label_5ceb66
                
                char* edx_3
                edx_3.b = *(result_4 + ebp_1)
                *eax_15 = edx_3.b
                goto label_5ceb66
            
            void* edx_5 = eax_15 - result_4
            
            if (edx_5 u<= 0xfffffffe)
                void* edi_2 = esi_4 - result_4
                
                if (edx_5 + 1 u> edi_2)
                    uint32_t ecx_5 = edi_2 u>> 1
                    char* eax_17
                    
                    if (0xffffffff - ecx_5 u>= edi_2)
                        eax_17 = edi_2 + ecx_5
                    else
                        eax_17 = nullptr
                    
                    if (eax_17 u< edx_5 + 1)
                        eax_17 = edx_5 + 1
                    
                    sub_424860(&result_3, eax_17)
                    esi_4 = var_4c
                    eax_15 = var_50
                    result_4 = result_3
                
                goto label_5ceb01
        sub_6b47bf("vector<T> too long")
        noreturn
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
