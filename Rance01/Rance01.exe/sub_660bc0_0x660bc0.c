// 函数: sub_660bc0
// 地址: 0x660bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7210d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
int32_t var_4 = 0
var_6c = 0
int128_t* var_68 = nullptr
int32_t var_64 = 0
int32_t var_60 = 0
var_4.b = 1
char result

if (*arg1 + 8 u<= arg1[1])
    if (sub_40ff90(arg1, &var_4c, 4) != 0)
        if (sub_5546f0(arg1, &var_6c) != 0)
            uint32_t ebp_1 = var_6c
            
            if (*arg1 + ebp_1 u<= arg1[1])
                sub_404f60(ebp_1, &var_68)
                int128_t* eax_8 = *arg1
                
                if (eax_8 + ebp_1 u> arg1[1])
                    goto label_660cd1
                
                int128_t* esi_3 = var_68
                sub_6c02a0(esi_3, eax_8, ebp_1, eax_4)
                *arg1 += ebp_1
                int128_t* var_58 = esi_3
                int32_t var_54_1 = var_64
                int32_t var_1c_1 = 0xf
                int32_t var_20_1 = 0
                char var_30 = 0
                var_4.b = 2
                
                if (sub_40ff90(&var_58, &var_30, 4) == 0)
                label_660d45:
                    sub_401110(&var_30)
                    goto label_660cd1
                
                if (sub_402680("EXTF", &var_30) == 0)
                    goto label_660d45
                
                var_6c = 0
                
                if (sub_5546f0(&var_58, &var_6c) == 0 || var_6c != 1)
                    goto label_660d45
                
                char* ecx_10 = &var_30
                
                if (sub_5546f0(&var_58, arg2) == 0)
                    sub_401110(ecx_10)
                    goto label_660cd1
                
                sub_401110(ecx_10)
                sub_65ab60(&var_68)
                sub_401110(&var_4c)
                result = 1
            else
                sub_604c90(0x7315f8)
            label_660cd1:
                sub_65ab60(&var_68)
                sub_401110(&var_4c)
                result = 0
        else if (var_38 u< 0x10)
            result = 0
        else
            int32_t var_84_4 = var_4c.d
            sub_6b4d5b()
            result = 0
    else if (var_38 u< 0x10)
        result = 0
    else
        int32_t var_84_2 = var_4c.d
        sub_6b4d5b()
        result = 0
else
    sub_604c90(0x7315c4)
    
    if (var_38 u>= 0x10)
        int32_t var_84_1 = var_4c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
