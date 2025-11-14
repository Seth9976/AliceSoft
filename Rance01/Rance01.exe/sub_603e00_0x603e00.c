// 函数: sub_603e00
// 地址: 0x603e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg3
struct _EXCEPTION_REGISTRATION_RECORD** result_3 = &edi[7]
int32_t* var_30 = edi
result_1 = result_3

if (result_3 != arg4)
    while (true)
        void* ebx_1 = nullptr
        int32_t var_18_1 = 0xf
        void* var_1c_1 = nullptr
        char var_2c = 0
        
        if (&var_2c != result_3)
            bool cond:1_1 = result_3[5] u>= 0x10
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            
            if (cond:1_1)
                var_2c.d = *result_3
                *result_3 = nullptr
            else
                sub_6b49d0(&var_2c, result_3, &result_3[4]->Next + 1, eax_4)
            
            var_1c_1 = result_3[4]
            var_18_1 = result_3[5]
            result_3[5] = 0xf
            result_3[4] = 0
            *result_3 = nullptr
            ebx_1 = var_1c_1
        
        int32_t var_4 = 0
        void* esi_1 = edi[4]
        int32_t* ecx_2
        
        if (edi[5] u< 0x10)
            ecx_2 = edi
        else
            ecx_2 = *edi
        
        void* eax_7 = ebx_1
        
        if (ebx_1 u>= esi_1)
            eax_7 = esi_1
        
        int32_t* edx_1 = var_2c.d
        
        if (var_18_1 u< 0x10)
            edx_1 = &var_2c
        
        int32_t eax_8
        int32_t ecx_3
        eax_8, ecx_3 = sub_402320(eax_7, edx_1, ecx_2, eax_7)
        bool cond:3_1 = eax_8 s< 0
        
        if (eax_8 == 0)
            if (ebx_1 u>= esi_1)
                eax_8.b = ebx_1 != esi_1
            else
                eax_8 = 0xffffffff
            
            cond:3_1 = eax_8 s< 0
        
        eax_8.b = cond:3_1
        
        if (eax_8.b == 0)
            char* result_5 = result_3
            
            while (true)
                void* esi_3 = *(result_5 - 0xc)
                result_5 -= 0x1c
                char* result_6
                
                if (*(result_5 + 0x14) u< 0x10)
                    result_6 = result_5
                else
                    result_6 = *result_5
                
                void* eax_10 = ebx_1
                
                if (ebx_1 u>= esi_3)
                    eax_10 = esi_3
                
                int32_t* edx_2 = var_2c.d
                
                if (var_18_1 u< 0x10)
                    edx_2 = &var_2c
                
                int32_t eax_11 = sub_402320(eax_10, edx_2, result_6, eax_10)
                bool cond:5_1 = eax_11 s< 0
                
                if (eax_11 == 0)
                    if (ebx_1 u>= esi_3)
                        eax_11.b = ebx_1 != esi_3
                    else
                        eax_11 = 0xffffffff
                    
                    cond:5_1 = eax_11 s< 0
                
                eax_11.b = cond:5_1
                
                if (eax_11.b == 0)
                    break
                
                if (result_3 != result_5)
                    if (result_3[5] u>= 0x10)
                        struct _EXCEPTION_REGISTRATION_RECORD* var_4c_4 = *result_3
                        sub_6b4d5b()
                    
                    result_3[5] = 0xf
                    result_3[4] = 0
                    *result_3 = nullptr
                    
                    if (*(result_5 + 0x14) u>= 0x10)
                        *result_3 = *result_5
                        *result_5 = 0
                    else
                        sub_6b49d0(result_3, result_5, *(result_5 + 0x10) + 1, eax_4)
                    
                    result_3[4] = *(result_5 + 0x10)
                    result_3[5] = *(result_5 + 0x14)
                    *(result_5 + 0x14) = 0xf
                    *(result_5 + 0x10) = 0
                    *result_5 = 0
                    ebx_1 = var_1c_1
                
                result_3 = result_5
            
            if (result_3 != &var_2c)
                if (result_3[5] u>= 0x10)
                    struct _EXCEPTION_REGISTRATION_RECORD* var_4c_6 = *result_3
                    sub_6b4d5b()
                
                result_3[5] = 0xf
                result_3[4] = 0
                *result_3 = nullptr
                
                if (var_18_1 u>= 0x10)
                    *result_3 = var_2c.d
                    var_2c.d = 0
                else
                    sub_6b49d0(result_3, &var_2c, var_1c_1 + 1, eax_4)
                
                result_3[4] = var_1c_1
                result_3[5] = var_18_1
                var_18_1 = 0xf
                int32_t var_1c_3 = 0
                var_2c = 0
        else
            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
            struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result_2
            sub_604480(&result_3[7], result_2, result_3, var_30)
            sub_401ef0(var_30, &var_2c)
        
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_4c_8 = var_2c.d
            sub_6b4d5b()
        
        result = &result_1[7]
        result_1 = result
        
        if (result == arg4)
            break
        
        edi = var_30
        result_3 = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
