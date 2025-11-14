// 函数: sub_555340
// 地址: 0x555340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a771
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx = __chkstk(0x407c)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
void* eax_4 = data_78c474 ^ &__saved_edi
int32_t arg_4070
fsbase->NtTib.ExceptionList = &arg_4070
var_4 = nullptr
__builtin_memset(&__return_addr, 0, 8)
int32_t arg_4078 = 0
int32_t var_24 = ecx[4]
char* ecx_1
void* edx
ecx_1, edx = sub_424860(&var_4)
char* eax_7 = ecx[4]
char* arg_28 = eax_7
void* arg_c

if (ecx[5] u< 0x10)
    arg_c = ecx
else
    arg_c = *ecx

char* ebp = var_4
void* var_8_1 = nullptr
char* __return_addr_1 = nullptr

if (eax_7 s> 0)
    while (true)
        char* ecx_2 = var_8_1
        eax_7.b = *(ecx_2 + arg_c)
        void* edi_1 = ecx_2 + arg_c
        void* edi_5
        
        if ((eax_7.b u>= 0x81 && eax_7.b u<= 0x9f) || eax_7.b u>= 0xe0)
            if (edi_1 u>= __return_addr_1 || ebp u> edi_1)
                if (__return_addr_1 == 0)
                    void* eax_11 = __return_addr_1 - ebp
                    
                    if (eax_11 u> 0xfffffffe)
                        goto label_555a78
                    
                    if (eax_11 + 1 u> 0 - ebp)
                        uint32_t edx_4 = (0 - ebp) u>> 1
                        void* ecx_6
                        
                        if (0xffffffff - edx_4 u>= 0 - ebp)
                            ecx_6 = 0 - ebp + edx_4
                        else
                            ecx_6 = nullptr
                        
                        if (ecx_6 u< eax_11 + 1)
                            ecx_6 = eax_11 + 1
                        
                        void* var_24_2 = ecx_6
                        eax_7, edx = sub_424860(&var_4)
                        __return_addr_1 = __return_addr
                        ebp = var_4
                
                if (__return_addr_1 != 0)
                    eax_7.b = *edi_1
                    *__return_addr_1 = eax_7.b
            else
                void* edi_2 = edi_1 - ebp
                
                if (__return_addr_1 == 0)
                    void* eax_9 = __return_addr_1 - ebp
                    
                    if (eax_9 u> 0xfffffffe)
                        goto label_555a78
                    
                    if (eax_9 + 1 u> 0 - ebp)
                        uint32_t edx_2 = (0 - ebp) u>> 1
                        char* ecx_4
                        
                        if (0xffffffff - edx_2 u>= 0 - ebp)
                            ecx_4 = 0 - ebp + edx_2
                        else
                            ecx_4 = nullptr
                        
                        if (ecx_4 u< eax_9 + 1)
                            ecx_4 = eax_9 + 1
                        
                        char* var_24_1 = ecx_4
                        eax_7, edx = sub_424860(&var_4)
                        __return_addr_1 = __return_addr
                        ebp = var_4
                
                if (__return_addr_1 != 0)
                    edx.b = *(edi_2 + ebp)
                    *__return_addr_1 = edx.b
            
            void* edi_4 = var_8_1 + 1
            var_8_1 = edi_4
            edi_1 = edi_4 + arg_c
            __return_addr_1 = &__return_addr_1[1]
            __return_addr = __return_addr_1
            
            if (edi_1 u>= __return_addr_1 || ebp u> edi_1)
                if (__return_addr_1 != 0)
                    goto label_5557a8
                
                void* eax_15 = __return_addr_1 - ebp
                
                if (eax_15 u> 0xfffffffe)
                    goto label_555a78
                
                if (eax_15 + 1 u<= 0 - ebp)
                    goto label_5557a8
                
                uint32_t edx_8 = (0 - ebp) u>> 1
                void* ecx_10
                
                if (0xffffffff - edx_8 u>= 0 - ebp)
                    ecx_10 = 0 - ebp + edx_8
                else
                    ecx_10 = nullptr
                
                if (ecx_10 u< eax_15 + 1)
                    ecx_10 = eax_15 + 1
                
                void* var_24_4 = ecx_10
                eax_7, edx = sub_424860(&var_4)
                goto label_5557a0
            
            edi_5 = edi_1 - ebp
            
            if (__return_addr_1 != 0)
                goto label_555512
            
            void* eax_13 = __return_addr_1 - ebp
            
            if (eax_13 u> 0xfffffffe)
                goto label_555a78
            
            if (eax_13 + 1 u<= 0 - ebp)
                goto label_555512
            
            uint32_t edx_6 = (0 - ebp) u>> 1
            char* ecx_8
            
            if (0xffffffff - edx_6 u>= 0 - ebp)
                ecx_8 = 0 - ebp + edx_6
            else
                ecx_8 = nullptr
            
            if (ecx_8 u< eax_13 + 1)
                ecx_8 = eax_13 + 1
            
            char* var_24_3 = ecx_8
            eax_7, edx = sub_424860(&var_4)
            goto label_55550a
        
        if (eax_7.b != 0x25)
            if (edi_1 u< __return_addr_1 && ebp u<= edi_1)
                edi_5 = edi_1 - ebp
                
                if (__return_addr_1 != 0)
                    goto label_555512
                
                eax_7, edx = sub_4247b0(&var_4, arg_c, 1)
            label_55550a:
                __return_addr_1 = __return_addr
                ebp = var_4
            label_555512:
                
                if (__return_addr_1 == 0)
                    goto label_5557b0
                
                edx.b = *(edi_5 + ebp)
                *__return_addr_1 = edx.b
                goto label_5557b0
            
            if (__return_addr_1 != 0)
                goto label_5557a8
            
            eax_7, edx = sub_4247b0(&var_4, arg_c, 1)
        label_5557a0:
            ebp = var_4
            __return_addr_1 = __return_addr
        label_5557a8:
            
            if (__return_addr_1 == 0)
                goto label_5557b0
            
            eax_7.b = *edi_1
            *__return_addr_1 = eax_7.b
        label_5557b0:
            __return_addr_1 = &__return_addr_1[1]
            var_8_1 += 1
            __return_addr = __return_addr_1
        else if (*(ecx_2 + arg_c + 1) != eax_7.b)
            void* var_24_5 = edi_1
            char* arg_18 = nullptr
            char* arg_1c = nullptr
            int32_t arg_20 = 0
            sub_5566e0(&arg_18)
            arg_4078.b = 1
            char* edi_6 = arg_18
            void* var_8_2 = var_8_1 + 1
            ExceptionList:3.b = 0
            
            if (var_8_1 + 1 s< arg_28)
                int32_t esi_11 = arg_20
                char* edx_9 = arg_1c
                void* arg_14 = var_8_1 + 1 + arg_c
                
                while (true)
                    void* eax_19
                    eax_19.b = *arg_14
                    void* var_8_3
                    
                    if (eax_19.b == 0x66)
                        sub_54e400(var_8_2 + arg_c, &arg_18)
                        var_8_3 = var_8_2 + 1
                    else if (eax_19.b == 0x46)
                        ExceptionList:3.b = 0x66
                        sub_54e400(&ExceptionList:3, &arg_18)
                        var_8_3 = var_8_2 + 1
                        ExceptionList:3.b = 1
                    else
                        if (eax_19.b u>= 0x61 && eax_19.b u<= 0x7a)
                            break
                        
                        if (eax_19.b u>= 0x41 && eax_19.b u<= 0x5a)
                            break
                        
                        if (eax_19.b u>= 0x81 && eax_19.b u<= 0x9f)
                            break
                        
                        if (eax_19.b u>= 0xe0)
                            break
                        
                        char* ebp_1 = arg_14
                        void* ecx_12
                        
                        if (ebp_1 u>= edx_9 || edi_6 u> ebp_1)
                            if (edx_9 == esi_11)
                                void* eax_24 = edx_9 - edi_6
                                
                                if (eax_24 u> 0xfffffffe)
                                    goto label_555a78
                                
                                ecx_12 = esi_11 - edi_6
                                
                                if (eax_24 + 1 u> ecx_12)
                                    uint32_t edx_13 = ecx_12 u>> 1
                                    void* ecx_16
                                    
                                    if (0xffffffff - edx_13 u>= ecx_12)
                                        ecx_16 = ecx_12 + edx_13
                                    else
                                        ecx_16 = nullptr
                                    
                                    if (ecx_16 u< eax_24 + 1)
                                        ecx_16 = eax_24 + 1
                                    
                                    void* var_24_7 = ecx_16
                                    eax_19, ecx_12 = sub_424860(&arg_18)
                                    esi_11 = arg_20
                                    edx_9 = arg_1c
                                    edi_6 = arg_18
                                    ebp_1 = arg_14
                            
                            if (edx_9 != 0)
                                eax_19.b = *ebp_1
                                *edx_9 = eax_19.b
                        else
                            void* ebp_2 = ebp_1 - edi_6
                            
                            if (edx_9 == esi_11)
                                void* eax_21 = edx_9 - edi_6
                                
                                if (eax_21 u> 0xfffffffe)
                                    goto label_555a78
                                
                                ecx_12 = esi_11 - edi_6
                                
                                if (eax_21 + 1 u> ecx_12)
                                    uint32_t edx_11 = ecx_12 u>> 1
                                    void* ecx_14
                                    
                                    if (0xffffffff - edx_11 u>= ecx_12)
                                        ecx_14 = ecx_12 + edx_11
                                    else
                                        ecx_14 = nullptr
                                    
                                    if (ecx_14 u< eax_21 + 1)
                                        ecx_14 = eax_21 + 1
                                    
                                    void* var_24_6 = ecx_14
                                    sub_424860(&arg_18)
                                    esi_11 = arg_20
                                    edx_9 = arg_1c
                                    edi_6 = arg_18
                            
                            if (edx_9 != 0)
                                ecx_12.b = *(edi_6 + ebp_2)
                                *edx_9 = ecx_12.b
                        arg_14 += 1
                        void* eax_26 = var_8_2 + 1
                        edx_9 = &edx_9[1]
                        arg_1c = edx_9
                        var_8_2 = eax_26
                        
                        if (eax_26 s>= arg_28)
                            break
                        
                        ebp = var_4
                        continue
                    
                    char arg_13 = 0
                    sub_54e400(&arg_13, &arg_18)
                    double var_28_1 = fconvert.d(fconvert.t(arg2))
                    int32_t var_30_1 = 0x4000
                    char arg_6c
                    _swprintf(&arg_6c, 0x4000, arg_18)
                    void arg_6d
                    char i
                    
                    if (ExceptionList:3.b != 0)
                        char* eax_34 = &arg_6c
                        int32_t arg_48 = 0xf
                        int32_t arg_44 = 0
                        char arg_34 = 0
                        
                        do
                            i = *eax_34
                            eax_34 = &eax_34[1]
                        while (i != 0)
                        
                        char* var_24_9 = &arg_6c
                        sub_401270(&arg_34, eax_34 - &arg_6d)
                        char* arg_50
                        int32_t* var_24_10 = &arg_50
                        arg_4078.b = 2
                        sub_5562b0(&arg_34)
                        arg_4078.b = 1
                        
                        if (arg_48 u>= 0x10)
                            int32_t var_24_11 = arg_34.d
                            sub_6b4d5b()
                        
                        char* eax_36 = arg_50
                        
                        if (arg1 u< 0x10)
                            eax_36 = &arg_50
                        
                        var_28_1.d = 0x4000
                        sub_6b5353(&arg_6c, 0x4000, eax_36)
                        
                        if (arg1 u>= 0x10)
                            char* var_24_13 = arg_50
                            sub_6b4d5b()
                    
                    void* ebx = __return_addr_1 - ebp
                    char* eax_38 = &arg_6c
                    
                    do
                        i = *eax_38
                        eax_38 = &eax_38[1]
                    while (i != 0)
                    
                    sub_404f60(eax_38 - &arg_6d + ebx, &var_4)
                    char* eax_41 = &arg_6c
                    char i_1
                    
                    do
                        i_1 = *eax_41
                        eax_41 = &eax_41[1]
                    while (i_1 != 0)
                    ebp = var_4
                    int32_t var_24_14 = eax_41 - &arg_6d
                    var_28_1.d = &arg_6c
                    ecx_1, edx = sub_6c02a0(ebx + ebp, var_28_1, eax_4)
                    __return_addr_1 = __return_addr
                    
                    if (var_8_3 s< arg_28)
                        void* eax_44 = var_8_3 + arg_c
                        arg_c = eax_44
                        edx = eax_44
                        
                        do
                            if (edx u>= __return_addr_1 || ebp u> edx)
                                if (__return_addr_1 == 0)
                                    void* eax_48 = __return_addr_1 - ebp
                                    
                                    if (eax_48 u> 0xfffffffe)
                                        goto label_555a78
                                    
                                    if (eax_48 + 1 u> 0 - ebp)
                                        uint32_t edx_19 = (0 - ebp) u>> 1
                                        void* ecx_21
                                        
                                        if (0xffffffff - edx_19 u>= 0 - ebp)
                                            ecx_21 = &(0 - ebp)[edx_19]
                                        else
                                            ecx_21 = nullptr
                                        
                                        if (ecx_21 u< eax_48 + 1)
                                            ecx_21 = eax_48 + 1
                                        
                                        void* var_24_16 = ecx_21
                                        sub_424860(&var_4)
                                        __return_addr_1 = __return_addr
                                        ebp = var_4
                                        edx = arg_c
                                
                                if (__return_addr_1 != 0)
                                    ecx_1.b = *edx
                                    *__return_addr_1 = ecx_1.b
                            else
                                char* edi_12 = edx - ebp
                                
                                if (__return_addr_1 == 0)
                                    void* eax_46 = __return_addr_1 - ebp
                                    
                                    if (eax_46 u> 0xfffffffe)
                                        goto label_555a78
                                    
                                    if (eax_46 + 1 u> 0 - ebp)
                                        uint32_t edx_17 = (0 - ebp) u>> 1
                                        void* ecx_20
                                        
                                        if (0xffffffff - edx_17 u>= 0 - ebp)
                                            ecx_20 = &(0 - ebp)[edx_17]
                                        else
                                            ecx_20 = nullptr
                                        
                                        if (ecx_20 u< eax_46 + 1)
                                            ecx_20 = eax_46 + 1
                                        
                                        void* var_24_15 = ecx_20
                                        eax_44, ecx_1 = sub_424860(&var_4)
                                        __return_addr_1 = __return_addr
                                        ebp = var_4
                                        edx = arg_c
                                
                                if (__return_addr_1 != 0)
                                    eax_44.b = *(edi_12 + ebp)
                                    *__return_addr_1 = eax_44.b
                            
                            eax_44 = var_8_3 + 1
                            __return_addr_1 = &__return_addr_1[1]
                            edx += 1
                            __return_addr = __return_addr_1
                            var_8_3 = eax_44
                            arg_c = edx
                        while (eax_44 s< arg_28)
                    
                    arg_4078.b = 0
                    
                    if (arg_18 != 0)
                        char* var_24_17 = arg_18
                        ecx_1, edx = sub_6b4d5b()
                    
                    goto label_555a58
            
            ExceptionList:3.b = 0x25
            sub_54e400(&ExceptionList:3, &var_4)
            var_8_1 += 1
            arg_4078.b = 0
            
            if (edi_6 != 0)
                char* var_24_8 = edi_6
                sub_6b4d5b()
            
            __return_addr_1 = __return_addr
            ebp = var_4
            arg_18 = nullptr
            arg_1c = nullptr
            arg_20 = 0
        else
            ExceptionList:3.b = eax_7.b
            eax_7, edx = sub_54e400(&ExceptionList:3, &var_4)
            var_8_1 += 2
            __return_addr_1 = __return_addr
            ebp = var_4
        
        if (var_8_1 s>= arg_28)
            break

