// 函数: sub_632970
// 地址: 0x632970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7232f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_2
int32_t eax_2 = data_78c474 ^ &result_2
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_50d890(*(*(arg1 + 8) + 4))
void* eax_6 = *(arg1 + 8)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 8)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 8)
*(eax_8 + 8) = eax_8
*(arg1 + 0xc) = 0
void* var_4c
sub_632880(&var_4c)
int32_t var_4 = 0
result_2 = nullptr
int32_t var_60 = 0
int32_t var_5c = 0
var_4.b = 1
sub_602980(&var_4c, &result_2)
int32_t* result = result_2
int32_t* result_4 = result

if (result != var_60)
    do
        int32_t var_30
        int32_t* var_7c_3 = sub_401c00(&var_30, result_4)
        var_4.b = 2
        void* var_54
        sub_5cdb70(arg1 + 4, &var_54, sub_6339e0(arg1 + 4))
        var_4.b = 1
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            int32_t var_7c_5 = var_30
            sub_6b4d5b()
        
        result_4 = &result_4[7]
    while (result_4 != var_60)
    
    result = result_2

if (result != 0)
    int32_t* result_3 = result
    
    if (result != var_60)
        do
            if (result_3[5] u>= 0x10)
                int32_t var_7c_6 = *result_3
                sub_6b4d5b()
                result = result_2
            
            result_3[5] = 0xf
            result_3[4] = 0
            *result_3 = 0
            result_3 = &result_3[7]
        while (result_3 != var_60)
    
    int32_t* result_1 = result
    result = sub_6b4d5b()

int32_t var_38

if (var_38 u>= 0x10)
    void* var_7c_7 = var_4c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_2)
return result
