// 函数: sub_692320
// 地址: 0x692320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718c39
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg2
char ebx = 0
int32_t var_4 = 0
arg2 = nullptr
arg1[5] = 0xf
arg1[4] = 0
int32_t edi = 0
*arg1 = 0
sub_401270(arg1, nullptr, 0x72cfb1)
int32_t var_4_1 = 0
int32_t eax_3 = ebp[4]
arg2 = 1

if (eax_3 s> 0)
    do
        int32_t* eax_4
        
        if (ebp[5] u< 0x10)
            eax_4 = ebp
        else
            eax_4 = *ebp
        
        if (*(eax_4 + edi) == 0xa && ebx != 0xd)
            sub_401f60(arg1, 0xd)
        
        int32_t* eax_5
        
        if (ebp[5] u< 0x10)
            eax_5 = ebp
        else
            eax_5 = *ebp
        
        ebx = *(eax_5 + edi)
        sub_401f60(arg1, ebx)
        edi += 1
    while (edi s< eax_3)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
