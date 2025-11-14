// 函数: sub_540230
// 地址: 0x540230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a860
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebx = arg_4

if ((data_7980e0 & 1) == 0)
    data_7980e0.d |= 1
    int32_t var_4 = 0
    data_797fdc = 0xf
    data_797fd8 = 0
    data_797fc8 = 0
    sub_401270(&data_797fc8, 2, 0x74dd48)
    var_4.b = 1
    data_797ff8 = 0xf
    data_797ff4 = 0
    data_797fe4 = 0
    sub_401270(&data_797fe4, 2, 0x74dd44)
    var_4.b = 2
    data_798014 = 0xf
    data_798010 = 0
    data_798000 = 0
    sub_401270(&data_798000, 2, 0x74dd40)
    var_4.b = 3
    data_798030 = 0xf
    data_79802c = 0
    data_79801c = 0
    sub_401270(&data_79801c, 2, 0x74dd3c)
    var_4.b = 4
    data_79804c = 0xf
    data_798048 = 0
    data_798038 = 0
    sub_401270(&data_798038, 2, 0x74dd38)
    var_4.b = 5
    data_798068 = 0xf
    data_798064 = 0
    data_798054 = 0
    sub_401270(&data_798054, 2, 0x74dd34)
    var_4.b = 6
    data_798084 = 0xf
    data_798080 = 0
    data_798070 = 0
    sub_401270(&data_798070, 2, 0x74dd30)
    var_4.b = 7
    data_7980a0 = 0xf
    data_79809c = 0
    data_79808c = 0
    sub_401270(&data_79808c, 2, 0x74dd2c)
    var_4.b = 8
    data_7980bc = 0xf
    data_7980b8 = 0
    data_7980a8 = 0
    sub_401270(&data_7980a8, 2, 0x74dd28)
    var_4.b = 9
    data_7980d8 = 0xf
    data_7980d4 = 0
    data_7980c4 = 0
    sub_401270(&data_7980c4, 2, 0x74dd24)
    _atexit(sub_729320)

int128_t* var_1c = nullptr
char* var_18 = nullptr
void* var_14 = nullptr
int32_t var_4_1 = 0xa
sub_424860(&var_1c, ebx[4])
int32_t* var_24

if (ebx[5] u< 0x10)
    var_24 = ebx
else
    var_24 = *ebx

int32_t ebx_1 = ebx[4]
char* esi_1 = var_18
void* var_2c = nullptr
int128_t* ebp = var_1c

