// 函数: sub_4cbcd0
// 地址: 0x4cbcd0
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
float ecx
int32_t edx
sub_4cb740(arg1, edx, ecx)
float* i = nullptr
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char result

if (sub_40ff90(arg2, &var_2c, 4) != 0)
    if (sub_402680("LITP", &var_2c) != 0)
        int32_t* ecx_2 = arg2
        
        if (sub_5546f0(ecx_2, &var_30) == 0)
            goto label_4cbd39
        
        if (var_30 == 0 && ((*(arg1 + 0x10) - *(arg1 + 0xc)) & 0xfffffffc) == 0xa4)
            do
                if (sub_40ff40(ecx_2, arg2, &var_30) == 0)
                    goto label_4cbd98
                
                ecx_2 = *(arg1 + 0xc)
                *(i + ecx_2) = fconvert.s(fconvert.t(var_30))
                i = &i[1]
            while (i s< 0xa4)
            
            if (var_18 u>= 0x10)
                int32_t var_48_5 = var_2c.d
                sub_6b4d5b()
            
            result = 1
        else
        label_4cbd98:
            sub_401110(&var_2c)
            result = 0
    else if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_48_2 = var_2c.d
        sub_6b4d5b()
        result = 0
else
label_4cbd39:
    
    if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_48_1 = var_2c.d
        sub_6b4d5b()
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
