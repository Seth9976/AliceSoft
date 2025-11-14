// 函数: sub_406cf0
// 地址: 0x406cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e7c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 0xc)
int32_t* var_30 = arg2
sub_42e070(esi + 0x294, &var_34, &var_30)
int32_t result

if (var_34 == *(esi + 0x298))
label_406d89:
    
    if (*(arg1 + 0x10) != 0)
        int32_t* var_48_2 = arg2
        char* esi_2 = sub_4104a0(0x757f74)
        int32_t var_4 = 0
        void* eax_11 = *(arg1 + 0x10)
        
        if (*(eax_11 + 8) != 0)
            int32_t* eax_13 = (*(**(eax_11 + 8) + 0x10))(0x757fb4)
            
            if (*(esi_2 + 0x14) u>= 0x10)
                esi_2 = *esi_2
            
            (**eax_13)(esi_2)
        else
            if (*(esi_2 + 0x14) u>= 0x10)
                esi_2 = *esi_2
            
            sub_604c90(esi_2)
        
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_2c
            int32_t var_48_5 = var_2c
            sub_6b4d5b()
    
    result = 0
else
    var_34 = arg2
    sub_42e070(esi + 0x294, &var_30, &var_34)
    int32_t* eax_8 = var_30
    
    if (eax_8 == *(esi + 0x298))
        goto label_406d89
    
    void* eax_9 = eax_8[4]
    
    if (eax_9 == 0)
        goto label_406d89
    
    result = *(eax_9 + 0xcc)
    
    if (result == 0)
        goto label_406d89

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
