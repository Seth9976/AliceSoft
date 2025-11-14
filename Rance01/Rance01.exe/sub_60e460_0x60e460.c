// 函数: sub_60e460
// 地址: 0x60e460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = nullptr
int32_t var_24 = 0

if (arg1[5] u>= 0x10)
    arg1 = *arg1

int128_t* ebp = nullptr
int32_t edi = 0
int32_t* var_24_1 = arg1
int128_t* var_20 = nullptr
char* var_1c = nullptr
int32_t var_18 = 0
int32_t var_4 = 0
arg1.b = *arg1
char var_25

while (arg1.b != 0)
    int32_t* edx
    
    if (arg1.b u< 0x81)
        if (arg1.b u>= 0xe0)
            goto label_60e4ca
    else if (arg1.b u<= 0x9f || arg1.b u>= 0xe0)
    label_60e4ca:
        int32_t* esi_1 = var_24_1
        
        if (esi_1 u>= eax_3 || ebp u> esi_1)
            if (eax_3 == edi)
                void* ecx_3 = eax_3 - ebp
                
                if (ecx_3 u> 0xfffffffe)
                    goto label_60e846
                
                edx = edi - ebp
                
                if (ecx_3 + 1 u> edx)
                    uint32_t edx_4 = edx u>> 1
                    uint32_t eax_7
                    
                    if (0xffffffff - edx_4 u>= edx)
                        eax_7 = edx + edx_4
                    else
                        eax_7 = 0
                    
                    if (eax_7 u< ecx_3 + 1)
                        eax_7 = ecx_3 + 1
                    
                    arg1, edx = sub_424860(&var_20, eax_7)
                    edi = var_18
                    eax_3 = var_1c
                    ebp = var_20
                    esi_1 = var_24_1
            
            if (eax_3 != 0)
                edx.b = *esi_1
                *eax_3 = edx.b
        else
            void* ebx_2 = esi_1 - ebp
            
            if (eax_3 == edi)
                void* ecx_1 = eax_3 - ebp
                
                if (ecx_1 u> 0xfffffffe)
                    goto label_60e846
                
                edx = edi - ebp
                
                if (ecx_1 + 1 u> edx)
                    uint32_t edx_2 = edx u>> 1
                    int32_t* eax_5
                    
                    if (0xffffffff - edx_2 u>= edx)
                        eax_5 = edx + edx_2
                    else
                        eax_5 = nullptr
                    
                    if (eax_5 u< ecx_1 + 1)
                        eax_5 = ecx_1 + 1
                    
                    arg1, edx = sub_424860(&var_20, eax_5)
                    edi = var_18
                    eax_3 = var_1c
                    ebp = var_20
                    esi_1 = var_24_1
            
            if (eax_3 != 0)
                arg1.b = *(ebx_2 + ebp)
                *eax_3 = arg1.b
        
        eax_3 = &eax_3[1]
        int32_t* esi_6 = esi_1 + 1
        var_24_1 = esi_6
        
        if (esi_6 u< eax_3 && ebp u<= esi_6)
            void* ebx_4 = esi_6 - ebp
            
            if (eax_3 == edi)
                void* ecx_5 = eax_3 - ebp
                
                if (ecx_5 u> 0xfffffffe)
                    goto label_60e846
                
                void* edx_6 = edi - ebp
                
                if (ecx_5 + 1 u> edx_6)
                    uint32_t edx_7 = edx_6 u>> 1
                    int32_t* eax_9
                    
                    if (0xffffffff - edx_7 u>= edx_6)
                        eax_9 = edx_6 + edx_7
                    else
                        eax_9 = nullptr
                    
                    if (eax_9 u< ecx_5 + 1)
                        eax_9 = ecx_5 + 1
                    
                    sub_424860(&var_20, eax_9)
                    edi = var_18
                    ebp = var_20
            
            if (eax_3 == 0)
                goto label_60e70c
            
            arg1.b = *(ebx_4 + ebp)
            goto label_60e70a
        
        if (eax_3 == edi)
            void* ecx_7 = eax_3 - ebp
            
            if (ecx_7 u> 0xfffffffe)
                goto label_60e846
            
            edx = edi - ebp
            
            if (ecx_7 + 1 u> edx)
                uint32_t edx_9 = edx u>> 1
                void* eax_11
                
                if (0xffffffff - edx_9 u>= edx)
                    eax_11 = edx + edx_9
                else
                    eax_11 = nullptr
                
                if (eax_11 u< ecx_7 + 1)
                    eax_11 = ecx_7 + 1
                
                arg1, edx = sub_424860(&var_20, eax_11)
                edi = var_18
                ebp = var_20
                esi_6 = var_24_1
        
        if (eax_3 == 0)
            goto label_60e70c
        
        edx.b = *esi_6
        *eax_3 = edx.b
        goto label_60e70c
    
    if (arg1.b != 0x40)
        if (var_24_1 u< eax_3 && ebp u<= var_24_1)
            char* esi_13 = var_24_1 - ebp
            
            if (eax_3 == edi)
                arg1, edx = sub_4247b0(&var_20, edx, 1)
                edi = var_18
                eax_3 = var_1c
                ebp = var_20
            
            if (eax_3 != 0)
                edx.b = *(esi_13 + ebp)
                *eax_3 = edx.b
            
            goto label_60e70c
        
        if (eax_3 == edi)
            sub_4247b0(&var_20, edx, 1)
            edi = var_18
            eax_3 = var_1c
            ebp = var_20
        
        if (eax_3 == 0)
            goto label_60e70c
        
        arg1.b = *var_24_1
    label_60e70a:
        *eax_3 = arg1.b
    label_60e70c:
        eax_3 = &eax_3[1]
        var_24_1 += 1
        var_1c = eax_3
    else
        int32_t* eax_12
        eax_12.b = *(var_24_1 + 1)
        var_25 = 0x3a
        int128_t** esi_11 = &var_20
        
        if (eax_12.b == 0x30)
            sub_54e400(&var_25, esi_11)
            var_25 = 0x3a
            sub_54e400(&var_25, &var_20)
            eax_3 = var_1c
            ebp = var_20
            
            if (eax_3 - ebp - 2 s<= 0)
                edi = var_18
                break
            
            void* i_3 = eax_3 - ebp - 2
            void* i
            
            do
                sub_54e400(ebp, &var_20)
                i = i_3
                i_3 -= 1
                ebp = var_20
            while (i != 1)
        label_60e815:
            eax_3 = var_1c
            edi = var_18
            break
        
        if (eax_12.b == 0x31)
            sub_54e400(&var_25, esi_11)
            int128_t** esi_16 = &var_20
            var_25 = 0x3a
            sub_54e400(&var_25, esi_16)
            var_25 = 0x7e
            sub_54e400(&var_25, esi_16)
            eax_3 = var_1c
            ebp = var_20
            
            if (eax_3 - ebp - 3 s<= 0)
                edi = var_18
                break
            
            void* i_4 = eax_3 - ebp - 3
            void* i_1
            
            do
                sub_54e400(ebp, &var_20)
                i_1 = i_4
                i_4 -= 1
                ebp = var_20
            while (i_1 != 1)
            goto label_60e815
        
        char* eax_13 = &var_25
        
        if (eax_12.b == 0x32)
            sub_54e400(eax_13, esi_11)
            int128_t** esi_18 = &var_20
            var_25 = 0x3a
            sub_54e400(&var_25, esi_18)
            var_25 = 0x21
            sub_54e400(&var_25, esi_18)
            eax_3 = var_1c
            ebp = var_20
            
            if (eax_3 - ebp - 3 s<= 0)
                edi = var_18
                break
            
            void* i_5 = eax_3 - ebp - 3
            void* i_2
            
            do
                sub_54e400(ebp, &var_20)
                i_2 = i_5
                i_5 -= 1
                ebp = var_20
            while (i_2 != 1)
            goto label_60e815
        
        var_24_1 += 1
        sub_54e400(eax_13, esi_11)
        var_25 = 0x3a
        sub_54e400(&var_25, esi_11)
        edi = var_18
        eax_3 = var_1c
        ebp = var_20
    
    edx = var_24_1
    arg1.b = *edx

