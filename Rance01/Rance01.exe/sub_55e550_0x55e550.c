// 函数: sub_55e550
// 地址: 0x55e550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716cb3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sys43vm::CVMFuncList::`vftable'{for `IVMFuncList'}
int32_t var_4 = 0
void* var_14 = &arg1[5]
var_4.b = 1
int32_t* eax_3 = arg1[6]
void var_10
sub_429bc0(&arg1[5], &var_10, *eax_3, eax_3)
int32_t var_2c_1 = arg1[6]
sub_6b4d5b()
int32_t* result = arg1[1]

if (result != 0)
    sub_405780(result, arg1[2])
    int32_t var_2c_2 = arg1[1]
    result = sub_6b4d5b()

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
