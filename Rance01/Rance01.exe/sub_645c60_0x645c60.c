// 函数: sub_645c60
// 地址: 0x645c60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7211e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_esi
int32_t var_4c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t* var_30 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_4 = 0
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x66666667, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 4
int32_t i = (edx_1 u>> 0x1f) + edx_1
int32_t var_34_1 = 1
int32_t esi = divs.dp.d(sx.q(arg5), arg4) + 1
int32_t eax_9 = arg3

if (esi + eax_9 u> i)
    esi = i - eax_9

var_3c = 0

if (esi != 0)
    int32_t ecx_6 = eax_9 * 0x28
    int32_t var_38_1 = ecx_6
    
    while (i u> var_3c + eax_9)
        int32_t var_4_1 = 1
        int32_t var_2c
        sub_405150(sub_644b90(*arg2 + ecx_6, &var_2c), arg1)
        var_4_1.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_50_3 = var_2c
            sub_6b4d5b()
        
        var_38_1 += 0x28
        int32_t eax_14 = var_3c + 1
        var_3c = eax_14
        
        if (eax_14 u>= esi)
            break
        
        ecx_6 = var_38_1
        eax_9 = arg3

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return arg1
