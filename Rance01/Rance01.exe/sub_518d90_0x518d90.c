// 函数: sub_518d90
// 地址: 0x518d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* const arg_4
void* const ebx = arg_4
int32_t* ecx = *(ebx + 0xc)
int32_t esi_3 = (*(ebx + 4) - 2) * *(ebx + 8) + 2

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(ebx + 0xc) = 0

int32_t result = (*(*arg1 + 0x30))(eax_2)
*(ebx + 0xc) = result

if (result == 0)
    result.b = 0
else
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    int32_t* edi_1 = &var_20
    arg_4 = 1
    sub_61b5a0(&arg_4, edi_1)
    arg_4 = 2
    sub_61b5a0(&arg_4, edi_1)
    arg_4 = 4
    sub_61b5a0(&arg_4, edi_1)
    int32_t edi_2 = var_20
    
    if ((*(**(ebx + 0xc) + 8))(esi_3, edi_2, (var_1c_1 - edi_2) s>> 2, 0).b != 0)
        if (edi_2 != 0)
            int32_t var_3c_2 = edi_2
            sub_6b4d5b()
        
        result.b = 1
    else
        if (edi_2 != 0)
            int32_t var_3c_1 = edi_2
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
