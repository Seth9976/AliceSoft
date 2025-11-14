// 函数: sub_5c9040
// 地址: 0x5c9040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24

if (arg2 u> 0xfffffff)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s>> 4

if (result u< arg2)
    int32_t result_1 = sub_572360(arg2)
    int32_t var_8_1 = 0
    int32_t* ecx_1 = *arg1
    int32_t result_2 = result_1
    int32_t* var_2c_1 = ecx_1
    sub_4ed4a0(result_1, arg1[1], ecx_1)
    int32_t eax_5 = *arg1
    int32_t edi_3 = arg1[1] - eax_5
    
    if (eax_5 != 0)
        int32_t var_28_1 = eax_5
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = (arg2 << 4) + result
    arg1[1] = (edi_3 & 0xfffffff0) + result
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
