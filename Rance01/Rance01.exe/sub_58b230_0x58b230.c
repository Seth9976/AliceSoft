// 函数: sub_58b230
// 地址: 0x58b230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
int32_t* edx = *(arg1 + 4)
int32_t* ecx = edx[1]

while (*(ecx + 0x21) == 0)
    if (ecx[3] u>= *arg3)
        edx = ecx
        ecx = *ecx
    else
        ecx = ecx[2]

int32_t* ecx_1 = *(arg1 + 4)

if (edx != ecx_1 && *arg3 u>= edx[3])
    *arg2 = edx
    return 

*arg2 = ecx_1
