// 函数: sub_504b90
// 地址: 0x504b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72075b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebp = arg_4
sub_504cd0(arg2)

if (sub_40d7b0(&arg_4) == 0)
    sub_51ddc0(0x75479c)

data_797d48 = GetCurrentThreadId()
arg2[0x79] = arg1
(**arg1)(eax_2)
arg2[0x7c] = arg3
int32_t* eax_7 = operator new(0x1c)
arg_4 = eax_7
int32_t var_4 = 0
void* const eax_8

if (eax_7 == 0)
    eax_8 = nullptr
else
    eax_8 = sub_4c0bd0(eax_7)

int32_t var_4_1 = 0xffffffff
void* ecx_2 = arg2[0x7c]
arg2[0x7d] = eax_8
*(ecx_2 + 0x64) = eax_8
*(arg2[0x7d] + 0x18) = arg2[0x7c]
int32_t edx_2 = arg2[0x7d]
arg2[0x77] = arg2[0x7c]
arg2[0x78] = edx_2
int32_t* result

if (sub_5058e0(arg2).b != 0)
    result = (*(*ebp + 8))()
    
    if (result != 0)
        result = (**result)(0x75378c)
        arg2[0x7e] = result
        
        if (result != 0)
            arg2[0x7f] = 0
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
