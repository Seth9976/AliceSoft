// 函数: sub_4d6510
// 地址: 0x4d6510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_a8 = 0xffffffff
int32_t (* var_ac)(void* arg1) = sub_715077
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_a4
int32_t eax_2 = data_78c474 ^ &var_a4
int32_t var_cc = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_b4 = &var_cc
char* ebx = arg1
char* var_bc = ebx
int32_t var_a8_1 = 0

while (arg2 u> 0)
    sub_4d0980(&var_a4)
    var_a8_1.b = 2
    
    if (ebx != 0)
        sub_4d80f0(&var_a4, ebx)
    
    var_a8_1.b = 3
    int32_t* j_1
    int32_t* j = j_1
    struct sealengine::CSQT::VTable* const var_6c_1 = &sealengine::CSQT::`vftable'
    int32_t var_78
    
    if (j != 0)
        for (; j != var_78; j = &j[8])
            (**j)(0)
        
        int32_t* j_2 = j_1
        sub_6b4d5b()
    
    result = nullptr
    j_1 = nullptr
    var_78 = 0
    int32_t var_74_1 = 0
    var_a8_1.b = 0
    int32_t var_90
    
    if (var_90 u>= 0x10)
        int32_t var_d0_2 = var_a4
        result = sub_6b4d5b()
    
    arg2 -= 1
    ebx = &ebx[0x9c]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a4)
return result
