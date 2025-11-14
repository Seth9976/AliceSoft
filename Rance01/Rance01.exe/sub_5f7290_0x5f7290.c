// 函数: sub_5f7290
// 地址: 0x5f7290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t** var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = arg2
int32_t* result

if (arg2 s> 0)
    if (arg2 s<= (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
        *(*(arg1 + 4) + (arg2 << 2) - 4) = 0
    
    result = &var_34
    sub_42e070(arg1 + 0x14, result, &var_30)
    int32_t** ebx_1 = var_34
    
    if (ebx_1 != *(arg1 + 0x18))
        (*(*ebx_1[4] + 4))(eax_4)
        result = sub_436320(arg1 + 0x14, &var_34, ebx_1)
else
    int32_t var_44 = arg2
    char* eax_6
    void* ecx
    eax_6, ecx = sub_4104a0(0x7355d0)
    char* var_44_1 = eax_6
    int32_t var_4 = 0
    result = sub_5f7bb0(ecx)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_44_2 = var_2c
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
