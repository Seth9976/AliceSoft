// 函数: sub_555b70
// 地址: 0x555b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716dd6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
int32_t* edx
ecx, edx = __chkstk(0x4048)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
int32_t arg_403c
fsbase->NtTib.ExceptionList = &arg_403c
var_4 = nullptr
__return_addr = nullptr
int32_t arg_4044 = 0
sub_424860(&var_4, edx[4])
int32_t ebp = edx[4]
int32_t arg_20 = ebp
int32_t* arg_c

if (edx[5] u< 0x10)
    arg_c = edx
else
    arg_c = *edx

void* var_8_1 = nullptr
void* const __return_addr_1 = nullptr
int128_t* edx_1

if (ebp s> 0)
    edx_1 = var_4
    
    while (true)
        void* edi_1 = var_8_1 + arg_c
        void* eax_7
        eax_7.b = *edi_1
        int32_t* ecx_1
        void* edi_5
        
        if ((eax_7.b u>= 0x81 && eax_7.b u<= 0x9f) || eax_7.b u>= 0xe0)
            if (edi_1 u>= __return_addr_1 || edx_1 u> edi_1)
                if (__return_addr_1 == 0)
                    void* eax_11 = __return_addr_1 - edx_1
                    
                    if (eax_11 u> 0xfffffffe)
                        goto label_5561bd
                    
                    if (eax_11 + 1 u> 0 - edx_1)
                        uint32_t edx_5 = (0 - edx_1) u>> 1
                        void* ecx_3
                        
                        if (0xffffffff - edx_5 u>= 0 - edx_1)
                            ecx_3 = 0 - edx_1 + edx_5
                        else
                            ecx_3 = nullptr
                        
                        if (ecx_3 u< eax_11 + 1)
                            ecx_3 = eax_11 + 1
                        
                        eax_7, ecx_1 = sub_424860(&var_4, ecx_3)
                        __return_addr_1 = __return_addr
                        edx_1 = var_4
                
                if (__return_addr_1 != 0)
                    eax_7.b = *edi_1
                    *__return_addr_1 = eax_7.b
            else
                void* edi_2 = edi_1 - edx_1
                
                if (__return_addr_1 == 0)
                    void* eax_9 = __return_addr_1 - edx_1
                    
                    if (eax_9 u> 0xfffffffe)
                        goto label_5561bd
                    
                    if (eax_9 + 1 u> 0 - edx_1)
                        uint32_t edx_3 = (0 - edx_1) u>> 1
                        void* ecx_2
                        
                        if (0xffffffff - edx_3 u>= 0 - edx_1)
                            ecx_2 = 0 - edx_1 + edx_3
                        else
                            ecx_2 = nullptr
                        
                        if (ecx_2 u< eax_9 + 1)
                            ecx_2 = eax_9 + 1
                        
                        eax_7, ecx_1 = sub_424860(&var_4, ecx_2)
                        __return_addr_1 = __return_addr
                        edx_1 = var_4
                
                if (__return_addr_1 != 0)
                    ecx_1.b = *(edi_2 + edx_1)
                    *__return_addr_1 = ecx_1.b
            
            void* edi_4 = var_8_1 + 1
            var_8_1 = edi_4
            edi_1 = edi_4 + arg_c
            __return_addr_1 += 1
            __return_addr = __return_addr_1
            
            if (edi_1 u>= __return_addr_1 || edx_1 u> edi_1)
                if (__return_addr_1 != 0)
                    goto label_555fc0
                
                void* eax_15 = __return_addr_1 - edx_1
                
                if (eax_15 u> 0xfffffffe)
                    goto label_5561bd
                
                if (eax_15 + 1 u<= 0 - edx_1)
                    goto label_555fc0
                
                uint32_t edx_9 = (0 - edx_1) u>> 1
                void* ecx_6
                
                if (0xffffffff - edx_9 u>= 0 - edx_1)
                    ecx_6 = 0 - edx_1 + edx_9
                else
                    ecx_6 = nullptr
                
                if (ecx_6 u< eax_15 + 1)
                    ecx_6 = eax_15 + 1
                
                sub_424860(&var_4, ecx_6)
                goto label_555fb8
            
            edi_5 = edi_1 - edx_1
            
            if (__return_addr_1 != 0)
                goto label_555d44
            
            void* eax_13 = __return_addr_1 - edx_1
            
            if (eax_13 u> 0xfffffffe)
                goto label_5561bd
            
            if (eax_13 + 1 u<= 0 - edx_1)
                goto label_555d44
            
            uint32_t edx_7 = (0 - edx_1) u>> 1
            uint32_t ecx_5
            
            if (0xffffffff - edx_7 u>= 0 - edx_1)
                ecx_5 = 0 - edx_1 + edx_7
            else
                ecx_5 = 0
            
            if (ecx_5 u< eax_13 + 1)
                ecx_5 = eax_13 + 1
            
            sub_424860(&var_4, ecx_5)
            goto label_555d3c
        
        if (eax_7.b != 0x25)
            if (edi_1 u< __return_addr_1 && edx_1 u<= edi_1)
                edi_5 = edi_1 - edx_1
                
                if (__return_addr_1 != 0)
                    goto label_555d44
                
                sub_4247b0(&var_4, edx_1, 1)
            label_555d3c:
                __return_addr_1 = __return_addr
                edx_1 = var_4
            label_555d44:
                
                if (__return_addr_1 == 0)
                    goto label_555fc8
                
                eax_7.b = *(edi_5 + edx_1)
                *__return_addr_1 = eax_7.b
                goto label_555fc8
            
            if (__return_addr_1 != 0)
                goto label_555fc0
            
            sub_4247b0(&var_4, edx_1, 1)
        label_555fb8:
            edx_1 = var_4
            __return_addr_1 = __return_addr
        label_555fc0:
            
            if (__return_addr_1 == 0)
                goto label_555fc8
            
            ecx_1.b = *edi_1
            *__return_addr_1 = ecx_1.b
        label_555fc8:
            __return_addr_1 += 1
            var_8_1 += 1
            __return_addr = __return_addr_1
        else if (*(var_8_1 + arg_c + 1) != eax_7.b)
            char* arg_10 = nullptr
            char* arg_14 = nullptr
            int32_t arg_18 = 0
            sub_5566e0(&arg_10, edi_1)
            arg_4044.b = 1
            char* edi_6 = arg_10
            void* var_8_2 = var_8_1 + 1
            void* arg_28 = var_8_1 + 1
            
            if (var_8_1 + 1 s< ebp)
                int32_t esi_11 = arg_18
                char* edx_11 = arg_14
                char* ebp_1 = var_8_1 + 1 + arg_c
                char* arg_24 = ebp_1
                
                while (true)
                    void* eax_19
                    eax_19.b = *ebp_1
                    
                    if (eax_19.b == 0x73)
                        int32_t* esi_17 = &arg_10
                        sub_54e400(var_8_2 + arg_c, esi_17)
                        void* var_8_3 = var_8_2 + 1
                        ExceptionList:3.b = 0
                        sub_54e400(&ExceptionList:3, esi_17)
                        char arg_34 = 0
                        int128_t arg_35[0x3ff]
                        sub_6bc670(&arg_35, 0, 0x3fff)
                        void** eax_32 = arg1
                        
                        if (eax_32[5] u>= 0x10)
                            eax_32 = *eax_32
                        
                        void** var_24_9 = eax_32
                        _swprintf(&arg_34, 0x4000, arg_10)
                        char* eax_34 = &arg_34
                        void* ecx_13
                        
                        do
                            ecx_13.b = *eax_34
                            eax_34 = &eax_34[1]
                        while (ecx_13.b != 0)
                        
                        void* eax_35 = eax_34 - &arg_35
                        
                        if (eax_34 != &arg_35)
                            void* edi_10 = __return_addr_1 - var_4
                            sub_404f60(edi_10 + eax_35, &var_4)
                            eax_35, ecx_13, edx_1 =
                                sub_6c02a0(var_4 + edi_10, &arg_34, eax_35, eax_4)
                            __return_addr_1 = __return_addr
                        
                        if (var_8_3 s< arg_20)
                            void* ebp_6 = var_8_3 + arg_c
                            edx_1 = var_4
                            
                            do
                                if (ebp_6 u>= __return_addr_1 || edx_1 u> ebp_6)
                                    if (__return_addr_1 == 0)
                                        void* eax_42 = __return_addr_1 - edx_1
                                        
                                        if (eax_42 u> 0xfffffffe)
                                            goto label_5561bd
                                        
                                        if (eax_42 + 1 u> 0 - edx_1)
                                            uint32_t edx_20 = (0 - edx_1) u>> 1
                                            void* ecx_15
                                            
                                            if (0xffffffff - edx_20 u>= 0 - edx_1)
                                                ecx_15 = 0 - edx_1 + edx_20
                                            else
                                                ecx_15 = nullptr
                                            
                                            if (ecx_15 u< eax_42 + 1)
                                                ecx_15 = eax_42 + 1
                                            
                                            sub_424860(&var_4, ecx_15)
                                            __return_addr_1 = __return_addr
                                            edx_1 = var_4
                                    
                                    if (__return_addr_1 != 0)
                                        ecx_13.b = *ebp_6
                                        *__return_addr_1 = ecx_13.b
                                else
                                    void* edi_12 = ebp_6 - edx_1
                                    
                                    if (__return_addr_1 == 0)
                                        void* eax_40 = __return_addr_1 - edx_1
                                        
                                        if (eax_40 u> 0xfffffffe)
                                            goto label_5561bd
                                        
                                        if (eax_40 + 1 u> 0 - edx_1)
                                            uint32_t edx_18 = (0 - edx_1) u>> 1
                                            void* ecx_14
                                            
                                            if (0xffffffff - edx_18 u>= 0 - edx_1)
                                                ecx_14 = 0 - edx_1 + edx_18
                                            else
                                                ecx_14 = nullptr
                                            
                                            if (ecx_14 u< eax_40 + 1)
                                                ecx_14 = eax_40 + 1
                                            
                                            eax_35, ecx_13 = sub_424860(&var_4, ecx_14)
                                            __return_addr_1 = __return_addr
                                            edx_1 = var_4
                                    
                                    if (__return_addr_1 != 0)
                                        eax_35.b = *(edi_12 + edx_1)
                                        *__return_addr_1 = eax_35.b
                                
                                eax_35 = var_8_3 + 1
                                __return_addr_1 += 1
                                ebp_6 += 1
                                __return_addr = __return_addr_1
                                var_8_3 = eax_35
                            while (eax_35 s< arg_20)
                        
                        arg_4044.b = 0
                        
                        if (arg_10 != 0)
                            char* var_24_13 = arg_10
                            sub_6b4d5b()
                        
                        goto label_55618c
                    
                    if (eax_19.b u>= 0x61 && eax_19.b u<= 0x7a)
                        break
                    
                    if (eax_19.b u>= 0x41 && eax_19.b u<= 0x5a)
                        break
                    
                    if (eax_19.b u>= 0x81 && eax_19.b u<= 0x9f)
                        break
                    
                    if (eax_19.b u>= 0xe0)
                        break
                    
                    int32_t* ecx_7
                    
                    if (ebp_1 u>= edx_11 || edi_6 u> ebp_1)
                        if (edx_11 == esi_11)
                            void* eax_23 = edx_11 - edi_6
                            
                            if (eax_23 u> 0xfffffffe)
                                goto label_5561bd
                            
                            ecx_7 = esi_11 - edi_6
                            
                            if (eax_23 + 1 u> ecx_7)
                                uint32_t edx_15 = ecx_7 u>> 1
                                void* ecx_11
                                
                                if (0xffffffff - edx_15 u>= ecx_7)
                                    ecx_11 = ecx_7 + edx_15
                                else
                                    ecx_11 = nullptr
                                
                                if (ecx_11 u< eax_23 + 1)
                                    ecx_11 = eax_23 + 1
                                
                                sub_424860(&arg_10, ecx_11)
                                esi_11 = arg_18
                                edx_11 = arg_14
                                edi_6 = arg_10
                        
                        if (edx_11 != 0)
                            ecx_7.b = *ebp_1
                            *edx_11 = ecx_7.b
                    else
                        void* ebp_3 = arg_24 - edi_6
                        
                        if (edx_11 == esi_11)
                            void* eax_21 = edx_11 - edi_6
                            
                            if (eax_21 u> 0xfffffffe)
                                goto label_5561bd
                            
                            ecx_7 = esi_11 - edi_6
                            
                            if (eax_21 + 1 u> ecx_7)
                                uint32_t edx_13 = ecx_7 u>> 1
                                void* ecx_9
                                
                                if (0xffffffff - edx_13 u>= ecx_7)
                                    ecx_9 = ecx_7 + edx_13
                                else
                                    ecx_9 = nullptr
                                
                                if (ecx_9 u< eax_21 + 1)
                                    ecx_9 = eax_21 + 1
                                
                                eax_19, ecx_7 = sub_424860(&arg_10, ecx_9)
                                esi_11 = arg_18
                                edx_11 = arg_14
                                edi_6 = arg_10
                        
                        if (edx_11 != 0)
                            eax_19.b = *(edi_6 + ebp_3)
                            *edx_11 = eax_19.b
                    arg_24 = &arg_24[1]
                    eax_19 = var_8_2 + 1
                    edx_11 = &edx_11[1]
                    arg_14 = edx_11
                    var_8_2 = eax_19
                    
                    if (eax_19 s>= arg_20)
                        break
                    
                    ebp_1 = arg_24
            
            ExceptionList:3.b = 0x25
            sub_54e400(&ExceptionList:3, &var_4)
            var_8_1 = arg_28
            arg_4044.b = 0
            
            if (edi_6 != 0)
                char* var_24_8 = edi_6
                sub_6b4d5b()
            
            __return_addr_1 = __return_addr
            edx_1 = var_4
            arg_10 = nullptr
            arg_14 = nullptr
            arg_18 = 0
        else
            ExceptionList:3.b = eax_7.b
            sub_54e400(&ExceptionList:3, &var_4)
            var_8_1 += 2
            __return_addr_1 = __return_addr
            edx_1 = var_4
        
        if (var_8_1 s>= arg_20)
            break
        
        ebp = arg_20

