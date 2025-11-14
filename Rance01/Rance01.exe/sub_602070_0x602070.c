// 函数: sub_602070
// 地址: 0x602070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx = arg2
BOOL hObject_1 = 0xffffffff
int32_t var_8 = 0
int32_t var_4 = 0

if (sub_601ea0(&hObject_1, arg1) == 0)
    BOOL hObject = hObject_1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hObject.b = 0
    return hObject

uint8_t* lpBuffer = *ebx
BOOL eax_1 = *(ebx + 4)
BOOL hObject_2 = hObject_1

if (lpBuffer != eax_1)
    BOOL nNumberOfBytesToWrite = eax_1 - lpBuffer
    
    if (hObject_2 == 0xffffffff)
        nNumberOfBytesToWrite.b = 0
        return nNumberOfBytesToWrite
    
    if (WriteFile(hObject_2, lpBuffer, nNumberOfBytesToWrite, &arg2, nullptr) == 0
            || nNumberOfBytesToWrite != arg2)
        CloseHandle(hObject_2)
        nNumberOfBytesToWrite.b = 0
        return nNumberOfBytesToWrite

if (hObject_2 != 0xffffffff && CloseHandle(hObject_2) == 0)
    CloseHandle(hObject_2)
    BOOL eax_2
    eax_2.b = 0
    return eax_2

eax_1.b = 1
return eax_1
