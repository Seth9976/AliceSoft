// 函数: sub_66b980
// 地址: 0x66b980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7272ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c8
int32_t eax_2 = data_78c474 ^ &var_c8
int32_t __saved_edi
int32_t var_dc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c0 = 0
int32_t var_4 = 0
int32_t var_c0_1 = 1
int32_t var_48
char result
int32_t edx_1
result, edx_1 = sub_402680("txtex", sub_401650(arg2, &var_48, arg3, &var_48))
char var_c1_1
char var_64

if (result != 0)
    var_c1_1 = 0
else
    int32_t var_4_1 = 1
    var_c0_1 = 3
    var_c1_1 = 1
    
    if (sub_402680(0x73067c, sub_401650(&var_64, edx_1, arg3, &var_64)) != 0)
        var_c1_1 = 0

if ((var_c0_1.b & 2) != 0)
    var_c0_1 &= 0xfffffffd
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_e0_2 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0

int32_t var_4_2 = 0xffffffff
int32_t var_34

if ((var_c0_1.b & 1) != 0 && var_34 u>= 0x10)
    int32_t var_e0_3 = var_48
    sub_6b4d5b()

if (var_c1_1 != 0)
    result = 1
else
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    char var_9c = 0
    sub_401270(&var_9c, nullptr, 0x72d35a)
    int32_t var_80_1 = 0
    int32_t var_7c_1 = 0
    int32_t var_78_1 = 0
    int32_t var_70_1 = 0
    void* var_68_1 = arg2 + 4
    int32_t var_4_3 = 2
    sub_670030(&var_9c, arg3)
    int32_t* var_bc = nullptr
    int32_t var_b8_1 = 0
    int32_t var_b4_1 = 0
    var_4_3.b = 3
    
    if (sub_670ec0(&var_9c, &var_bc) == 0)
        int32_t* eax_10 = var_bc
        
        if (eax_10 != 0)
            sub_405780(eax_10, var_b8_1)
            int32_t* var_e0_6 = var_bc
            sub_6b4d5b()
        
        var_bc = nullptr
        int32_t var_b8_2 = 0
        int32_t var_b4_2 = 0
        goto label_66bb52
    
    if (sub_671560(&var_9c) != 0)
        if (sub_671730(&var_9c) == 0)
            goto label_66bc26
        
        void* var_a0_1 = arg2 + 4
        void var_a4
        
        if (sub_663610(&var_9c, &var_a4, arg1) != 0)
            if (sub_6698f0(arg1) == 0)
                sub_4054e0(&var_bc)
                int32_t var_4_7 = 0xffffffff
                sub_66ff30(&var_9c)
                result = 1
            else
                void var_2c
                sub_402be0(&var_2c, 0x730680)
                var_4_3.b = 4
                sub_66b600(&var_2c, arg2)
                sub_401110(&var_2c)
            label_66bc26:
                sub_4054e0(&var_bc)
            label_66bb52:
                int32_t var_4_4 = 0xffffffff
                sub_66ff30(&var_9c)
                result = 0
        else
            sub_4054e0(&var_bc)
            int32_t var_4_6 = 0xffffffff
            sub_66ff30(&var_9c)
            result = 0
    else
        sub_4054e0(&var_bc)
        int32_t var_4_5 = 0xffffffff
        sub_66ff30(&var_9c)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c8)
return result
