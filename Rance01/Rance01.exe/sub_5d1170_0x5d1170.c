// 函数: sub_5d1170
// 地址: 0x5d1170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct commonsystemdata::CCommonSystemData::VTable** var_10 = arg1
int32_t var_14 = data_78c474 ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_797d88

if (ecx != 0)
    (**ecx)(1)
    data_797d88 = 0

struct commonsystemdata::CCommonSystemData::VTable** eax_4 = operator new(0x30)
var_10 = eax_4
int32_t var_4 = 0
struct commonsystemdata::CCommonSystemData::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_5ce350(eax_4)

data_797d88 = result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
