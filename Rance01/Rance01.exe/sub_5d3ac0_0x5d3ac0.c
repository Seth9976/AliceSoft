// 函数: sub_5d3ac0
// 地址: 0x5d3ac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMusicBuffer::kiwi::CDirectMusicBuffer::VTable** result = nullptr
int32_t arg_4

if (arg_4 s<= 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

EnterCriticalSection(*arg2)
sub_42e070(&arg2[2], &var_10, &arg_4)
int32_t* ecx_3 = var_10

if (ecx_3 == arg2[3])
    int32_t* eax_6 = operator new(0xb8)
    var_10 = eax_6
    int32_t var_4 = 0
    
    if (eax_6 != 0)
        result = sub_5d21b0(&arg2[1], arg3, eax_6, arg4, arg5)
    
    int32_t var_4_1 = 0xffffffff
    *sub_5cc1d0(&arg2[2], &arg_4) = result
else
    result = ecx_3[4]

LeaveCriticalSection(*arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
