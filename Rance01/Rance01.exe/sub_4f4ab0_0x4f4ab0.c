// 函数: sub_4f4ab0
// 地址: 0x4f4ab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7224c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = data_78c474 ^ &var_78
int32_t __saved_esi
int32_t var_88 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *arg1
uint32_t result

if (&ecx[4] u> arg1[1])
label_4f4c1a:
    result.b = 0
else
    result = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *arg1 = &ecx[4]
    uint32_t var_74
    
    if (result != 1)
    label_4f4c1a_1:
        result.b = 0
    else if (sub_5546f0(arg1, &var_74).b == 0)
    label_4f4c1a_2:
        result.b = 0
    else
        int32_t ebp_1 = 0
        
        if (var_74 s> 0)
            do
                result = *arg1
                
                if (result + 4 u> arg1[1])
                    goto label_4f4c1a_2
                
                bool cond:0_1 = (((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                    | zx.d(*(result + 1))) << 8 | zx.d(*result)) != 0
                *arg1 = result + 4
                
                if (cond:0_1)
                    goto label_4f4c1a_2
                
                int32_t var_54_1 = 0xf
                int32_t var_58_1 = 0
                char var_68 = 0
                int32_t var_4c_1 = 0xffffffff
                int32_t var_48_1 = 0
                int32_t var_44_1 = 0
                int32_t var_40_1 = 0
                int32_t var_38_1 = 0
                int32_t var_34_1 = 0
                int32_t var_30_1 = 0
                int32_t var_28_1 = 0
                int32_t var_24_1 = 0
                int32_t var_20_1 = 0
                int16_t var_18_1 = 0
                char* var_8c_2 = &var_68
                int32_t var_4 = 0
                char eax_11
                int16_t x87control
                eax_11, x87control = sub_4f38b0(x87control, arg2, arg1)
                
                if (eax_11 == 0)
                    sub_4f3830(&var_68)
                    goto label_4f4c1a_2
                
                int32_t var_4_1 = 0xffffffff
                sub_4f3830(&var_68)
                ebp_1 += 1
            while (ebp_1 s< var_74)
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_78)
return result
