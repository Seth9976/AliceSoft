// 函数: sub_5396d0
// 地址: 0x5396d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a888
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx

if (arg1[1] != 0)
    edx = *arg1
else
    edx = 0

int32_t ecx = arg1[1]
int128_t* eax_6

if (ecx != 0)
    eax_6 = *arg1
else
    eax_6 = nullptr

int128_t* var_3c = eax_6
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_4 = 0
int128_t* result

if (sub_554780(&var_3c, &var_30, 3).b != 0)
    if (sub_402680(0x751bf0, &var_30).b != 0)
        if (var_3c + 1 u<= ecx + edx)
            var_3c += 1
            int32_t* ecx_3 = &var_30
            uint32_t var_34
            
            if (sub_5546f0(&var_3c, &var_34) != 0)
                sub_401110(ecx_3)
                
                if (var_34 != 0)
                    result.b = 0
                else
                    result.b = 1
            else
                sub_401110(ecx_3)
                result.b = 0
        else if (var_1c u< 0x10)
            result.b = 0
        else
            int32_t var_4c_4 = var_30.d
            sub_6b4d5b()
            result.b = 0
    else if (var_1c u< 0x10)
        result.b = 0
    else
        int32_t var_4c_2 = var_30.d
        sub_6b4d5b()
        result.b = 0
else
    if (var_1c u>= 0x10)
        int32_t var_4c_1 = var_30.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
