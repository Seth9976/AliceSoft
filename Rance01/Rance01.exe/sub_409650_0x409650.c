// 函数: sub_409650
// 地址: 0x409650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_797d2c
enum MESSAGEBOX_RESULT result

if (arg2 s< 1 || arg1 u> 0xff)
    int32_t* var_3c_1 = arg1
    int32_t var_40_1 = arg2
    char* esi_1 = sub_4104a0("SP_SetBlendRate\nnSP=%d\nnBlendRate=%d")
    int32_t var_4 = 0
    void* eax_8 = *(edi + 0x38)
    
    if (*(eax_8 + 8) != 0)
        int32_t* eax_11 = (*(**(eax_8 + 8) + 0x10))(0x757fb4)
        
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        (**eax_11)(esi_1)
    else
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        sub_604c90(esi_1)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_3c_4 = var_2c
        sub_6b4d5b()
    
    result.b = 0
else
    int32_t var_3c = arg2
    int32_t edx
    result = sub_40c350(*(edi + 0x30) + 0x274, edx, arg1)
    
    if (result == 0)
        result.b = 0
    else
        if (*(result + 0x1c) != arg1)
            *(result + 0x1c) = arg1
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