if (ebx_1 s> 0)
    void* edx_1 = var_14
    
    do
        char* ebx_3 = var_2c + var_24
        int32_t* eax_4
        eax_4.b = *ebx_3
        void* ecx
        
        if ((eax_4.b u>= 0x81 && eax_4.b u<= 0x9f) || eax_4.b u>= 0xe0)
            int32_t var_28_1 = 0
            uint32_t eax_5
            
            for (char* i = &data_797fc8; i s< &data_7980e0; i = &i[0x1c])
                char* i_1
                
                if (*(i + 0x14) u< 0x10)
                    i_1 = i
                else
                    i_1 = *i
                
                eax_5, ecx = sub_6b557b(ebx_3, i_1, 2)
                
                if (eax_5 == 0)
                    ebx_3.b = var_28_1.b
                    ebx_3.b += 0x30
                    arg_4.b = ebx_3.b
                    
                    if (&arg_4 u>= esi_1 || ebp u> &arg_4)
                        if (esi_1 == var_14)
                            void* eax_9 = esi_1 - ebp
                            
                            if (eax_9 u> 0xfffffffe)
                                goto label_54084d
                            
                            ecx = var_14 - ebp
                            
                            if (eax_9 + 1 u> ecx)
                                uint32_t edx_5 = ecx u>> 1
                                void* ecx_2
                                
                                if (0xffffffff - edx_5 u>= ecx)
                                    ecx_2 = ecx + edx_5
                                else
                                    ecx_2 = nullptr
                                
                                if (ecx_2 u< eax_9 + 1)
                                    ecx_2 = eax_9 + 1
                                
                                eax_5, ecx = sub_424860(&var_1c, ecx_2)
                                esi_1 = var_18
                                ebp = var_1c
                        
                        if (esi_1 != 0)
                            *esi_1 = ebx_3.b
                    else
                        char* edi_1 = &arg_4 - ebp
                        
                        if (esi_1 == var_14)
                            int32_t eax_7 = esi_1 - ebp
                            
                            if (eax_7 u> 0xfffffffe)
                                goto label_54084d
                            
                            ecx = var_14 - ebp
                            
                            if (eax_7 + 1 u> ecx)
                                uint32_t edx_3 = ecx u>> 1
                                void* ecx_1
                                
                                if (0xffffffff - edx_3 u>= ecx)
                                    ecx_1 = ecx + edx_3
                                else
                                    ecx_1 = nullptr
                                
                                if (ecx_1 u< eax_7 + 1)
                                    ecx_1 = eax_7 + 1
                                
                                eax_5, ecx = sub_424860(&var_1c, ecx_1)
                                esi_1 = var_18
                                ebp = var_1c
                        
                        if (esi_1 != 0)
                            ecx.b = *(edi_1 + ebp)
                            *esi_1 = ecx.b
                    
                    var_2c += 2
                    esi_1 = &esi_1[1]
                    var_18 = esi_1
                    
                    if (var_28_1 s>= 0xa)
                        goto label_5405b5
                    
                    edx_1 = var_14
                    goto label_540816
                
                var_28_1 += 1
            
        label_5405b5:
            char* edi_3 = var_2c + var_24
            
            if (edi_3 u>= esi_1 || ebp u> edi_3)
                edx_1 = var_14
                
                if (esi_1 == edx_1)
                    int32_t eax_13 = esi_1 - ebp
                    
                    if (eax_13 u> 0xfffffffe)
                        goto label_54084d
                    
                    ecx = edx_1 - ebp
                    
                    if (eax_13 + 1 u> ecx)
                        uint32_t edx_9 = ecx u>> 1
                        uint32_t ecx_6
                        
                        if (0xffffffff - edx_9 u>= ecx)
                            ecx_6 = ecx + edx_9
                        else
                            ecx_6 = 0
                        
                        if (ecx_6 u< eax_13 + 1)
                            ecx_6 = eax_13 + 1
                        
                        eax_5, ecx = sub_424860(&var_1c, ecx_6)
                        esi_1 = var_18
                        ebp = var_1c
                        edx_1 = var_14
                
                if (esi_1 != 0)
                    eax_5.b = *edi_3
                    *esi_1 = eax_5.b
            else
                edx_1 = var_14
                void* edi_4 = edi_3 - ebp
                
                if (esi_1 == edx_1)
                    void* eax_11 = esi_1 - ebp
                    
                    if (eax_11 u> 0xfffffffe)
                        goto label_54084d
                    
                    ecx = edx_1 - ebp
                    
                    if (eax_11 + 1 u> ecx)
                        uint32_t edx_7 = ecx u>> 1
                        uint32_t ecx_4
                        
                        if (0xffffffff - edx_7 u>= ecx)
                            ecx_4 = ecx + edx_7
                        else
                            ecx_4 = 0
                        
                        if (ecx_4 u< eax_11 + 1)
                            ecx_4 = eax_11 + 1
                        
                        eax_5, ecx = sub_424860(&var_1c, ecx_4)
                        esi_1 = var_18
                        ebp = var_1c
                        edx_1 = var_14
                
                if (esi_1 != 0)
                    ecx.b = *(edi_4 + ebp)
                    *esi_1 = ecx.b
            
            void* edi_7 = var_2c + 1 + var_24
            char* esi_10 = &esi_1[1]
            
            if (edi_7 u>= esi_10 || ebp u> edi_7)
                if (esi_10 == edx_1)
                    void* eax_17 = esi_10 - ebp
                    
                    if (eax_17 u> 0xfffffffe)
                        goto label_54084d
                    
                    ecx = edx_1 - ebp
                    
                    if (eax_17 + 1 u> ecx)
                        uint32_t edx_13 = ecx u>> 1
                        void* ecx_10
                        
                        if (0xffffffff - edx_13 u>= ecx)
                            ecx_10 = ecx + edx_13
                        else
                            ecx_10 = nullptr
                        
                        if (ecx_10 u< eax_17 + 1)
                            ecx_10 = eax_17 + 1
                        
                        sub_424860(&var_1c, ecx_10)
                        ebp = var_1c
                        edx_1 = var_14
                
                if (esi_10 == 0)
                    goto label_54073d
                
                ecx.b = *edi_7
                *esi_10 = ecx.b
            label_54073d:
                esi_1 = &esi_10[1]
                var_2c += 2
                var_18 = esi_1
            else
                void* edi_8 = edi_7 - ebp
                
                if (esi_10 == edx_1)
                    void* eax_15 = esi_10 - ebp
                    
                    if (eax_15 u> 0xfffffffe)
                        goto label_54084d
                    
                    ecx = edx_1 - ebp
                    
                    if (eax_15 + 1 u> ecx)
                        uint32_t edx_11 = ecx u>> 1
                        uint32_t ecx_8
                        
                        if (0xffffffff - edx_11 u>= ecx)
                            ecx_8 = ecx + edx_11
                        else
                            ecx_8 = 0
                        
                        if (ecx_8 u< eax_15 + 1)
                            ecx_8 = eax_15 + 1
                        
                        eax_5, ecx = sub_424860(&var_1c, ecx_8)
                        ebp = var_1c
                        edx_1 = var_14
                
                if (esi_10 == 0)
                    goto label_54073d
                
                eax_5.b = *(edi_8 + ebp)
                *esi_10 = eax_5.b
                esi_1 = &esi_10[1]
                var_2c += 2
                var_18 = esi_1
        else if (ebx_3 u>= esi_1 || ebp u> ebx_3)
            if (esi_1 == edx_1)
                void* eax_22 = esi_1 - ebp
                
                if (eax_22 u> 0xfffffffe)
                    goto label_54084d
                
                ecx = edx_1 - ebp
                
                if (eax_22 + 1 u> ecx)
                    uint32_t edx_17 = ecx u>> 1
                    uint32_t ecx_14
                    
                    if (0xffffffff - edx_17 u>= ecx)
                        ecx_14 = ecx + edx_17
                    else
                        ecx_14 = 0
                    
                    if (ecx_14 u< eax_22 + 1)
                        ecx_14 = eax_22 + 1
                    
                    sub_424860(&var_1c, ecx_14)
                    esi_1 = var_18
                    ebp = var_1c
                    edx_1 = var_14
            
            if (esi_1 == 0)
                goto label_540803
            
            ecx.b = *ebx_3
            *esi_1 = ecx.b
        label_540803:
            esi_1 = &esi_1[1]
            var_2c += 1
            var_18 = esi_1
        else
            char* ebx_4 = ebx_3 - ebp
            
            if (esi_1 == edx_1)
                void* eax_20 = esi_1 - ebp
                
                if (eax_20 u> 0xfffffffe)
                    goto label_54084d
                
                ecx = edx_1 - ebp
                
                if (eax_20 + 1 u> ecx)
                    uint32_t edx_15 = ecx u>> 1
                    int32_t* ecx_12
                    
                    if (0xffffffff - edx_15 u>= ecx)
                        ecx_12 = ecx + edx_15
                    else
                        ecx_12 = nullptr
                    
                    if (ecx_12 u< eax_20 + 1)
                        ecx_12 = eax_20 + 1
                    
                    eax_4, ecx = sub_424860(&var_1c, ecx_12)
                    esi_1 = var_18
                    ebp = var_1c
                    edx_1 = var_14
            
            if (esi_1 == 0)
                goto label_540803
            
            eax_4.b = *(ebx_4 + ebp)
            *esi_1 = eax_4.b
            esi_1 = &esi_1[1]
            var_2c += 1
            var_18 = esi_1
    label_540816:
    while (var_2c s< ebx_1)

