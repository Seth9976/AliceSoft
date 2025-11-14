// 函数: sub_409090
// 地址: 0x409090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_5 = arg2
void* edi = data_797d2c
enum MESSAGEBOX_RESULT result

if (arg1 s>= 1)
    result = sub_40b310(eax_5, *(edi + 0x30), arg1)
else
    if (eax_5[5] u>= 0x10)
        eax_5 = *eax_5
    
    void** var_40 = eax_5
    int32_t* var_44 = arg1
    char* esi_1 = sub_4104a0("nSP_SetCG\nnSP=%d\nnCG=%s\n")
    int32_t var_4 = 0
    void* eax_7 = *(edi + 0x38)
    
    if (*(eax_7 + 8) != 0)
        int32_t* eax_10 = (*(**(eax_7 + 8) + 0x10))(0x757fb4)
        
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        (**eax_10)(esi_1)
    else
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        sub_604c90(esi_1)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_40_3 = var_2c
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
