// 函数: sub_6628e0
// 地址: 0x6628e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722f33
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = arg3
var_38 = arg1
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, nullptr, 0x72d5e2)
int32_t var_4 = 0
int32_t* result = *arg4

if (&result[1] u> arg4[1])
    if (var_18 u>= 0x10)
        int32_t var_50_3 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0
else
    uint32_t ecx_6 =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    *arg4 = &result[1]
    
    if (sub_40ff90(arg4, &var_2c, ecx_6).b != 0)
        uint32_t edi_1 = var_38
        sub_401180(edi_1 + 0xc, 0xffffffff, &var_2c, 0)
        *(edi_1 + 8) = 6
        uint32_t eax_8 = operator new(0x34)
        var_38 = eax_8
        var_4.b = 1
        uint32_t esi_3
        
        if (eax_8 == 0)
            esi_3 = 0
        else
            sub_673190(eax_8)
            esi_3 = eax_8
        
        var_4.b = 0
        
        if (sub_662a50(arg4, esi_3, arg2).b == 0)
            goto label_662988
        
        *(edi_1 + 0x7c) = esi_3
        
        if (var_18 u>= 0x10)
            int32_t var_50_5 = var_2c.d
            sub_6b4d5b()
        
        result.b = 1
    else
    label_662988:
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_50_2 = var_2c.d
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
