// 函数: sub_6c22b3
// 地址: 0x6c22b3
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0x2c
int32_t var_8 = 0x771408
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_9 = data_78c474
int32_t var_8_5 = 0x771408 ^ eax_9
int32_t __saved_ebp
int32_t var_50 = eax_9 ^ &__saved_ebp
int32_t* var_1c = &var_50
void* const var_54_2 = &data_6c22bf
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = arg3
int32_t var_38 = 0
int32_t var_28 = arg5[-1]
void var_40
int32_t* var_2c = sub_6bb607(&var_40, arg4[6])
int32_t var_30 = __getptd()[0x22]
int32_t var_34 = __getptd()[0x23]
__getptd()[0x22] = arg4
__getptd()[0x23] = arg6
int32_t var_8_1 = 0
arg6 = 1
int32_t var_8_2 = 1
int32_t result = _CallCatchBlock2(arg5, arg7, arg3, arg8, arg9)
int32_t var_8_3 = 0
int32_t var_8_4 = 0xfffffffe
arg6 = 0
sub_6c23d9(&__saved_ebp, arg4, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6c23cd
return result
