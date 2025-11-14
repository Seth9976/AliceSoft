// 函数: sub_562b10
// 地址: 0x562b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IGraphEngine::graphengine::CGraphEngine::VTable** var_10 = arg1
int32_t eax_2 = data_78c474 ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg2 + 0xc) == 0)
    struct IGraphEngine::graphengine::CGraphEngine::VTable** eax_3 = operator new(0x1ec)
    var_10 = eax_3
    int32_t var_4 = 0
    struct IGraphEngine::graphengine::CGraphEngine::VTable** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_588600(eax_3)
    
    int32_t var_4_1 = 0xffffffff
    int32_t ecx = *(arg2 + 4)
    *(arg2 + 0xc) = eax_4
    eax_4[3] = ecx
    eax_4[4] = arg3
    *(*(arg2 + 0xc) + 0x1d8) = *(arg2 + 0x10)

(***(arg2 + 0xc))(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return *(arg2 + 0xc)
