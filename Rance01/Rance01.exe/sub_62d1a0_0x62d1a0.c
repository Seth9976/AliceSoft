// 函数: sub_62d1a0
// 地址: 0x62d1a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7214e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0

if (arg4[4] s> 0)
    do
        int32_t ecx_1 = arg4[5]
        char* eax_6
        
        if (ecx_1 u< 0x10)
            eax_6 = arg4
        else
            eax_6 = *arg4
        
        char* eax_7
        
        if (eax_6[i] u>= 0x81)
            if (ecx_1 u< 0x10)
                eax_7 = arg4
            else
                eax_7 = *arg4
        
        char* eax_8
        
        if (eax_6[i] u< 0x81 || eax_7[i] u> 0x9f)
            if (ecx_1 u< 0x10)
                eax_8 = arg4
            else
                eax_8 = *arg4
        
        int32_t var_2c
        int32_t var_18
        
        if ((eax_6[i] u< 0x81 || eax_7[i] u> 0x9f) && eax_8[i] u< 0xe0)
            int32_t var_4_2 = 1
            sub_62d350(arg1, arg2, arg3, sub_401ec0(arg4, &var_2c, i, 1))
            int32_t var_4_3 = 0xffffffff
            
            if (var_18 u>= 0x10)
                int32_t var_60_4 = var_2c
                sub_6b4d5b()
            
            int32_t eax_14
            int32_t edx_2
            edx_2:eax_14 = sx.q(*(arg1 + 0x9c))
            i += 1
            arg2 += (eax_14 - edx_2) s>> 1
        else
            int32_t var_4 = 0
            sub_62d350(arg1, arg2, arg3, sub_401ec0(arg4, &var_2c, i, 2))
            int32_t var_4_1 = 0xffffffff
            
            if (var_18 u>= 0x10)
                int32_t var_60_2 = var_2c
                sub_6b4d5b()
            
            i += 2
            arg2 += *(arg1 + 0x9c)
    while (i s< arg4[4])

int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
sub_401270(&var_48, 1, &(*U"\\n\n\t ")[1])
int32_t var_4_4 = 2
int32_t* result = sub_62d350(arg1, arg2, arg3, &var_48)

if (var_34 u>= 0x10)
    int32_t var_60_6 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
