// 函数: sub_603c50
// 地址: 0x603c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebp = arg1
int32_t ebx_2 = (arg2 - ebp) s/ 0x1c
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(ebx_2)
int32_t i = (eax_7 - edx_3) s>> 1
int128_t* result = nullptr
var_30 = ebp

if (i s> 0)
    int32_t* esi_1 = &ebp[i * 0x1c + 0x10]
    
    do
        esi_1 -= 0x1c
        i -= 1
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        
        if (&var_2c != &esi_1[-4])
            bool cond:0_1 = esi_1[1] u>= 0x10
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            
            if (cond:0_1)
                var_2c.d = esi_1[-4]
                esi_1[-4] = 0
            else
                sub_6b49d0(&var_2c, &esi_1[-4], *esi_1 + 1, eax_4)
            
            int32_t var_1c_3 = *esi_1
            var_18_1 = esi_1[1]
            esi_1[1] = 0xf
            *esi_1 = 0
            esi_1[-4].b = 0
            ebp = var_30
        
        int32_t var_4 = 0
        result = sub_6040d0(ebp, i, ebx_2, &var_2c)
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_48_3 = var_2c.d
            result = sub_6b4d5b()
    while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
