// 函数: sub_5ca400
// 地址: 0x5ca400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable*** ebp = data_797d7c
bool result = sub_5ca700(ebp)

if (result != 0)
    struct fileimage::CFileImageMaker::VTable** eax_6 = operator new(0x14)
    
    if (eax_6 == 0)
        eax_6 = nullptr
    else
        *eax_6 = &fileimage::CFileImageMaker::`vftable'
        eax_6[1] = 0
        eax_6[2] = 0
        eax_6[3] = 0
    
    *ebp = eax_6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401270(&var_2c, 3, 0x7379ec)
    int32_t var_4 = 0
    struct fileimage::CFileImageMaker::VTable** eax_7 = *ebp
    char* edx_1 = var_2c.d
    char* edi_1 = edx_1
    
    if (var_18_1 u< 0x10)
        edi_1 = &var_2c
        edx_1 = &var_2c
    
    int32_t* var_4c_1 = arg1
    sub_4102d0(&eax_7[1], eax_7[2], edx_1, &edi_1[var_1c_1])
    char var_31 = 0
    sub_54e400(&var_31, &eax_7[1])
    int32_t var_4_1 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        int32_t var_4c_2 = var_2c.d
        sub_6b4d5b()
    
    struct fileimage::CFileImageMaker::VTable** eax_10 = *ebp
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_4101f0(eax_10, 0)
    int128_t* esi_4 = (**arg1)(eax_4)
    char* ecx_4 = esi_4
    int128_t* eax_12
    
    do
        eax_12.b = *ecx_4
        ecx_4 = &ecx_4[1]
    while (eax_12.b != 0)
    sub_401270(&ebp[7], ecx_4 - &ecx_4[1], esi_4)
    result = true
    ebp[6].b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
