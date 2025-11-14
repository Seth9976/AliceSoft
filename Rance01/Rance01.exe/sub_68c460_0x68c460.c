// 函数: sub_68c460
// 地址: 0x68c460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71be16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = operator new(0x34)
int32_t* var_10_1 = eax_3
int32_t* eax_4 = nullptr
int32_t var_4 = 0
int32_t* arg_4

if (eax_3 != 0)
    *eax_3 = arg_4
    eax_3[1] = 7
    eax_3[2] = 0
    eax_3[3] = 0
    eax_3[4] = 0
    var_4.b = 1
    eax_3[0xb] = 0xf
    eax_3[0xa] = 0
    eax_3[6].b = 0
    sub_401270(&eax_3[6], nullptr, 0x72d03a)
    eax_4 = eax_3

int32_t var_4_1 = 0xffffffff
arg_4 = eax_4
int32_t* result = sub_61b5a0(&arg_4, arg1 + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
