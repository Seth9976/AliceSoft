// 函数: sub_409180
// 地址: 0x409180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_34 = data_797d2c
int32_t* result

if (arg3 s< 1 || arg1 s< 1)
    int32_t var_4c_1 = arg7
    int32_t var_50_1 = arg6
    int32_t var_54_1 = arg5
    int32_t var_58_1 = arg4
    int32_t var_5c_1 = arg1
    int32_t var_60_1 = arg3
    int32_t var_64_1 = arg2
    char* esi_1 = sub_4104a0("SP_Create\n")
    int32_t var_4 = 0
    void* eax_9 = *(var_34 + 0x38)
    
    if (*(eax_9 + 8) != 0)
        int32_t* eax_12 = (*(**(eax_9 + 8) + 0x10))(0x757fb4)
        
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        (**eax_12)(esi_1)
    else
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        sub_604c90(esi_1)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_4c_4 = var_2c
        sub_6b4d5b()
    
    result.b = 0
else
    result = sub_40b8d0(*(var_34 + 0x30), arg2, arg3, arg1, arg4, arg5, arg6, arg7)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
