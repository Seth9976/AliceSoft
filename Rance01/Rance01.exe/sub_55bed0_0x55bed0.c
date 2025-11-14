// 函数: sub_55bed0
// 地址: 0x55bed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a478
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_6 = sub_429b30(arg2, arg1)
void* result

if (eax_6 == *(arg2 + 4))
label_55bf29:
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    sub_401ef0(&var_34, arg1)
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    void* var_38
    sub_514070(arg2, &var_38, eax_6, sub_55bfb0(&var_34, arg2))
    void* esi_3 = var_38
    
    if (var_20_1 u>= 0x10)
        int32_t var_54_2 = var_34.d
        sub_6b4d5b()
    
    result = esi_3 + 0x28
else
    if (sub_405dd0(&eax_6[3], arg1) != 0)
        goto label_55bf29
    
    result = &eax_6[0xa]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
