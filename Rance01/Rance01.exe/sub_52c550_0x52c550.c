// 函数: sub_52c550
// 地址: 0x52c550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f1c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_esi
int32_t var_84 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg2 + 0x10)
int32_t ebx_1 = arg3 << 4
void* eax_5 = esi[arg3 * 4 + 1]
void* ecx = esi[arg3 * 4]
void* esi_1 = &esi[arg3 * 4]
void* var_70 = arg2

if (ecx != eax_5)
    int32_t var_68
    int32_t var_88_1 = var_68
    void* eax_6 = sub_52d700(eax_5, var_68, ecx, eax_5)
    int32_t var_90_1 = var_68
    sub_52d7c0(eax_6, *(esi_1 + 4))
    arg2 = var_70
    *(esi_1 + 4) = eax_6

sub_52cc80(arg4, *(arg2 + 0x10) + ebx_1)
int32_t edx_2 = *(var_70 + 0x10)
int32_t result_2 = *(ebx_1 + edx_2)
int32_t ebx_2 = *(ebx_1 + edx_2 + 4)
int32_t result_1 = result_2
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
int32_t var_4 = 0
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = muls.dp.d(0x2aaaaaab, *(arg5 + 0xb0) - *(arg5 + 0xac))
int32_t edx_4 = edx_3 s>> 3
int32_t result = (edx_4 u>> 0x1f) + edx_4

if (arg3 u< result)
    result = sub_401180(&var_64, 0xffffffff, arg3 * 0x30 + *(arg5 + 0xac), 0)

if (result_2 != ebx_2)
    int32_t ecx_6 = 0
    int32_t var_6c_2 = 0
    
    do
        int32_t ecx_9 = ecx_6 s/ 0x38
        int32_t eax_16
        int32_t edx_10
        edx_10:eax_16 = muls.dp.d(0x2aaaaaab, *(arg5 + 0xb0) - *(arg5 + 0xac))
        int32_t edx_11 = edx_10 s>> 3
        int32_t var_2c
        int32_t var_18
        
        if (arg3 u>= (edx_11 u>> 0x1f) + edx_11)
        label_52c761:
            int32_t var_88_5 = ecx_9
            int32_t var_8c_5 = arg3
            var_4.b = 3
            sub_401180(result_1, 0xffffffff, sub_4104a0("HLL[%d, %d]"), 0)
            var_4.b = 0
            
            if (var_18 u>= 0x10)
                int32_t var_88_6 = var_2c
                sub_6b4d5b()
        else
            int32_t eax_20 = *(arg5 + 0xac)
            int32_t edx_13 = arg3 * 6
            
            if (ecx_9 u>= (*(eax_20 + (edx_13 << 3) + 0x20) - *(eax_20 + (edx_13 << 3) + 0x1c))
                    s/ 0x38)
                goto label_52c761
            
            void* esi_6 = *(eax_20 + (edx_13 << 3) + 0x1c) + ecx_9 * 0x38
            
            if (esi_6 == 0)
                goto label_52c761
            
            var_4.b = 1
            var_4.b = 2
            char var_48
            sub_401180(result_1, 0xffffffff, 
                sub_4c1d70(esi_6 + 4, &var_48, sub_405c90(&var_2c, &var_64, ."), &var_48), 0)
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_88_3 = var_48.d
                sub_6b4d5b()
            
            var_4.b = 0
            var_34 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            
            if (var_18 u>= 0x10)
                int32_t var_88_4 = var_2c
                sub_6b4d5b()
        result = result_1 + 0x38
        ecx_6 = var_6c_2 + 0x38
        result_1 = result
        var_6c_2 = ecx_6
    while (result != ebx_2)

if (var_50 u>= 0x10)
    int32_t var_88_7 = var_64.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result
