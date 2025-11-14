// 函数: sub_60b070
// 地址: 0x60b070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716245
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct IMemory::dpanalysis::CMemory::VTable** result = arg5
void* i = arg3
struct IMemory::dpanalysis::CMemory::VTable** result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0x50)
    var_8_1.b = 1
    
    if (result != 0)
        sub_60b1a0(i, result)
    
    result = &result[0x14]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
