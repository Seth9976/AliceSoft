// 函数: sub_68cf40
// 地址: 0x68cf40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71be16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = operator new(0x34)
int32_t* var_10_1 = ebx
int32_t var_4 = 0
int32_t* arg_4

if (ebx == 0)
    ebx = nullptr
else
    *ebx = arg_4
    ebx[1] = 0x16
    ebx[2] = 0
    ebx[3] = 0
    ebx[4] = 0
    var_4.b = 1
    ebx[0xb] = 0xf
    ebx[0xa] = 0
    ebx[6].b = 0
    sub_401270(&ebx[6], nullptr, 0x72d03a)

int32_t var_4_1 = 0xffffffff
sub_68b750(ebx, arg2)
arg_4 = ebx
int32_t* result = sub_61b5a0(&arg_4, arg1 + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
