// 函数: sub_4020e0
// 地址: 0x4020e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7182b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebp = arg2
arg2 = nullptr
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
int32_t var_4 = 0
int32_t edi = arg1[4]
int128_t* eax_4 = ebp[4] + 1
arg2 = 1

if (edi u<= eax_4 && arg1[5] != eax_4 && sub_4013c0(arg1, eax_4, 1) != 0)
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = edi
    int32_t* eax_7
    
    if (cond:0_1)
        eax_7 = arg1
    else
        eax_7 = *arg1
    
    *(eax_7 + edi) = 0

sub_402000(arg1, ebp, 0, 0xffffffff)
sub_401f60(arg1, 0x5c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
