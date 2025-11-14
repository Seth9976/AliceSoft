// 函数: sub_510ef0
// 地址: 0x510ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7222a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
int32_t var_78 = 0
int32_t var_74 = 0
int32_t var_4 = 0
int32_t* result
int32_t edx

if (sub_510220(arg1, edx, &var_7c) == 0)
label_510f8b:
    int32_t eax_10 = var_7c
    
    if (eax_10 != 0)
        int32_t var_9c_3 = eax_10
        sub_6b4d5b()
    
    result = nullptr
else
    int32_t var_6c = 0
    char* var_68_1 = nullptr
    int32_t var_64_1 = 0
    var_4.b = 1
    
    if (sub_5111b0(arg1, &var_6c) == 0)
        int32_t eax_9 = var_6c
        
        if (eax_9 != 0)
            int32_t var_9c_2 = eax_9
            sub_6b4d5b()
        
        goto label_510f8b
    
    void var_5c
    sub_513410(&var_5c, &var_7c)
    var_4.b = 2
    int32_t* var_9c_5 = arg2
    int128_t* var_58
    sub_50fac0(&var_5c, var_58, var_6c, var_68_1)
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    int32_t esi_2 = arg1 u>> 0x18 & 1
    var_4.b = 3
    char const* const var_9c_6
    
    if (esi_2 == 0)
        var_9c_6 = "vs_2_0"
    else
        if (esi_2 != 1)
            goto label_5110e2
        
        var_9c_6 = "vs_3_0"
    
    sub_401270(&var_4c, 6, var_9c_6)
    int32_t* eax_12 = operator new(0x2c)
    int32_t* ebp_1
    
    if (eax_12 == 0)
        ebp_1 = nullptr
    else
        *eax_12 = 0
        eax_12[1] = 0
        eax_12[2] = 0
        eax_12[9] = 0xf
        eax_12[8] = 0
        eax_12[4].b = 0
        ebp_1 = eax_12
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_401270(&var_30, 2, 0x753cc4)
    var_4.b = 4
    bool cond:1_1 = sub_50fcd0(&var_4c, ebp_1, &var_5c, &var_30) == 0
    var_4.b = 3
    
    if (var_1c_1 u>= 0x10)
        int32_t var_9c_8 = var_30.d
        sub_6b4d5b()
    
    if (cond:1_1 != 0)
        void* eax_14 = &ebp_1[4]
        
        if (ebp_1[9] u>= 0x10)
            eax_14 = *eax_14
        
        void* var_9c_9 = eax_14
        int32_t var_a0_4 = 0x72d98f
        sub_51ddc0(0x753cc8)
        
        if (ebp_1 != 0)
            sub_50fc60(ebp_1)
            int32_t* var_9c_10 = ebp_1
            sub_6b4d5b()
        
        goto label_5110e2
    
    int32_t* result_1 = (*(**arg2 + 0x34))(eax_4)
    
    if (result_1 == 0)
        goto label_5110e2
    
    int32_t ecx_9 = *ebp_1
    
    if ((*(*result_1 + 8))(ecx_9, ebp_1[1] - ecx_9) != 0)
        sub_50fc60(ebp_1)
        int32_t* var_9c_13 = ebp_1
        sub_6b4d5b()
        sub_401110(&var_4c)
        sub_65ab60(&var_5c)
        sub_65ab60(&var_6c)
        sub_65ab60(&var_7c)
        result = result_1
    else
        sub_50fc60(ebp_1)
        int32_t* var_9c_12 = ebp_1
        sub_6b4d5b()
        (*(*result_1 + 4))()
    label_5110e2:
        sub_401110(&var_4c)
        sub_65ab60(&var_5c)
        sub_65ab60(&var_6c)
        sub_65ab60(&var_7c)
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
