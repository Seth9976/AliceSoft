// 函数: sub_6181c0
// 地址: 0x6181c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x8c) != 0)
    int32_t* lpClassName = arg1 + 4
    
    if (*(arg1 + 0x18) u>= 0x10)
        lpClassName = *lpClassName
    
    UnregisterClassA(lpClassName, *(arg1 + 0x84))
    *(arg1 + 0x8c) = 0

void* lpClassName_1 = arg1 + 4
*(arg1 + 0x84) = arg2
*(arg1 + 0x4c) = arg2
void* lpClassName_2

if (*(lpClassName_1 + 0x14) u< 0x10)
    lpClassName_2 = lpClassName_1
else
    lpClassName_2 = *lpClassName_1

*(arg1 + 0x60) = lpClassName_2
RegisterClassA(arg1 + 0x3c)
void* lpWindowName = arg1 + 0x20
*(arg1 + 0x8c) = 1

if (*(lpWindowName + 0x14) u>= 0x10)
    lpWindowName = *lpWindowName

if (*(lpClassName_1 + 0x14) u>= 0x10)
    lpClassName_1 = *lpClassName_1

HWND result = CreateWindowExA(*(arg1 + 0x64), lpClassName_1, lpWindowName, *(arg1 + 0x68), 
    *(arg1 + 0x6c), *(arg1 + 0x70), *(arg1 + 0x74), *(arg1 + 0x78), *(arg1 + 0x7c), *(arg1 + 0x80), 
    arg2, arg1)

if (result == 0)
    result.b = 0
    return result

*(arg1 + 0x88) = result
result.b = 1
return result
