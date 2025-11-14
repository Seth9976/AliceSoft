// 函数: sub_5ce7d0
// 地址: 0x5ce7d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e118
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = data_797d88
var_64 = edx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(edx + 0x14) == 0)
    result.b = 1
else
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = nullptr
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_c_1 = 0
    int32_t var_4c
    
    if (sub_5ce9a0(&var_4c, edx, &result_2) != 0)
        struct fileimage::CFileImageMaker::VTable* var_60 = &fileimage::CFileImageMaker::`vftable'
        int32_t var_5c = 0
        int128_t* var_58_1 = nullptr
        int32_t var_54_1 = 0
        var_c_1.b = 1
        int32_t var_24_1 = 0xf
        int32_t var_28_1 = 0
        char var_38 = 0
        var_c_1.b = 2
        sub_410280(&var_38, sub_401270(&var_38, 3, 0x737420), &var_60)
        var_c_1.b = 1
        
        if (var_24_1 u>= 0x10)
            int32_t var_78_2 = var_38.d
            sub_6b4d5b()
        
        sub_4101f0(&var_60, 0)
        sub_4101f0(&var_60, var_4c)
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_2
        void* esi_3 = var_44_1 - result_3
        sub_4101f0(&var_60, esi_3)
        
        if (result_3 != var_44_1 && result_3 != 0 && esi_3 s> 0)
            void* var_78_5 = var_64
            sub_4102d0(&var_5c, var_58_1, result_3, esi_3 + result_3)
        
        void* esi_7 = var_64 + 4
        
        if (sub_602070(esi_7, &var_5c) != 0)
            sub_4101c0(&var_60)
            
            if (result_3 != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** result_5 = result_3
                sub_6b4d5b()
            
            result.b = 1
        else
            if (*(esi_7 + 0x14) u>= 0x10)
                esi_7 = *esi_7
            
            void* var_78_7 = esi_7
            sub_604c90(0x737424)
            sub_4101c0(&var_60)
            
            if (result_3 == 0)
                result.b = 0
            else
                struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result_3
                sub_6b4d5b()
                result.b = 0
    else
        result = result_2
        
        if (result != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
