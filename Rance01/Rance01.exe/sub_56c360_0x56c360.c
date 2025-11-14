// 函数: sub_56c360
// 地址: 0x56c360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ea2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
bool var_9c
int32_t eax_2 = data_78c474 ^ &var_9c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x44) == 0 || *(arg1 + 0x48) == 0)
    result.b = 0
else
    struct fileimage::CFileImageMaker::VTable* const var_94_1 =
        &fileimage::CFileImageMaker::`vftable'
    struct _EXCEPTION_REGISTRATION_RECORD** result_3 = nullptr
    int32_t var_8c_1 = 0
    int32_t var_88_1 = 0
    int32_t var_4 = 0
    int32_t* esi_1 = &result_3
    var_9c = false
    sub_54e400(&var_9c, esi_1)
    var_9c = *(arg1 + 0x14)
    sub_54e400(&var_9c, esi_1)
    int32_t i_1 = 0
    
    if (*(arg1 + 0x14) s> 0)
        char* edi_1 = nullptr
        int32_t i
        
        do
            int32_t* esi_2 = &result_3
            var_9c = edi_1[*(arg1 + 4)]
            sub_54e400(&var_9c, esi_2)
            var_9c = edi_1[*(arg1 + 4) + 8] != 0
            sub_54e400(&var_9c, esi_2)
            var_9c = false
            sub_54e400(&var_9c, esi_2)
            i = i_1 + 1
            edi_1 = &edi_1[0x28]
            i_1 = i
        while (i s< *(arg1 + 0x14))
    
    int128_t* esi_3 = (*(**(arg1 + 0x48) + 0x24))(eax_4)
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    char* ecx_7 = esi_3
    int128_t* eax_14
    
    do
        eax_14.b = *ecx_7
        ecx_7 = &ecx_7[1]
    while (eax_14.b != 0)
    sub_401270(&var_48, ecx_7 - (esi_3 + 1), esi_3)
    var_4.b = 1
    int128_t* eax_16
    int32_t* ecx_10
    eax_16, ecx_10 = (*(**(arg1 + 0x44) + 8))(&var_48)
    char var_64
    sub_567130(&var_64, eax_16, ecx_10)
    var_4.b = 3
    
    if (var_34_1 u>= 0x10)
        int32_t var_b4_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    var_4.b = 4
    int32_t* var_80
    char var_2c
    sub_4c1d70(arg1 + 0x28, &var_80, sub_401800(sub_604500(&var_64), &var_64, &var_2c), &var_80)
    var_4.b = 6
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_b4_5 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_6c
    int32_t var_50
    
    if (sub_602070(&var_80, &result_3) != 0)
        if (var_6c u>= 0x10)
            int32_t* var_b4_10 = var_80
            sub_6b4d5b()
        
        int32_t var_6c_2 = 0xf
        int32_t var_70_2 = 0
        var_80.b = 0
        
        if (var_50 u>= 0x10)
            int32_t var_b4_11 = var_64.d
            sub_6b4d5b()
        
        result = result_3
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        
        if (result != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
            sub_6b4d5b()
        
        result.b = 1
    else
        int32_t* eax_24 = var_80
        
        if (var_6c u< 0x10)
            eax_24 = &var_80
        
        int32_t* var_b4_7 = eax_24
        sub_604c90(0x74b67c)
        
        if (var_6c u>= 0x10)
            int32_t* var_b4_8 = var_80
            sub_6b4d5b()
        
        int32_t var_6c_1 = 0xf
        int32_t var_70_1 = 0
        var_80.b = 0
        
        if (var_50 u>= 0x10)
            int32_t var_b4_9 = var_64.d
            sub_6b4d5b()
        
        result = result_3
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        
        if (result != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_9c)
return result
