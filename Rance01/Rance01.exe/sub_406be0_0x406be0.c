// 函数: sub_406be0
// 地址: 0x406be0
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
int32_t var_30 = arg2
int32_t edx = sub_42e070(esi + 0x294, &var_34, &var_30)
int32_t* result

if (var_34 == *(esi + 0x298))
label_406c53:
    
    if (*(arg1 + 0x10) != 0)
        int32_t var_48_1 = arg2
        char* esi_1 = sub_4104a0(0x757f34)
        int32_t var_4 = 0
        void* ebx_1 = *(arg1 + 0x10)
        
        if (*(ebx_1 + 8) != 0)
            int32_t* eax_10 = (*(**(ebx_1 + 8) + 0x10))(0x757fb4)
            
            if (*(esi_1 + 0x14) u>= 0x10)
                esi_1 = *esi_1
            
            (**eax_10)(esi_1)
        else
            if (*(esi_1 + 0x14) u>= 0x10)
                esi_1 = *esi_1
            
            sub_604c90(esi_1)
        
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_2c
            int32_t var_48_4 = var_2c
            sub_6b4d5b()
    
    result = nullptr
else
    result = sub_40c3c0(arg2, edx, esi + 0x274)
    
    if (result == 0)
        goto label_406c53

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