label_555a58:
ExceptionList:3.b = 0

if (&ExceptionList:3 u< __return_addr_1 && ebp u<= &ExceptionList:3)
    void* edi_13 = &ExceptionList:3 - ebp
    
    if (__return_addr_1 != 0)
    label_555ab6:
        
        if (__return_addr_1 == 0)
            goto label_555b14
        
        edx.b = *(edi_13 + ebp)
        *__return_addr_1 = edx.b
        goto label_555b14
    
    void* eax_52 = __return_addr_1 - ebp
    
    if (eax_52 u<= 0xfffffffe)
        if (eax_52 + 1 u> 0 - ebp)
            uint32_t edx_22 = (0 - ebp) u>> 1
            void* ecx_22
            
            if (0xffffffff - edx_22 u>= 0 - ebp)
                ecx_22 = &(0 - ebp)[edx_22]
            else
                ecx_22 = nullptr
            
            if (ecx_22 u< eax_52 + 1)
                ecx_22 = eax_52 + 1
            
            void* var_24_19 = ecx_22
            ecx_1, edx = sub_424860(&var_4)
            __return_addr_1 = __return_addr
            ebp = var_4
        
        goto label_555ab6
    
label_555a78:
    char const* const var_24_18 = "vector<T> too long"
    sub_6b47bf()
    noreturn

