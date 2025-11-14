// 函数: sub_4265e0
// 地址: 0x4265e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_797d44

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

if (*(eax_3 + 0x1c) == 0)
    int16_t* eax_4 = operator new(0x40)
    int16_t* var_10_1 = eax_4
    int32_t var_4 = 0
    
    if (eax_4 != 0)
        int16_t* eax_5 = sub_425860(eax_4)
        *(eax_3 + 0x1c) = eax_5
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    *(eax_3 + 0x1c) = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return *(eax_3 + 0x1c)
