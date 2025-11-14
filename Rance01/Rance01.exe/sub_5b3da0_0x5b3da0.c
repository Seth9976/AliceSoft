// 函数: sub_5b3da0
// 地址: 0x5b3da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg2

if (result u> arg3)
    result = arg3

void* edx = arg4[1]
void* eax = *arg4
int128_t* ecx = arg4[2]

if (ecx + result u> eax + edx)
    result = edx + eax - ecx

if (result == 0)
    return 0

sub_6c02a0(arg1, ecx, result)
arg4[2] += result
int32_t ecx_1 = arg4[2]
int32_t eax_4 = *arg4

if (ecx_1 u< eax_4)
    arg4[2] = eax_4
else
    eax_4 += arg4[1]
    
    if (ecx_1 u> eax_4)
        arg4[2] = eax_4

return result
