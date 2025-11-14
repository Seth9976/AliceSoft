// 函数: sub_56bf50
// 地址: 0x56bf50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a128
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint8_t buffer
int32_t eax_2 = data_78c474 ^ &buffer
int32_t __saved_edi
int32_t var_58 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE hObject_1 = 0xffffffff
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_4 = 0
uint8_t* lpBuffer_1
buffer = sub_601ea0(&hObject_1, sub_426250(&lpBuffer_1, arg1, arg2)) == 0
int32_t var_18

if (var_18 u>= 0x10)
    uint8_t* lpBuffer_2 = lpBuffer_1
    sub_6b4d5b()

BOOL hObject

if (buffer == 0)
    int32_t var_18_1 = 0xf
    BOOL nNumberOfBytesToWrite = 0
    lpBuffer_1.b = 0
    sub_401270(&lpBuffer_1, 3, 0x74b720)
    HANDLE hObject_2 = hObject_1
    
    if (nNumberOfBytesToWrite s<= 0)
        goto label_56c052
    
    uint8_t* lpBuffer = lpBuffer_1
    
    if (var_18_1 u< 0x10)
        lpBuffer = &lpBuffer_1
    
    int32_t var_34
    uint32_t numberOfBytesWritten
    
    if (hObject_2 == 0xffffffff)
        hObject.b = 0
    else if (WriteFile(hObject_2, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr)
            == 0 || nNumberOfBytesToWrite != numberOfBytesWritten)
        hObject.b = 0
    else
        var_3c += nNumberOfBytesToWrite
    label_56c052:
        buffer = 0
        
        if (hObject_2 == 0xffffffff)
            hObject.b = 0
        else if (WriteFile(hObject_2, &buffer, 1, &var_34, nullptr) == 0 || var_34 != 1)
            hObject.b = 0
        else
            var_3c += 1
            hObject.b = 1
    
    buffer = hObject.b == 0
    
    if (var_18_1 u>= 0x10)
        uint8_t* lpBuffer_3 = lpBuffer_1
        sub_6b4d5b()
    
    if (buffer == 0)
        var_34 = 0
        
        if (hObject_2 == 0xffffffff)
            hObject.b = 0
        else
            BOOL eax_8
            uint32_t ecx_1
            eax_8, ecx_1 = WriteFile(hObject_2, &var_34, 4, &numberOfBytesWritten, nullptr)
            
            if (eax_8 == 0 || numberOfBytesWritten != 4)
                CloseHandle(hObject_2)
                hObject.b = 0
            else
                int32_t var_3c_1 = var_3c + 4
                int32_t var_5c_3 = arg3
                HANDLE* esi_2 = &hObject_1
                
                if (sub_6021b0(ecx_1, esi_2) == 0)
                    goto label_56bfd7
                
                if (sub_601f60(esi_2) != 0)
                    sub_601e80(esi_2)
                    hObject.b = 1
                else
                    sub_601e80(esi_2)
                    hObject.b = 0
    else if (hObject_2 == 0xffffffff)
        hObject.b = 0
    else
        CloseHandle(hObject_2)
        hObject.b = 0
else
label_56bfd7:
    hObject = hObject_1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hObject.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &buffer)
return hObject