var_25 = 0
char* ecx_21

if (&var_25 u< eax_3 && ebp u<= &var_25)
    void* ebx_5 = &var_25 - ebp
    
    if (eax_3 != edi)
    label_60e87f:
        
        if (eax_3 == 0)
            goto label_60e8dd
        
        ecx_21.b = *(ebx_5 + ebp)
        *eax_3 = ecx_21.b
        goto label_60e8dd
    
    void* ecx_20 = eax_3 - ebp
    
    if (ecx_20 u<= 0xfffffffe)
        void* edx_11 = edi - ebp
        
        if (ecx_20 + 1 u> edx_11)
            uint32_t edx_12 = edx_11 u>> 1
            char* eax_28
            
            if (0xffffffff - edx_12 u>= edx_11)
                eax_28 = edx_11 + edx_12
            else
                eax_28 = nullptr
            
            if (eax_28 u< ecx_20 + 1)
                eax_28 = ecx_20 + 1
            
            sub_424860(&var_20, eax_28)
            eax_3 = var_1c
            ebp = var_20
        
        goto label_60e87f
    
label_60e846:
    sub_6b47bf("vector<T> too long")
    noreturn

if (eax_3 == edi)
    void* ecx_23 = eax_3 - ebp
    
    if (ecx_23 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    void* edx_14 = edi - ebp
    
    if (ecx_23 + 1 u> edx_14)
        uint32_t edx_15 = edx_14 u>> 1
        char* eax_30
        
        if (0xffffffff - edx_15 u>= edx_14)
            eax_30 = edx_14 + edx_15
        else
            eax_30 = nullptr
        
        if (eax_30 u< ecx_23 + 1)
            eax_30 = ecx_23 + 1
        
        sub_424860(&var_20, eax_30)
        eax_3 = var_1c
        ebp = var_20

if (eax_3 == 0)
    goto label_60e8dd

*eax_3 = 0
label_60e8dd:
void* var_1c_2 = &eax_3[1]
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
char* eax_33 = ebp

do
    ecx_21.b = *eax_33
    eax_33 = &eax_33[1]
while (ecx_21.b != 0)

int32_t* result = arg2
sub_401270(result, eax_33 - &eax_33[1], ebp)

if (ebp != 0)
    int128_t* var_44_8 = ebp
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
