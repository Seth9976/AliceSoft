// 函数: sub_5317b0
// 地址: 0x5317b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg5
int32_t ecx_1 = *(arg3 + 0x18) - *(arg3 + 0x14)
var_40 = arg6
uint32_t result

if (esi s>= ecx_1 s/ 0x18)
label_53193b:
    result.b = 0
else
    if (arg2 != 1)
        int32_t esi_4 = 0
        
        if (sub_550c30(arg4) s> 0)
            do
                result = arg4[1]
                
                if (esi_4 u>= result u>> 2)
                    goto label_53193b
                
                if (result != 0)
                    result = *arg4
                
                void* edx_14 = var_40
                int32_t ecx_10 = *(edx_14 + 8)
                result = *(result + (esi_4 << 2))
                
                if (result u>= (*(edx_14 + 0xc) - ecx_10) s>> 2)
                    goto label_53193b
                
                result = *(ecx_10 + (result << 2))
                
                if (result == 0)
                    goto label_53193b
                
                if (sub_5317b0(arg2 - 1, arg3, result, arg5, var_40).b == 0)
                    goto label_53193b
                
                esi_4 += 1
                result = sub_550c30(arg4)
            while (esi_4 s< result)
    else
        *arg5 = esi + 1
        int32_t* ebp_1 = *(arg3 + 0x14) + esi * 0x18
        int32_t i = 0
        
        if (*ebp_1 s> 0)
            do
                result = arg4[1]
                
                if (i u>= result u>> 2)
                    goto label_53193b
                
                int32_t eax_6
                
                if (result != 0)
                    eax_6 = *arg4
                else
                    eax_6 = 0
                
                int32_t var_3c = *(eax_6 + (i << 2))
                
                switch (arg4[0xd] - 0xe)
                    case 0
                        result = 0xa
                    case 1
                        result = 0xb
                    case 2
                        result = 0xc
                    case 3
                        result = 0xd
                    case 0x10
                        result = 0x1b
                    case 0x24
                        result = 0x2f
                    case 0x34
                        result = 0x3f
                    default
                        result = 0xffffffff
                
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c_1 = 0
                int32_t var_4 = 0
                int32_t ecx_6 = ebp_1[2]
                
                if (i s>= (ebp_1[3] - ecx_6) s>> 2)
                    goto label_53193b
                
                void* ecx_7 = *(ecx_6 + (i << 2))
                void* var_58_1 = var_40
                void* var_30_1 = ecx_7
                
                if (sub_5313f0(arg1, result, &var_3c, ecx_7, arg4[0xe]).b == 0)
                    goto label_53193b
                
                int32_t eax_10 = arg4[1]
                void var_34
                
                if (i u>= eax_10 u>> 2)
                    sub_5356e0(&var_34)
                    goto label_53193b
                
                if (eax_10 != 0)
                    eax_10 = *arg4
                
                *(eax_10 + (i << 2)) = var_3c
                int32_t var_4_1 = 0xffffffff
                sub_5356e0(&var_34)
                i += 1
            while (i s< *ebp_1)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
