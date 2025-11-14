// 函数: sub_431760
// 地址: 0x431760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7286a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result

if (sub_410070(arg2, &var_2c).b != 0)
    result = *arg2
    
    if (result + 4 u> arg2[1])
        goto label_4317c3
    
    uint32_t eax_5 = zx.d(*result)
    uint32_t esi_5 = (zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))
    *arg2 = result + 4
    uint32_t var_30
    uint32_t var_34
    
    if (sub_5546f0(arg2, &var_30).b != 0)
        if (sub_5546f0(arg2, &var_34) != 0)
            if (sub_5546f0(arg2, &var_38) == 0)
                sub_401110(&var_2c)
                result.b = 0
            else if (sub_431030(&var_2c, arg1) == 0)
                sub_401110(&var_2c)
                result.b = 0
            else
                int32_t ecx_7 = sub_4310f0(var_34, var_38, arg1, esi_5 << 8 | eax_5, var_30)
                void* edx_4 = *(*(arg1 + 0x40) + 0x70)
                
                if (edx_4 != 0)
                    sub_430730(ecx_7, edx_4)
                
                *(arg1 + 0x28) = 1
                sub_401110(&var_2c)
                result.b = 1
        else
            sub_401110(&var_2c)
            result.b = 0
    else if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_4c_3 = var_2c.d
        sub_6b4d5b()
        result.b = 0
else
label_4317c3:
    
    if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_4c_1 = var_2c.d
        sub_6b4d5b()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
