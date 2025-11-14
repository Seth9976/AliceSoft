// 函数: sub_5edec0
// 地址: 0x5edec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *arg1
var_30 = 0

if (ecx != arg1[1])
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401270(&var_2c, nullptr, 0x72d8d1)
    int32_t var_4 = 0
    void* esi_2 = *arg1
    
    if (esi_2 == arg1[1])
    label_5edf79:
        *(arg2 + 0x10) = 0
        *(arg2 + 0x14) = 0xf
        *arg2 = 0
        sub_401ef0(arg2, &var_2c)
        
        if (var_18_1 u>= 0x10)
            int32_t var_48_1 = var_2c.d
            sub_6b4d5b()
    else
        while (true)
            if (arg3 s< *(esi_2 + 8))
                goto label_5edf79
            
            if (arg3 s< *(esi_2 + 0xc))
                *(arg2 + 0x14) = 0xf
                *(arg2 + 0x10) = 0
                *arg2 = 0
                sub_401180(arg2, 0xffffffff, esi_2 + 0x10, 0)
                
                if (var_18_1 u< 0x10)
                    goto label_5edfac
                
                int32_t var_48_2 = var_2c.d
                break
            
            sub_401180(&var_2c, 0xffffffff, esi_2 + 0x10, 0)
            esi_2 += 0x6c
            
            if (esi_2 == arg1[1])
                goto label_5edf79
        
        sub_6b4d5b()
else
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_401270(arg2, nullptr, 0x72d8c3)

label_5edfac:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return arg2
