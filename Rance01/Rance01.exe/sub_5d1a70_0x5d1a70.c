// 函数: sub_5d1a70
// 地址: 0x5d1a70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct fileimage::CFileImageMaker::VTable* var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t __saved_edi
int32_t var_58 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = data_797d90
int32_t result

if (*(ebp + 0x28) == *(ebp + 0x2c) || *(ebp + 0x14) == 0)
    result.b = 1
else
    var_44 = &fileimage::CFileImageMaker::`vftable'
    int32_t var_40 = 0
    int128_t* var_3c_1 = nullptr
    int32_t var_38_1 = 0
    int32_t var_4 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_4.b = 1
    sub_410280(&var_2c, sub_401270(&var_2c, 3, 0x7371b4), &var_44)
    var_4.b = 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_5c_1 = var_2c.d
        sub_6b4d5b()
    
    sub_410280(ebp + 0x38, sub_4101f0(&var_44, 0), &var_44)
    sub_4101f0(&var_44, *(ebp + 0x20))
    sub_4101f0(&var_44, *(ebp + 0x2c) - *(ebp + 0x28))
    int128_t* ecx_4 = *(ebp + 0x28)
    void* eax_13 = *(ebp + 0x2c) - ecx_4
    
    if (ecx_4 != 0 && eax_13 s> 0)
        int32_t var_30
        int32_t var_5c_4 = var_30
        sub_4102d0(&var_40, var_3c_1, ecx_4, eax_13 + ecx_4)
    
    void* esi_3 = ebp + 4
    
    if (sub_602070(esi_3, &var_40) != 0)
        sub_4101c0(&var_44)
        result.b = 1
    else
        if (*(esi_3 + 0x14) u>= 0x10)
            esi_3 = *esi_3
        
        void* var_5c_6 = esi_3
        sub_604c90(0x73724c)
        sub_4101c0(&var_44)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
