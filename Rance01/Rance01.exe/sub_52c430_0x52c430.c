// 函数: sub_52c430
// 地址: 0x52c430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = sub_52cc80(arg2, arg1)
int32_t* i_1 = *arg1

if (i_1 != arg1[1])
    int32_t* i = i_1
    
    do
        int32_t ecx_4 = (i - *arg1) s/ 0x38
        int32_t eax_7
        int32_t edx_6
        edx_6:eax_7 = muls.dp.d(0x6bca1af3, *(arg3 + 0x70) - *(arg3 + 0x6c))
        int32_t edx_7 = edx_6 s>> 5
        int32_t eax_12
        
        if (ecx_4 u< (edx_7 u>> 0x1f) + edx_7)
            eax_12 = ecx_4 * 0x4c
        
        if (ecx_4 u>= (edx_7 u>> 0x1f) + edx_7 || eax_12 == neg.d(*(arg3 + 0x6c)))
            int32_t var_48_1 = ecx_4
            int32_t var_4 = 0
            result = sub_401180(i, 0xffffffff, sub_4104a0(0x751d38), 0)
            int32_t var_4_1 = 0xffffffff
            char var_2c
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_48_2 = var_2c.d
                result = sub_6b4d5b()
            
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
        else
            result = sub_401180(i, 0xffffffff, eax_12 + *(arg3 + 0x6c) + 4, 0)
        
        i = &i[0xe]
    while (i != arg1[1])

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
