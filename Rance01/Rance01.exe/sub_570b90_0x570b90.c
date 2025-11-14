// 函数: sub_570b90
// 地址: 0x570b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a0c3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_572ae0(&arg1[0x25])
sub_572ae0(&arg1[0x12])
(*(arg1[2] + 4))(eax_2)
int32_t* ecx_1 = arg1[1]
arg1[0xe] = 0
arg1[0xf] = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[1] = 0

int32_t* ecx_2 = *arg1

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *arg1 = 0

sub_572a60(&arg1[0x25])
sub_572a60(&arg1[0x12])
arg1[2] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
int32_t result = sub_6b2880(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
