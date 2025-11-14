// 函数: sub_6b54b3
// 地址: 0x6b54b3
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x770f50
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = data_78c474
int32_t var_8_3 = 0x770f50 ^ eax_2
int32_t __saved_ebp
int32_t var_30 = eax_2 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_6b54bf
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
arg1 += arg2 * arg3
int32_t var_8_1 = 0

while (true)
    int32_t temp1_1 = arg3
    arg3 -= 1
    
    if (temp1_1 - 1 s< 0)
        break
    
    arg1 -= arg2
    arg4()

int32_t var_20_1 = 1
int32_t var_8_2 = 0xfffffffe
int32_t result = sub_6b54fe(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b54fb
return result
