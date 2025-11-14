// 函数: sub_4e55b0
// 地址: 0x4e55b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718b90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
int32_t eax_5 = arg2[1]
int32_t result
int32_t edi

if (eax_5 == 0)
    void* const var_68_3 = &data_755904
label_4e5624:
    edi = 4
label_4e562d:
    sub_401270(&var_48, edi)
    char* ecx_1 = var_48.d
    float var_4c_1 = fconvert.s(fconvert.t(arg2[7]))
    var_50 = fconvert.s(fconvert.t(arg2[6]))
    
    if (var_34 u< 0x10)
        ecx_1 = &var_48
    
    double var_6c_1 = fconvert.d(fconvert.t(var_4c_1))
    double var_74_1 = fconvert.d(fconvert.t(var_50))
    char* var_78_1 = ecx_1
    double var_80_1 = fconvert.d(fconvert.t(arg2[5]))
    double var_88_1 = fconvert.d(fconvert.t(arg2[4]))
    double var_90_1 = fconvert.d(fconvert.t(arg2[3]))
    int32_t var_94_1 = *arg2
    char const* const var_98_1 = "\t\t{ %d, %f, %f, %f, %s, %f, %f }"
    char* eax_9 = sub_4104a0("\t\t{ %d, %f, %f, %f, %s, %f, %f }")
    var_4.b = 1
    int32_t ecx_2 = *(eax_9 + 0x14)
    int32_t esi_1 = *(eax_9 + 0x10)
    char* ebx_1
    
    if (ecx_2 u< 0x10)
        ebx_1 = eax_9
    else
        ebx_1 = *eax_9
    
    if (ecx_2 u>= 0x10)
        eax_9 = *eax_9
    
    float var_68_4 = var_50
    var_6c_1.d = &ebx_1[esi_1]
    var_74_1:4.d = eax_9
    var_74_1.d = *(arg1 + 8)
    sub_4102d0(arg1 + 4, var_74_1, var_6c_1)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_68_5 = var_2c
        sub_6b4d5b()
    
    if (var_34 u>= 0x10)
        int32_t var_68_6 = var_48.d
        sub_6b4d5b()
    
    result.b = 1
else
    if (eax_5 == 1)
        void* const var_68_2 = &data_75590c
        goto label_4e5624
    
    if (eax_5 == 2)
        void* const var_68_1 = &data_755914
        edi = 8
        goto label_4e562d
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
