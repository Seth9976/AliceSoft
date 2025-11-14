// 函数: sub_42e070
// 地址: 0x42e070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
int32_t* edx = *(arg1 + 4)
int32_t* ecx = edx[1]

while (*(ecx + 0x15) == 0)
    if (ecx[3] s>= *arg3)
        edx = ecx
        ecx = *ecx
    else
        ecx = ecx[2]

int32_t* ecx_1 = *(arg1 + 4)

if (edx != ecx_1 && *arg3 s>= edx[3])
    *arg2 = edx
    return 

*arg2 = ecx_1
