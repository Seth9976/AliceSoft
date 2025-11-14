// 函数: sub_54e400
// 地址: 0x54e400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2[1]
int32_t ecx

if (arg1 u< eax)
    ecx = *arg2

char* result
int32_t edx

if (arg1 u>= eax || ecx u> arg1)
    if (eax == arg2[2])
        sub_4247b0(arg2, edx, 1)
    
    result = arg2[1]
    
    if (result != 0)
        ecx.b = *arg1
        *result = ecx.b
else
    if (eax == arg2[2])
        sub_4247b0(arg2, edx, 1)
    
    result = arg2[1]
    
    if (result != 0)
        edx.b = (arg1 - ecx)[*arg2]
        *result = edx.b
        arg2[1] += 1
        return result
arg2[1] += 1
return result
