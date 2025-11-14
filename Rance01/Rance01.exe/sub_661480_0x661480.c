// 函数: sub_661480
// 地址: 0x661480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, nullptr, 0x72d58a)
int32_t var_4 = 0
char* ecx = *arg1
var_30 = fconvert.s(float.t(0))
char result

if (&ecx[4] u> arg1[1])
    if (var_18 u>= 0x10)
        int32_t var_48_3 = var_2c.d
        sub_6b4d5b()
    
    result = 0
else
    uint32_t eax_11 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *arg1 = &ecx[4]
    int32_t ecx_2
    result, ecx_2 = sub_40ff90(arg1, &var_2c, eax_11)
    
    if (result != 0)
        if (sub_40ff40(ecx_2, arg1, &var_30) != 0)
            sub_401180(arg2 + 0xc, 0xffffffff, &var_2c, 0)
            *(arg2 + 0x2c) = fconvert.s(fconvert.t(var_30))
            *(arg2 + 8) = 2
            
            if (var_18 u>= 0x10)
                int32_t var_48_6 = var_2c.d
                sub_6b4d5b()
            
            result = 1
        else if (var_18 u< 0x10)
            result = 0
        else
            int32_t var_48_5 = var_2c.d
            sub_6b4d5b()
            result = 0
    else if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_48_2 = var_2c.d
        sub_6b4d5b()
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
