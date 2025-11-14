// 函数: sub_6197f0
// 地址: 0x6197f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7192e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
int32_t edx = sub_401180(&var_64, 0xffffffff, arg2, 0)
int32_t var_4 = 0
result_1 = arg1 + 0x34
void* result_2 = arg1 + 0x34
char var_48
sub_401b60(&var_48, edx, &var_64)
var_4.b = 1
int32_t i
int32_t var_34
void* result

while (i != 0)
    void* result_3
    int32_t edx_1
    result_3, edx_1 = sub_61b4d0(result_2, &var_48)
    result_2 = result_3
    
    if (result_2 == 0)
        if (var_34 u>= 0x10)
            int32_t var_80_8 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_2 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        
        if (var_50 u>= 0x10)
            int32_t var_80_9 = var_64.d
            sub_6b4d5b()
        
        result = result_1
        goto label_6199bd
    
    int32_t var_2c
    void* const edx_2 = sub_401a00(&var_2c, edx_1, &var_64)
    int32_t var_18
    
    if (&var_64 != &var_2c)
        if (var_50 u>= 0x10)
            int32_t var_80_2 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        void* const var_1c
        
        if (var_18 u>= 0x10)
            var_64.d = var_2c
            var_2c = 0
        else
            sub_6b49d0(&var_64, &var_2c, var_1c + 1, eax_4)
        
        edx_2 = var_1c
        void* const var_54_2 = edx_2
        var_50 = var_18
        var_18 = 0xf
        var_1c = nullptr
        var_2c.b = 0
    
    if (var_18 u>= 0x10)
        int32_t var_80_4 = var_2c
        edx_2 = sub_6b4d5b()
    
    var_4.b = 0
    
    if (var_34 u>= 0x10)
        int32_t var_80_5 = var_48.d
        edx_2 = sub_6b4d5b()
    
    sub_401b60(&var_48, edx_2, &var_64)
    var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_80_6 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0

if (var_50 u>= 0x10)
    int32_t var_80_7 = var_64.d
    sub_6b4d5b()

result = result_2
label_6199bd:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
