// 函数: sub_40b650
// 地址: 0x40b650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7110b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t numberOfBytesWritten
uint32_t numberOfBytesWritten_1 = numberOfBytesWritten
BOOL hObject_1 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0

if (sub_601ea0(&hObject_1, arg1) == 0)
    BOOL hObject = hObject_1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hObject.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return hObject

uint32_t nNumberOfBytesToWrite = (*(*numberOfBytesWritten_1 + 0x14))(eax_2)
uint8_t* lpBuffer = (*(*numberOfBytesWritten_1 + 0x18))()
BOOL hObject_2 = hObject_1

if (hObject_2 != 0xffffffff)
    if (WriteFile(hObject_2, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr) != 0
            && nNumberOfBytesToWrite == numberOfBytesWritten)
        if (CloseHandle(hObject_2) != 0)
            BOOL eax_7
            eax_7.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
        
        CloseHandle(hObject_2)
        BOOL eax_8
        eax_8.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    CloseHandle(hObject_2)

lpBuffer.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return lpBuffer
