// 函数: sub_6bcbfc
// 地址: 0x6bcbfc
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x7711a8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_9 = data_78c474
int32_t var_8_3 = 0x7711a8 ^ eax_9
int32_t __saved_ebp
int32_t var_30 = eax_9 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_6bcc08
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_3 = ((arg1 & 0x1f) << 6) + (&data_798100)[arg1 s>> 5]
int32_t result = 1

if (*(esi_3 + 8) == 0)
    sub_6bf5de(0xa)
    int32_t var_8_1 = 0
    
    if (*(esi_3 + 8) == 0)
        if (InitializeCriticalSectionAndSpinCount(esi_3 + 0xc, 0xfa0) == 0)
            result = 0
        
        *(esi_3 + 8) += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_6bcc92()

if (result != 0)
    EnterCriticalSection((&data_798100)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bcc8c
return result
