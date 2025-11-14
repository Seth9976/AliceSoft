// 函数: sub_61c580
// 地址: 0x61c580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719198
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (*(*arg2 + 4))(0x734324)

if (result != 0)
    result = (**result)(0x734334)
    
    if (result == 0)
        result.b = 0
    else
        int128_t* esi_1 = (*(*result + 0x14))(eax_4)
        char* ecx_3 = esi_1
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        int128_t* eax_8
        
        do
            eax_8.b = *ecx_3
            ecx_3 = &ecx_3[1]
        while (eax_8.b != 0)
        int32_t var_4 = 0
        char var_2c
        sub_401940(&var_2c, sub_401270(&var_64, ecx_3 - &ecx_3[1], esi_1), &var_64)
        char* var_7c_2 = &var_2c
        var_4.b = 1
        char var_48
        sub_402c60(&var_48, ".DebugV", nullptr)
        var_4.b = 2
        void* ecx_6 = sub_401ef0(arg1 + 0xc, &var_48)
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_7c_3 = var_48.d
            ecx_6 = sub_6b4d5b()
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_7c_4 = var_2c.d
            ecx_6 = sub_6b4d5b()
        
        int32_t var_4_1 = 0xffffffff
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (var_50_1 u>= 0x10)
            int32_t var_7c_5 = var_64.d
            ecx_6 = sub_6b4d5b()
        
        void* var_7c_6 = arg1 + 0xba8
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        result.b = sub_622840(ecx_6).b != 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
