// 函数: sub_4cb8a0
// 地址: 0x4cb8a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_401270(&var_2c, 4, "LITP")
int32_t var_4 = 0
char* ecx = var_2c.d
char* edx = ecx

if (var_18 u< 0x10)
    edx = &var_2c
    ecx = &var_2c

int32_t var_34
int32_t var_50 = var_34
sub_4102d0(arg2 + 4, *(arg2 + 8), ecx, var_1c + edx)
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_50_1 = var_2c.d
    sub_6b4d5b()

uint8_t var_35 = 0
sub_54e400(&var_35, arg2 + 4)
var_35 = 0
sub_54e400(&var_35, arg2 + 4)
var_35 = 0
sub_54e400(&var_35, arg2 + 4)
var_35 = 0
sub_54e400(&var_35, arg2 + 4)
void* result

if (((*(arg1 + 0x10) - *(arg1 + 0xc)) & 0xfffffffc) == 0xa4)
    void* result_1 = nullptr
    
    while (true)
        int32_t eax_12 = *(arg2 + 8)
        float var_30_1 = fconvert.s(fconvert.t(*(*(arg1 + 0xc) + (result_1 << 2))))
        var_35 = var_30_1.b
        int32_t edx_2
        
        if (&var_35 u< eax_12)
            edx_2 = *(arg2 + 4)
        
        if (&var_35 u>= eax_12 || edx_2 u> &var_35)
            int32_t ecx_7 = *(arg2 + 0xc)
            
            if (eax_12 != ecx_7)
            label_4cba6c:
                char* eax_18 = *(arg2 + 8)
                
                if (eax_18 != 0)
                    *eax_18 = var_30_1.b
                
            label_4cba75:
                *(arg2 + 8) += 1
                int32_t eax_19 = *(arg2 + 8)
                uint8_t ebx_2 = (var_30_1 u>> 8).b
                var_35 = ebx_2
                int32_t edx_9
                
                if (&var_35 u< eax_19)
                    edx_9 = *(arg2 + 4)
                
                if (&var_35 u>= eax_19 || edx_9 u> &var_35)
                    int32_t ecx_12 = *(arg2 + 0xc)
                    
                    if (eax_19 != ecx_12)
                    label_4cbb1c:
                        uint8_t* eax_25 = *(arg2 + 8)
                        
                        if (eax_25 != 0)
                            *eax_25 = ebx_2
                        
                    label_4cbb25:
                        *(arg2 + 8) += 1
                        int32_t eax_26 = *(arg2 + 8)
                        uint8_t ebx_5 = (var_30_1 u>> 0x10).b
                        var_35 = ebx_5
                        int32_t edx_16
                        
                        if (&var_35 u< eax_26)
                            edx_16 = *(arg2 + 4)
                        
                        if (&var_35 u>= eax_26 || edx_16 u> &var_35)
                            int32_t ecx_17 = *(arg2 + 0xc)
                            
                            if (eax_26 != ecx_17)
                            label_4cbbd0:
                                uint8_t* eax_32 = *(arg2 + 8)
                                
                                if (eax_32 != 0)
                                    *eax_32 = ebx_5
                                
                            label_4cbbd9:
                                *(arg2 + 8) += 1
                                int32_t eax_33 = *(arg2 + 8)
                                uint8_t ebx_8 = (var_30_1 u>> 0x18).b
                                var_35 = ebx_8
                                int32_t edx_23
                                
                                if (&var_35 u< eax_33)
                                    edx_23 = *(arg2 + 4)
                                
                                if (&var_35 u>= eax_33 || edx_23 u> &var_35)
                                    int32_t ecx_22 = *(arg2 + 0xc)
                                    
                                    if (eax_33 != ecx_22)
                                    label_4cbc7e:
                                        uint8_t* eax_39 = *(arg2 + 8)
                                        
                                        if (eax_39 != 0)
                                            *eax_39 = ebx_8
                                        
                                    label_4cbc8b:
                                        *(arg2 + 8) += 1
                                        result = result_1 + 1
                                        result_1 = result
                                        
                                        if (result s>= 0x29)
                                            break
                                        
                                        continue
                                    else
                                        int32_t edx_27 = *(arg2 + 4)
                                        int32_t eax_37 = eax_33 - edx_27
                                        
                                        if (eax_37 u<= 0xfffffffe)
                                            int32_t ecx_23 = ecx_22 - edx_27
                                            
                                            if (eax_37 + 1 u> ecx_23)
                                                uint32_t edx_29 = ecx_23 u>> 1
                                                uint32_t ecx_24
                                                
                                                if (0xffffffff - edx_29 u>= ecx_23)
                                                    ecx_24 = ecx_23 + edx_29
                                                else
                                                    ecx_24 = 0
                                                
                                                if (ecx_24 u< eax_37 + 1)
                                                    ecx_24 = eax_37 + 1
                                                
                                                sub_424860(arg2 + 4, ecx_24)
                                            
                                            goto label_4cbc7e
                                else
                                    int32_t ecx_20 = *(arg2 + 0xc)
                                    
                                    if (eax_33 != ecx_20)
                                    label_4cbc38:
                                        char* eax_36 = *(arg2 + 8)
                                        
                                        if (eax_36 != 0)
                                            ecx_20.b = *(&var_35 - edx_23 + *(arg2 + 4))
                                            *eax_36 = ecx_20.b
                                        
                                        goto label_4cbc8b
                                    
                                    int32_t eax_34 = eax_33 - edx_23
                                    
                                    if (eax_34 u<= 0xfffffffe)
                                        ecx_20 -= edx_23
                                        
                                        if (eax_34 + 1 u> ecx_20)
                                            uint32_t edx_25 = ecx_20 u>> 1
                                            uint32_t ecx_21
                                            
                                            if (0xffffffff - edx_25 u>= ecx_20)
                                                ecx_21 = ecx_20 + edx_25
                                            else
                                                ecx_21 = 0
                                            
                                            if (ecx_21 u< eax_34 + 1)
                                                ecx_21 = eax_34 + 1
                                            
                                            sub_424860(arg2 + 4, ecx_21)
                                        
                                        goto label_4cbc38
                            else
                                int32_t edx_20 = *(arg2 + 4)
                                int32_t eax_30 = eax_26 - edx_20
                                
                                if (eax_30 u<= 0xfffffffe)
                                    int32_t ecx_18 = ecx_17 - edx_20
                                    
                                    if (eax_30 + 1 u> ecx_18)
                                        uint32_t edx_22 = ecx_18 u>> 1
                                        uint32_t ecx_19
                                        
                                        if (0xffffffff - edx_22 u>= ecx_18)
                                            ecx_19 = ecx_18 + edx_22
                                        else
                                            ecx_19 = 0
                                        
                                        if (ecx_19 u< eax_30 + 1)
                                            ecx_19 = eax_30 + 1
                                        
                                        sub_424860(arg2 + 4, ecx_19)
                                    
                                    goto label_4cbbd0
                        else
                            int32_t ecx_15 = *(arg2 + 0xc)
                            
                            if (eax_26 != ecx_15)
                            label_4cbb85:
                                char* eax_29 = *(arg2 + 8)
                                
                                if (eax_29 != 0)
                                    ecx_15.b = *(&var_35 - edx_16 + *(arg2 + 4))
                                    *eax_29 = ecx_15.b
                                
                                goto label_4cbbd9
                            
                            int32_t eax_27 = eax_26 - edx_16
                            
                            if (eax_27 u<= 0xfffffffe)
                                ecx_15 -= edx_16
                                
                                if (eax_27 + 1 u> ecx_15)
                                    uint32_t edx_18 = ecx_15 u>> 1
                                    uint32_t ecx_16
                                    
                                    if (0xffffffff - edx_18 u>= ecx_15)
                                        ecx_16 = ecx_15 + edx_18
                                    else
                                        ecx_16 = 0
                                    
                                    if (ecx_16 u< eax_27 + 1)
                                        ecx_16 = eax_27 + 1
                                    
                                    sub_424860(arg2 + 4, ecx_16)
                                
                                goto label_4cbb85
                    else
                        int32_t edx_13 = *(arg2 + 4)
                        int32_t eax_23 = eax_19 - edx_13
                        
                        if (eax_23 u<= 0xfffffffe)
                            int32_t ecx_13 = ecx_12 - edx_13
                            
                            if (eax_23 + 1 u> ecx_13)
                                uint32_t edx_15 = ecx_13 u>> 1
                                uint32_t ecx_14
                                
                                if (0xffffffff - edx_15 u>= ecx_13)
                                    ecx_14 = ecx_13 + edx_15
                                else
                                    ecx_14 = 0
                                
                                if (ecx_14 u< eax_23 + 1)
                                    ecx_14 = eax_23 + 1
                                
                                sub_424860(arg2 + 4, ecx_14)
                            
                            goto label_4cbb1c
                else
                    int32_t ecx_10 = *(arg2 + 0xc)
                    
                    if (eax_19 != ecx_10)
                    label_4cbad1:
                        char* eax_22 = *(arg2 + 8)
                        
                        if (eax_22 != 0)
                            ecx_10.b = *(&var_35 - edx_9 + *(arg2 + 4))
                            *eax_22 = ecx_10.b
                        
                        goto label_4cbb25
                    
                    int32_t eax_20 = eax_19 - edx_9
                    
                    if (eax_20 u<= 0xfffffffe)
                        ecx_10 -= edx_9
                        
                        if (eax_20 + 1 u> ecx_10)
                            uint32_t edx_11 = ecx_10 u>> 1
                            uint32_t ecx_11
                            
                            if (0xffffffff - edx_11 u>= ecx_10)
                                ecx_11 = ecx_10 + edx_11
                            else
                                ecx_11 = 0
                            
                            if (ecx_11 u< eax_20 + 1)
                                ecx_11 = eax_20 + 1
                            
                            sub_424860(arg2 + 4, ecx_11)
                        
                        goto label_4cbad1
            else
                int32_t edx_6 = *(arg2 + 4)
                int32_t eax_16 = eax_12 - edx_6
                
                if (eax_16 u<= 0xfffffffe)
                    int32_t ecx_8 = ecx_7 - edx_6
                    
                    if (eax_16 + 1 u> ecx_8)
                        uint32_t edx_8 = ecx_8 u>> 1
                        uint32_t ecx_9
                        
                        if (0xffffffff - edx_8 u>= ecx_8)
                            ecx_9 = ecx_8 + edx_8
                        else
                            ecx_9 = 0
                        
                        if (ecx_9 u< eax_16 + 1)
                            ecx_9 = eax_16 + 1
                        
                        sub_424860(arg2 + 4, ecx_9)
                    
                    goto label_4cba6c
        else
            int32_t ecx_5 = *(arg2 + 0xc)
            
            if (eax_12 != ecx_5)
            label_4cba15:
                char* eax_15 = *(arg2 + 8)
                
                if (eax_15 != 0)
                    ecx_5.b = *(&var_35 - edx_2 + *(arg2 + 4))
                    *eax_15 = ecx_5.b
                
                goto label_4cba75
            
            int32_t eax_13 = eax_12 - edx_2
            
            if (eax_13 u<= 0xfffffffe)
                ecx_5 -= edx_2
                
                if (eax_13 + 1 u> ecx_5)
                    uint32_t edx_4 = ecx_5 u>> 1
                    uint32_t ecx_6
                    
                    if (0xffffffff - edx_4 u>= ecx_5)
                        ecx_6 = ecx_5 + edx_4
                    else
                        ecx_6 = 0
                    
                    if (ecx_6 u< eax_13 + 1)
                        ecx_6 = eax_13 + 1
                    
                    sub_424860(arg2 + 4, ecx_6)
                
                goto label_4cba15
        
        sub_6b47bf("vector<T> too long")
        noreturn
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
