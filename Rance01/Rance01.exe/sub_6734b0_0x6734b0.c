// 函数: sub_6734b0
// 地址: 0x6734b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720f6c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_84 = arg4
int128_t* result

if (arg3 != 0 && arg4 != 0)
    char* eax_5 = arg3
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    int32_t var_4 = 0
    char var_2c
    sub_401940(&var_2c, sub_401270(&var_64, eax_5 - &eax_5[1], arg3), &var_64)
    char* var_9c_2 = &var_2c
    var_4.b = 1
    char var_48
    sub_402c60(&var_48, 0x730034, nullptr)
    var_4.b = 2
    sub_401ef0(arg1 + 0x30, &var_48)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_9c_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_9c_4 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_50_1 u>= 0x10)
        int32_t var_9c_5 = var_64.d
        sub_6b4d5b()
    
    int128_t* esi_4 = var_84
    char* eax_10 = esi_4
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    char var_80 = 0
    char i_1
    
    do
        i_1 = *eax_10
        eax_10 = &eax_10[1]
    while (i_1 != 0)
    sub_401270(&var_80, eax_10 - &eax_10[1], esi_4)
    int32_t var_4_2 = 3
    sub_401ef0(arg1 + 0x4c, &var_80)
    int32_t var_4_3 = 0xffffffff
    
    if (var_6c_1 u>= 0x10)
        int32_t var_9c_7 = var_80.d
        sub_6b4d5b()
    
    int32_t* ecx_3 = *(arg1 + 0xc)
    int32_t var_6c_2 = 0xf
    int32_t var_70_2 = 0
    var_80 = 0
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))(eax_4)
        *(arg1 + 0xc) = 0
    
    int128_t* eax_14 = operator new(0x70)
    var_84 = eax_14
    int32_t var_4_4 = 4
    struct IEXFile::exfile::CEXFile::VTable** eax_15
    
    if (eax_14 == 0)
        eax_15 = nullptr
    else
        eax_15 = sub_66bdf0(eax_14)
    
    int32_t var_4_5 = 0xffffffff
    void* edx_4 = arg1 + 0x30
    *(arg1 + 0xc) = eax_15
    
    if (*(edx_4 + 0x14) u>= 0x10)
        edx_4 = *edx_4
    
    if ((*eax_15)->vFunc_2(edx_4).b == 0)
        result.b = 0
    else if (arg2 == 0)
        result.b = 1
    else
        int32_t* ecx_5 = *(arg1 + 0x10)
        
        if (ecx_5 != 0)
            (*(*ecx_5 + 4))(eax_4)
            *(arg1 + 0x10) = 0
        
        int128_t* eax_18 = operator new(0x70)
        var_84 = eax_18
        int32_t var_4_6 = 5
        struct IEXFile::exfile::CEXFile::VTable** eax_19
        
        if (eax_18 == 0)
            eax_19 = nullptr
        else
            eax_19 = sub_66bdf0(eax_18)
        
        int32_t var_4_7 = 0xffffffff
        *(arg1 + 0x10) = eax_19
        void* ecx_6
        
        if (*(arg1 + 0x60) u< 0x10)
            ecx_6 = arg1 + 0x4c
        else
            ecx_6 = *(arg1 + 0x4c)
        
        if ((*eax_19)->vFunc_3(ecx_6).b == 0)
            result.b = 0
        else
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
