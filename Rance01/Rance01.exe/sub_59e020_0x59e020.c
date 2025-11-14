// 函数: sub_59e020
// 地址: 0x59e020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71277b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_50
int32_t edx

if (sub_59e890("1.2.7", edx, &var_50, *(arg1 + 8)) == 0)
    struct IMemory::common::CIMemory::VTable** eax_4 = operator new(0x20)
    struct IMemory::common::CIMemory::VTable** var_54_1 = eax_4
    int32_t var_c_1 = 0
    struct IMemory::common::CIMemory::VTable** result
    
    if (eax_4 == 0)
        result = nullptr
    else
        result = sub_631440(eax_4)
    
    int32_t var_c_2 = 0xffffffff
    bool cond:0_1 = (*result)->vFunc_2(arg3 * 2 + 0x400) == 0
    struct IMemory::common::CIMemory::VTable* eax_8 = *result
    
    if (not(cond:0_1))
        int32_t var_44_1 = eax_8->vFunc_6(eax_2)
        int32_t var_40_1 = (*result)->vFunc_5()
        var_50 = arg2
        int32_t var_4c_1 = arg3
        int32_t eax_14 = sub_59eb30(&var_50)
        
        if (eax_14 != 1 && eax_14 != 0)
            (*result)->vFunc_1()
            sub_59f250(&var_50)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        int32_t var_3c
        
        if ((*result)->vFunc_3(var_3c) != 0)
            if (sub_59f250(&var_50) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            (*result)->vFunc_1()
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        eax_8 = *result
    
    eax_8->vFunc_1(eax_2)
    sub_59f250(&var_50)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
