// 函数: sub_60a4c0
// 地址: 0x60a4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_713ead
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_88
struct IMemory::dpanalysis::CMemory::VTable** result = arg1
struct IMemory::dpanalysis::CMemory::VTable** result_2 = result
struct IMemory::dpanalysis::CMemory::VTable** result_1 = result
int32_t var_8_1 = 0

while (arg2 u> 0)
    int32_t var_6c
    __builtin_memset(&var_6c, 0, 0x18)
    struct dpanalysis::CMemory::dpanalysis::CTextMemory::VTable* var_70 =
        &dpanalysis::CTextMemory::`vftable'{for `dpanalysis::CMemory'}
    int32_t var_50_1 = 0
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c_1 = 0
    struct IMemory::dpanalysis::CMemory::VTable* const var_30_1 =
        &dpanalysis::CMemory::`vftable'{for `IMemory'}
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    var_8_1.b = 2
    
    if (result != 0)
        sub_60b1a0(&var_70, result)
    
    var_8_1.b = 0
    sub_616c10(&var_70)
    arg2 -= 1
    result_2 = &result_2[0x14]
    result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
