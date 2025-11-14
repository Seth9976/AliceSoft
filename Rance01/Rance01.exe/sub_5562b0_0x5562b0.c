// 函数: sub_5562b0
// 地址: 0x5562b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_30 = ebx
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebp = 0
int32_t var_24 = 0
int128_t* var_20 = nullptr
char* var_1c = nullptr
int32_t var_18 = 0
int32_t var_4 = 0
sub_424860(&var_20, arg1[4])
int32_t eax_4 = arg1[4]
int32_t* var_28

if (arg1[5] u< 0x10)
    var_28 = arg1
else
    var_28 = *arg1

char var_29

if (eax_4 s> 0)
    char* eax_5 = var_1c
    int128_t* edx_1 = var_20
    
    do
        int32_t* ecx_1
        ecx_1.b = *(var_28 + ebp)
        
        if ((ecx_1.b u>= 0x81 && ecx_1.b u<= 0x9f) || ecx_1.b u>= 0xe0)
            ebx.b = ecx_1.b
            var_29 = ebx.b
            
            if (&var_29 u>= eax_5 || edx_1 u> &var_29)
                if (eax_5 == var_18)
                    void* ecx_6 = eax_5 - edx_1
                    
                    if (ecx_6 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* esi_6 = var_18 - edx_1
                    
                    if (ecx_6 + 1 u> esi_6)
                        uint32_t edx_5 = esi_6 u>> 1
                        void* eax_9
                        
                        if (0xffffffff - edx_5 u>= esi_6)
                            eax_9 = esi_6 + edx_5
                        else
                            eax_9 = nullptr
                        
                        if (eax_9 u< ecx_6 + 1)
                            eax_9 = ecx_6 + 1
                        
                        sub_424860(&var_20, eax_9)
                        eax_5 = var_1c
                        edx_1 = var_20
                
                if (eax_5 != 0)
                    *eax_5 = ebx.b
            else
                void* edi_1 = &var_29 - edx_1
                
                if (eax_5 == var_18)
                    void* ecx_4 = eax_5 - edx_1
                    
                    if (ecx_4 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* esi_2 = var_18 - edx_1
                    
                    if (ecx_4 + 1 u> esi_2)
                        uint32_t edx_3 = esi_2 u>> 1
                        char* eax_7
                        
                        if (0xffffffff - edx_3 u>= esi_2)
                            eax_7 = esi_2 + edx_3
                        else
                            eax_7 = nullptr
                        
                        if (eax_7 u< ecx_4 + 1)
                            eax_7 = ecx_4 + 1
                        
                        sub_424860(&var_20, eax_7)
                        eax_5 = var_1c
                        edx_1 = var_20
                
                if (eax_5 != 0)
                    char* ecx_2
                    ecx_2.b = *(edi_1 + edx_1)
                    *eax_5 = ecx_2.b
            
            ebx.b = *(var_28 + ebp + 1)
            void* eax_10 = &eax_5[1]
            ebp += 2
            var_29 = ebx.b
            
            if (&var_29 u>= eax_10 || edx_1 u> &var_29)
                if (eax_10 == var_18)
                    void* ecx_13 = eax_10 - edx_1
                    
                    if (ecx_13 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* esi_14 = var_18 - edx_1
                    
                    if (ecx_13 + 1 u> esi_14)
                        uint32_t edx_9 = esi_14 u>> 1
                        void* eax_14
                        
                        if (0xffffffff - edx_9 u>= esi_14)
                            eax_14 = esi_14 + edx_9
                        else
                            eax_14 = nullptr
                        
                        if (eax_14 u< ecx_13 + 1)
                            eax_14 = ecx_13 + 1
                        
                        sub_424860(&var_20, eax_14)
                        edx_1 = var_20
                
                if (eax_10 != 0)
                    *eax_10 = ebx.b
                
                eax_5 = eax_10 + 1
                var_1c = eax_5
            else
                void* edi_2 = &var_29 - edx_1
                
                if (eax_10 == var_18)
                    void* ecx_11 = eax_10 - edx_1
                    
                    if (ecx_11 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* esi_10 = var_18 - edx_1
                    
                    if (ecx_11 + 1 u> esi_10)
                        uint32_t edx_7 = esi_10 u>> 1
                        char* eax_12
                        
                        if (0xffffffff - edx_7 u>= esi_10)
                            eax_12 = esi_10 + edx_7
                        else
                            eax_12 = nullptr
                        
                        if (eax_12 u< ecx_11 + 1)
                            eax_12 = ecx_11 + 1
                        
                        sub_424860(&var_20, eax_12)
                        edx_1 = var_20
                
                if (eax_10 != 0)
                    char* ecx_9
                    ecx_9.b = *(edi_2 + edx_1)
                    *eax_10 = ecx_9.b
                
                eax_5 = eax_10 + 1
                var_1c = eax_5
        else if (ecx_1.b != 0x2d)
            if (ecx_1.b == 0x2e)
                int128_t** esi_19 = &var_20
                var_29 = 0x81
                sub_54e400(&var_29, esi_19)
                var_29 = 0x44
                sub_54e400(&var_29, esi_19)
                ebp += 1
            else if (ecx_1.b == 0x20)
                int128_t** esi_20 = &var_20
                var_29 = 0x81
                sub_54e400(&var_29, esi_20)
                var_29 = 0x40
                sub_54e400(&var_29, esi_20)
                ebp += 1
            else if (ecx_1.b s< 0x30 || ecx_1.b s> 0x39)
                var_29 = ecx_1.b
                ebp += 1
                sub_54e400(&var_29, &var_20)
            else
                int128_t** esi_21 = &var_20
                var_29 = 0x82
                sub_54e400(&var_29, esi_21)
                ebx.b = ecx_1.b + 0x1f
                var_29 = ebx.b
                sub_54e400(&var_29, esi_21)
                ebp += 1
            
            edx_1 = var_20
            eax_5 = var_1c
        else
            var_29 = 0x81
            
            if (&var_29 u>= eax_5 || edx_1 u> &var_29)
                if (eax_5 == var_18)
                    sub_4247b0(&var_20, edx_1, 1)
                    eax_5 = var_1c
                    edx_1 = var_20
                
                if (eax_5 != 0)
                    *eax_5 = 0x81
            else
                char* esi_17 = &var_29 - edx_1
                
                if (eax_5 == var_18)
                    sub_4247b0(&var_20, edx_1, 1)
                    eax_5 = var_1c
                    edx_1 = var_20
                
                if (eax_5 != 0)
                    *eax_5 = *(esi_17 + edx_1)
            
            void* eax_18 = &eax_5[1]
            var_29 = 0x7c
            
            if (&var_29 u>= eax_18 || edx_1 u> &var_29)
                if (eax_18 == var_18)
                    sub_4247b0(&var_20, edx_1, 1)
                    edx_1 = var_20
                
                if (eax_18 == 0)
                    goto label_5565ae
                
                *eax_18 = 0x7c
            label_5565ae:
                eax_5 = eax_18 + 1
                var_1c = eax_5
                ebp += 1
            else
                char* esi_18 = &var_29 - edx_1
                
                if (eax_18 == var_18)
                    sub_4247b0(&var_20, edx_1, 1)
                    edx_1 = var_20
                
                if (eax_18 == 0)
                    goto label_5565ae
                
                *eax_18 = *(esi_18 + edx_1)
                eax_5 = eax_18 + 1
                var_1c = eax_5
                ebp += 1
    while (ebp s< eax_4)

var_29 = 0
sub_54e400(&var_29, &var_20)
int128_t* ebx_2 = var_20
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
char* eax_29 = ebx_2
char i

do
    i = *eax_29
    eax_29 = &eax_29[1]
while (i != 0)
sub_401270(arg2, eax_29 - &eax_29[1], ebx_2)

if (ebx_2 != 0)
    int128_t* var_44_6 = ebx_2
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
