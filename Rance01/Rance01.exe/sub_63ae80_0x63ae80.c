// 函数: sub_63ae80
// 地址: 0x63ae80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721231
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_ebp
int32_t var_4c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t* var_30 = arg2
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_4 = 0
int32_t i = (arg1[1] - *arg1) s/ 0x8c
int32_t var_34_1 = 1
int32_t ebp = divs.dp.d(sx.q(arg6), arg5) + 1
int32_t eax_9 = arg4

if (eax_9 + ebp u> i)
    ebp = i - eax_9

int32_t var_38 = 0

if (ebp != 0)
    int32_t ecx_4 = eax_9 * 0x8c
    int32_t var_3c_1 = ecx_4
    
    while (i u> var_38 + eax_9)
        int32_t eax_10 = *arg1
        var_40 = arg3 + 0x4e4
        *(eax_10 + ecx_4 + 0x78) = *(arg3 + 0x4e4)
        *(eax_10 + ecx_4 + 0x7c) = var_40[1]
        *(eax_10 + ecx_4 + 0x80) = var_40[2]
        *(eax_10 + ecx_4 + 0x84) = var_40[3]
        *(eax_10 + ecx_4 + 0x88) = var_40[4]
        int32_t var_4_1 = 1
        int32_t var_2c
        sub_405150(sub_637600(*arg1 + ecx_4, &var_2c), arg2)
        var_4_1.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_50_3 = var_2c
            sub_6b4d5b()
        
        var_3c_1 += 0x8c
        int32_t eax_16 = var_38 + 1
        var_38 = eax_16
        
        if (eax_16 u>= ebp)
            break
        
        ecx_4 = var_3c_1
        eax_9 = arg4

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return arg2
