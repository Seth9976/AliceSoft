// 函数: sub_671fd0
// 地址: 0x671fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715c18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = sub_672290(arg2, arg1)
var_6c = edi

if (edi == *(arg2 + 4))
label_672037:
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    int32_t var_4 = 0
    int32_t var_54_1 = 0xf
    int32_t var_58_1 = 0
    char var_68 = 0
    sub_401180(&var_68, 0xffffffff, arg1, 0)
    var_4.b = 1
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    sub_401ef0(&var_4c, &var_30)
    var_4.b = 2
    int32_t** eax_9 = sub_672db0(arg2, &var_68)
    sub_672760(arg2, &var_6c, var_6c, eax_9)
    edi = var_6c
    
    if (var_38_1 u>= 0x10)
        int32_t var_84_3 = var_4c.d
        sub_6b4d5b()
    
    int32_t var_38_2 = 0xf
    int32_t var_3c_2 = 0
    var_4c = 0
    
    if (var_54_1 u>= 0x10)
        int32_t var_84_4 = var_68.d
        sub_6b4d5b()
    
    int32_t var_54_2 = 0xf
    int32_t var_58_2 = 0
    var_68 = 0
    
    if (var_1c_1 u>= 0x10)
        int32_t var_84_5 = var_30.d
        sub_6b4d5b()
else if (sub_405dd0(&edi[3], arg1) != 0)
    goto label_672037

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return &edi[0xa]
