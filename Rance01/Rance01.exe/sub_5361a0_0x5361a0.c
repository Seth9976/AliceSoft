// 函数: sub_5361a0
// 地址: 0x5361a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
*arg1 = arg3
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result

if (sub_410070(arg2, &var_2c).b != 0)
    sub_401180(&arg1[1], 0xffffffff, &var_2c, 0)
    result = *arg2
    
    if (result + 4 u<= arg2[1])
        arg1[8] = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
            | zx.d(*result)
        *arg2 += 4
        
        if (sub_5546f0(arg2, &var_30).b != 0)
            if (var_30 s> 0)
                int32_t* edx_8 = arg1[9]
                int32_t* ecx_6 = arg1[0xa]
                
                if (edx_8 != ecx_6)
                    int32_t* eax_8 = ecx_6
                    
                    if (ecx_6 != ecx_6)
                        do
                            *edx_8 = *eax_8
                            eax_8 = &eax_8[1]
                            edx_8 = &edx_8[1]
                        while (eax_8 != ecx_6)
                    
                    arg1[0xa] = edx_8
                
                sub_5373a0(var_30, &arg1[9])
                
                if (var_30 s> 0)
                    do
                        if (sub_5372d0(arg2, arg1[9] + (ebx << 2)).b == 0)
                            goto label_536201
                        
                        ebx += 1
                    while (ebx s< var_30)
            
            if (var_18 u>= 0x10)
                int32_t var_48_5 = var_2c.d
                sub_6b4d5b()
            
            result.b = 1
        else if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_48_3 = var_2c.d
            sub_6b4d5b()
            result.b = 0
    else if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_48_4 = var_2c.d
        sub_6b4d5b()
        result.b = 0
else
label_536201:
    
    if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_48_1 = var_2c.d
        sub_6b4d5b()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
