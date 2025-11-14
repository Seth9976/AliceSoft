// 函数: sub_697810
// 地址: 0x697810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720d8a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
int32_t __saved_edi
int32_t var_90 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78 = 0
int32_t* var_68_1
int32_t* eax_8

if (arg1 != 0)
    var_68_1 = arg1 + 0x38
    int32_t eax_7 = *(arg1 + 0x38) - *(arg1 + 0x3c)
    int32_t var_6c = eax_7
    var_7c = 0
    eax_8 = &var_6c
    
    if (eax_7 s<= 0)
        eax_8 = &var_7c

int32_t result

if (arg1 == 0 || *eax_8 == 0)
    result = 0
else
    void* ecx_1 = *(arg2 + 0x1c)
    var_7c = *(arg1 + 0x2c) - *(arg1 + 0x34) - *(arg1 + 0x30)
    var_7c = fconvert.s(float.t(var_7c))
    struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** edi_1
    
    if (ecx_1 == 0)
        edi_1 = nullptr
    else
        edi_1 = sub_414610(ecx_1)
    
    sub_675df0(edi_1, arg1 + 0xa0)
    char var_64
    int32_t var_50
    char var_2c
    char* eax_13
    int32_t ebx_1
    
    if (edi_1 == 0)
        eax_13 = &var_2c
        sub_402be0(eax_13, 0x72cd3b)
        int32_t var_4_1 = 1
        ebx_1 = 2
    else
        var_50 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        sub_401180(&var_64, 0xffffffff, &edi_1[0x22], 0)
        eax_13 = &var_64
        int32_t var_4 = 0
        ebx_1 = 1
    
    int32_t var_78_1 = ebx_1
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_401180(&var_48, 0xffffffff, eax_13, 0)
    int32_t var_4_2 = 2
    
    if ((ebx_1.b & 2) != 0)
        ebx_1 &= 0xfffffffd
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_94_2 = var_2c.d
            sub_6b4d5b()
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
    
    var_4_2.b = 4
    
    if ((ebx_1.b & 1) != 0)
        if (var_50 u>= 0x10)
            int32_t var_94_3 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_1 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
    
    int32_t result_1
    
    if (sub_699780(&var_48) != 0)
        result_1 = sub_699900(&var_48)
    else
        result_1 = sub_70c710(fconvert.t(var_7c) / float.t(*var_68_1) * float.t(*(arg1 + 0x3c)))
        int32_t result_2 = *(arg2 + 0x24)
        
        if (result_1 s< result_2)
            result_1 = result_2
    
    if (var_34_1 u>= 0x10)
        int32_t var_94_6 = var_48.d
        sub_6b4d5b()
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return result
