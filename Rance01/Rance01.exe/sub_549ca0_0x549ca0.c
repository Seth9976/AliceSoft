// 函数: sub_549ca0
// 地址: 0x549ca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7263d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t esi
int32_t var_70 = esi
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t var_50 = 0xf
int32_t var_54 = 0
var_64 = 0
var_4.b = 1
int32_t* result

if (sub_54d120(arg1, esi, 0xf, arg1, &var_64, "system.CopySaveFile").b != 0)
    if (sub_54d120(arg1, esi, 0xf, arg1, &var_2c, "system.CopySaveFile").b != 0)
        int128_t* esi_1 = (*(**(arg1 + 0x34) + 8))(eax_4)
        char* ecx_4 = esi_1
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        int128_t* eax_6
        
        do
            eax_6.b = *ecx_4
            ecx_4 = &ecx_4[1]
        while (eax_6.b != 0)
        sub_401270(&var_48, ecx_4 - &ecx_4[1], esi_1)
        var_4.b = 2
        int128_t* esi_3 = (*(**(arg1 + 0x38) + 0x24))()
        char* ecx_8 = esi_3
        int128_t* eax_8
        
        do
            eax_8.b = *ecx_8
            ecx_8 = &ecx_8[1]
        while (eax_8.b != 0)
        sub_402cb0(&var_48, esi_3, ecx_8 - (esi_3 + 1))
        int32_t edx_6
        edx_6.b = sub_55a120(&var_2c, arg1 + 0x25c, &var_48, &var_64) != 0
        **(arg1 + 0x2b0) = edx_6
        *(arg1 + 0x2b0) += 4
        
        if (var_34_1 u>= 0x10)
            int32_t var_7c_8 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
        
        if (var_50 u>= 0x10)
            int32_t var_7c_9 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_3 = 0xf
        int32_t var_54_3 = 0
        var_64 = 0
        
        if (var_18 u>= 0x10)
            int32_t var_7c_10 = var_2c.d
            sub_6b4d5b()
        
        result.b = 1
    else
        if (var_50 u>= 0x10)
            int32_t var_7c_3 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_7c_4 = var_2c.d
            sub_6b4d5b()
            result.b = 0
else
    if (var_50 u>= 0x10)
        int32_t var_7c_1 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_7c_2 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
