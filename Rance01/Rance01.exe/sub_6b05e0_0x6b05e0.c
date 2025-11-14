// 函数: sub_6b05e0
// 地址: 0x6b05e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t edi_1 = arg2[1] - *arg2
*arg1 = 0
int32_t edi_2 = edi_1 s>> 2
arg1[1] = 0
arg1[2] = 0

if (edi_2 != 0)
    if (edi_2 u> 0x3fffffff)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t* eax_3 = sub_65a1c0(edi_2)
    int32_t var_8_1 = 0
    *arg1 = eax_3
    arg1[1] = eax_3
    arg1[2] = &eax_3[edi_2]
    int32_t ecx_3 = arg2[1]
    int32_t* var_28_1 = arg1
    int32_t var_2c_1 = ecx_3
    int32_t var_30_1 = *arg2
    arg1[1] = sub_59ceb0(eax_3, arg1, ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
