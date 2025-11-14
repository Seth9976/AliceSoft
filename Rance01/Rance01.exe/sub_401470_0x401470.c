// 函数: sub_401470
// 地址: 0x401470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7137b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_38
char* result_1 = arg1
int128_t* esi_1 = arg2 | 0xf

if (esi_1 u<= 0xfffffffe)
    int32_t ebx_1 = *(result_1 + 0x14)
    uint32_t ecx_2 = ebx_1 u>> 1
    
    if (ecx_2 u> esi_1 u/ 3)
        esi_1 = ecx_2 + ebx_1
        
        if (ebx_1 u> 0xfffffffe - ecx_2)
            esi_1 = 0xfffffffe
else
    esi_1 = arg2

int128_t* result = nullptr
int32_t var_8_1 = 0

if (esi_1 + 1 u> 0)
    if (esi_1 + 1 u<= 0xffffffff)
        result = operator new(esi_1 + 1)
    
    if (esi_1 + 1 u> 0xffffffff || result == 0)
        int32_t var_18 = 0
        struct std::exception::VTable* var_28
        std::exception::exception(&var_28, &var_18)
        var_28 = &std::bad_alloc::`vftable'{for `std::exception'}
        sub_6b77db(&var_28, 0x771508)
        noreturn

if (arg3 != 0)
    char* result_2
    
    if (*(result_1 + 0x14) u< 0x10)
        result_2 = result_1
    else
        result_2 = *result_1
    
    sub_6c02a0(result, result_2, arg3)

if (*(result_1 + 0x14) u>= 0x10)
    int32_t var_3c_4 = *result_1
    sub_6b4d5b()

*result_1 = 0
*result_1 = result
*(result_1 + 0x14) = esi_1
*(result_1 + 0x10) = arg3

if (esi_1 u>= 0x10)
    result_1 = result

*(result_1 + arg3) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
