// 函数: sub_554840
// 地址: 0x554840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a7c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx = __chkstk(0x407c)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
int32_t arg_4070
fsbase->NtTib.ExceptionList = &arg_4070
var_4 = nullptr
__return_addr = nullptr
int32_t arg_4078 = 0
sub_424860(&var_4, ecx[4])
int32_t* ebx = ecx[4]
int32_t* arg_14 = ebx
int32_t* arg_10

if (ecx[5] u< 0x10)
    arg_10 = ecx
else
    arg_10 = *ecx

void* var_8_1 = nullptr
void* const __return_addr_1 = nullptr
int32_t* ecx_1

if (ebx s> 0)
    while (true)
        int128_t* esi_1 = var_4
        void* edi_1 = var_8_1 + arg_10
        void* eax_7
        eax_7.b = *edi_1
        void* edi_5
        
        if ((eax_7.b u>= 0x81 && eax_7.b u<= 0x9f) || eax_7.b u>= 0xe0)
            if (edi_1 u>= __return_addr_1 || esi_1 u> edi_1)
                if (__return_addr_1 == 0)
                    void* eax_11 = __return_addr_1 - esi_1
                    
                    if (eax_11 u> 0xfffffffe)
                        goto label_554f7e
                    
                    if (eax_11 + 1 u> 0 - esi_1)
                        uint32_t edx_5 = (0 - esi_1) u>> 1
                        void* ecx_3
                        
                        if (0xffffffff - edx_5 u>= 0 - esi_1)
                            ecx_3 = 0 - esi_1 + edx_5
                        else
                            ecx_3 = nullptr
                        
                        if (ecx_3 u< eax_11 + 1)
                            ecx_3 = eax_11 + 1
                        
                        eax_7, ecx_1 = sub_424860(&var_4, ecx_3)
                        __return_addr_1 = __return_addr
                        esi_1 = var_4
                
                if (__return_addr_1 != 0)
                    eax_7.b = *edi_1
                    *__return_addr_1 = eax_7.b
            else
                void* edi_2 = edi_1 - esi_1
                
                if (__return_addr_1 == 0)
                    void* eax_9 = __return_addr_1 - esi_1
                    
                    if (eax_9 u> 0xfffffffe)
                        goto label_554f7e
                    
                    if (eax_9 + 1 u> 0 - esi_1)
                        uint32_t edx_3 = (0 - esi_1) u>> 1
                        void* ecx_2
                        
                        if (0xffffffff - edx_3 u>= 0 - esi_1)
                            ecx_2 = 0 - esi_1 + edx_3
                        else
                            ecx_2 = nullptr
                        
                        if (ecx_2 u< eax_9 + 1)
                            ecx_2 = eax_9 + 1
                        
                        eax_7, ecx_1 = sub_424860(&var_4, ecx_2)
                        __return_addr_1 = __return_addr
                        esi_1 = var_4
                
                if (__return_addr_1 != 0)
                    ecx_1.b = *(edi_2 + esi_1)
                    *__return_addr_1 = ecx_1.b
            
            void* edi_4 = var_8_1 + 1
            var_8_1 = edi_4
            edi_1 = edi_4 + arg_10
            __return_addr_1 += 1
            __return_addr = __return_addr_1
            
            if (edi_1 u>= __return_addr_1 || esi_1 u> edi_1)
                if (__return_addr_1 != 0)
                    goto label_554cce
                
                void* eax_15 = __return_addr_1 - esi_1
                
                if (eax_15 u> 0xfffffffe)
                    goto label_554f7e
                
                if (eax_15 + 1 u<= 0 - esi_1)
                    goto label_554cce
                
                uint32_t edx_9 = (0 - esi_1) u>> 1
                void* ecx_5
                
                if (0xffffffff - edx_9 u>= 0 - esi_1)
                    ecx_5 = 0 - esi_1 + edx_9
                else
                    ecx_5 = nullptr
                
                if (ecx_5 u< eax_15 + 1)
                    ecx_5 = eax_15 + 1
                
                sub_424860(&var_4, ecx_5)
                goto label_554cca
            
            edi_5 = edi_1 - esi_1
            
            if (__return_addr_1 != 0)
                goto label_554a12
            
            void* eax_13 = __return_addr_1 - esi_1
            
            if (eax_13 u> 0xfffffffe)
                goto label_554f7e
            
            if (eax_13 + 1 u<= 0 - esi_1)
                goto label_554a12
            
            uint32_t edx_7 = (0 - esi_1) u>> 1
            uint32_t ecx_4
            
            if (0xffffffff - edx_7 u>= 0 - esi_1)
                ecx_4 = 0 - esi_1 + edx_7
            else
                ecx_4 = 0
            
            if (ecx_4 u< eax_13 + 1)
                ecx_4 = eax_13 + 1
            
            eax_7, ecx_1 = sub_424860(&var_4, ecx_4)
            goto label_554a0a
        
        if (eax_7.b != 0x25)
            if (edi_1 u< __return_addr_1 && esi_1 u<= edi_1)
                edi_5 = edi_1 - esi_1
                
                if (__return_addr_1 != 0)
                    goto label_554a12
                
                eax_7, ecx_1 = sub_4247b0(&var_4, 0, 1)
            label_554a0a:
                __return_addr_1 = __return_addr
                esi_1 = var_4
            label_554a12:
                
                if (__return_addr_1 == 0)
                    goto label_554cd7
                
                eax_7.b = *(edi_5 + esi_1)
                *__return_addr_1 = eax_7.b
                goto label_554cd7
            
            if (__return_addr_1 != 0)
                goto label_554cce
            
            sub_4247b0(&var_4, 0, 1)
        label_554cca:
            __return_addr_1 = __return_addr
        label_554cce:
            
            if (__return_addr_1 == 0)
                goto label_554cd7
            
            ecx_1.b = *edi_1
            *__return_addr_1 = ecx_1.b
        label_554cd7:
            __return_addr_1 += 1
            var_8_1 += 1
            __return_addr = __return_addr_1
        else
            eax_7.b = *(var_8_1 + arg_10 + 1)
            
            if (eax_7.b != 0x25)
                char arg_f
                char arg_6c
                char arg_6d
                
                if (eax_7.b == 0x2a || (var_8_1 + 2 s< ebx && *(var_8_1 + arg_10 + 2) == 0x2a))
                    int32_t var_24_17 = arg2
                    _swprintf(&arg_6c, 0x4000, 0x74c940)
                    int32_t* esi_29 = &var_4
                    arg_f = 0x25
                    sub_54e400(&arg_f, esi_29)
                    void* var_8_5
                    
                    if (*(var_8_1 + arg_10 + 1) == 0x2a)
                        var_8_5 = var_8_1 + 2
                    else
                        sub_54e400(var_8_1 + arg_10 + 1, esi_29)
                        var_8_5 = var_8_1 + 3
                    
                    char* eax_65 = &arg_6c
                    void* ecx_21
                    
                    do
                        ecx_21.b = *eax_65
                        eax_65 = &eax_65[1]
                    while (ecx_21.b != 0)
                    
                    __return_addr_1 = __return_addr
                    void* eax_66 = eax_65 - &arg_6d
                    int32_t ebx_2 = 0
                    void* arg_2c = eax_66
                    
                    if (eax_66 s> 0)
                        int128_t* esi_30 = var_4
                        
                        do
                            if (&var_20 + ebx_2 + 0x8c u>= __return_addr_1
                                    || esi_30 u> &var_20 + ebx_2 + 0x8c)
                                if (__return_addr_1 == 0)
                                    void* eax_70 = __return_addr_1 - esi_30
                                    
                                    if (eax_70 u> 0xfffffffe)
                                        goto label_554f7e
                                    
                                    if (eax_70 + 1 u> 0 - esi_30)
                                        uint32_t edx_25 = (0 - esi_30) u>> 1
                                        void* ecx_23
                                        
                                        if (0xffffffff - edx_25 u>= 0 - esi_30)
                                            ecx_23 = 0 - esi_30 + edx_25
                                        else
                                            ecx_23 = nullptr
                                        
                                        if (ecx_23 u< eax_70 + 1)
                                            ecx_23 = eax_70 + 1
                                        
                                        eax_66, ecx_21 = sub_424860(&var_4, ecx_23)
                                        __return_addr_1 = __return_addr
                                        esi_30 = var_4
                                
                                if (__return_addr_1 != 0)
                                    eax_66.b = *(&var_20 + ebx_2 + 0x8c)
                                    *__return_addr_1 = eax_66.b
                            else
                                char* edi_17 = &var_20 + ebx_2 + 0x8c - esi_30
                                
                                if (__return_addr_1 == 0)
                                    void* eax_68 = __return_addr_1 - esi_30
                                    
                                    if (eax_68 u> 0xfffffffe)
                                        goto label_554f7e
                                    
                                    if (eax_68 + 1 u> 0 - esi_30)
                                        uint32_t edx_23 = (0 - esi_30) u>> 1
                                        void* ecx_22
                                        
                                        if (0xffffffff - edx_23 u>= 0 - esi_30)
                                            ecx_22 = 0 - esi_30 + edx_23
                                        else
                                            ecx_22 = nullptr
                                        
                                        if (ecx_22 u< eax_68 + 1)
                                            ecx_22 = eax_68 + 1
                                        
                                        eax_66, ecx_21 = sub_424860(&var_4, ecx_22)
                                        __return_addr_1 = __return_addr
                                        esi_30 = var_4
                                
                                if (__return_addr_1 != 0)
                                    ecx_21.b = *(edi_17 + esi_30)
                                    *__return_addr_1 = ecx_21.b
                            
                            __return_addr_1 += 1
                            ebx_2 += 1
                            __return_addr = __return_addr_1
                        while (ebx_2 s< arg_2c)
                    
                    if (var_8_5 s< arg_14)
                        char* ebx_4 = var_8_5 + arg_10
                        int128_t* esi_35 = var_4
                        
                        do
                            if (ebx_4 u>= __return_addr_1 || esi_35 u> ebx_4)
                                if (__return_addr_1 == 0)
                                    void* eax_74 = __return_addr_1 - esi_35
                                    
                                    if (eax_74 u> 0xfffffffe)
                                        goto label_554f7e
                                    
                                    if (eax_74 + 1 u> 0 - esi_35)
                                        uint32_t edx_29 = (0 - esi_35) u>> 1
                                        void* ecx_25
                                        
                                        if (0xffffffff - edx_29 u>= 0 - esi_35)
                                            ecx_25 = 0 - esi_35 + edx_29
                                        else
                                            ecx_25 = nullptr
                                        
                                        if (ecx_25 u< eax_74 + 1)
                                            ecx_25 = eax_74 + 1
                                        
                                        sub_424860(&var_4, ecx_25)
                                        __return_addr_1 = __return_addr
                                        esi_35 = var_4
                                
                                if (__return_addr_1 != 0)
                                    ecx_1.b = *ebx_4
                                    *__return_addr_1 = ecx_1.b
                            else
                                void* edi_19 = ebx_4 - esi_35
                                
                                if (__return_addr_1 == 0)
                                    void* eax_72 = __return_addr_1 - esi_35
                                    
                                    if (eax_72 u> 0xfffffffe)
                                        goto label_554f7e
                                    
                                    if (eax_72 + 1 u> 0 - esi_35)
                                        uint32_t edx_27 = (0 - esi_35) u>> 1
                                        void* ecx_24
                                        
                                        if (0xffffffff - edx_27 u>= 0 - esi_35)
                                            ecx_24 = 0 - esi_35 + edx_27
                                        else
                                            ecx_24 = nullptr
                                        
                                        if (ecx_24 u< eax_72 + 1)
                                            ecx_24 = eax_72 + 1
                                        
                                        eax_66, ecx_1 = sub_424860(&var_4, ecx_24)
                                        __return_addr_1 = __return_addr
                                        esi_35 = var_4
                                
                                if (__return_addr_1 != 0)
                                    eax_66.b = *(edi_19 + esi_35)
                                    *__return_addr_1 = eax_66.b
                            
                            eax_66 = var_8_5 + 1
                            __return_addr_1 += 1
                            ebx_4 = &ebx_4[1]
                            __return_addr = __return_addr_1
                            var_8_5 = eax_66
                        while (eax_66 s< arg_14)
                    
                    break
                
                char* arg_18 = nullptr
                char* arg_1c = nullptr
                void* arg_20 = nullptr
                sub_5566e0(&arg_18, edi_1)
                arg_4078.b = 1
                char* ebx_1 = arg_18
                void* var_8_2 = var_8_1 + 1
                ExceptionList:3.b = 0
                
                if (var_8_1 + 1 s< ebx)
                    char* edx_11 = arg_1c
                    void* arg_28 = var_8_1 + 1 + arg_10
                    
                    while (true)
                        void* eax_21
                        eax_21.b = *arg_28
                        int32_t* arg_34
                        void* i_5
                        
                        if (eax_21.b == 0x64)
                            sub_54e400(var_8_2 + arg_10, &arg_18)
                            i_5 = var_8_2 + 1
                        label_554d35:
                            arg_f = 0
                            sub_54e400(&arg_f, &arg_18)
                            ebx_1 = arg_18
                            int32_t var_24_9 = arg2
                            _swprintf(&arg_6c, 0x4000, ebx_1)
                            
                            if (ExceptionList:3.b != 0)
                                void arg_50
                                sub_402be0(&arg_50, &arg_6c)
                                arg_4078.b = 2
                                sub_5562b0(&arg_50, &arg_34)
                                arg_4078.b = 1
                                sub_401110(&arg_50)
                                int32_t* eax_37 = arg_34
                                
                                if (arg1 u< 0x10)
                                    eax_37 = &arg_34
                                
                                sub_6b5353(&arg_6c, 0x4000, eax_37)
                                sub_401110(&arg_34)
                            
                            int32_t ebp = __return_addr_1 - var_4
                            char* eax_38 = &arg_6c
                            char i
                            
                            do
                                i = *eax_38
                                eax_38 = &eax_38[1]
                            while (i != 0)
                            sub_404f60(eax_38 - &arg_6d + ebp, &var_4)
                            char* eax_41 = &arg_6c
                            void* i_2 = i_5
                            char i_1
                            
                            do
                                i_1 = *eax_41
                                eax_41 = &eax_41[1]
                            while (i_1 != 0)
                            sub_6c02a0(var_4 + ebp, &arg_6c, eax_41 - &arg_6d)
                            
                            for (; i_2 s< arg_14; i_2 += 1)
                                sub_54e400(i_2 + arg_10, &var_4)
                        else
                            void* i_6
                            
                            if (eax_21.b == 0x44)
                                ExceptionList:3.b = 0x64
                                sub_54e400(&ExceptionList:3, &arg_18)
                                i_6 = var_8_2 + 1
                                ExceptionList:3.b = 1
                            label_554d29:
                                i_5 = i_6
                                goto label_554d35
                            
                            void* ecx_7
                            
                            if (eax_21.b == 0x63)
                                void* var_8_3 = var_8_2 + 1
                                arg_6c = arg2.b
                                
                                if (arg2 s> 0xff)
                                    arg_6d = (arg2 s>> 8).b
                                    char arg_6e = 0
                                else
                                    arg_6d = 0
                                
                                int32_t ebp_2 = __return_addr_1 - var_4
                                char* eax_47 = &arg_6c
                                
                                do
                                    ecx_7.b = *eax_47
                                    eax_47 = &eax_47[1]
                                while (ecx_7.b != 0)
                                
                                void* eax_48 = eax_47 - &arg_6d
                                sub_404f60(eax_48 + ebp_2, &var_4)
                                sub_6c02a0(var_4 + ebp_2, &arg_6c, eax_48)
                                
                                if (var_8_3 s< arg_14)
                                    void* edi_12 = var_8_3
                                    
                                    do
                                        sub_54e400(edi_12 + arg_10, &var_4)
                                        edi_12 += 1
                                    while (edi_12 s< arg_14)
                            else
                                if (eax_21.b != 0x62)
                                    if (eax_21.b == 0x78 || eax_21.b == 0x58)
                                        sub_54e400(var_8_2 + arg_10, &arg_18)
                                        i_6 = var_8_2 + 1
                                        goto label_554d29
                                    
                                    if (eax_21.b u>= 0x61 && eax_21.b u<= 0x7a)
                                        break
                                    
                                    if (eax_21.b u>= 0x41 && eax_21.b u<= 0x5a)
                                        break
                                    
                                    if (eax_21.b u>= 0x81 && eax_21.b u<= 0x9f)
                                        break
                                    
                                    if (eax_21.b u>= 0xe0)
                                        break
                                    
                                    char* esi_12 = arg_28
                                    
                                    if (esi_12 u>= edx_11 || ebx_1 u> esi_12)
                                        if (edx_11 == arg_20)
                                            void* eax_26 = edx_11 - ebx_1
                                            
                                            if (eax_26 u> 0xfffffffe)
                                                goto label_554f7e
                                            
                                            ecx_7 = arg_20 - ebx_1
                                            
                                            if (eax_26 + 1 u> ecx_7)
                                                uint32_t edx_15 = ecx_7 u>> 1
                                                void* ecx_9
                                                
                                                if (0xffffffff - edx_15 u>= ecx_7)
                                                    ecx_9 = ecx_7 + edx_15
                                                else
                                                    ecx_9 = nullptr
                                                
                                                if (ecx_9 u< eax_26 + 1)
                                                    ecx_9 = eax_26 + 1
                                                
                                                eax_21, ecx_7 = sub_424860(&arg_18, ecx_9)
                                                edx_11 = arg_1c
                                                ebx_1 = arg_18
                                                esi_12 = arg_28
                                        
                                        if (edx_11 != 0)
                                            eax_21.b = *esi_12
                                            *edx_11 = eax_21.b
                                    else
                                        edi_1 = esi_12 - ebx_1
                                        
                                        if (edx_11 == arg_20)
                                            void* eax_23 = edx_11 - ebx_1
                                            
                                            if (eax_23 u> 0xfffffffe)
                                                goto label_554f7e
                                            
                                            ecx_7 = arg_20 - ebx_1
                                            
                                            if (eax_23 + 1 u> ecx_7)
                                                uint32_t edx_13 = ecx_7 u>> 1
                                                uint32_t ecx_8
                                                
                                                if (0xffffffff - edx_13 u>= ecx_7)
                                                    ecx_8 = ecx_7 + edx_13
                                                else
                                                    ecx_8 = 0
                                                
                                                if (ecx_8 u< eax_23 + 1)
                                                    ecx_8 = eax_23 + 1
                                                
                                                sub_424860(&arg_18, ecx_8)
                                                edx_11 = arg_1c
                                                ebx_1 = arg_18
                                                esi_12 = arg_28
                                        
                                        if (edx_11 != 0)
                                            ecx_7.b = *(ebx_1 + edi_1)
                                            *edx_11 = ecx_7.b
                                    
                                    void* eax_28 = var_8_2 + 1
                                    edx_11 = &edx_11[1]
                                    arg_1c = edx_11
                                    var_8_2 = eax_28
                                    arg_28 = &esi_12[1]
                                    
                                    if (eax_28 s>= arg_14)
                                        break
                                    
                                    continue
                                
                                void* var_8_4 = var_8_2 + 1
                                char* var_2c_3
                                char const* const var_24_13
                                
                                if (arg2 != 0)
                                    var_24_13 = "true"
                                    int32_t var_28_5 = 0x10
                                    var_2c_3 = &arg_34
                                else
                                    var_24_13 = "false"
                                    int32_t var_28_3 = 0x10
                                    var_2c_3 = &arg_34
                                
                                sub_6b5353(var_2c_3, 0x10, var_24_13)
                                int32_t** eax_53 = &arg_34
                                int32_t ebp_4 = __return_addr_1 - var_4
                                char i_3
                                
                                do
                                    i_3 = *eax_53
                                    eax_53 += 1
                                while (i_3 != 0)
                                sub_404f60(eax_53 - &arg_34:1 + ebp_4, &var_4)
                                int32_t** eax_56 = &arg_34
                                char i_4
                                
                                do
                                    i_4 = *eax_56
                                    eax_56 += 1
                                while (i_4 != 0)
                                sub_6c02a0(var_4 + ebp_4, &arg_34, eax_56 - &arg_34:1)
                                
                                if (var_8_4 s< arg_14)
                                    void* edi_15 = var_8_4
                                    
                                    do
                                        sub_54e400(edi_15 + arg_10, &var_4)
                                        edi_15 += 1
                                    while (edi_15 s< arg_14)
                        arg_4078.b = 0
                        
                        if (ebx_1 != 0)
                            char* var_24_15 = ebx_1
                            sub_6b4d5b()
                        
                        __return_addr_1 = __return_addr
                        goto label_554f41
                
                ExceptionList:3.b = 0x25
                sub_54e400(&ExceptionList:3, &var_4)
                var_8_1 += 1
                arg_4078.b = 0
                
                if (ebx_1 != 0)
                    char* var_24_8 = ebx_1
                    sub_6b4d5b()
                
                __return_addr_1 = __return_addr
                arg_18 = nullptr
                arg_1c = nullptr
                arg_20 = nullptr
            else
                ExceptionList:3.b = eax_7.b
                sub_54e400(&ExceptionList:3, &var_4)
                var_8_1 += 2
                __return_addr_1 = __return_addr
        
        if (var_8_1 s>= arg_14)
            break
        
        ebx = arg_14

