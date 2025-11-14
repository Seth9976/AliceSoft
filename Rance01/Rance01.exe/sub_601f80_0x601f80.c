// 函数: sub_601f80
// 地址: 0x601f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711168
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t numberOfBytesRead
uint32_t numberOfBytesRead_1 = numberOfBytesRead
HANDLE hObject_1 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
BOOL hObject

if (sub_601f00(&hObject_1, arg1) != 0)
    sub_404f60(var_10, numberOfBytesRead_1)
    uint8_t* lpBuffer = *numberOfBytesRead_1
    hObject = *(numberOfBytesRead_1 + 4)
    HANDLE hObject_2 = hObject_1
    
    if (lpBuffer == hObject)
    label_602039:
        
        if (hObject_2 != 0xffffffff)
            hObject = CloseHandle(hObject_2)
        
        if (hObject_2 == 0xffffffff || hObject != 0)
            hObject.b = 1
        else
            CloseHandle(hObject_2)
            hObject.b = 0
    else
        BOOL nNumberOfBytesToRead = hObject - lpBuffer
        
        if (hObject_2 == 0xffffffff)
            hObject.b = 0
        else if (var_14 + nNumberOfBytesToRead u> var_10)
            CloseHandle(hObject_2)
            hObject.b = 0
        else
            hObject =
                ReadFile(hObject_2, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr)
            
            if (hObject != 0 && nNumberOfBytesToRead == numberOfBytesRead)
                goto label_602039
            
            CloseHandle(hObject_2)
            hObject.b = 0
else
    hObject = hObject_1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hObject.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
