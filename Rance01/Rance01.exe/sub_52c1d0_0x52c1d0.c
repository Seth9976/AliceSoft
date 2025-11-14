// 函数: sub_52c1d0
// 地址: 0x52c1d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t frequency_1 = data_797de8
int32_t ecx = data_797dec
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[8] = &win32only::CHighResolutionTimer::`vftable'
arg1[0xa] = 0
arg1[0xb] = 0
int32_t frequency
int32_t var_4

if ((frequency_1 | ecx) == 0)
    QueryPerformanceFrequency(&frequency)
    frequency_1 = frequency
    ecx = var_4
    data_797de8 = frequency_1
    data_797dec = ecx

arg1[0xc] = &win32only::CHighResolutionTimer::`vftable'
arg1[0xe] = 0
arg1[0xf] = 0

if ((frequency_1 | ecx) == 0)
    QueryPerformanceFrequency(&frequency)
    data_797de8 = frequency
    data_797dec = var_4

return arg1
