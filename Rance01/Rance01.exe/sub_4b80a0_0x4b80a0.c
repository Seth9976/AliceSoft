// 函数: sub_4b80a0
// 地址: 0x4b80a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg2

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *arg2 = 0

int32_t result = (*(*arg1 + 0x30))(eax_2)
*arg2 = result

if (result != 0)
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    int32_t* edi_1 = &var_20
    int32_t var_24 = 1
    sub_61b5a0(&var_24, edi_1)
    var_24 = 4
    sub_61b5a0(&var_24, edi_1)
    int32_t esi_1 = var_20
    
    if ((*(**arg2 + 8))(arg3, esi_1, (var_1c_1 - esi_1) s>> 2, 1).b != 0)
        if (esi_1 != 0)
            int32_t var_3c_2 = esi_1
            sub_6b4d5b()
        
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (esi_1 != 0)
        int32_t var_3c_1 = esi_1
        sub_6b4d5b()

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
