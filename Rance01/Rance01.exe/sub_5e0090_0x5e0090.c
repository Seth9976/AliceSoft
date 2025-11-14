// 函数: sub_5e0090
// 地址: 0x5e0090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg5 = arg6
arg5[1] = arg7

if (arg1 s<= 0)
    arg1 = 0
else if (arg1 s> 0xff)
    arg1 = 0xff

arg5[2] = arg1
int32_t ecx

if (arg2 s<= 0)
    ecx = 0
else
    ecx = arg2
    
    if (arg2 s> 0xff)
        ecx = 0xff

arg5[3] = ecx
int32_t ecx_1

if (arg3 s<= 0)
    ecx_1 = 0
else
    ecx_1 = arg3
    
    if (arg3 s> 0xff)
        ecx_1 = 0xff

arg5[4] = ecx_1
arg5[5] = 0xff
arg5[6] = fconvert.s(fconvert.t(arg8))
arg5[7] = fconvert.s(fconvert.t(arg9))
int32_t ecx_2

if (arg4 s<= 0)
    ecx_2 = 0
else
    ecx_2 = arg4
    
    if (arg4 s> 0xff)
        ecx_2 = 0xff

arg5[8] = ecx_2
int32_t ecx_3

if (arg10 s<= 0)
    ecx_3 = 0
else
    ecx_3 = arg10
    
    if (arg10 s> 0xff)
        ecx_3 = 0xff

arg5[9] = ecx_3
int32_t ecx_4 = arg11

if (ecx_4 s<= 0)
    arg5[0xb] = 0xff
    arg5[0xa] = 0
    return arg5

if (ecx_4 s> 0xff)
    ecx_4 = 0xff

arg5[0xb] = 0xff
arg5[0xa] = ecx_4
return arg5
