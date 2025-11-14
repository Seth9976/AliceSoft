// 函数: sub_57b550
// 地址: 0x57b550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* arg_4
void* ebp = arg_4
int32_t var_20 = 0
int32_t* var_1c = nullptr
int32_t var_18 = 0
int32_t var_4 = 0
sub_4307a0(&var_20)

if (var_1c != 0)
    *var_1c = 1

int32_t edi = var_20
void* esi_1 = &var_1c[1]
arg_4 = 4
void* esi_2

if (&arg_4 u>= esi_1 || edi u> &arg_4)
    if (esi_1 == var_18)
        sub_4307a0(&var_20)
        edi = var_20
    
    if (esi_1 != 0)
        *esi_1 = 4
    
    esi_2 = esi_1 + 4
else
    int32_t ebx_2 = (&arg_4 - edi) s>> 2
    
    if (esi_1 == var_18)
        sub_4307a0(&var_20)
        edi = var_20
    
    if (esi_1 != 0)
        *esi_1 = *(edi + (ebx_2 << 2))
    
    esi_2 = esi_1 + 4

arg_4 = 6
void* esi_3

if (&arg_4 u>= esi_2 || edi u> &arg_4)
    if (esi_2 == var_18)
        sub_4307a0(&var_20)
        edi = var_20
    
    if (esi_2 != 0)
        *esi_2 = 6
    
    esi_3 = esi_2 + 4
else
    int32_t ebx_4 = (&arg_4 - edi) s>> 2
    
    if (esi_2 == var_18)
        sub_4307a0(&var_20)
        edi = var_20
    
    if (esi_2 != 0)
        *esi_2 = *(edi + (ebx_4 << 2))
    
    esi_3 = esi_2 + 4

void* var_1c_3 = esi_3
char result

if ((*(**(ebp + 0x60) + 8))((*(ebp + 0x50) - *(ebp + 0x4c)) s/ 0x78 * 3, edi, (esi_3 - edi) s>> 2, 
        1) != 0)
    if (edi != 0)
        int32_t var_3c_2 = edi
        sub_6b4d5b()
    
    result = 1
else
    if (edi != 0)
        int32_t var_3c_1 = edi
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