label_554f41:
int128_t* ebx_5 = var_4
ExceptionList:3.b = 0

if (&ExceptionList:3 u< __return_addr_1 && ebx_5 u<= &ExceptionList:3)
    void* edi_13 = &ExceptionList:3 - ebx_5
    
    if (__return_addr_1 != 0)
    label_55527a:
        
        if (__return_addr_1 == 0)
            goto label_5552da
        
        *__return_addr_1 = *(edi_13 + ebx_5)
        goto label_5552da
    
    void* eax_52 = __return_addr_1 - ebx_5
    
    if (eax_52 u<= 0xfffffffe)
        if (eax_52 + 1 u> 0 - ebx_5)
            uint32_t edx_31 = (0 - ebx_5) u>> 1
            void* ecx_26
            
            if (0xffffffff - edx_31 u>= 0 - ebx_5)
                ecx_26 = 0 - ebx_5 + edx_31
            else
                ecx_26 = nullptr
            
            if (ecx_26 u< eax_52 + 1)
                ecx_26 = eax_52 + 1
            
            sub_424860(&var_4, ecx_26)
            __return_addr_1 = __return_addr
            ebx_5 = var_4
        
        goto label_55527a
    
label_554f7e:
    sub_6b47bf("vector<T> too long")
    noreturn

if (__return_addr_1 == 0)
    void* eax_79 = __return_addr_1 - ebx_5
    
    if (eax_79 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    if (eax_79 + 1 u> 0 - ebx_5)
        uint32_t edx_33 = (0 - ebx_5) u>> 1
        void* ecx_27
        
        if (0xffffffff - edx_33 u>= 0 - ebx_5)
            ecx_27 = 0 - ebx_5 + edx_33
        else
            ecx_27 = nullptr
        
        if (ecx_27 u< eax_79 + 1)
            ecx_27 = eax_79 + 1
        
        sub_424860(&var_4, ecx_27)
        __return_addr_1 = __return_addr
        ebx_5 = var_4

if (__return_addr_1 == 0)
    goto label_5552da

*__return_addr_1 = 0
label_5552da:
char* eax_81 = ebx_5
__return_addr = __return_addr_1 + 1

do
    ecx_1.b = *eax_81
    eax_81 = &eax_81[1]
while (ecx_1.b != 0)

sub_401270(arg3, eax_81 - &eax_81[1], ebx_5)

if (ebx_5 != 0)
    int128_t* var_24_25 = ebx_5
    sub_6b4d5b()

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = arg_4070
sub_6b4885(eax_2 ^ &ExceptionList)
return result
