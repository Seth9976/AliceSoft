// 函数: sub_6923f0
// 地址: 0x6923f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718469
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg2
int32_t var_4 = 0
int32_t var_10_1 = 0
arg1[5] = 0xf
arg1[4] = 0
int32_t edi = 0
*arg1 = 0
sub_401270(arg1, nullptr, 0x72cfb2)
int32_t var_4_1 = 0
int32_t ebx = ebp[4]
int32_t var_10_2 = 1

if (ebx s> 0)
    do
        int32_t* eax_3
        
        if (ebp[5] u< 0x10)
            eax_3 = ebp
        else
            eax_3 = *ebp
        
        eax_3.b = *(eax_3 + edi)
        arg2.b = eax_3.b
        
        if (eax_3.b s< 0)
            if (eax_3.b == 0x7f)
                goto label_692472
            
            sub_401f60(arg1, arg2.b)
        else if (eax_3.b s< 0x20 || eax_3.b == 0x7f)
        label_692472:
            int32_t eax_4 = sx.d(eax_3.b)
            
            if (eax_4 == 9)
                sub_401f60(arg1, 0x20)
            else if (eax_4 == 0xa)
                sub_401f60(arg1, arg2.b)
        else
            sub_401f60(arg1, arg2.b)
        
        edi += 1
    while (edi s< ebx)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
