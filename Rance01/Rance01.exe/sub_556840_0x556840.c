// 函数: sub_556840
// 地址: 0x556840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_2 = arg1[3]
int32_t edx = arg1[1]

if (edx s< &ecx_2[1])
    arg1.b = 0
    return arg1

if (edx != 0)
    *arg2 = *(ecx_2 + *arg1)
    arg1[3] += 4
    arg1.b = 1
    return arg1

*arg2 = *(ecx_2 + edx)
arg1[3] += 4
arg1.b = 1
return arg1