label_55618c:
int128_t* ebp_7 = var_4
ExceptionList:3.b = 0

if (&ExceptionList:3 u< __return_addr_1 && ebp_7 u<= &ExceptionList:3)
    void* edi_13 = &ExceptionList:3 - ebp_7
    
    if (__return_addr_1 != 0)
    label_5561f4:
        
        if (__return_addr_1 == 0)
            goto label_556254
        
        edx_1.b = *(edi_13 + ebp_7)
        *__return_addr_1 = edx_1.b
        goto label_556254
    
    void* eax_46 = __return_addr_1 - ebp_7
    
    if (eax_46 u<= 0xfffffffe)
        if (eax_46 + 1 u> 0 - ebp_7)
            uint32_t edx_23 = (0 - ebp_7) u>> 1
            void* ecx_17
            
            if (0xffffffff - edx_23 u>= 0 - ebp_7)
                ecx_17 = 0 - ebp_7 + edx_23
            else
                ecx_17 = nullptr
            
            if (ecx_17 u< eax_46 + 1)
                ecx_17 = eax_46 + 1
            
            void* ecx_16
            ecx_16, edx_1 = sub_424860(&var_4, ecx_17)
            __return_addr_1 = __return_addr
            ebp_7 = var_4
        
        goto label_5561f4
    
