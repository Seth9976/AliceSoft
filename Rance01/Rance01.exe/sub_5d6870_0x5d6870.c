// 函数: sub_5d6870
// 地址: 0x5d6870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7125c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t numberOfBytesRead
int32_t lDistanceToMove = numberOfBytesRead
HANDLE hObject_1 = 0xffffffff
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_4 = 0
bool cond:0 = sub_601f00(&hObject_1, arg1) != 0
HANDLE hObject_2 = hObject_1
int32_t result

if (cond:0)
    if (hObject_2 == 0xffffffff)
        result = 0xffffffff
    else if (lDistanceToMove u>= var_24)
        CloseHandle(hObject_2)
        result = 0xffffffff
    else
        SetFilePointer(hObject_2, lDistanceToMove, nullptr, FILE_BEGIN)
        int32_t lDistanceToMove_1 = lDistanceToMove
        numberOfBytesRead.b = 0
        uint8_t* lpBuffer_2 = nullptr
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        sub_5d6b90(&lpBuffer_2, &numberOfBytesRead)
        uint8_t* lpBuffer = lpBuffer_2
        uint32_t nNumberOfBytesToRead = var_1c_1 - lpBuffer
        int32_t ebp = lDistanceToMove + nNumberOfBytesToRead
        
        if (ebp u> var_24)
        label_5d698d:
            
            if (lpBuffer != 0)
                uint8_t* lpBuffer_1 = lpBuffer
                sub_6b4d5b()
            
            CloseHandle(hObject_1)
            result = 0xffffffff
        else
            if (ReadFile(hObject_1, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr)
                    == 0 || nNumberOfBytesToRead != numberOfBytesRead)
                goto label_5d698d
            
            int32_t var_28_1 = ebp
            HANDLE hObject = hObject_1
            
            if (CloseHandle(hObject) == 0)
                sub_65ab60(&lpBuffer_2)
                CloseHandle(hObject)
                result = 0xffffffff
            else
                BOOL eax_5
                eax_5.b = *lpBuffer
                hObject_1 = 0xffffffff
                
                if (eax_5.b == 0x4f && lpBuffer[1] == 0x67 && lpBuffer[2] == 0x67)
                    sub_65ab60(&lpBuffer_2)
                    sub_601e80(&hObject_1)
                    result = 1
                else if (eax_5.b != 0x52 || lpBuffer[1] != 0x49 || lpBuffer[2] != 0x46
                        || lpBuffer[3] != 0x46 || lpBuffer[8] != 0x57 || lpBuffer[9] != 0x41
                        || lpBuffer[0xa] != 0x56 || lpBuffer[0xb] != 0x45)
                    sub_65ab60(&lpBuffer_2)
                    result = 0xffffffff
                else
                    sub_65ab60(&lpBuffer_2)
                    sub_601e80(&hObject_1)
                    result = 0
else if (hObject_2 == 0xffffffff)
    result = 0xffffffff
else
    CloseHandle(hObject_2)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return result
