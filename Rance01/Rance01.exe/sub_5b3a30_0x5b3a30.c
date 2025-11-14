// 函数: sub_5b3a30
// 地址: 0x5b3a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_797d70

if (ecx_1 != 0)
    int32_t __saved_esi
    (*(*ecx_1 + 4))(data_78c474 ^ &__saved_esi)
    data_797d70 = 0

struct IDecodeCG2::decodecg::CDecodeCG::VTable** eax_4 = operator new(0xc)
struct IDecodeCG2::decodecg::CDecodeCG::VTable** var_10_1 = eax_4
int32_t var_4 = 0
struct IDecodeCG2::decodecg::CDecodeCG::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_5b19b0(eax_4)

data_797d70 = result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
