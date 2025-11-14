// 函数: sub_425150
// 地址: 0x425150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711eeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* ebp = arg_8
int32_t* eax_3 = ebp[2]
int32_t* edi = nullptr
var_10 = 0

if ((*(*eax_3 + 0xc))(eax_3, &arg2[1], &var_10, 0) s>= 0)
    int32_t* eax_6 = operator new(0x24)
    arg2 = eax_6
    int32_t var_4 = 0
    
    if (eax_6 != 0)
        *eax_6 = var_10
        arg_8 = nullptr
        eax_6[1] = 0
        eax_6[2] = 0
        eax_6[3] = 0
        sub_4257e0(&eax_6[1], 0x25, &arg_8)
        long double x87_r7_1 = float.t(0)
        eax_6[5] = fconvert.s(x87_r7_1)
        edi = eax_6
        eax_6[6] = fconvert.s(x87_r7_1)
        eax_6[7] = fconvert.s(x87_r7_1)
        eax_6[8] = fconvert.s(x87_r7_1)
    
    int32_t var_4_1 = 0xffffffff
    arg_8 = edi
    sub_61b5a0(&arg_8, &ebp[4])

fsbase->NtTib.ExceptionList = ExceptionList
return 1
