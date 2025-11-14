// 函数: sub_692940
// 地址: 0x692940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg1[4]
var_4c = 0

if (ebx != 0)
    int32_t var_4 = 0
    int32_t* var_48
    sub_401350(1, sub_401ec0(arg1, &var_48, 0, 1), 0, arg1)
    int32_t* edx_2 = var_48
    int32_t* ecx = edx_2
    int32_t var_34
    
    if (var_34 u< 0x10)
        ecx = &var_48
    
    int32_t* ecx_1
    
    if (*ecx u>= 0x81)
        ecx_1 = edx_2
        
        if (var_34 u< 0x10)
            ecx_1 = &var_48
    
    int32_t* eax_6
    
    if (*ecx u< 0x81 || *ecx_1 u> 0x9f)
        eax_6 = edx_2
        
        if (var_34 u< 0x10)
            eax_6 = &var_48
    
    if ((*ecx u< 0x81 || *ecx_1 u> 0x9f) && *eax_6 u< 0xe0)
    label_692a6b:
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_401ef0(arg2, &var_48)
        
        if (var_34 u>= 0x10)
            int32_t* var_64_3 = var_48
            sub_6b4d5b()
    else
        if (ebx s>= 2)
            var_4.b = 1
            int32_t var_2c
            int32_t edx_3 = sub_402000(&var_48, sub_401ec0(arg1, &var_2c, 0, 1), 0, 0xffffffff)
            var_4.b = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_64_2 = var_2c
                edx_3 = sub_6b4d5b()
            
            sub_401350(1, edx_3, 0, arg1)
            goto label_692a6b
        
        sub_402be0(arg2, 0x72cfd2)
        
        if (var_34 u>= 0x10)
            int32_t* var_64_1 = var_48
            sub_6b4d5b()
else
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_401270(arg2, nullptr, 0x72cfd1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return arg2
