// 函数: sub_4c4390
// 地址: 0x4c4390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720561
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_bc
int32_t eax_2 = data_78c474 ^ &var_bc
int32_t __saved_edi
int32_t var_d0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x260) = 0
bool result

if (*(arg1 + 0x1c) == 0)
    result = true
else
    char var_80
    int32_t edx
    sub_401ab0(&var_80, edx, arg1 + 0xc)
    int32_t var_4 = 0
    char var_64
    int32_t* eax_6
    int32_t edx_2
    eax_6, edx_2 = sub_401800(0, arg1 + 0xc, &var_64)
    var_4.b = 1
    void* var_9c
    sub_4b3c20(eax_6, edx_2, &var_80, &var_9c)
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_d4_2 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    var_4.b = 4
    int32_t var_6c
    
    if (var_6c u>= 0x10)
        int32_t var_d4_3 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0
    int32_t var_b8
    int32_t* eax_8 = sub_405c90(&var_b8, &var_9c, ".png")
    var_4.b = 5
    void* esi_1 = *(arg1 + 0x298)
    int32_t ecx_4
    result, ecx_4 = sub_50d0f0(eax_8, esi_1)
    
    if (result == 0)
        result, ecx_4 = sub_4ae840(eax_8, esi_1 + 0x30)
        result = result != 0
    else
        result = true
    
    var_4.b = 4
    int32_t var_a4
    
    if (var_a4 u>= 0x10)
        int32_t var_d4_5 = var_b8
        sub_6b4d5b()
    
    int32_t var_88
    
    if (result != 0)
        int32_t ebx_2 = 1
        
        while (true)
            int32_t var_d4_7 = ebx_2
            sub_4104a0("[%d]")
            var_4.b = 6
            int32_t var_2c
            int32_t* eax_10
            int32_t* ecx_8
            eax_10, ecx_8 = sub_426250(&var_2c, &var_9c, &var_b8)
            int32_t* var_d4_8 = eax_10
            var_4.b = 7
            char var_48
            sub_402c60(&var_48, ".png", ecx_8)
            var_4.b = 8
            void* esi_3 = *(arg1 + 0x298)
            
            if (sub_50d0f0(&var_48, esi_3) == 0)
                result = sub_4ae840(&var_48, esi_3 + 0x30) != 0
            else
                result = true
            
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_d4_10 = var_48.d
                sub_6b4d5b()
            
            var_4.b = 6
            var_34 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_d4_11 = var_2c
                sub_6b4d5b()
            
            if (result == 0)
                break
            
            var_4.b = 4
            
            if (var_a4 u>= 0x10)
                int32_t var_d4_12 = var_b8
                sub_6b4d5b()
            
            ebx_2 += 1
        
        if (var_a4 u>= 0x10)
            int32_t var_d4_13 = var_b8
            sub_6b4d5b()
        
        *(arg1 + 0x260) = ebx_2
        
        if (var_88 u>= 0x10)
            void* var_d4_14 = var_9c
            sub_6b4d5b()
        
        result = true
    else
        *(arg1 + 0x260) = 0
        
        if (var_88 u>= 0x10)
            void* var_d4_6 = var_9c
            sub_6b4d5b()
        
        result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_bc)
return result
