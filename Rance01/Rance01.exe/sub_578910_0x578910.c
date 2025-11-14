// 函数: sub_578910
// 地址: 0x578910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t* var_1c = nullptr
int32_t var_18 = 0
int32_t var_4 = 0
sub_4307a0(&var_20)

if (var_1c != 0)
    *var_1c = 0

int32_t esi = var_20
void* eax_5 = &var_1c[1]
int32_t var_24 = 4

if (&var_24 u>= eax_5 || esi u> &var_24)
    if (eax_5 == var_18)
        sub_4307a0(&var_20)
        esi = var_20
    
    if (eax_5 != 0)
        *eax_5 = 4
else
    int32_t edi_2 = (&var_24 - esi) s>> 2
    
    if (eax_5 == var_18)
        sub_4307a0(&var_20)
        esi = var_20
    
    if (eax_5 != 0)
        *eax_5 = *(esi + (edi_2 << 2))

void* eax_9 = eax_5 + 4
var_24 = 6

if (&var_24 u>= eax_9 || esi u> &var_24)
    if (eax_9 == var_18)
        sub_4307a0(&var_20)
        esi = var_20
    
    if (eax_9 != 0)
        *eax_9 = 6
else
    int32_t edi_4 = (&var_24 - esi) s>> 2
    
    if (eax_9 == var_18)
        sub_4307a0(&var_20)
        esi = var_20
    
    if (eax_9 != 0)
        *eax_9 = *(esi + (edi_4 << 2))

void* var_1c_3 = eax_9 + 4

if ((*(**(arg1 + 8) + 8))(4, esi, (eax_9 + 4 - esi) s>> 2, 1) != 0)
    if (esi != 0)
        int32_t var_3c_2 = esi
        sub_6b4d5b()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

if (esi != 0)
    int32_t var_3c_1 = esi
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
