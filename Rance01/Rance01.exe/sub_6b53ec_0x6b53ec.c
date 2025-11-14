// 函数: sub_6b53ec
// 地址: 0x6b53ec
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0x770f10
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = data_78c474
int32_t var_8_3 = 0x770f10 ^ eax_2
int32_t __saved_ebp
int32_t var_34 = eax_2 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_1 = &data_6b53f8
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = 0
int32_t var_8_1 = 0

for (int32_t i = 0; i s< arg4; i += 1)
    arg5(arg2)
    arg1 += arg3
    arg2 += arg3

int32_t var_24_1 = 1
int32_t var_8_2 = 0xfffffffe
int32_t result = sub_6b543d(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b543a
return result
