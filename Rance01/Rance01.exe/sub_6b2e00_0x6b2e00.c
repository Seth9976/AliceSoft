// 函数: sub_6b2e00
// 地址: 0x6b2e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722cdd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0

if (*(arg1 + 8) != 0)
    int32_t eax_3 = *(arg1 + 0xc)
    
    if (eax_3 == 0)
        if (sub_6b2dd0(arg1 + 0x10) != 0)
            *(arg1 + 8) = 0
    else if (eax_3 == 1)
        ChangeDisplaySettingsA(nullptr, 0)
        *(arg1 + 8) = 0
    else if (eax_3 == 2)
        *(arg1 + 8) = 0

int32_t var_4_1 = 0xffffffff
int32_t result = sub_6b29b0(arg1 + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
return result
