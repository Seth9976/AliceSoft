// 函数: sub_6c8471
// 地址: 0x6c8471
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esp_4 = arg1[-6]
arg1[-0x1e] = 0xffffffff
void* eax = arg1[-0x1d]

if (eax != 0)
    int32_t eax_1 = *(eax + 0x18)
    
    if (eax_1 != 0)
        eax_1()

arg1[-1] = 0xffffffff

if (arg1[-0x1e] s< 0 && *(arg1[2] + 0x387c) != 0)
    int32_t edx_2 = *(arg1[2] + 0x387c)
    *(esp_4 - 4) = esp_4
    *(esp_4 - 8) = edx_2
    sub_6ca7c0()
    *(arg1[2] + 0x387c) = 0

arg1[-0x13]
arg1[-0x11]
arg1[-0x12]
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
return arg1[-0x1e]
