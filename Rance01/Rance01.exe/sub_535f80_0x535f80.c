// 函数: sub_535f80
// 地址: 0x535f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result

if (sub_410070(arg2, &var_2c).b != 0)
    sub_401180(arg1, 0xffffffff, &var_2c, 0)
    result = *arg2
    
    if (result + 4 u> arg2[1])
        goto label_535fdd
    
    int32_t esi_7 =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    *arg2 = result + 4
    int32_t edi_1
    
    if (esi_7 s> 0)
        sub_536340(&arg1[7], esi_7)
        edi_1 = 0
    
    if (esi_7 s<= 0 || esi_7 s<= 0)
    label_53606c:
        
        if (var_18 u>= 0x10)
            int32_t var_4c_4 = var_2c.d
            sub_6b4d5b()
        
        result.b = 1
    else
        while (sub_5361a0(arg1[7] + ebx, arg2, edi_1).b != 0)
            edi_1 += 1
            ebx += 0x38
            
            if (edi_1 s>= esi_7)
                goto label_53606c
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_4c_5 = var_2c.d
            sub_6b4d5b()
            result.b = 0
else
label_535fdd:
    
    if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_4c_1 = var_2c.d
        sub_6b4d5b()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
