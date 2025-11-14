// 函数: sub_59f320
// 地址: 0x59f320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result_1 = arg4[1]
void* result = result_1

if (result u> arg3)
    result = arg3

if (result == 0)
    return 0

arg4[1] = result_1 - result
int32_t edx = sub_6c02a0(arg5, *arg4, result)
int32_t eax_3 = *(arg4[7] + 0x18)

if (eax_3 == 1)
    void* eax_5 = sub_59e350(arg5, edx, arg4[0xc], result)
    *arg4 += result
    arg4[2] += result
    arg4[0xc] = eax_5
    return result

if (eax_3 == 2)
    if (arg5 == 0)
        *arg4 += result
        arg4[2] += result
        arg4[0xc] = 0
        return result
    
    arg4[0xc] = sub_59e5d0(arg4[0xc], edx, arg5, result)

*arg4 += result
arg4[2] += result
return result
