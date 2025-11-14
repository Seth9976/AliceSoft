// 函数: sub_6615e0
// 地址: 0x6615e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, nullptr, 0x72d58b)
int32_t var_4 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, nullptr, 0x72d59a)
var_4.b = 1
char* ecx = *arg1
char result

if (&ecx[4] u> arg1[1])
    if (var_34 u>= 0x10)
        int32_t var_68_4 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_68_5 = var_2c.d
        sub_6b4d5b()
    
    result = 0
else
    uint32_t eax_12 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    var_50 = eax_12
    *arg1 = &ecx[4]
    
    if (sub_40ff90(arg1, &var_2c, eax_12) != 0)
        if (sub_5546f0(arg1, &var_50) != 0)
            if (sub_40ff90(arg1, &var_48, var_50) != 0)
                sub_401180(arg2 + 0xc, 0xffffffff, &var_2c, 0)
                sub_401180(arg2 + 0x30, 0xffffffff, &var_48, 0)
                *(arg2 + 8) = 3
                sub_401110(&var_48)
                sub_401110(&var_2c)
                result = 1
            else
                sub_401110(&var_48)
                sub_401110(&var_2c)
                result = 0
        else
            if (var_34 u>= 0x10)
                int32_t var_68_7 = var_48.d
                sub_6b4d5b()
            
            int32_t var_34_3 = 0xf
            int32_t var_38_3 = 0
            var_48 = 0
            
            if (var_18 u< 0x10)
                result = 0
            else
                int32_t var_68_8 = var_2c.d
                sub_6b4d5b()
                result = 0
    else
        if (var_34 u>= 0x10)
            int32_t var_68_2 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        
        if (var_18 u< 0x10)
            result = 0
        else
            int32_t var_68_3 = var_2c.d
            sub_6b4d5b()
            result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
