// 函数: sub_4f5910
// 地址: 0x4f5910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2[1]
int32_t ecx_1

if (arg1 u< eax)
    ecx_1 = *arg2

float* result
int32_t edx

if (arg1 u>= eax || ecx_1 u> arg1)
    if (eax == arg2[2])
        sub_40d3d0(arg2, edx, 1)
    
    result = arg2[1]
    
    if (result != 0)
        *result = fconvert.s(fconvert.t(*arg1))
else
    if (eax == arg2[2])
        sub_40d3d0(arg2, edx, 1)
    
    result = arg2[1]
    
    if (result != 0)
        *result = fconvert.s(fconvert.t(*(*arg2 + ((arg1 - ecx_1) s>> 2 << 2))))
        arg2[1] += 4
        return result
arg2[1] += 4
return result
