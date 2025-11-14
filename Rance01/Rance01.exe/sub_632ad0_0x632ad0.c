// 函数: sub_632ad0
// 地址: 0x632ad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7232b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t var_88 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_50d890(*(*(arg1 + 0x18) + 4))
void* eax_6 = *(arg1 + 0x18)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x18)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x18)
*(eax_8 + 8) = eax_8
*(arg1 + 0x1c) = 0
void* var_4c
sub_632880(&var_4c)
int32_t var_4 = 0
int32_t var_54 = 0xf
int32_t var_58 = 0
char var_68 = 0
sub_401270(&var_68, 2, 0x7339cc)
var_4.b = 1
sub_5870d0(&var_4c)
sub_402000(&var_4c, &var_68, 0, 0xffffffff)

if (var_54 u>= 0x10)
    int32_t var_8c_2 = var_68.d
    sub_6b4d5b()

var_68.d = 0
int32_t var_64 = 0
int32_t var_60 = 0
var_4.b = 2
sub_602980(&var_4c, &var_68)
int32_t* result = var_68.d
int32_t* result_2 = result

if (result != var_64)
    do
        int32_t var_30
        int32_t* var_8c_4 = sub_401c00(&var_30, result_2)
        var_4.b = 3
        void* var_70
        sub_5cdb70(arg1 + 0x14, &var_70, sub_6339e0(arg1 + 0x14))
        var_4.b = 2
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            int32_t var_8c_6 = var_30
            sub_6b4d5b()
        
        result_2 = &result_2[7]
    while (result_2 != var_64)
    
    result = var_68.d

if (result != 0)
    int32_t* result_3 = result
    
    if (result != var_64)
        do
            if (result_3[5] u>= 0x10)
                int32_t var_8c_7 = *result_3
                sub_6b4d5b()
                result = var_68.d
            
            result_3[5] = 0xf
            result_3[4] = 0
            *result_3 = 0
            result_3 = &result_3[7]
        while (result_3 != var_64)
    
    int32_t* result_1 = result
    result = sub_6b4d5b()

int32_t var_38

if (var_38 u>= 0x10)
    void* var_8c_8 = var_4c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result
