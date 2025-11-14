// 函数: sub_4e62a0
// 地址: 0x4e62a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
int32_t eax_5 = arg2[1]
int32_t result
void* const var_6c_1
void* edi

if (eax_5 == 0)
    var_6c_1 = &data_755904
label_4e6314:
    edi = 4
label_4e631d:
    sub_401270(&var_48, edi, var_6c_1)
    char* eax_8 = var_48.d
    
    if (var_34 u< 0x10)
        eax_8 = &var_48
    
    char* var_6c_2 = eax_8
    float var_50_1 = fconvert.s(fconvert.t(arg2[5]))
    float var_4c_1 = fconvert.s(fconvert.t(arg2[4]))
    int32_t ebx_1 = *arg2
    var_54 = fconvert.s(fconvert.t(arg2[3]))
    double var_74_1 = fconvert.d(fconvert.t(var_50_1))
    double var_7c_1 = fconvert.d(fconvert.t(var_4c_1))
    double var_84_1 = fconvert.d(fconvert.t(var_54))
    int32_t var_88_1 = ebx_1
    char const* const var_8c_1 = "\t\t{ %d, %f, %f, %f, %s }"
    char* eax_9 = sub_4104a0("\t\t{ %d, %f, %f, %f, %s }")
    var_4.b = 1
    int32_t ecx_1 = *(eax_9 + 0x14)
    int32_t esi_1 = *(eax_9 + 0x10)
    char* ebx_2
    
    if (ecx_1 u< 0x10)
        ebx_2 = eax_9
    else
        ebx_2 = *eax_9
    
    if (ecx_1 u>= 0x10)
        eax_9 = *eax_9
    
    float var_6c_3 = var_54
    var_74_1:4.d = &ebx_2[esi_1]
    var_74_1.d = eax_9
    var_7c_1:4.d = *(arg1 + 8)
    sub_4102d0(arg1 + 4)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_6c_4 = var_2c
        sub_6b4d5b()
    
    if (var_34 u>= 0x10)
        int32_t var_6c_5 = var_48.d
        sub_6b4d5b()
    
    result.b = 1
else
    if (eax_5 == 1)
        var_6c_1 = &data_75590c
        goto label_4e6314
    
    if (eax_5 == 2)
        var_6c_1 = &data_755914
        edi = 8
        goto label_4e631d
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
