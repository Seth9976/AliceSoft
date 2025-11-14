// 函数: sub_61b5a0
// 地址: 0x61b5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2[1]
int32_t ecx_1

if (arg1 u< eax)
    ecx_1 = *arg2

int32_t* result

if (arg1 u>= eax || ecx_1 u> arg1)
    if (eax == arg2[2])
        sub_4307a0(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *arg1
else
    if (eax == arg2[2])
        sub_4307a0(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *(*arg2 + ((arg1 - ecx_1) s>> 2 << 2))
        arg2[1] += 4
        return result

arg2[1] += 4
return result
