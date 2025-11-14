// 函数: sub_5ccb30
// 地址: 0x5ccb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e210
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
int32_t __saved_edi
int32_t var_8c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[7].b == 0)
    result.b = 1
else
    int32_t* var_54
    sub_5cd8d0(arg1, &var_54)
    int32_t var_c_1 = 0
    int32_t var_44
    int32_t var_40
    
    if (var_44 == 0)
    label_5ccbca:
        
        if (var_40 u>= 0x10)
            int32_t* var_90_3 = var_54
            sub_6b4d5b()
        
        result.b = 0
    else
        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = nullptr
        int32_t var_60_1 = 0
        int32_t var_5c_1 = 0
        var_c_1.b = 1
        
        if (sub_5ccd20(arg1, &result_2, &var_7c) == 0)
            result = result_2
            
            if (result != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                sub_6b4d5b()
            
            goto label_5ccbca
        
        struct fileimage::CFileImageMaker::VTable* var_78 = &fileimage::CFileImageMaker::`vftable'
        int32_t var_74 = 0
        int128_t* var_70_1 = nullptr
        int32_t var_6c_1 = 0
        var_c_1.b = 2
        var_c_1.b = 3
        int32_t var_38
        sub_410280(&var_38, sub_402be0(&var_38, 0x73757c), &var_78)
        var_c_1.b = 2
        int32_t var_24
        
        if (var_24 u>= 0x10)
            int32_t var_90_4 = var_38
            sub_6b4d5b()
        
        sub_4101f0(&var_78, 0)
        sub_4101f0(&var_78, var_7c)
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_2
        void* esi_2 = var_60_1 - result_3
        sub_4101f0(&var_78, esi_2)
        
        if (result_3 != var_60_1 && result_3 != 0 && esi_2 s> 0)
            void* var_90_7 = var_7c
            sub_4102d0(&var_74, var_70_1, result_3, result_3 + esi_2)
        
        if (sub_602070(&var_54, &var_74) != 0)
            sub_4101c0(&var_78)
            sub_65ab60(&result_2)
            sub_401110(&var_54)
            result.b = 1
        else
            int32_t* eax_15 = var_54
            
            if (var_40 u< 0x10)
                eax_15 = &var_54
            
            int32_t* var_90_9 = eax_15
            sub_604c90(0x737580)
            sub_4101c0(&var_78)
            sub_65ab60(&result_2)
            sub_401110(&var_54)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return result
