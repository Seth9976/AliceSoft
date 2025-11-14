// 函数: sub_4aecc0
// 地址: 0x4aecc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713483
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE hObject_1 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
struct IMemory::common::CIMemory::VTable** result

if (sub_601f00(&hObject_1, arg1 + 8) != 0)
    struct IMemory::common::CIMemory::VTable** eax_4 = operator new(0x20)
    struct IMemory::common::CIMemory::VTable** var_1c_1 = eax_4
    var_4.b = 1
    struct IMemory::common::CIMemory::VTable** result_1
    
    if (eax_4 == 0)
        result_1 = nullptr
    else
        result_1 = sub_631440(eax_4)
    
    var_4.b = 0
    HANDLE hObject_2 = hObject_1
    int32_t lDistanceToMove = *arg2
    
    if (hObject_2 == 0xffffffff || lDistanceToMove u>= var_10)
        (*result_1)->vFunc_1(eax_2)
        
        if (hObject_2 != 0xffffffff)
            CloseHandle(hObject_2)
        
        result = nullptr
    else
        SetFilePointer(hObject_2, lDistanceToMove, nullptr, FILE_BEGIN)
        int32_t eax_7 = arg2[1]
        int32_t lDistanceToMove_1 = lDistanceToMove
        
        if (eax_7 u<= 0)
            goto label_4aedf1
        
        char eax_9 = (*result_1)->vFunc_2(eax_7)
        struct IMemory::common::CIMemory::VTable* edx_2 = *result_1
        
        if (eax_9 != 0)
            HANDLE* esi_2 = &hObject_1
            
            if (sub_6021f0(esi_2, edx_2->vFunc_5(eax_2), (*result_1)->vFunc_6()) != 0)
                hObject_2 = hObject_1
            label_4aedf1:
                BOOL eax_18
                
                if (hObject_2 != 0xffffffff)
                    eax_18 = CloseHandle(hObject_2)
                
                if (hObject_2 == 0xffffffff || eax_18 != 0)
                    result = result_1
                else
                    (*result_1)->vFunc_1(eax_2)
                    CloseHandle(hObject_2)
                    result = nullptr
            else
                (*result_1)->vFunc_1()
                sub_601e80(esi_2)
                result = nullptr
        else
            edx_2->vFunc_1(eax_2)
            CloseHandle(hObject_2)
            result = nullptr
else
    HANDLE hObject = hObject_1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
