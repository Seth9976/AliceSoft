// 函数: sub_5b1a50
// 地址: 0x5b1a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710e45
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = data_78c474 ^ &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &decodecg::CDecodeCG::`vftable'{for `IDecodeCG2'}
int32_t var_4 = 0
int32_t* ecx = data_797d74

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    ecx = nullptr
    data_797d74 = 0

int32_t var_4_1 = 0xffffffff

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    data_797d74 = 0

struct IDecodeCG2::decodecg::CDecodeCG::VTable** var_14 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
