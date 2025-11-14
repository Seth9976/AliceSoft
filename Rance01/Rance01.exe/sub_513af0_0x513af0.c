// 函数: sub_513af0
// 地址: 0x513af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f2ea
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** arg_4
void** ebp = arg_4
int32_t var_18 = 0
int32_t* eax_3 = operator new(0x30)
void** var_30

if (eax_3 == 0)
    var_30 = nullptr
    struct std::exception::VTable* var_2c
    std::exception::exception(&var_2c, &var_30)
    var_2c = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_2c, 0x771508)
    noreturn

*eax_3 = eax_3
eax_3[1] = eax_3
eax_3[2] = eax_3
eax_3[0xb].b = 1
*(eax_3 + 0x2d) = 1
int32_t var_4 = 0
void var_20
sub_5135f0(&var_20)
void** eax_8 = sub_429b30(&var_20, arg1)
int32_t* ecx_1 = eax_3
arg_4 = eax_8
void*** eax_11

if (eax_8 == ecx_1)
    var_30 = ecx_1
    eax_11 = &var_30
else
    ecx_1 = eax_3
    
    if (sub_405dd0(&eax_8[3], arg1) != 0)
        var_30 = ecx_1
        eax_11 = &var_30
    else
        eax_11 = &arg_4

void** edx_2 = *eax_11
int32_t result

if (edx_2 != ecx_1)
    int32_t eax_14 = 0
    
    if (ebp != 0x14)
        eax_14.b = ebp == 0x1e
    
    int32_t result_1 = (eax_14 | 0xc) << 0x18 | edx_2[0xa]
    int32_t var_4_2 = 2
    sub_429bc0(&var_20, &arg_4, *ecx_1, ecx_1)
    int32_t* var_4c_5 = eax_3
    sub_6b4d5b()
    result = result_1
else
    int32_t var_4_1 = 1
    sub_429bc0(&var_20, &arg_4, *ecx_1, ecx_1)
    int32_t* var_4c_3 = eax_3
    sub_6b4d5b()
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
