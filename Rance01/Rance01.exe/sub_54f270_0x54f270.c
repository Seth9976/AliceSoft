// 函数: sub_54f270
// 地址: 0x54f270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx = arg2
BOOL hObject_1 = 0xffffffff
int32_t var_8 = 0
int32_t var_4 = 0

if (sub_601ea0(&hObject_1, arg1).b == 0)
    BOOL hObject = hObject_1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hObject.b = 0
    return hObject

BOOL hObject_2 = hObject_1
BOOL eax

if (*(ebx + 4) u> 0)
    uint32_t nNumberOfBytesToWrite = *(ebx + 4)
    uint8_t* lpBuffer
    
    if (nNumberOfBytesToWrite != 0)
        lpBuffer = *ebx
    else
        lpBuffer = nullptr
    
    if (hObject_2 == 0xffffffff)
        eax.b = 0
        return eax
    
    if (WriteFile(hObject_2, lpBuffer, nNumberOfBytesToWrite, &arg2, nullptr) == 0
            || nNumberOfBytesToWrite != arg2)
        CloseHandle(hObject_2)
        eax.b = 0
        return eax

if (hObject_2 != 0xffffffff && CloseHandle(hObject_2) == 0)
    CloseHandle(hObject_2)
    BOOL eax_1
    eax_1.b = 0
    return eax_1

eax.b = 1
return eax
