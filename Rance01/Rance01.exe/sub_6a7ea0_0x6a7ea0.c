// 函数: sub_6a7ea0
// 地址: 0x6a7ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720c81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_78
int32_t eax_2 = data_78c474 ^ &var_78
int32_t __saved_edi
int32_t var_8c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_6c = 0
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
char* var_68 = arg2
*arg2 = 0
sub_401270(arg2, nullptr, 0x72ccaa)
void* ecx = arg1
int32_t var_4_1 = 0
int32_t var_6c_1 = 1
int32_t ebx_3 = (*(arg1 + 0x14) - *(ecx + 0x10)) s>> 2
int32_t eax_5 = ebx_3 - 1
var_78 = eax_5

if (ebx_3 - 1 s>= 0)
    while (true)
        int32_t var_70_1
        
        if ((*(ecx + 0x14) - *(ecx + 0x10)) s>> 2 s> eax_5)
            var_70_1 = *(*(ecx + 0x10) + (eax_5 << 2))
        else
            var_70_1 = 0xffffffff
        
        void* const ecx_2 = &data_72d084
        
        if (eax_5 == ebx_3 - 1)
            ecx_2 = &data_72ccab
        
        char* eax_6 = ecx_2
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        int32_t edx_3
        
        do
            edx_3.b = *eax_6
            eax_6 = &eax_6[1]
        while (edx_3.b != 0)
        sub_401270(&var_48, eax_6 - &eax_6[1], ecx_2)
        int32_t var_4_2 = 1
        char var_64
        sub_6a79f0(var_70_1, &var_64)
        var_4_2.b = 2
        var_4_2.b = 3
        int32_t var_2c
        sub_402000(arg2, sub_426250(&var_2c, &var_48, &var_64), 0, 0xffffffff)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_90_3 = var_2c
            sub_6b4d5b()
        
        int32_t var_50
        
        if (var_50 u>= 0x10)
            int32_t var_90_4 = var_64.d
            sub_6b4d5b()
        
        var_4_2.b = 0
        var_50 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        
        if (var_34_1 u>= 0x10)
            int32_t var_90_5 = var_48.d
            sub_6b4d5b()
        
        int32_t temp2_1 = var_78
        var_78 -= 1
        
        if (temp2_1 - 1 s< 0)
            break
        
        eax_5 = var_78
        ecx = arg1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_78)
return arg2
