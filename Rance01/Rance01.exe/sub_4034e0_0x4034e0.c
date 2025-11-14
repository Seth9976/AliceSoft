// 函数: sub_4034e0
// 地址: 0x4034e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713763
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMemory::common::CIMemory::VTable** result_1 = nullptr
HANDLE hObject_3 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t* ebx = arg1

if (sub_601f00(&hObject_3, &ebx[4]) == 0)
    goto label_40360f

int32_t lDistanceToMove = *ebx
struct IMemory::common::CIMemory::VTable** result

if (var_10 u>= ebx[1] + lDistanceToMove)
    HANDLE hObject_4 = hObject_3
    
    if (hObject_4 != 0xffffffff && lDistanceToMove u< var_10)
        SetFilePointer(hObject_4, lDistanceToMove, nullptr, FILE_BEGIN)
        int32_t lDistanceToMove_1 = lDistanceToMove
    
    int32_t* eax_7 = operator new(0x20)
    arg1 = eax_7
    var_4.b = 1
    
    if (eax_7 != 0)
        result_1 = sub_631440(eax_7)
    
    var_4.b = 0
    
    if ((*result_1)->vFunc_2(ebx[1]) != 0)
        uint32_t eax_14 = (*result_1)->vFunc_6(eax_2)
        HANDLE* esi_2 = &hObject_3
        
        if (sub_6021f0(esi_2, ebx[1], eax_14) != 0)
            sub_601f60(esi_2)
            HANDLE hObject_1 = hObject_3
            
            if (hObject_1 != 0xffffffff)
                CloseHandle(hObject_1)
            
            result = result_1
        else
            sub_601f60(esi_2)
            (*result_1)->vFunc_1()
        label_40360f:
            HANDLE hObject = hObject_3
            
            if (hObject != 0xffffffff)
                CloseHandle(hObject)
            
            result = nullptr
    else
        if (hObject_4 != 0xffffffff && CloseHandle(hObject_4) != 0)
            hObject_4 = 0xffffffff
            hObject_3 = 0xffffffff
        
        (*result_1)->vFunc_1(eax_2)
        
        if (hObject_4 != 0xffffffff)
            CloseHandle(hObject_4)
        
        result = nullptr
else
    HANDLE hObject_2 = hObject_3
    
    if (hObject_2 != 0xffffffff && CloseHandle(hObject_2) == 0)
        CloseHandle(hObject_2)
    
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