if (__return_addr_1 == 0)
    void* eax_55 = __return_addr_1 - ebp
    
    if (eax_55 u> 0xfffffffe)
        char const* const var_24_20 = "vector<T> too long"
        sub_6b47bf()
        noreturn
    
    if (eax_55 + 1 u> 0 - ebp)
        uint32_t edx_24 = (0 - ebp) u>> 1
        void* ecx_23
        
        if (0xffffffff - edx_24 u>= 0 - ebp)
            ecx_23 = &(0 - ebp)[edx_24]
        else
            ecx_23 = nullptr
        
        if (ecx_23 u< eax_55 + 1)
            ecx_23 = eax_55 + 1
        
        void* var_24_21 = ecx_23
        sub_424860(&var_4)
        __return_addr_1 = __return_addr
        ebp = var_4

if (__return_addr_1 == 0)
    goto label_555b14

*__return_addr_1 = 0
label_555b14:
char* eax_57 = ebp
__return_addr = &__return_addr_1[1]
char i_2

do
    i_2 = *eax_57
    eax_57 = &eax_57[1]
while (i_2 != 0)
char* var_24_22 = ebp
sub_401270(arg3, eax_57 - &eax_57[1])

if (ebp != 0)
    char* var_24_23 = ebp
    sub_6b4d5b()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = arg_4070
sub_6b4885(eax_2 ^ &ExceptionList)
return result
