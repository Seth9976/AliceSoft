// 函数: sub_556800
// 地址: 0x556800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx_2 = arg1[3]
int32_t ecx = arg1[1]

if (ecx s< &edx_2[1])
    arg1.b = 0
    return arg1

if (ecx != 0)
    *arg2 = *(edx_2 + *arg1)
    arg1[3] += 4
    arg1.b = 1
    return arg1

*arg2 = *(edx_2 + ecx)
arg1[3] += 4
arg1.b = 1
return arg1
