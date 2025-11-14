// 函数: sub_428eb0
// 地址: 0x428eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722b61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t ExceptionRecord = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg4
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 == 0)
    result.b = 0
else if (sub_429120(arg2, ebp).b != 0)
    result.b = 0
else if (sub_4291e0(arg2, ebp).b != 0)
    result.b = 0
else if (sub_4292a0(arg2, ebp).b != 0)
    result.b = 0
else if (sub_429360(arg2, ebp).b != 0)
    result.b = 0
else if (sub_429420(arg2, ebp).b != 0)
    result.b = 0
else
    result = *arg5
    void* ebx_2 = arg5[1] - result
    
    if (ebx_2 s<= 0)
        result.b = 0
    else if (arg3 == 2)
        struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = (*(*arg1 + 8))(result, ebx_2)
        
        if (esi_1 == 0)
            result.b = 0
        else
            *sub_513fa0(arg2 + 0x28, ebp) = esi_1
            result.b = 1
    else if (arg3 == 4)
        struct IInterface::partsengine::CFlatStopMotionData::VTable** eax_3 = operator new(0x20)
        arg4 = eax_3
        struct IMemory::common::CIMemory::VTable** esi_2 = nullptr
        int32_t var_4 = 0
        
        if (eax_3 != 0)
            esi_2 = sub_631440(eax_3)
        
        int32_t var_4_1 = 0xffffffff
        (*esi_2)->vFunc_2(ebx_2)
        sub_6c02a0((*esi_2)->vFunc_6(*arg5, ebx_2, ExceptionRecord))
        *sub_513fa0(arg2 + 0x38, ebp) = esi_2
        result.b = 1
    else
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        struct IInterface::partsengine::CFlatTimeLineData::VTable** esi_4
        
        if (arg3 == 5)
            result_1 = result
            int32_t var_10_1 = result + ebx_2
            struct IInterface::partsengine::CFlatTimeLineData::VTable** eax_10 = operator new(0x1c)
            
            if (eax_10 == 0)
                esi_4 = nullptr
            else
                sub_42f5c0(eax_10)
                esi_4 = eax_10
            
            if (sub_42f6d0(esi_4, &result_1) != 0)
                *sub_513fa0(arg2 + 0x48, ebp) = esi_4
                result.b = 1
            else
                (*esi_4)->__offset(0x4).d(ExceptionRecord)
                result.b = 0
        else if (arg3 == 6)
            result_1 = result
            int32_t var_10_2 = result + ebx_2
            struct IInterface::partsengine::CFlatStopMotionData::VTable** eax_13 =
                operator new(0x2c)
            arg4 = eax_13
            int32_t var_4_2 = 1
            
            if (eax_13 == 0)
                esi_4 = nullptr
            else
                esi_4 = sub_42f420(eax_13)
            
            int32_t var_4_3 = 0xffffffff
            
            if (sub_42f520(esi_4, &result_1) == 0)
                (*esi_4)->__offset(0x4).d(ExceptionRecord)
                result.b = 0
            else
                *sub_513fa0(arg2 + 0x58, ebp) = esi_4
                result.b = 1
        else if (arg3 != 7)
            result.b = 1
        else
            result_1 = result
            int32_t var_10_3 = result + ebx_2
            struct IInterface::partsengine::CFlatStopMotionData::VTable** eax_16 =
                operator new(0xd8)
            arg4 = eax_16
            int32_t var_4_4 = 2
            struct _EXCEPTION_REGISTRATION_RECORD* ebx_3
            
            if (eax_16 == 0)
                ebx_3 = nullptr
            else
                ebx_3 = sub_42a220(eax_16)
            
            int32_t var_4_5 = 0xffffffff
            
            if (sub_42a4b0(ebx_3, &result_1) != 0)
                *sub_513fa0(arg2 + 0x68, ebp) = ebx_3
                result.b = 1
            else
                ebx_3->Next->Handler(ExceptionRecord)
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
