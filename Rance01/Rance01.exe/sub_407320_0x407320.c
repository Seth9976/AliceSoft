// 函数: sub_407320
// 地址: 0x407320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s<= 0)
    arg1 = 0
else if (arg1 s> 0xff)
    arg1 = 0xff

*arg5 = arg1
int32_t ecx

if (arg2 s<= 0)
    ecx = 0
else
    ecx = arg2
    
    if (arg2 s> 0xff)
        ecx = 0xff

arg5[1] = ecx
int32_t ecx_1

if (arg3 s<= 0)
    ecx_1 = 0
else
    ecx_1 = arg3
    
    if (arg3 s> 0xff)
        ecx_1 = 0xff

arg5[2] = ecx_1

if (arg4 s<= 0)
    arg5[3] = 0
    return arg5

int32_t ecx_2 = arg4

if (arg4 s> 0xff)
    ecx_2 = 0xff

arg5[3] = ecx_2
return arg5
