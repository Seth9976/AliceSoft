// 函数: sub_65e0e0
// 地址: 0x65e0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float ecx
float var_4 = ecx
int32_t ebx
ebx.b = 0

if (SendMessageA(*(arg1 + 0x14c), 0x40a, 0x9c97, 1) != 0)
    ebx.b = 1

if (SendMessageA(*(arg1 + 0x14c), 0x40a, 0x9c98, 1) != 0)
    ebx.b |= 2

if (SendMessageA(*(arg1 + 0x14c), 0x40b, 0x9c9a, 0) != 0)
    ebx.b |= 4

if (SendMessageA(*(arg1 + 0x14c), 0x40b, 0x9c9b, 0) != 0)
    ebx.b |= 8

LRESULT result
void* ecx_3
result, ecx_3 = SendMessageA(*(arg1 + 0x14c), 0x40a, 0x9ca0, 1)
result.b = result == 0

if (*(arg1 + 0x68) != result.b)
    *(arg1 + 0x68) = result.b

if (*(arg1 + 0x74) != ebx.b)
    if (ebx.b == 0)
        *(arg1 + 0x6c) = 0
    else if (ebx.b == 1)
        *(arg1 + 0x6c) = 1
    else if (ebx.b == 2)
        *(arg1 + 0x6c) = 2
    else if (ebx.b == 3)
        *(arg1 + 0x6c) = 3
    
    if ((ebx.b & 4) != 0)
        void* var_10_1 = ecx_3
        ecx_3 = arg1
        sub_65e210(ecx_3, 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x70)) + fconvert.t(0.25)))))
    
    if ((ebx.b & 8) != 0)
        void* var_10_3 = ecx_3
        sub_65e210(arg1, 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x70)) - fconvert.t(0.25)))))
    
    result = sub_65d840(arg1)

*(arg1 + 0x74) = ebx.b
return result
