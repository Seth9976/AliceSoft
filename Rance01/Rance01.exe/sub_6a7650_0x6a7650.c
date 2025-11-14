// 函数: sub_6a7650
// 地址: 0x6a7650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg2 + 0x130) == 0)
    sub_405410(arg2 + 0x120, &var_6c, *(arg2 + 0x120), *(arg2 + 0x124))
    *(arg2 + 0x11c) = 0
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x66666667, arg1[1] - *arg1)
    int32_t edx_2 = edx_1 s>> 4
    int32_t eax_9 = (edx_2 u>> 0x1f) + edx_2
    void* ecx_3 = nullptr
    
    if (eax_9 s> 0)
        do
            if (ecx_3 == arg3)
                int32_t var_1c_1 = 0
                var_6c = ecx_3
                int32_t var_18_1 = 0xf
                char var_2c = 0
                sub_401270(&var_2c, 0x10, 0x72d1a8)
                int32_t var_4 = 0
                sub_405220(&var_2c, arg2 + 0x120)
                int32_t var_4_1 = 0xffffffff
                
                if (var_18_1 u>= 0x10)
                    int32_t var_84_2 = var_2c.d
                    sub_6b4d5b()
                
                int32_t var_54_1 = 0
                int32_t var_50_1 = 0xf
                char var_64 = 0
                sub_401270(&var_64, 1, 0x72d1bc)
                int32_t var_4_2 = 1
                sub_405220(&var_64, arg2 + 0x120)
                int32_t var_4_3 = 0xffffffff
                
                if (var_50_1 u>= 0x10)
                    int32_t var_84_3 = var_64.d
                    sub_6b4d5b()
                
                void* eax_12 = *arg1 + var_6c * 0x28
                int32_t var_50_2 = 0xf
                int32_t var_54_2 = 0
                var_64 = 0
                char var_48
                sub_6a7ea0(eax_12, &var_48)
                int32_t var_4_4 = 2
                sub_405220(&var_48, arg2 + 0x120)
                int32_t var_38
                *(arg2 + 0x11c) += var_38
                int32_t var_4_5 = 0xffffffff
                int32_t var_34
                
                if (var_34 u>= 0x10)
                    int32_t var_84_5 = var_48.d
                    sub_6b4d5b()
                
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                var_48 = 0
                break
            
            ecx_3 += 1
        while (ecx_3 s< eax_9)
    
    sub_6a7560(arg2)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
