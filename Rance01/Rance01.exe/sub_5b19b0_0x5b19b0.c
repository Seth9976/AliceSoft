// 函数: sub_5b19b0
// 地址: 0x5b19b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710e45
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = data_78c474 ^ &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &decodecg::CDecodeCG::`vftable'{for `IDecodeCG2'}
arg1[1] = 1
int32_t var_4 = 0
char eax_3 = sub_4022d0(0x745ec8, 0x74ad08)
int32_t* ecx_1

if (eax_3 != 0)
    ecx_1 = data_797d64

int32_t eax_5

if (eax_3 == 0 || ecx_1 == 0)
    eax_5 = 0
else
    (**ecx_1)(eax_2)
    eax_5 = data_797d64

data_797d74 = eax_5
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
