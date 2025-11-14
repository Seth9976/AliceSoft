// 函数: sub_436160
// 地址: 0x436160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(arg2 + 0x10)
int32_t result = *(arg2 + 0x14)

if (edx != result)
    int32_t ebx_2 = ((result - edx) s>> 2) * 6
    
    if (*(arg2 + 0x20) == 0)
        result = (*(*arg1 + 0x30))(eax_2)
        *(arg2 + 0x20) = result
    
    if (*(arg2 + 0x20) == 0 && result == 0)
    label_436242:
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if ((*(**(arg2 + 0x20) + 0x1c))(eax_2) s< ebx_2)
        int32_t var_1c = 0
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
        int32_t var_4 = 0
        int32_t* edi_1 = &var_1c
        int32_t var_20 = 1
        sub_61b5a0(&var_20, edi_1)
        var_20 = 6
        sub_61b5a0(&var_20, edi_1)
        var_20 = 7
        sub_61b5a0(&var_20, edi_1)
        int32_t edi_2 = var_1c
        
        if ((*(**(arg2 + 0x20) + 8))(ebx_2, edi_2, (var_18_1 - edi_2) s>> 2, 1).b == 0)
            if (edi_2 != 0)
                int32_t var_38_1 = edi_2
                sub_6b4d5b()
            
            goto label_436242
        
        if (edi_2 != 0)
            int32_t var_38_2 = edi_2
            sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