label_5561bd:
    sub_6b47bf("vector<T> too long")
    noreturn

if (__return_addr_1 == 0)
    void* eax_49 = __return_addr_1 - ebp_7
    
    if (eax_49 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    if (eax_49 + 1 u> 0 - ebp_7)
        uint32_t edx_25 = (0 - ebp_7) u>> 1
        void* ecx_18
        
        if (0xffffffff - edx_25 u>= 0 - ebp_7)
            ecx_18 = 0 - ebp_7 + edx_25
        else
            ecx_18 = nullptr
        
        if (ecx_18 u< eax_49 + 1)
            ecx_18 = eax_49 + 1
        
        sub_424860(&var_4, ecx_18)
        __return_addr_1 = __return_addr
        ebp_7 = var_4

if (__return_addr_1 == 0)
    goto label_556254

*__return_addr_1 = 0
label_556254:
char* eax_51 = ebp_7
__return_addr = __return_addr_1 + 1
char i

do
    i = *eax_51
    eax_51 = &eax_51[1]
while (i != 0)
sub_401270(ecx, eax_51 - &eax_51[1], ebp_7)

if (ebp_7 != 0)
    int128_t* var_24_17 = ebp_7
    sub_6b4d5b()

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = arg_403c
sub_6b4885(eax_2 ^ &ExceptionList)
return result
