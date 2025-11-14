// 函数: sub_691b80
// 地址: 0x691b80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7184c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = arg1
int32_t* var_48
sub_426250(&var_48, arg1 + 0x60, arg1 + 0x7c)
int32_t var_4 = 0
char* result = *(arg1 + 0x70)
int32_t* ecx = &result[0xffffffff]
int32_t var_34

if (ecx s>= 0)
    int32_t* temp0_1
    
    do
        int32_t* edx_1 = var_48
        
        if (var_34 u< 0x10)
            edx_1 = &var_48
        
        if (*(edx_1 + ecx) == 0xa)
            break
        
        temp0_1 = ecx
        ecx -= 1
    while (temp0_1 - 1 s>= 0)

void* ebx_2 = result - ecx
int32_t var_38
bool cond:0 = result != var_38

if (result s< var_38)
    do
        ecx = var_48
        
        if (var_34 u< 0x10)
            ecx = &var_48
        
        if (*(ecx + result) == 0xa)
            break
        
        result = &result[1]
    while (result s< var_38)
    
    cond:0 = result != var_38

if (cond:0)
    void* i
    
    for (i = &result[1]; i s< var_38; i += 1)
        char* ecx_3 = var_48
        
        if (var_34 u< 0x10)
            ecx_3 = &var_48
        
        if (*(ecx_3 + i) == 0xa)
            break
    
    int32_t* ecx_4 = &var_48
    bool cond:2_1
    int32_t var_2c
    int32_t var_18
    
    if (i - result s> ebx_2)
        char* eax_13 = sub_401ec0(ecx_4, &var_2c, 0, result + ebx_2)
        
        if (arg1 + 0x60 != eax_13)
            if (*(arg1 + 0x74) u>= 0x10)
                int32_t var_64_11 = *(arg1 + 0x60)
                sub_6b4d5b()
            
            *(arg1 + 0x74) = 0xf
            *(arg1 + 0x70) = 0
            *(arg1 + 0x60) = 0
            
            if (*(eax_13 + 0x14) u>= 0x10)
                *(arg1 + 0x60) = *eax_13
                *eax_13 = 0
            else
                sub_6b49d0(arg1 + 0x60, eax_13, *(eax_13 + 0x10) + 1, eax_4)
            
            *(arg1 + 0x70) = *(eax_13 + 0x10)
            *(arg1 + 0x74) = *(eax_13 + 0x14)
            *(eax_13 + 0x14) = 0xf
            *(eax_13 + 0x10) = 0
            *eax_13 = 0
        
        var_4.b = 0
        
        if (var_18 u>= 0x10)
            int32_t var_64_13 = var_2c
            sub_6b4d5b()
        
        void* ebx_3 = var_4c
        int32_t eax_18 = *(ebx_3 + 0x70)
        char* eax_19 = sub_401ec0(&var_48, &var_2c, eax_18, var_38 - eax_18)
        
        if (arg1 + 0x7c != eax_19)
            if (*(arg1 + 0x90) u>= 0x10)
                int32_t var_64_15 = *(arg1 + 0x7c)
                sub_6b4d5b()
            
            *(arg1 + 0x90) = 0xf
            *(arg1 + 0x8c) = 0
            *(arg1 + 0x7c) = 0
            
            if (*(eax_19 + 0x14) u>= 0x10)
                *(arg1 + 0x7c) = *eax_19
                *eax_19 = 0
            else
                sub_6b49d0(arg1 + 0x7c, eax_19, *(eax_19 + 0x10) + 1, eax_4)
            
            *(arg1 + 0x8c) = *(eax_19 + 0x10)
            *(arg1 + 0x90) = *(eax_19 + 0x14)
            *(eax_19 + 0x14) = 0xf
            *(eax_19 + 0x10) = 0
            *eax_19 = 0
        
        var_4.b = 0
        
        if (var_18 u>= 0x10)
            int32_t var_64_17 = var_2c
            sub_6b4d5b()
        
        void* esi_11 = *(ebx_3 + 0x70)
        result = esi_11 - 1
        
        if (result s< 0)
        label_691eda:
            result = nullptr
        else
            while (true)
                char* ecx_15
                
                if (*(arg1 + 0x74) u< 0x10)
                    ecx_15 = arg1 + 0x60
                else
                    ecx_15 = *(arg1 + 0x60)
                
                if (*(ecx_15 + result) == 0xa)
                    break
                
                char* result_3 = result
                result -= 1
                
                if (result_3 - 1 s< 0)
                    goto label_691eda_1
            
            if (result s< 0)
            label_691eda_1:
                result = nullptr
        
        if (result s< esi_11)
            int32_t edx_15 = *(arg1 + 0x74)
            
            do
                char* ecx_16
                
                if (edx_15 u< 0x10)
                    ecx_16 = arg1 + 0x60
                else
                    ecx_16 = *(arg1 + 0x60)
                
                char* ecx_17
                
                if (*(ecx_16 + result) u>= 0x81)
                    if (edx_15 u< 0x10)
                        ecx_17 = arg1 + 0x60
                    else
                        ecx_17 = *(arg1 + 0x60)
                
                if (*(ecx_16 + result) u>= 0x81 && *(ecx_17 + result) u<= 0x9f)
                label_691f1a:
                    result = &result[1]
                    
                    if (esi_11 s<= result)
                        int32_t* eax_25
                        
                        if (*(arg1 + 0x90) u< 0x10)
                            eax_25 = arg1 + 0x7c
                        else
                            eax_25 = *(arg1 + 0x7c)
                        
                        ecx_17.b = *eax_25
                        var_4c.b = ecx_17.b
                        sub_401f60(arg1 + 0x60, var_4c.b)
                        result = sub_401ec0(arg1 + 0x7c, &var_2c, 1, *(ebx_3 + 0x8c) - 1)
                        char* result_2 = result
                        
                        if (arg1 + 0x7c != result_2)
                            if (*(arg1 + 0x90) u>= 0x10)
                                int32_t var_64_20 = *(arg1 + 0x7c)
                                sub_6b4d5b()
                            
                            *(arg1 + 0x90) = 0xf
                            *(arg1 + 0x8c) = 0
                            *(arg1 + 0x7c) = 0
                            
                            if (*(result_2 + 0x14) u>= 0x10)
                                *(arg1 + 0x7c) = *result_2
                                *result_2 = 0
                            else
                                sub_6b49d0(arg1 + 0x7c, result_2, *(result_2 + 0x10) + 1, eax_4)
                            
                            result = *(result_2 + 0x10)
                            *(arg1 + 0x8c) = result
                            *(arg1 + 0x90) = *(result_2 + 0x14)
                            *(result_2 + 0x14) = 0xf
                            *(result_2 + 0x10) = 0
                            *result_2 = 0
                        
                        if (var_18 u>= 0x10)
                            int32_t var_64_22 = var_2c
                            result = sub_6b4d5b()
                        
                        break
                else
                    if (edx_15 u< 0x10)
                        ecx_17 = arg1 + 0x60
                    else
                        ecx_17 = *(arg1 + 0x60)
                    
                    if (*(ecx_17 + result) u>= 0xe0)
                        goto label_691f1a
                
                result = &result[1]
            while (result s< esi_11)
        
        cond:2_1 = var_34 u< 0x10
    else
        char* eax_5 = sub_401ec0(ecx_4, &var_2c, 0, i)
        
        if (arg1 + 0x60 != eax_5)
            if (*(arg1 + 0x74) u>= 0x10)
                int32_t var_64_3 = *(arg1 + 0x60)
                sub_6b4d5b()
            
            *(arg1 + 0x74) = 0xf
            *(arg1 + 0x70) = 0
            *(arg1 + 0x60) = 0
            
            if (*(eax_5 + 0x14) u>= 0x10)
                *(arg1 + 0x60) = *eax_5
                *eax_5 = 0
            else
                sub_6b49d0(arg1 + 0x60, eax_5, *(eax_5 + 0x10) + 1, eax_4)
            
            *(arg1 + 0x70) = *(eax_5 + 0x10)
            *(arg1 + 0x74) = *(eax_5 + 0x14)
            *(eax_5 + 0x14) = 0xf
            *(eax_5 + 0x10) = 0
            *eax_5 = 0
        
        var_4.b = 0
        
        if (var_18 u>= 0x10)
            int32_t var_64_5 = var_2c
            sub_6b4d5b()
        
        int32_t eax_11 = *(var_4c + 0x70)
        result = sub_401ec0(&var_48, &var_2c, eax_11, var_38 - eax_11)
        char* result_1 = result
        
        if (arg1 + 0x7c != result_1)
            if (*(arg1 + 0x90) u>= 0x10)
                int32_t var_64_7 = *(arg1 + 0x7c)
                sub_6b4d5b()
            
            *(arg1 + 0x90) = 0xf
            *(arg1 + 0x8c) = 0
            *(arg1 + 0x7c) = 0
            
            if (*(result_1 + 0x14) u>= 0x10)
                *(arg1 + 0x7c) = *result_1
                *result_1 = 0
            else
                sub_6b49d0(arg1 + 0x7c, result_1, *(result_1 + 0x10) + 1, eax_4)
            
            result = *(result_1 + 0x10)
            *(arg1 + 0x8c) = result
            *(arg1 + 0x90) = *(result_1 + 0x14)
            *(result_1 + 0x14) = 0xf
            *(result_1 + 0x10) = 0
            *result_1 = 0
        
        if (var_18 u>= 0x10)
            int32_t var_64_9 = var_2c
            result = sub_6b4d5b()
        
        cond:2_1 = var_34 u< 0x10
    
    if (not(cond:2_1))
        int32_t* var_64_23 = var_48
        result = sub_6b4d5b()
else if (var_34 u>= 0x10)
    int32_t* var_64_1 = var_48
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
