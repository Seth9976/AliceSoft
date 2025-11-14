// 函数: sub_636310
// 地址: 0x636310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c8a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = arg3
int32_t result

if (arg2 != 0)
    int32_t var_84_1 = *arg2
    int32_t result_1 = 0
    sub_4104a0("%10d")
    int32_t var_4 = 0
    void* var_64
    int32_t result_2 = sub_636490(&var_64, arg3, arg1)
    
    if (result_2 s>= 0)
        result_1 = result_2
    
    var_4.b = 1
    var_4.b = 2
    char var_48
    int32_t var_2c
    sub_401ef0(&var_64, sub_4c1d70(&var_64, &var_48, sub_405c90(&var_2c, arg1, " - "), &var_48))
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_84_3 = var_48.d
        sub_6b4d5b()
    
    var_4.b = 0
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_84_4 = var_2c
        sub_6b4d5b()
    
    int32_t esi_2 = 0
    int32_t edi_4 = (arg2[3] - arg2[2]) s>> 2
    
    if (edi_4 s> 0)
        do
            int32_t result_3 = sub_636310(&var_64, *(arg2[2] + (esi_2 << 2)), var_6c)
            
            if (result_1 s<= result_3)
                result_1 = result_3
            
            esi_2 += 1
        while (esi_2 s< edi_4)
    
    int32_t var_50
    
    if (var_50 u>= 0x10)
        void* var_84_6 = var_64
        sub_6b4d5b()
    
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
