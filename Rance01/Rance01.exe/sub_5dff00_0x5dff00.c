// 函数: sub_5dff00
// 地址: 0x5dff00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result

if (sub_410070(arg2, &var_2c).b != 0)
    result = *arg2
    
    if (result + 4 u> arg2[1])
        goto label_5dff5c
    
    uint32_t eax_5 = zx.d(*result)
    uint32_t esi_5 = (zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))
    *arg2 = result + 4
    uint32_t var_34
    
    if (sub_5546f0(arg2, &var_34).b != 0)
        if (sub_5546f0(arg2, &var_3c) != 0)
            uint32_t var_30
            
            if (sub_5546f0(arg2, &var_30) == 0)
                goto label_5dffd9
            
            uint32_t var_38
            
            if (sub_5546f0(arg2, &var_38) == 0)
                sub_401110(&var_2c)
                result.b = 0
            else
                if (sub_5dee00(arg1, &var_2c, esi_5 << 8 | eax_5) == 0)
                    goto label_5dffd9
                
                sub_5df1c0(var_30, var_38, var_3c, var_34, arg1)
                *(arg1 + 0x90) = 1
                sub_401110(&var_2c)
                result.b = 1
        else
        label_5dffd9:
            sub_401110(&var_2c)
            result.b = 0
    else if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_50_3 = var_2c.d
        sub_6b4d5b()
        result.b = 0
else
label_5dff5c:
    
    if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_50_1 = var_2c.d
        sub_6b4d5b()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
