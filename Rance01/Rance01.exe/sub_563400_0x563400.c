// 函数: sub_563400
// 地址: 0x563400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_24
int32_t eax_1 = data_78c474 ^ &var_24
int32_t ebx = *(arg1 + 0xa4)
uint32_t eax_2 = timeGetTime()
uint32_t ecx = data_797e3c

if (eax_2 u< ecx)
    eax_2 = ecx

data_797e3c = eax_2

if (eax_2 - *(arg1 + 0x98) u< ebx)
    while (true)
        uint32_t eax_4 = timeGetTime()
        uint32_t ecx_1 = data_797e3c
        
        if (eax_4 u< ecx_1)
            eax_4 = ecx_1
        
        data_797e3c = eax_4
        int32_t eax_5 = eax_4 - *(arg1 + 0x98)
        
        if (eax_5 u>= ebx)
            break
        
        int32_t nHeight = *(arg1 + 0xb0)
        MoveWindow(arg2, 0, divu.dp.d(0:(nHeight * eax_5), ebx) - nHeight, *(arg1 + 0xac), nHeight, 
            1)
        POINT point
        GetCursorPos(&point)
        RECT rect
        
        if (GetWindowRect(arg2, &rect) != 0)
            if (point.y s> rect.bottom + 1)
                PostMessageA(arg2, 0x7fff, 0, 0)
                sub_6b4885(eax_1 ^ &var_24)
                return 0

if (*(arg1 + 0x9c) == 0)
    MoveWindow(arg2, 0, 0, *(arg1 + 0xac), *(arg1 + 0xb0), 1)
    *(arg1 + 0x9c) = 1

sub_6b4885(eax_1 ^ &var_24)
return 0
