// 函数: sub_6916a0
// 地址: 0x6916a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718530
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *(arg1 + 0x70)
void* esi = &result[0xffffffff]
var_68 = arg1

if (esi s>= 0)
    void* temp1_1
    
    do
        char* ecx
        
        if (*(arg1 + 0x74) u< 0x10)
            ecx = arg1 + 0x60
        else
            ecx = *(arg1 + 0x60)
        
        if (*(ecx + esi) == 0xa)
            break
        
        temp1_1 = esi
        esi -= 1
    while (temp1_1 - 1 s>= 0)

if (esi != 0xffffffff)
    void* eax_5 = result - esi
    void* esi_1 = esi - 1
    
    if (esi - 1 s>= 0)
        void* temp2_1
        
        do
            void* eax_6
            
            if (*(arg1 + 0x74) u< 0x10)
                eax_6 = arg1 + 0x60
            else
                eax_6 = *(arg1 + 0x60)
            
            if (*(eax_6 + esi_1) == 0xa)
                break
            
            temp2_1 = esi_1
            esi_1 -= 1
        while (temp2_1 - 1 s>= 0)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_401180(&var_48, 0xffffffff, arg1 + 0x60, 0)
    int32_t var_4 = 0
    char* ecx_2 = &var_48
    int32_t var_64
    int32_t var_50
    int32_t var_2c
    int32_t var_18
    
    if (esi - esi_1 s> eax_5)
        char* eax_17 = sub_401ec0(ecx_2, &var_2c, 0, eax_5 + esi_1)
        
        if (arg1 + 0x60 != eax_17)
            if (*(arg1 + 0x74) u>= 0x10)
                int32_t var_80_13 = *(arg1 + 0x60)
                sub_6b4d5b()
            
            *(arg1 + 0x74) = 0xf
            *(arg1 + 0x70) = 0
            *(arg1 + 0x60) = 0
            
            if (*(eax_17 + 0x14) u>= 0x10)
                *(arg1 + 0x60) = *eax_17
                *eax_17 = 0
            else
                sub_6b49d0(arg1 + 0x60, eax_17, *(eax_17 + 0x10) + 1, eax_4)
            
            *(arg1 + 0x70) = *(eax_17 + 0x10)
            *(arg1 + 0x74) = *(eax_17 + 0x14)
            *(eax_17 + 0x14) = 0xf
            *(eax_17 + 0x10) = 0
            *eax_17 = 0
        
        var_4.b = 0
        
        if (var_18 u>= 0x10)
            int32_t var_80_15 = var_2c
            sub_6b4d5b()
        
        void* ebx_3 = var_68
        int32_t eax_23 = *(ebx_3 + 0x70)
        var_4.b = 5
        char* eax_26 = sub_4c1d70(ebx_3 + 0x7c, &var_64, 
            sub_401ec0(&var_48, &var_2c, eax_23, var_38_1 - eax_23), &var_64)
        
        if (ebx_3 + 0x7c != eax_26)
            if (*(ebx_3 + 0x90) u>= 0x10)
                char* var_80_18 = *(ebx_3 + 0x7c)
                sub_6b4d5b()
            
            *(ebx_3 + 0x90) = 0xf
            *(ebx_3 + 0x8c) = 0
            *(ebx_3 + 0x7c) = nullptr
            
            if (*(eax_26 + 0x14) u>= 0x10)
                *(ebx_3 + 0x7c) = *eax_26
                *eax_26 = 0
            else
                sub_6b49d0(ebx_3 + 0x7c, eax_26, *(eax_26 + 0x10) + 1, eax_4)
            
            *(ebx_3 + 0x8c) = *(eax_26 + 0x10)
            *(ebx_3 + 0x90) = *(eax_26 + 0x14)
            *(eax_26 + 0x14) = 0xf
            *(eax_26 + 0x10) = 0
            *eax_26 = 0
        
        if (var_50 u>= 0x10)
            int32_t var_80_20 = var_64
            sub_6b4d5b()
        
        var_4.b = 0
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64.b = 0
        
        if (var_18 u>= 0x10)
            int32_t var_80_21 = var_2c
            sub_6b4d5b()
        
        void* esi_11 = *(ebx_3 + 0x70)
        result = esi_11 - 1
        
        if (result s< 0)
        label_691a4c:
            result = nullptr
        else
            while (true)
                char* ecx_17
                
                if (*(arg1 + 0x74) u< 0x10)
                    ecx_17 = arg1 + 0x60
                else
                    ecx_17 = *(arg1 + 0x60)
                
                if (*(ecx_17 + result) == 0xa)
                    break
                
                char* result_3 = result
                result -= 1
                
                if (result_3 - 1 s< 0)
                    goto label_691a4c_1
            
            if (result s< 0)
            label_691a4c_1:
                result = nullptr
        
        if (result s< esi_11)
            int32_t edx_14 = *(arg1 + 0x74)
            
            do
                int32_t* ecx_18
                
                if (edx_14 u< 0x10)
                    ecx_18 = arg1 + 0x60
                else
                    ecx_18 = *(arg1 + 0x60)
                
                int32_t* ecx_19
                
                if (*(ecx_18 + result) u>= 0x81)
                    if (edx_14 u< 0x10)
                        ecx_19 = arg1 + 0x60
                    else
                        ecx_19 = *(arg1 + 0x60)
                
                int32_t* ecx_20
                
                if (*(ecx_18 + result) u< 0x81 || *(ecx_19 + result) u> 0x9f)
                    if (edx_14 u< 0x10)
                        ecx_20 = arg1 + 0x60
                    else
                        ecx_20 = *(arg1 + 0x60)
                
                if ((*(ecx_18 + result) u>= 0x81 && *(ecx_19 + result) u<= 0x9f)
                        || *(ecx_20 + result) u>= 0xe0)
                    result = &result[1]
                    
                    if (esi_11 s<= result)
                        char* eax_32
                        
                        if (*(ebx_3 + 0x90) u< 0x10)
                            eax_32 = ebx_3 + 0x7c
                        else
                            eax_32 = *(ebx_3 + 0x7c)
                        
                        edx_14.b = *eax_32
                        var_68.b = edx_14.b
                        sub_401f60(arg1 + 0x60, var_68.b)
                        result = sub_401ec0(ebx_3 + 0x7c, &var_2c, 1, *(ebx_3 + 0x8c) - 1)
                        char* result_1 = result
                        
                        if (ebx_3 + 0x7c != result_1)
                            if (*(ebx_3 + 0x90) u>= 0x10)
                                char* var_80_24 = *(ebx_3 + 0x7c)
                                sub_6b4d5b()
                            
                            *(ebx_3 + 0x90) = 0xf
                            *(ebx_3 + 0x8c) = 0
                            *(ebx_3 + 0x7c) = nullptr
                            
                            if (*(result_1 + 0x14) u>= 0x10)
                                result = *result_1
                                *(ebx_3 + 0x7c) = result
                                *result_1 = 0
                            else
                                result = sub_6b49d0(ebx_3 + 0x7c, result_1, *(result_1 + 0x10) + 1, 
                                    eax_4)
                            
                            *(ebx_3 + 0x8c) = *(result_1 + 0x10)
                            *(ebx_3 + 0x90) = *(result_1 + 0x14)
                            *(result_1 + 0x14) = 0xf
                            *(result_1 + 0x10) = 0
                            *result_1 = 0
                        
                        if (var_18 u>= 0x10)
                            int32_t var_80_26 = var_2c
                            result = sub_6b4d5b()
                        
                        break
                
                result = &result[1]
            while (result s< esi_11)
        
        if (var_34_1 u>= 0x10)
            int32_t var_80_27 = var_48.d
            result = sub_6b4d5b()
    else
        char* eax_9 = sub_401ec0(ecx_2, &var_64, 0, esi)
        
        if (arg1 + 0x60 != eax_9)
            if (*(arg1 + 0x74) u>= 0x10)
                int32_t var_80_2 = *(arg1 + 0x60)
                sub_6b4d5b()
            
            *(arg1 + 0x74) = 0xf
            *(arg1 + 0x70) = 0
            *(arg1 + 0x60) = 0
            
            if (*(eax_9 + 0x14) u>= 0x10)
                *(arg1 + 0x60) = *eax_9
                *eax_9 = 0
            else
                sub_6b49d0(arg1 + 0x60, eax_9, *(eax_9 + 0x10) + 1, eax_4)
            
            *(arg1 + 0x70) = *(eax_9 + 0x10)
            *(arg1 + 0x74) = *(eax_9 + 0x14)
            *(eax_9 + 0x14) = 0xf
            *(eax_9 + 0x10) = 0
            *eax_9 = 0
        
        var_4.b = 0
        
        if (var_50 u>= 0x10)
            int32_t var_80_4 = var_64
            sub_6b4d5b()
        
        char* eax_14
        int32_t edx_5
        eax_14, edx_5 = sub_401ec0(&var_48, &var_2c, esi, var_38_1 - esi)
        void* esi_6 = var_68 + 0x7c
        var_4.b = 2
        result = sub_4c1d70(esi_6, edx_5, eax_14, &var_64)
        char* result_2 = result
        
        if (esi_6 != result_2)
            if (*(esi_6 + 0x14) u>= 0x10)
                int32_t var_80_7 = *esi_6
                sub_6b4d5b()
            
            *(esi_6 + 0x14) = 0xf
            *(esi_6 + 0x10) = 0
            *esi_6 = 0
            
            if (*(result_2 + 0x14) u>= 0x10)
                result = *result_2
                *esi_6 = result
                *result_2 = 0
            else
                result = sub_6b49d0(esi_6, result_2, *(result_2 + 0x10) + 1, eax_4)
            
            *(esi_6 + 0x10) = *(result_2 + 0x10)
            *(esi_6 + 0x14) = *(result_2 + 0x14)
            *(result_2 + 0x14) = 0xf
            *(result_2 + 0x10) = 0
            *result_2 = 0
        
        if (var_50 u>= 0x10)
            int32_t var_80_9 = var_64
            result = sub_6b4d5b()
        
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64.b = 0
        
        if (var_18 u>= 0x10)
            int32_t var_80_10 = var_2c
            result = sub_6b4d5b()
        
        if (var_34_1 u>= 0x10)
            int32_t var_80_11 = var_48.d
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
