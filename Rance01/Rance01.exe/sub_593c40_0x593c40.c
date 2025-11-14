// 函数: sub_593c40
// 地址: 0x593c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72075b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebx = arg_4
struct IMusicBuffer::kiwi::CDummyMusicBuffer::VTable** result = nullptr
int32_t arg_8

if (arg_8 s<= 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

EnterCriticalSection(*ebx)
sub_42e070(&ebx[1], &arg_4, &arg_8)
int32_t* ecx_3 = arg_4

if (ecx_3 == ebx[2])
    int32_t* eax_6 = operator new(0xa8)
    arg_4 = eax_6
    int32_t var_4 = 0
    
    if (eax_6 != 0)
        result = sub_5927e0(arg1, arg2, eax_6)
    
    int32_t var_4_1 = 0xffffffff
    *sub_5cc1d0(&ebx[1], &arg_8) = result
else
    result = ecx_3[4]

LeaveCriticalSection(*ebx)
fsbase->NtTib.ExceptionList = ExceptionList
return result
