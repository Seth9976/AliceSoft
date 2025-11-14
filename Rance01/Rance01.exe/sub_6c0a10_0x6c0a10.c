// 函数: sub_6c0a10
// 地址: 0x6c0a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xfffffffe
int32_t var_c = 0x771348
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_28 = edi
int32_t eax_1 = data_78c474
int32_t var_c_1 = var_c ^ eax_1
int32_t __saved_ebp
int32_t var_2c = eax_1 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_2c
int32_t var_8_1 = 0

if (sub_6c0980(&__dos_header) != 0)
    void* eax_6 = sub_6c09c0(&__dos_header, arg1 - &__dos_header)
    
    if (eax_6 != 0)
        int32_t var_8_2 = 0xfffffffe
        fsbase->NtTib.ExceptionList = ExceptionList
        return not.d(*(eax_6 + 0x24) u>> 0x1f) & 1

int32_t var_8_3 = 0xfffffffe
fsbase->NtTib.ExceptionList = ExceptionList
return 0
