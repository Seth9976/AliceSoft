// 函数: sub_58c940
// 地址: 0x58c940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719f18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_esi
int32_t var_20 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** arg_8
void** ebx = arg_8
void* ebp = arg3
void** esi = *(ebp + 4)
void** eax_3 = esi[1]
arg1.b = 1
arg3.b = 1

while (*(eax_3 + 0x21) == 0)
    esi = eax_3
    arg1.b = ebx[3] u< eax_3[3]
    arg3.b = arg1.b
    
    if (arg1.b == 0)
        eax_3 = eax_3[2]
    else
        eax_3 = *eax_3

arg_8 = esi

if (arg1.b == 0)
    goto label_58c9d3

if (esi != **(ebp + 4))
    sub_58d1e0(&arg_8)
label_58c9d3:
    
    if (arg_8[3] u>= ebx[3])
        arg3 = &ebx[4]
        int32_t var_4 = 0
        int32_t*** eax_10 = ebx[5]
        sub_4365a0(&ebx[4], &var_10, *eax_10, eax_10)
        int32_t var_24_3 = ebx[5]
        sub_6b4d5b()
        void** var_28_3 = ebx
        sub_6b4d5b()
        *arg2 = arg_8
        arg2[1].b = 0
    else
        void** var_24_1 = ebx
        *arg2 = *sub_58ca50(ebp, &arg_8, arg3.b, esi)
        arg2[1].b = 1
else
    void** var_24 = ebx
    *arg2 = *sub_58ca50(ebp, &arg_8, 1, esi)
    arg2[1].b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