arg_4.b = 0
void* ecx_15

if (&arg_4 u< esi_1 && ebp u<= &arg_4)
    void* edi_9 = &arg_4 - ebp
    
    if (esi_1 != var_14)
    label_540884:
        
        if (esi_1 == 0)
            goto label_5408e0
        
        ecx_15.b = *(edi_9 + ebp)
        *esi_1 = ecx_15.b
        goto label_5408e0
    
    void* eax_26 = esi_1 - ebp
    
    if (eax_26 u<= 0xfffffffe)
        ecx_15 = var_14 - ebp
        
        if (eax_26 + 1 u> ecx_15)
            uint32_t edx_19 = ecx_15 u>> 1
            void* ecx_16
            
            if (0xffffffff - edx_19 u>= ecx_15)
                ecx_16 = ecx_15 + edx_19
            else
                ecx_16 = nullptr
            
            if (ecx_16 u< eax_26 + 1)
                ecx_16 = eax_26 + 1
            
            sub_424860(&var_1c, ecx_16)
            esi_1 = var_18
            ebp = var_1c
        
        goto label_540884
    
label_54084d:
    sub_6b47bf("vector<T> too long")
    noreturn

if (esi_1 == var_14)
    void* eax_29 = esi_1 - ebp
    
    if (eax_29 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    ecx_15 = var_14 - ebp
    
    if (eax_29 + 1 u> ecx_15)
        uint32_t edx_21 = ecx_15 u>> 1
        void* ecx_17
        
        if (0xffffffff - edx_21 u>= ecx_15)
            ecx_17 = ecx_15 + edx_21
        else
            ecx_17 = nullptr
        
        if (ecx_17 u< eax_29 + 1)
            ecx_17 = eax_29 + 1
        
        sub_424860(&var_1c, ecx_17)
        esi_1 = var_18
        ebp = var_1c

if (esi_1 == 0)
    goto label_5408e0

*esi_1 = 0
label_5408e0:
char* eax_31 = ebp
void* var_18_2 = &esi_1[1]

do
    ecx_15.b = *eax_31
    eax_31 = &eax_31[1]
while (ecx_15.b != 0)

int32_t* result = sub_401270(arg1, eax_31 - &eax_31[1], ebp)

if (ebp != 0)
    int128_t* var_48_12 = ebp
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
