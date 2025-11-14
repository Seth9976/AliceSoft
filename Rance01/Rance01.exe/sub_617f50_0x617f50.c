// 函数: sub_617f50
// 地址: 0x617f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_713d2d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
int32_t i = arg3
struct dpanalysis::SVarSourceList::VTable** esi = arg4
struct dpanalysis::SVarSourceList::VTable** var_18 = esi
int32_t var_8_1 = 0

while (i u> 0)
    struct dpanalysis::SVarSourceList::VTable* var_2c = &dpanalysis::SVarSourceList::`vftable'
    int32_t var_28 = 0
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = &dpanalysis::SVarSourceList::`vftable'
        sub_6b05e0(&esi[1], &var_28)
    
    var_8_1.b = 0
    result = sub_61b940(&var_2c)
    i -= 1
    esi = &esi[5]
    arg4 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
