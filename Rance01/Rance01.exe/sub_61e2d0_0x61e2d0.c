// 函数: sub_61e2d0
// 地址: 0x61e2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d44b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t var_a0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result_2 = 0
int32_t var_80 = 0
int32_t var_7c = 0
int32_t var_4 = 0
int32_t var_74 = 0xffffffff
int32_t var_70 = 0
int32_t var_6c = 0
int32_t* var_a4 = &result_2
var_4.b = 1
BOOL result
int32_t* ecx
result.b = sub_601f80(ecx).b == 0
var_4.b = 0

if (result.b == 0)
    BOOL result_3 = result_2
    
    if (var_80 - result_3 u< 0xc)
        if (result_3 != 0)
            goto label_61e375
        
        result.b = 0
    else if (*result_3 != 0x4a || *(result_3 + 1) != 0x44 || *(result_3 + 2) != 0x47
        || *(result_3 + 3) != 0x33)
    label_61e375:
        BOOL result_4 = result_3
        sub_6b4d5b()
        result.b = 0
    else if (*(result_3 + 4) == 1)
        int32_t i_2 = *(result_3 + 8)
        int128_t* esi_2 = result_3 + 0xc
        void var_68
        sub_402be0(&var_68, "System")
        var_4.b = 2
        sub_405220(&var_68, arg1 + 0x10)
        var_4.b = 0
        sub_401110(&var_68)
        sub_402be0(&var_68, 0x73428c)
        var_4.b = 3
        sub_405220(&var_68, arg1 + 0x10)
        var_4.b = 0
        sub_401110(&var_68)
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                sub_402be0(&var_68, esi_2)
                var_4.b = 4
                int32_t var_58
                void var_4c
                sub_402be0(&var_4c, esi_2 + var_58 + 1)
                var_4.b = 5
                int32_t var_3c
                esi_2 = esi_2 + var_58 + 1 + var_3c + 0x11
                void var_30
                sub_61e620(&var_30, &var_4c)
                var_4.b = 6
                int32_t eax_12 = sub_61e4f0(arg1, &var_30)
                var_4.b = 5
                sub_401110(&var_30)
                *sub_513fa0(arg1, &var_68) = eax_12
                sub_401110(&var_4c)
                var_4.b = 0
                sub_401110(&var_68)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_65ab60(&result_2)
        result.b = 1
    else
        sub_65ab60(&result_2)
        result.b = 0
else
    result = result_2
    
    if (result == 0)
        result.b = 0
    else
        BOOL result_1 = result
        sub_6b4d5b()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
