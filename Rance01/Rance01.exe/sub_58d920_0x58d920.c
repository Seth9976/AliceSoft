// 函数: sub_58d920
// 地址: 0x58d920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7128d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (arg1[4] != arg1[5])
    int32_t var_1c
    sub_513410(&var_1c, &arg1[4])
    int32_t var_4 = 0
    int32_t esi_1 = var_1c
    int32_t var_18
    
    if ((*(*arg1 + 8))(esi_1, var_18 - esi_1).b == 0)
        if (esi_1 != 0)
            int32_t var_28_3 = esi_1
            sub_6b4d5b()
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (esi_1 != 0)
        int32_t var_28_4 = esi_1
        sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
