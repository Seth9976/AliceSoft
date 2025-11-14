// 函数: sub_6bc584
// 地址: 0x6bc584
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x771188
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_1 = data_78c474
int32_t var_8_3 = 0x771188 ^ eax_1
int32_t __saved_ebp
int32_t var_30 = eax_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_6bc590
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6bf5de(6)
int32_t var_8_1 = 0
int32_t result = sub_6bc35e(arg1)
int32_t var_8_2 = 0xfffffffe
sub_6bc5bc()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bc5bb
return result
