// 函数: sub_426250
// 地址: 0x426250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebp = arg3
arg3 = nullptr
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
int32_t var_4 = 0
int128_t* eax_5 = arg2[4] + ebp[4]
int32_t edi = arg1[4]
arg3 = 1

if (edi u<= eax_5 && arg1[5] != eax_5 && sub_4013c0(arg1, eax_5, 1) != 0)
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = edi
    int32_t* eax_8
    
    if (cond:0_1)
        eax_8 = arg1
    else
        eax_8 = *arg1
    
    *(eax_8 + edi) = 0

sub_402000(arg1, arg2, 0, 0xffffffff)
sub_402000(arg1, ebp, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
