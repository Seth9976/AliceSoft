// 函数: sub_509e70
// 地址: 0x509e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* ebx = arg_8

if (arg2 s>= 2 && *(arg1 + 0xec) == 0)
    arg2 = 1
else if (arg2 != 4)
    if (arg2 == 3)
        goto label_509ece
    
    if (arg2 == 2)
        goto label_509ee6
else if (*(arg1 + 0xf0) u< 0x10)
    arg2 = 3
label_509ece:
    
    if (*(arg1 + 0xf0) u< 8)
        arg2 = 2
    label_509ee6:
        
        if (*(arg1 + 0xf0) u< 4)
            arg2 = 1

int32_t* i_3 = nullptr
int32_t* var_1c = nullptr
int32_t var_18 = 0
int32_t var_4 = 0
sub_4307a0(&i_3)

if (var_1c != 0)
    *var_1c = 0

int32_t* i_1 = i_3
void* esi_1 = &var_1c[1]
arg_8 = 1

if (&arg_8 u>= esi_1 || i_1 u> &arg_8)
    if (esi_1 == var_18)
        sub_4307a0(&i_3)
        i_1 = i_3
    
    if (esi_1 != 0)
        *esi_1 = 1
else
    int32_t edi_2 = (&arg_8 - i_1) s>> 2
    
    if (esi_1 == var_18)
        sub_4307a0(&i_3)
        i_1 = i_3
    
    if (esi_1 != 0)
        *esi_1 = i_1[edi_2]

void* esi_2 = esi_1 + 4
arg_8 = 2

if (&arg_8 u>= esi_2 || i_1 u> &arg_8)
    if (esi_2 == var_18)
        sub_4307a0(&i_3)
        i_1 = i_3
    
    if (esi_2 != 0)
        *esi_2 = 2
else
    int32_t edi_4 = (&arg_8 - i_1) s>> 2
    
    if (esi_2 == var_18)
        sub_4307a0(&i_3)
        i_1 = i_3
    
    if (esi_2 != 0)
        *esi_2 = i_1[edi_4]

void* esi_3 = esi_2 + 4
arg_8 = 3

if (&arg_8 u>= esi_3 || i_1 u> &arg_8)
    if (esi_3 == var_18)
        sub_4307a0(&i_3)
        i_1 = i_3
    
    if (esi_3 != 0)
        *esi_3 = 3
else
    int32_t edi_6 = (&arg_8 - i_1) s>> 2
    
    if (esi_3 == var_18)
        sub_4307a0(&i_3)
        i_1 = i_3
    
    if (esi_3 != 0)
        *esi_3 = i_1[edi_6]

void* esi_4 = esi_3 + 4
arg_8 = 4

if (&arg_8 u>= esi_4 || i_1 u> &arg_8)
    if (esi_4 == var_18)
        sub_4307a0(&i_3)
        i_1 = i_3
    
    if (esi_4 != 0)
        *esi_4 = 4
else
    int32_t edi_8 = (&arg_8 - i_1) s>> 2
    
    if (esi_4 == var_18)
        sub_4307a0(&i_3)
        i_1 = i_3
    
    if (esi_4 != 0)
        *esi_4 = i_1[edi_8]

void* var_1c_5 = esi_4 + 4
int32_t* i = i_1

if (i_1 != esi_4 + 4)
    do
        (*(*ebx + 0x7c))(*i, arg2, 1)
        i = &i[1]
    while (i != esi_4 + 4)

(*(*ebx + 0x7c))(7, 1, 0)
(*(*ebx + 0x80))(7, 1)

if (i_1 != 0)
    int32_t* i_2 = i_1
    sub_6b4d5b()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
