// 函数: sub_6199e0
// 地址: 0x6199e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7192a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_68 = arg3
int32_t var_4 = 0
void* result_2 = arg2 + 0x7c
char var_64
int32_t* var_48
sub_401b60(&var_64, sub_401a00(&var_48, arg2, arg1), &var_48)
var_4.b = 1
int32_t var_54
void* result
int32_t var_50
int32_t var_34

if (var_54 == 0)
label_619b26:
    int32_t* eax_15 = var_68
    
    if (eax_15[4] != 0)
        void* result_1 = sub_61b4d0(result_2, eax_15)
        
        if (var_50 u>= 0x10)
            int32_t var_80_11 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_3 = 0xf
        int32_t var_54_3 = 0
        var_64 = 0
        
        if (var_34 u>= 0x10)
            int32_t* var_80_12 = var_48
            sub_6b4d5b()
        
        result = result_1
    else
        if (var_50 u>= 0x10)
            int32_t var_80_6 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        
        if (var_34 u>= 0x10)
            int32_t* var_80_7 = var_48
            sub_6b4d5b()
        
        result = result_2
else
    while (true)
        void* result_3
        int32_t edx_1
        result_3, edx_1 = sub_61b4d0(result_2, &var_64)
        result_2 = result_3
        
        if (result_2 == 0)
            if (var_50 u>= 0x10)
                int32_t var_80_8 = var_64.d
                sub_6b4d5b()
            
            int32_t var_50_2 = 0xf
            int32_t var_54_2 = 0
            var_64 = 0
            
            if (var_34 u>= 0x10)
                int32_t* var_80_9 = var_48
                sub_6b4d5b()
            
            result = arg2 + 0x7c
            break
        
        int32_t* var_2c
        sub_401a00(&var_2c, edx_1, &var_48)
        int32_t* edx_2 = &var_48
        int32_t var_18
        
        if (&var_48 != &var_2c)
            if (var_34 u>= 0x10)
                int32_t* var_80_2 = var_48
                sub_6b4d5b()
            
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48.b = 0
            void* const var_1c
            
            if (var_18 u>= 0x10)
                edx_2 = var_2c
                var_48 = edx_2
                var_2c = nullptr
            else
                edx_2 = sub_6b49d0(&var_48, &var_2c, var_1c + 1, eax_4)
            
            void* const var_38_2 = var_1c
            var_34 = var_18
            var_18 = 0xf
            var_1c = nullptr
            var_2c.b = 0
        
        if (var_18 u>= 0x10)
            int32_t* var_80_4 = var_2c
            edx_2 = sub_6b4d5b()
        
        var_4.b = 0
        
        if (var_50 u>= 0x10)
            int32_t var_80_5 = var_64.d
            edx_2 = sub_6b4d5b()
        
        sub_401b60(&var_64, edx_2, &var_48)
        var_4.b = 1
        
        if (var_54 == 0)
            goto label_619b26
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
