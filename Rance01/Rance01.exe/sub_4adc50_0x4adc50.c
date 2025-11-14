// 函数: sub_4adc50
// 地址: 0x4adc50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7134fa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t ecx = arg2[1]
int32_t eax_3

if (edi u< ecx)
    eax_3 = *arg2

int32_t* result

if (edi u>= ecx || eax_3 u> edi)
    if (ecx == arg2[2])
        sub_4ade70(arg2)
    
    result = arg2[1]
    int32_t var_4_1 = 1
else
    if (ecx == arg2[2])
        sub_4ade70(arg2)
    
    edi = *arg2 + (edi - eax_3) s/ 0x48 * 0x48
    result = arg2[1]
    int32_t var_4 = 0

if (result != 0)
    result = sub_4ae170(edi, result)

arg2[1] += 0x48
fsbase->NtTib.ExceptionList = ExceptionList
return result
