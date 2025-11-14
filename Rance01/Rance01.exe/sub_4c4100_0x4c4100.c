// 函数: sub_4c4100
// 地址: 0x4c4100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CLightParamList::VTable** var_10 = arg1
int32_t var_14 = data_78c474 ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg2 + 0x264) == 0)
    struct sealengine::CLightParamList::VTable** eax_3 = operator new(0x1c)
    var_10 = eax_3
    int32_t var_4 = 0
    
    if (eax_3 == 0)
        result = nullptr
    else
        result = sub_4cb5b0(eax_3)
    
    *(arg2 + 0x264) = result

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
