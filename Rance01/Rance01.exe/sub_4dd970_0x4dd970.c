// 函数: sub_4dd970
// 地址: 0x4dd970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7226f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t edi
int32_t var_50 = edi
int32_t var_54 = data_78c474 ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_30
sub_4e9390(arg2 + 0xc, &var_30, *(arg2 + 0xc), *(arg2 + 0x10))
int32_t var_3c = arg1
int32_t var_38 = arg1
int32_t var_34 = arg1 + arg3

while (true)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_4 = 0
    
    if (sub_51b970(&var_2c, &var_40) == 0)
        char result
        
        if (var_40 != 1)
            sub_4e4340(0x754dbc)
            
            if (var_18_1 u< 0x10)
                goto label_4ddb02
            
            int32_t var_58_6 = var_2c.d
        label_4ddafa:
            sub_6b4d5b()
        label_4ddb02:
            result = 0
        else
            if (var_18_1 u>= 0x10)
                int32_t var_58_5 = var_2c.d
                sub_6b4d5b()
            
            *(arg2 + 8) += 1
            result = 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_6b4885(eax_2 ^ &var_40)
        return result
    
    int32_t eax_6 = var_1c_1
    
    if (var_1c_1 u>= 0xc)
        eax_6 = 0xc
    
    char* ebx_1 = var_2c.d
    char* edx_1 = ebx_1
    
    if (var_18_1 u< 0x10)
        edx_1 = &var_2c
    
    if (sub_402320(eax_6, edx_1, 0x754dd0, eax_6) != 0 || var_1c_1 u< 0xc)
    label_4ddad5:
        char* eax_11 = ebx_1
        
        if (var_18_1 u< 0x10)
            eax_11 = &var_2c
        
        char* var_58_8 = eax_11
        sub_4e4340(0x754e08)
        
        if (var_18_1 u< 0x10)
            goto label_4ddb02
        
        int32_t var_58_9 = var_2c.d
        goto label_4ddafa
    
    int32_t eax_7
    eax_7.b = var_1c_1 != 0xc
    
    if (eax_7 != 0)
        goto label_4ddad5
    
    char eax_8 = sub_4ddb30(arg2, &var_3c)
    int16_t top = top - 1
    unimplemented  {call 0x4ddb30}
    
    if (eax_8 == 0)
        sub_4e4340(0x754de0)
        
        if (var_18_1 u< 0x10)
            goto label_4ddb02
        
        int32_t var_58_7 = var_2c.d
        goto label_4ddafa
    
    if (var_18_1 u>= 0x10)
        int32_t var_58_4 = var_2c.d
        sub_6b4d5b()
