// 函数: sub_404ff0
// 地址: 0x404ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b95b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_c8
int32_t eax_2 = data_78c474 ^ &var_c8
int32_t __saved_edi
int32_t var_d8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_6 = sub_4055d0(arg1, arg2)
char eax_8

if (eax_6 != *(arg1 + 4))
    eax_8 = sub_405dd0(&eax_6[3], arg2)

void* result

if (eax_6 != *(arg1 + 4) && eax_8 == 0)
    result = &eax_6[0xa]
else
    int32_t var_a0_1 = 0xf
    int32_t var_a4_1 = 0
    int32_t var_84_1 = 0xf
    int32_t var_88_1 = 0
    char var_98_1 = 0
    int32_t var_c4
    __builtin_memset(&var_c4, 0, 0x11)
    int32_t var_4 = 0
    int32_t var_68_1 = 0xf
    int32_t var_6c_1 = 0
    char var_7c = 0
    sub_401180(&var_7c, 0xffffffff, arg2, 0)
    var_4.b = 1
    void var_60
    sub_4057c0(&var_c4, &var_60)
    char* var_dc_2 = &var_7c
    var_4.b = 2
    sub_405e50(arg1, &var_c8, eax_6, sub_406460(arg1))
    void* edi_1 = var_c8
    sub_405300(&var_7c)
    
    if (var_84_1 u>= 0x10)
        int32_t var_dc_4 = var_98_1.d
        sub_6b4d5b()
    
    if (var_a0_1 u>= 0x10)
        char var_b4
        int32_t var_dc_5 = var_b4.d
        sub_6b4d5b()
    
    result = edi_1 + 0x28

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c8)
return result
